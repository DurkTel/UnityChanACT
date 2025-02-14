using Cysharp.Threading.Tasks;
using GameNet;
using System;
using System.Net;
using System.Net.Sockets;
using UnityEngine;

namespace LGameFramework.GameNet
{

    /// <summary>
    /// 网关服务器
    /// TCP长连接
    /// </summary>
    public class GateNetworkServer : INetworkConnect
    {
        private Socket m_Socket;
        /// <summary>
        /// 客户端
        /// </summary>
        public Socket Socket { get { return m_Socket; } }

        private bool m_IsValid;
        /// <summary>
        /// 是否有效
        /// </summary>
        public bool IsValid { get { return m_Socket != null && m_Socket.Connected && m_IsValid; } }

        private bool m_PrepareClose;
        /// <summary>
        /// 准备关闭
        /// </summary>
        public bool PrepareClose { get { return m_PrepareClose; } }

        /// <summary>
        /// 消息发送器
        /// </summary>
        private MessageSender m_MsgSender;

        /// <summary>
        /// 消息接收器
        /// </summary>
        private MessageReceiver m_MsgReceiver;

        /// <summary>
        /// 上一次接受消息的时间
        /// </summary>
        private long m_PreviousReceiveTime;

        public bool Update(out ReceiveResult result)
        {
            var currentTime = DateTime.Now.Ticks / TimeSpan.TicksPerSecond;
            if (currentTime - m_PreviousReceiveTime > 5)
            {
                IApplication.HeartbeatAsyn(() => { });
                m_PreviousReceiveTime = currentTime;
            }

            return HandleReceiveMsg(out result);
        }

        public async UniTask Connect(string ip, int port)
        {
            if (IsValid)
                return;

            IPEndPoint ipPoint = new IPEndPoint(IPAddress.Parse(ip), port);
            m_Socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);

            m_MsgSender = new MessageSender(this, new TCPSender(m_Socket));
            m_MsgReceiver = new MessageReceiver(this, new TCPReceiver(m_Socket));

            try
            {
                await m_Socket.ConnectAsync(ipPoint);
            }
            catch (SocketException e)
            {
                Debug.Log("连接GateNetworkServer失败" + e.SocketErrorCode);
                return;
            }

            m_IsValid = true;
            Debug.Log($"连接GateNetworkServer成功 本机IP:{m_Socket.LocalEndPoint} 服务器IP:{m_Socket.RemoteEndPoint}");
            _ = m_MsgReceiver.Receive();
        }

        public void Disconnect(bool isSelf = false)
        {
            if (m_MsgSender.PreSendCount > 0) //等待发完再关
            {
                m_PrepareClose = true;
                return;
            }


            if (m_Socket != null)
            {
                IApplication.DisconnectGateServer(null);

                lock (m_Socket)
                {
                    m_IsValid = false;
                    m_MsgReceiver.Dispose();
                    m_MsgSender.Dispose();

                    m_Socket.Shutdown(SocketShutdown.Both);
                    m_Socket.Close();
                    m_Socket = null;
                }
            }

            //不是自己主动断开连接的
            if (!isSelf)
            {
                //断线重连 弹出一个面板
            }
        }

        public void Reset()
        {
            if (IsValid)
                Disconnect(true);
        }

        public void SendAsync(ByteBuffer buffer)
        {
            if (m_PrepareClose) //已经准备关了 不许发了
                return;

            if (!IsValid)
                Disconnect();

            _ = m_MsgSender.SendAsync(buffer);
        }

        public void Send(ByteBuffer buffer)
        {
            if (m_PrepareClose) //已经准备关了 不许发了
                return;

            if (!IsValid)
                Disconnect();

            m_MsgSender.Send(buffer);
        }

        private bool HandleReceiveMsg(out ReceiveResult result)
        {
            result = default;
            if (m_MsgReceiver.CacheBuffer.Length < 9)//9是消息类型+消息/回调号+长度 byte+两个int
                return false;

            //解析消息类型 1是下推 2是成功回调 3是错误回调
            byte msgType = m_MsgReceiver.CacheBuffer.ReadByte();
            //消息id
            int msgID = m_MsgReceiver.CacheBuffer.ReadInt();
            //解析消息体长度
            int msgLength = m_MsgReceiver.CacheBuffer.ReadInt();

            if (m_MsgReceiver.CacheBuffer.Length >= msgLength) //判断能不能解析完一条数据
            {
                result = new ReceiveResult(msgType, msgID, m_MsgReceiver.CacheBuffer.Read(msgLength));
                return true;
                //这个包还没解析完
                //if (m_MsgReceiver.CacheBuffer.Length > 9)
                //    HandleReceiveMsg();
            }
            else
            {
                //不能解析完 就等分包到了再解析
                m_MsgReceiver.CacheBuffer.ReadIndex -= 9;
            }

            return false;
        }
    }
}
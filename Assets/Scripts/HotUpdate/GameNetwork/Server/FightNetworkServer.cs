using Cysharp.Threading.Tasks;
using System.Net;
using System.Net.Sockets;
using UnityEngine;

namespace LGameFramework.GameNet
{

    /// <summary>
    /// 战斗服务器
    /// UDP连接
    /// </summary>
    public class FightNetworkServer : INetworkConnect
    {
        private Socket m_Socket;
        /// <summary>
        /// 客户端
        /// </summary>
        public Socket Socket { get { return m_Socket; } }

        /// <summary>
        /// 是否有效
        /// </summary>
        public bool IsValid { get { return m_Socket != null; } }

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
        /// 缓存接收的消息
        /// </summary>
        private ByteBuffer m_CacheBuffer;

        /// <summary>
        /// 消息接收器
        /// </summary>
        private MessageReceiver m_MsgReceiver;

        /// <summary>
        /// 服务器IP
        /// </summary>
        private IPEndPoint m_RemoteIP;

        public FightNetworkServer()
        {
            m_CacheBuffer = new ByteBuffer();
        }

        public bool Update(out ReceiveResult result)
        {
            return HandleReceiveMsg(out result);
        }

        public async UniTask Connect(string ip, int port)
        {
            m_Socket = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);
            m_RemoteIP = new IPEndPoint(IPAddress.Parse(ip), port);

            m_MsgSender = new MessageSender(this, new UDPSender(m_Socket, m_RemoteIP));
            m_MsgReceiver = new MessageReceiver(this, new UDPReceiver(m_Socket, m_RemoteIP));
            m_MsgReceiver.OnReceive += OnReceive;

            try
            {
                m_Socket.Connect(m_RemoteIP);
                await UniTask.NextFrame();
                //await m_Socket.ConnectAsync(m_RemoteIP);
            }
            catch (SocketException e)
            {
                Debug.Log("连接FightNetworkServer失败" + e.SocketErrorCode);
                return;
            }

            Debug.Log($"连接FightNetworkServer成功 本机IP:{m_Socket.LocalEndPoint} 服务器IP:{m_Socket.RemoteEndPoint}");
            _ = m_MsgReceiver.Receive();
        }

        public void Disconnect(bool isSelf = false)
        {
            if (m_MsgSender.PreSendCount > 0) //等待发完再关
            {
                m_PrepareClose = true;
                return;
            }

            m_Socket.Shutdown(SocketShutdown.Both);
            m_Socket.Close();
            m_Socket.Dispose();
            m_Socket = null;

        }

        public void Reset()
        {
            Disconnect(true);
        }

        public void SendAsync(ByteBuffer buffer)
        {
            if (m_PrepareClose) //已经准备关了 不许发了
                return;

            //if (!IsValid)
            //    Disconnect();

            _ = m_MsgSender.SendAsync(buffer);
        }

        public void Send(ByteBuffer buffer)
        {
            if (m_PrepareClose) //已经准备关了 不许发了
                return;

            //if (!IsValid)
            //    Disconnect();

            m_MsgSender.Send(buffer);
        }

        private bool HandleReceiveMsg(out ReceiveResult result)
        {
            result = default;
            if (m_CacheBuffer.Length < 9)//9是消息类型+消息/回调号+长度 byte+两个int
                return false;

            //解析消息类型 1是下推 2是成功回调 3是错误回调
            byte msgType = m_CacheBuffer.ReadByte();
            //消息id
            int msgID = m_CacheBuffer.ReadInt();
            //解析消息体长度
            int msgLength = m_CacheBuffer.ReadInt();

            if (m_CacheBuffer.Length >= msgLength) //判断能不能解析完一条数据
            {
                result = new ReceiveResult(msgType, msgID, m_CacheBuffer.Read(msgLength));

                return true;
            }
            else
            {
                m_CacheBuffer.ReadIndex -= 9;
            }

            return false;
        }

        private void OnReceive()
        {
            m_CacheBuffer.Write(m_MsgReceiver.CacheBuffer);
            m_MsgReceiver.CacheBuffer.Clear();
        }
    }
}
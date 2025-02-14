using Cysharp.Threading.Tasks;
using GameNet;
using System;
using System.Net;
using System.Net.Sockets;
using UnityEngine;

namespace LGameFramework.GameNet
{

    /// <summary>
    /// ���ط�����
    /// TCP������
    /// </summary>
    public class GateNetworkServer : INetworkConnect
    {
        private Socket m_Socket;
        /// <summary>
        /// �ͻ���
        /// </summary>
        public Socket Socket { get { return m_Socket; } }

        private bool m_IsValid;
        /// <summary>
        /// �Ƿ���Ч
        /// </summary>
        public bool IsValid { get { return m_Socket != null && m_Socket.Connected && m_IsValid; } }

        private bool m_PrepareClose;
        /// <summary>
        /// ׼���ر�
        /// </summary>
        public bool PrepareClose { get { return m_PrepareClose; } }

        /// <summary>
        /// ��Ϣ������
        /// </summary>
        private MessageSender m_MsgSender;

        /// <summary>
        /// ��Ϣ������
        /// </summary>
        private MessageReceiver m_MsgReceiver;

        /// <summary>
        /// ��һ�ν�����Ϣ��ʱ��
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
                Debug.Log("����GateNetworkServerʧ��" + e.SocketErrorCode);
                return;
            }

            m_IsValid = true;
            Debug.Log($"����GateNetworkServer�ɹ� ����IP:{m_Socket.LocalEndPoint} ������IP:{m_Socket.RemoteEndPoint}");
            _ = m_MsgReceiver.Receive();
        }

        public void Disconnect(bool isSelf = false)
        {
            if (m_MsgSender.PreSendCount > 0) //�ȴ������ٹ�
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

            //�����Լ������Ͽ����ӵ�
            if (!isSelf)
            {
                //�������� ����һ�����
            }
        }

        public void Reset()
        {
            if (IsValid)
                Disconnect(true);
        }

        public void SendAsync(ByteBuffer buffer)
        {
            if (m_PrepareClose) //�Ѿ�׼������ ������
                return;

            if (!IsValid)
                Disconnect();

            _ = m_MsgSender.SendAsync(buffer);
        }

        public void Send(ByteBuffer buffer)
        {
            if (m_PrepareClose) //�Ѿ�׼������ ������
                return;

            if (!IsValid)
                Disconnect();

            m_MsgSender.Send(buffer);
        }

        private bool HandleReceiveMsg(out ReceiveResult result)
        {
            result = default;
            if (m_MsgReceiver.CacheBuffer.Length < 9)//9����Ϣ����+��Ϣ/�ص���+���� byte+����int
                return false;

            //������Ϣ���� 1������ 2�ǳɹ��ص� 3�Ǵ���ص�
            byte msgType = m_MsgReceiver.CacheBuffer.ReadByte();
            //��Ϣid
            int msgID = m_MsgReceiver.CacheBuffer.ReadInt();
            //������Ϣ�峤��
            int msgLength = m_MsgReceiver.CacheBuffer.ReadInt();

            if (m_MsgReceiver.CacheBuffer.Length >= msgLength) //�ж��ܲ��ܽ�����һ������
            {
                result = new ReceiveResult(msgType, msgID, m_MsgReceiver.CacheBuffer.Read(msgLength));
                return true;
                //�������û������
                //if (m_MsgReceiver.CacheBuffer.Length > 9)
                //    HandleReceiveMsg();
            }
            else
            {
                //���ܽ����� �͵ȷְ������ٽ���
                m_MsgReceiver.CacheBuffer.ReadIndex -= 9;
            }

            return false;
        }
    }
}
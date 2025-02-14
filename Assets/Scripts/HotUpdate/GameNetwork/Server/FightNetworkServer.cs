using Cysharp.Threading.Tasks;
using System.Net;
using System.Net.Sockets;
using UnityEngine;

namespace LGameFramework.GameNet
{

    /// <summary>
    /// ս��������
    /// UDP����
    /// </summary>
    public class FightNetworkServer : INetworkConnect
    {
        private Socket m_Socket;
        /// <summary>
        /// �ͻ���
        /// </summary>
        public Socket Socket { get { return m_Socket; } }

        /// <summary>
        /// �Ƿ���Ч
        /// </summary>
        public bool IsValid { get { return m_Socket != null; } }

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
        /// ������յ���Ϣ
        /// </summary>
        private ByteBuffer m_CacheBuffer;

        /// <summary>
        /// ��Ϣ������
        /// </summary>
        private MessageReceiver m_MsgReceiver;

        /// <summary>
        /// ������IP
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
                Debug.Log("����FightNetworkServerʧ��" + e.SocketErrorCode);
                return;
            }

            Debug.Log($"����FightNetworkServer�ɹ� ����IP:{m_Socket.LocalEndPoint} ������IP:{m_Socket.RemoteEndPoint}");
            _ = m_MsgReceiver.Receive();
        }

        public void Disconnect(bool isSelf = false)
        {
            if (m_MsgSender.PreSendCount > 0) //�ȴ������ٹ�
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
            if (m_PrepareClose) //�Ѿ�׼������ ������
                return;

            //if (!IsValid)
            //    Disconnect();

            _ = m_MsgSender.SendAsync(buffer);
        }

        public void Send(ByteBuffer buffer)
        {
            if (m_PrepareClose) //�Ѿ�׼������ ������
                return;

            //if (!IsValid)
            //    Disconnect();

            m_MsgSender.Send(buffer);
        }

        private bool HandleReceiveMsg(out ReceiveResult result)
        {
            result = default;
            if (m_CacheBuffer.Length < 9)//9����Ϣ����+��Ϣ/�ص���+���� byte+����int
                return false;

            //������Ϣ���� 1������ 2�ǳɹ��ص� 3�Ǵ���ص�
            byte msgType = m_CacheBuffer.ReadByte();
            //��Ϣid
            int msgID = m_CacheBuffer.ReadInt();
            //������Ϣ�峤��
            int msgLength = m_CacheBuffer.ReadInt();

            if (m_CacheBuffer.Length >= msgLength) //�ж��ܲ��ܽ�����һ������
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
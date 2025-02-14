using Cysharp.Threading.Tasks;
using System;
using System.Collections.Generic;
using System.Net.Sockets;
using UnityEngine;

namespace LGameFramework.GameNet
{
    public class MessageSender : IDisposable
    {
        private static int s_SendID = 1;

        /// <summary>
        /// ÿ�η���Ϣ��ID
        /// </summary>
        public static int SendID
        {
            get { return s_SendID; }
            set
            {
                if (s_SendID >= int.MaxValue - 1)
                    s_SendID = 1;
                s_SendID = value;
            }
        }

        /// <summary>
        /// ����������ؽӿ�
        /// </summary>
        private INetworkConnect m_Connect;

        /// <summary>
        /// ������Ϣ���ͽӿ�
        /// </summary>
        private INetworkSend m_Send;

        /// <summary>
        /// ׼�����͵��ֽ�
        /// </summary>
        private Queue<ByteBuffer> m_SendQueue;

        /// <summary>
        /// ׼�����͵İ�����
        /// </summary>
        public int PreSendCount { get { return m_SendQueue.Count; } }

        public MessageSender(INetworkConnect connect, INetworkSend send)
        {
            m_Connect = connect;
            m_Send = send;
            m_SendQueue = new Queue<ByteBuffer>();
        }

        public void Send(ByteBuffer buffer)
        {
            if (m_Connect.PrepareClose) //�Ѿ�׼������ ������
                return;

            try
            {
                SendID++;
                int sendLen = m_Send.Send(buffer.Read(buffer.Length, true));
                buffer.ReadIndex += sendLen;
            }
            catch (SocketException e)
            {
                Debug.Log("������Ϣʧ��" + e.SocketErrorCode);
            }
        }

        public async UniTask SendAsync(ByteBuffer buffer)
        {
            if (m_Connect.PrepareClose) //�Ѿ�׼������ ������
                return;

            lock (m_SendQueue)
            {
                m_SendQueue.Enqueue(buffer);
                //���л�����Ϣ�ڷ� ��������
                if (m_SendQueue.Count != 1)
                    return;
            }

            try
            {
                while (buffer != null)
                {
                    SendID++;
                    int sendLen = await m_Send.SendAsync(buffer.Read(buffer.Length, true));

                    lock (m_SendQueue)
                    {
                        if (m_SendQueue.Count <= 0)
                            return;
                        buffer = m_SendQueue.Peek();
                    }

                    //���Ϸ��˶���
                    buffer.ReadIndex += sendLen;
                    //������Ϣ�Ƿ�����
                    if (buffer.Length == 0)
                    {
                        buffer = null;
                        lock (m_SendQueue) //�������価���ٵ�
                        {
                            m_SendQueue.Dequeue();
                            //�������� �Ϳ�����û�б��Ҫ��
                            if (m_SendQueue.Count > 0)
                                buffer = m_SendQueue.Peek();
                        }
                    }

                    //if (buffer != null)
                    //    await SendAsync(buffer);
                    //else if (m_Connect.PrepareClose) //������ ���ұ�ʶ��Ҫ�ر� �Ǿ͹�
                    //    m_Connect.Disconnect();

                    if (m_Connect.PrepareClose) //������ ���ұ�ʶ��Ҫ�ر� �Ǿ͹�
                    {
                        m_Connect.Disconnect();
                        return;
                    }
                }
            }
            catch (SocketException e)
            {
                Debug.Log("������Ϣʧ��" + e.SocketErrorCode);
            }
        }

        public void Dispose()
        {
            m_Connect = null;
            m_Send = null;
            m_SendQueue.Clear();
            m_SendQueue = null;
        }
    }
}
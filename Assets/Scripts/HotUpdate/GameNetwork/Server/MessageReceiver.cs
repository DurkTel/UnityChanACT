using Cysharp.Threading.Tasks;
using System;
using System.Net.Sockets;
using System.Threading;
using UnityEngine;

namespace LGameFramework.GameNet
{
    public class MessageReceiver : IDisposable
    {
        /// <summary>
        /// ����������ؽӿ�
        /// </summary>
        private INetworkConnect m_Connect;

        /// <summary>
        /// ������Ϣ���սӿ�
        /// </summary>
        private INetworkReceiver m_Receive;

        private ByteBuffer m_CacheBuffer;
        /// <summary>
        /// ���ջ�����
        /// </summary>
        public ByteBuffer CacheBuffer { get { return m_CacheBuffer; } }

        /// <summary>
        /// ȡ����Token
        /// </summary>
        private CancellationTokenSource m_CancelTokenSource;

        private CancellationToken m_CancelToken;

        /// <summary>
        /// ���յ���Ϣʱ
        /// </summary>
        public Action OnReceive;

        public MessageReceiver(INetworkConnect connect, INetworkReceiver receive)
        {
            m_Connect = connect;
            m_Receive = receive;
            m_CacheBuffer = new ByteBuffer(65507);
            m_CancelTokenSource = new CancellationTokenSource();
            m_CancelToken = m_CancelTokenSource.Token;
        }

        public async UniTask Receive()
        {
            try
            {
                while (!m_CancelToken.IsCancellationRequested)
                {
                    if (!m_Connect.IsValid)
                        return;
                    try
                    {
                        int receivedBytes = await m_Receive.ReceiverAsync(m_CacheBuffer);
                        m_CacheBuffer.WriteIndex += receivedBytes;
                        OnReceive?.Invoke();
                        if (m_CacheBuffer.Remain <= 256)
                            m_CacheBuffer.Expansion(256);
                        if (!m_Connect.IsValid || receivedBytes == 0)
                        {
                            m_Connect.Disconnect();
                            return;
                        }
                    }
                    catch (Exception e)
                    {
                        Debug.Log("������Ϣʧ��2" + e);

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
            m_CancelTokenSource.Cancel();
            m_CancelTokenSource = null;
            m_CacheBuffer = null;
            m_Receive = null;
            m_Connect = null;
        }
    }
}
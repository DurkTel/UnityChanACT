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
        /// 每次发消息的ID
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
        /// 网络连接相关接口
        /// </summary>
        private INetworkConnect m_Connect;

        /// <summary>
        /// 网络消息发送接口
        /// </summary>
        private INetworkSend m_Send;

        /// <summary>
        /// 准备发送的字节
        /// </summary>
        private Queue<ByteBuffer> m_SendQueue;

        /// <summary>
        /// 准备发送的包数量
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
            if (m_Connect.PrepareClose) //已经准备关了 不许发了
                return;

            try
            {
                SendID++;
                int sendLen = m_Send.Send(buffer.Read(buffer.Length, true));
                buffer.ReadIndex += sendLen;
            }
            catch (SocketException e)
            {
                Debug.Log("发送消息失败" + e.SocketErrorCode);
            }
        }

        public async UniTask SendAsync(ByteBuffer buffer)
        {
            if (m_Connect.PrepareClose) //已经准备关了 不许发了
                return;

            lock (m_SendQueue)
            {
                m_SendQueue.Enqueue(buffer);
                //队列还有消息在发 等他发完
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

                    //加上发了多少
                    buffer.ReadIndex += sendLen;
                    //这条消息是否发完了
                    if (buffer.Length == 0)
                    {
                        buffer = null;
                        lock (m_SendQueue) //锁里的语句尽量少点
                        {
                            m_SendQueue.Dequeue();
                            //这条发完 就看看有没有别的要发
                            if (m_SendQueue.Count > 0)
                                buffer = m_SendQueue.Peek();
                        }
                    }

                    //if (buffer != null)
                    //    await SendAsync(buffer);
                    //else if (m_Connect.PrepareClose) //发完了 而且标识了要关闭 那就关
                    //    m_Connect.Disconnect();

                    if (m_Connect.PrepareClose) //发完了 而且标识了要关闭 那就关
                    {
                        m_Connect.Disconnect();
                        return;
                    }
                }
            }
            catch (SocketException e)
            {
                Debug.Log("发送消息失败" + e.SocketErrorCode);
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
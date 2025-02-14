using Cysharp.Threading.Tasks;
using System;
using System.Net;
using System.Net.Sockets;
using UnityEngine;

namespace LGameFramework.GameNet
{
    public interface INetworkReceiver
    {
        public bool IsValid { get; }

        public UniTask<int> ReceiverAsync(ByteBuffer buffer);
    }

    public class TCPReceiver : INetworkReceiver
    {
        private readonly Socket m_Socket;
        public bool IsValid { get { return m_Socket != null && m_Socket.Connected; } }

        public TCPReceiver(Socket client)
        {
            m_Socket = client;
        }


        public async UniTask<int> ReceiverAsync(ByteBuffer buffer)
        {
            if (!IsValid) return default;
            ArraySegment<byte> bytes = new ArraySegment<byte>(buffer.CacheBytes, buffer.WriteIndex, buffer.Remain);
            return await m_Socket.ReceiveAsync(bytes, SocketFlags.None);
        }
    }

    public class UDPReceiver : INetworkReceiver
    {
        private readonly IPEndPoint m_RemoteIP;

        private readonly Socket m_Socket;
        public bool IsValid { get { return m_Socket != null && m_Socket.Connected; } }
        public UDPReceiver(Socket client, IPEndPoint remote)
        {
            m_Socket = client;
            m_RemoteIP = remote;
        }

        public async UniTask<int> ReceiverAsync(ByteBuffer buffer)
        {
            if (!m_Socket.Connected) return 0;
            ArraySegment<byte> bytes = new ArraySegment<byte>(buffer.CacheBytes, buffer.WriteIndex, buffer.Remain);
            var result = await m_Socket.ReceiveFromAsync(bytes, SocketFlags.None, m_RemoteIP);
            return result.ReceivedBytes;
        }
    }
}

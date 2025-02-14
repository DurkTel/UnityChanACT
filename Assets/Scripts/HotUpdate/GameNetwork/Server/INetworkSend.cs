using Cysharp.Threading.Tasks;
using System.Net;
using System.Net.Sockets;

namespace LGameFramework.GameNet
{

    public interface INetworkSend
    {
        /// <summary>
        /// 异步发送消息
        /// </summary>
        /// <param name="msg"></param>
        /// <returns></returns>
        public UniTask<int> SendAsync(byte[] msg);

        /// <summary>
        /// 发送消息
        /// </summary>
        /// <param name="msg"></param>
        /// <returns></returns>
        public int Send(byte[] msg);
    }

    public class TCPSender : INetworkSend
    {
        private readonly Socket m_Socket;

        public TCPSender(Socket client)
        {
            m_Socket = client;
        }

        public int Send(byte[] msg)
        {
            return m_Socket.Send(msg);
        }

        public async UniTask<int> SendAsync(byte[] msg)
        {
            return await m_Socket.SendAsync(msg, SocketFlags.None);
        }
    }

    public class UDPSender : INetworkSend
    {
        private readonly IPEndPoint m_RemoteIP;

        private readonly Socket m_Socket;

        public UDPSender(Socket client, IPEndPoint remote)
        {
            m_Socket = client;
            m_RemoteIP = remote;
        }

        public int Send(byte[] msg)
        {
            return m_Socket.SendTo(msg, m_RemoteIP);
        }

        public async UniTask<int> SendAsync(byte[] msg)
        {
            return await m_Socket.SendToAsync(msg, SocketFlags.None, m_RemoteIP);
        }
    }
}
using Cysharp.Threading.Tasks;
using System.Net.Sockets;

namespace LGameFramework.GameNet
{
    public interface INetworkConnect
    {

        /// <summary>
        /// 客户端套接字
        /// </summary>
        public Socket Socket { get; }

        /// <summary>
        /// 是否有效
        /// </summary>
        public bool IsValid { get; }

        /// <summary>
        /// 准备关闭
        /// </summary>
        public bool PrepareClose { get; }

        /// <summary>
        /// 连接服务器
        /// </summary>
        /// <param name="ip"></param>
        /// <param name="port"></param>
        public UniTask Connect(string ip, int port);

        /// <summary>
        /// 发送消息
        /// </summary>
        /// <param name="buffer">发送的字节缓冲区</param>
        public void Send(ByteBuffer buffer);

        /// <summary>
        /// 断开连接
        /// </summary>
        /// <param name="isSelf"></param>
        public void Disconnect(bool isSelf = false);

        /// <summary>
        /// 帧更新
        /// </summary>
        /// <param name="result"></param>
        /// <returns></returns>
        public bool Update(out ReceiveResult result);

        /// <summary>
        /// 重置
        /// </summary>
        public void Reset();
    }
}
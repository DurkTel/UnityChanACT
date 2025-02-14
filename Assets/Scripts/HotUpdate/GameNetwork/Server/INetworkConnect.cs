using Cysharp.Threading.Tasks;
using System.Net.Sockets;

namespace LGameFramework.GameNet
{
    public interface INetworkConnect
    {

        /// <summary>
        /// �ͻ����׽���
        /// </summary>
        public Socket Socket { get; }

        /// <summary>
        /// �Ƿ���Ч
        /// </summary>
        public bool IsValid { get; }

        /// <summary>
        /// ׼���ر�
        /// </summary>
        public bool PrepareClose { get; }

        /// <summary>
        /// ���ӷ�����
        /// </summary>
        /// <param name="ip"></param>
        /// <param name="port"></param>
        public UniTask Connect(string ip, int port);

        /// <summary>
        /// ������Ϣ
        /// </summary>
        /// <param name="buffer">���͵��ֽڻ�����</param>
        public void Send(ByteBuffer buffer);

        /// <summary>
        /// �Ͽ�����
        /// </summary>
        /// <param name="isSelf"></param>
        public void Disconnect(bool isSelf = false);

        /// <summary>
        /// ֡����
        /// </summary>
        /// <param name="result"></param>
        /// <returns></returns>
        public bool Update(out ReceiveResult result);

        /// <summary>
        /// ����
        /// </summary>
        public void Reset();
    }
}
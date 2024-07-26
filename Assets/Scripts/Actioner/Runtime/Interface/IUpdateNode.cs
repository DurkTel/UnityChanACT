namespace Actioner.Runtime
{
    public interface IUpdateNode
    {
        /// <summary>
        /// ���ڵ�
        /// </summary>
        public ActionerPlayable Root { get; }

        /// <summary>
        /// ֡����
        /// </summary>
        /// <param name="deltaTime">֡���</param>
        /// <returns>�����Ƿ����</returns>
        public void Update(UpdateStep step, float deltaTime);
    }

    public enum UpdateStep
    { 
        /// <summary>
        /// ׼������
        /// </summary>
        PrePlay,
        /// <summary>
        /// ����Ȩ��
        /// </summary>
        Weight,
        /// <summary>
        /// ���½���
        /// </summary>
        Progress,
        /// <summary>
        /// ������ʶ
        /// </summary>
        UpdateEnd,
    }
}

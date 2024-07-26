using System;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    public interface IPlayableNode : IDisposable
    {
        /// <summary>
        /// ����ʱ��
        /// </summary>
        public float DestroyTime { get; set; }

        /// <summary>
        /// �Ƿ������
        /// </summary>
        public bool IsCanDestroy { get; set; }

        /// <summary>
        /// ����ڵ�Ŀ��Զ��������ʱ����
        /// </summary>
        public Playable Playable { get; }

        /// <summary>
        /// ���ڵ�
        /// </summary>
        public IPlayableNode Parent { get; }

        /// <summary>
        /// ���ڵ�
        /// </summary>
        public ActionerPlayable Root { get; }

        /// <summary>
        /// �±�
        /// </summary>
        public int Index { get; }

        /// <summary>
        /// �ڵ��Ȩ��
        /// </summary>
        public float Weight { get; }

        /// <summary>
        /// �ڵ���ٶ�
        /// </summary>
        public double Speed { get; set; }

        /// <summary>
        /// ���� 1Ϊ���� -1Ϊ����
        /// </summary>
        public int Reverse { get; }

        /// <summary>
        /// �ӽڵ�����
        /// </summary>
        public int ChildCount { get; }

        /// <summary>
        /// �Ƿ������ڸ��ڵ���
        /// </summary>
        public bool IsConnected { get; set; }

        /// <summary>
        /// ��ȡ�ӽڵ�
        /// </summary>
        /// <param name="index">�±�</param>
        /// <returns>�ӽڵ�</returns>
        public IPlayableNode GetChild(int index);

    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public struct ActionChangeInfo
    {
        /// <summary>
        /// ��ȡ���Ķ���Id
        /// </summary>
        public string BeCancelActionID;

        /// <summary>
        /// ����ȡ���Ķ���Id
        /// </summary>
        public string CancelActionID;

        /// <summary>
        /// ���ȼ�
        /// </summary>
        public int Priority;

        /// <summary>
        /// �Ӷ���֡��ʼ
        /// </summary>
        public int FromTick;

        /// <summary>
        /// ����ʱ��
        /// </summary>
        public float TransitionSecond;
    }

    public enum ActionChangeType
    { 
        /// <summary>
        /// ���������л�
        /// </summary>
        Command,
        /// <summary>
        /// �Զ��л�
        /// </summary>
        Auto,
        /// <summary>
        /// �����߼��л�
        /// </summary>
        Other
    }
}

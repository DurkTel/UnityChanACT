using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [Flags]
    public enum ActionCancelTag
    {
        None = 0,
        Cancel_Idle = 1,
        Cancel_Move = 2,
        Cancel_Dodge = 4,
        Cancel_Attack = 8,
        Cancel_AttackWindup = 16,
        Cancel_Guard = 32,
    }


    [Serializable]
    public struct CancelTag
    {
        /// <summary>
        /// ���tag��ö�٣��������Ϊid
        /// </summary>
        public ActionCancelTag tag;

        /// <summary>
        /// ����������Tick���ٵĵط���ʼ����
        /// </summary>
        public int startFromTick;

        /// <summary>
        /// ��������Cancel����ʱ�����ȼ��仯
        /// </summary>
        public int priority;
    }
}

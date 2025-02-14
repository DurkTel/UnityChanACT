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
        /// 这个tag的枚举，可以理解为id
        /// </summary>
        public ActionCancelTag tag;

        /// <summary>
        /// 这个动作会从Tick多少的地方开始播放
        /// </summary>
        public int startFromTick;

        /// <summary>
        /// 当从这里Cancel动作时，优先级变化
        /// </summary>
        public int priority;
    }
}

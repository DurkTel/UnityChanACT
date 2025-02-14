using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public struct ActionChangeInfo
    {
        /// <summary>
        /// 被取消的动作Id
        /// </summary>
        public string BeCancelActionID;

        /// <summary>
        /// 发起取消的动作Id
        /// </summary>
        public string CancelActionID;

        /// <summary>
        /// 优先级
        /// </summary>
        public int Priority;

        /// <summary>
        /// 从多少帧开始
        /// </summary>
        public int FromTick;

        /// <summary>
        /// 过渡时间
        /// </summary>
        public float TransitionSecond;
    }

    public enum ActionChangeType
    { 
        /// <summary>
        /// 符合命令切换
        /// </summary>
        Command,
        /// <summary>
        /// 自动切换
        /// </summary>
        Auto,
        /// <summary>
        /// 其他逻辑切换
        /// </summary>
        Other
    }
}

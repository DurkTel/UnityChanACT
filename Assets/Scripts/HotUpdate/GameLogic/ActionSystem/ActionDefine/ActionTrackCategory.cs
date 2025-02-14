using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public enum ActionTrackCategory
    {
        /// <summary>
        /// 动画轨道
        /// </summary>
        Animation,
        /// <summary>
        /// 音频轨道
        /// </summary>
        Audio,
        /// <summary>
        /// 区域盒子轨道
        /// </summary>
        BoxArea,
        /// <summary>
        /// 切换动作轨道
        /// </summary>
        CancelAction,
        /// <summary>
        /// 粒子特效轨道
        /// </summary>
        Particle,
        /// <summary>
        /// 动作步骤轨道
        /// </summary>
        ActionPhase,
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [SerializeField]
    public enum KeyCommandMap
    {
        /// <summary>
        /// 向前
        /// </summary>
        Forward,
        /// <summary>
        /// 向后
        /// </summary>
        Backward,
        /// <summary>
        /// 向左
        /// </summary>
        Left,
        /// <summary>
        /// 向右
        /// </summary>
        Right,
        /// <summary>
        /// 左前
        /// </summary>
        LeftForward,
        /// <summary>
        /// 右前
        /// </summary>
        RightForward,
        /// <summary>
        /// 左后
        /// </summary>
        LeftBackward,
        /// <summary>
        /// 右后
        /// </summary>
        RightBackward,
        /// <summary>
        /// 无方向输入
        /// </summary>
        NoDirection,
        /// <summary>
        /// 普通攻击
        /// </summary>
        Attack,
        /// <summary>
        /// 技能攻击
        /// </summary>
        Skill,
        /// <summary>
        /// 防御
        /// </summary>
        Defense,
        /// <summary>
        /// 闪避
        /// </summary>
        Dodge,
        /// <summary>
        /// 枚举结束标识
        /// </summary>
        End,
    }
}

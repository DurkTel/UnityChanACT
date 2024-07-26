using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class LocomotionAbilityAsset : GameplayAbilityAsset
    {
        /// <summary>
        /// 启动旋转时间
        /// </summary>
        [Header("启动旋转时间")]
        public float StartRotateTime;

        /// <summary>
        /// 旋转速度
        /// </summary>
        [Header("旋转速度")]
        public float RotateSpeed;

        /// <summary>
        /// 旋转倾斜角度
        /// </summary>
        [Header("旋转倾斜角度")]
        public float TiltAngle;

        /// <summary>
        /// 旋转倾斜速度
        /// </summary>
        [Header("旋转倾斜速度")]
        public float TiltSpeed;

        public override Type GetAbilityType()
        {
            return typeof(LocomotionAbility);
        }
    }
}

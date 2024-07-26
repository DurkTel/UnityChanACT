using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class LocomotionAbilityAsset : GameplayAbilityAsset
    {
        /// <summary>
        /// ������תʱ��
        /// </summary>
        [Header("������תʱ��")]
        public float StartRotateTime;

        /// <summary>
        /// ��ת�ٶ�
        /// </summary>
        [Header("��ת�ٶ�")]
        public float RotateSpeed;

        /// <summary>
        /// ��ת��б�Ƕ�
        /// </summary>
        [Header("��ת��б�Ƕ�")]
        public float TiltAngle;

        /// <summary>
        /// ��ת��б�ٶ�
        /// </summary>
        [Header("��ת��б�ٶ�")]
        public float TiltSpeed;

        public override Type GetAbilityType()
        {
            return typeof(LocomotionAbility);
        }
    }
}

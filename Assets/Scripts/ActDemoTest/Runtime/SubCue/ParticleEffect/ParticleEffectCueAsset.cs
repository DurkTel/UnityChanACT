using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class ParticleEffectCueAsset : GameplayCueAsset
    {
        /// <summary>
        /// Լ������
        /// </summary>
        [Flags]
        public enum ConstraintType
        {
            /// <summary>
            /// ��Լ��
            /// </summary>
            None = 0,
            /// <summary>
            /// λ��Լ��
            /// </summary>
            PosConstraint = 1,
            /// <summary>
            /// ��תԼ��
            /// </summary>
            RotationConstraint = 2,
            /// <summary>
            /// ����Լ��
            /// </summary>
            ScaleConstraint = 4,
        }

        /// <summary>
        /// ����λ��
        /// </summary>
        public enum EffectPointType
        {
            /// <summary>
            /// ��������Դ����λ��
            /// </summary>
            Source,
            /// <summary>
            /// ������Ŀ�����λ��
            /// </summary>
            Target,
            /// <summary>
            /// �����ڴ����
            /// </summary>
            HitPoints,
        }

        public GameObject particleEffect;

        public EffectPointType effectPointType;

        public ConstraintType constraintType;

        public string bindBone;

        public Vector3 position;

        public Vector3 rotation;

        public Vector3 scale = Vector3.one;


        public override Type GetCueType()
        {
            return typeof(ParticleEffectCue);
        }

        public override float GetDefaultLength()
        {
            return 0.5f;
        }

    }
}

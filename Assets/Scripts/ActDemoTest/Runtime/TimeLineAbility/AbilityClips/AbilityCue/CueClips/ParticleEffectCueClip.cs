using GAS.Runtime;
using System;
using UnityEngine;

namespace UnityChanAct
{
    [System.Serializable]
    public class ParticleEffectCueClip : CueAbilityClip
    {

        public GameObject particleEffect;

        public ParticleEffectCue.EffectPointType effectPointType;

        public ParticleEffectCue.ConstraintType constraintType;

        public string bindBone;

        public Vector3 position;

        public Vector3 rotation;

        public Vector3 scale = Vector3.one;

        public float duration;

        public override void OnTrigger(AbilitySystemComponent asc)
        {
            ParticleEffectCue.Trigger(asc, new ParticleCueArg()
            {
                particleEffect = particleEffect,
                effectPointType = effectPointType,
                constraintType = constraintType,
                bindBone = bindBone,
                position = position,
                rotation = rotation,
                scale = scale,
                duration = duration
            });
        }

#if UNITY_EDITOR

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            duration = Duration * 0.02f;
            particleEffect = UnityEditor.EditorGUILayout.ObjectField("特效预制", particleEffect, typeof(GameObject), false) as GameObject;
            effectPointType = (ParticleEffectCue.EffectPointType)UnityEditor.EditorGUILayout.EnumPopup("创建位置", effectPointType);
            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                constraintType = (ParticleEffectCue.ConstraintType)UnityEditor.EditorGUILayout.EnumPopup("约束位置", constraintType);

                if (constraintType != ParticleEffectCue.ConstraintType.None)
                {
                    bindBone = UnityEditor.EditorGUILayout.TextField("约束绑定骨骼", bindBone);
                }
            }

            UnityEditor.EditorGUI.BeginChangeCheck();

            position = UnityEditor.EditorGUILayout.Vector3Field("相对坐标", position);
            rotation = UnityEditor.EditorGUILayout.Vector3Field("相对角度", rotation);
            scale = UnityEditor.EditorGUILayout.Vector3Field("缩放", scale);
            if (UnityEditor.EditorGUI.EndChangeCheck())
                isDirty = true;

            return isDirty;
        }

#endif
    }
}

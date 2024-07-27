using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    [System.Serializable]
    public class EffectAbilityClip : TimeLineAbilityClip
    {
        public GameplayEffectAsset gameplayEffect;

#if UNITY_EDITOR

        private UnityEditor.Editor m_AssetEditor;

        private Vector2 m_ScrollPosition;

        public override bool OnInspectorGUI()
        {
            m_ScrollPosition = UnityEditor.EditorGUILayout.BeginScrollView(m_ScrollPosition);
            bool isDirty = base.OnInspectorGUI();

            isDirty = OnCustomPropertyGUI() || isDirty;

            UnityEditor.EditorGUI.indentLevel++;
            UnityEditor.EditorGUILayout.LabelField("GameplayEffect");
            UnityEditor.EditorGUI.indentLevel++;

            gameplayEffect = UnityEditor.EditorGUILayout.ObjectField(gameplayEffect, typeof(GameplayEffectAsset), false) as GameplayEffectAsset;

            if (gameplayEffect != null)
            {
                UnityEditor.EditorGUI.indentLevel -= 2;
                m_AssetEditor ??= UnityEditor.Editor.CreateEditor(gameplayEffect);

                if (gameplayEffect.DurationType != EffectDurationType.TimeLine) //挂在片段里用不能自己设值
                    gameplayEffect.DurationType = EffectDurationType.TimeLine;

                gameplayEffect.ClipDuration = Duration * 0.02f;

                UnityEditor.EditorGUI.BeginChangeCheck();
                m_AssetEditor.OnInspectorGUI();
                if (UnityEditor.EditorGUI.EndChangeCheck())
                {
                    isDirty = true;
                    m_EndTick = m_StartTick + Mathf.RoundToInt(gameplayEffect.ClipDuration / 0.02f);
                }
            }
            else
                m_AssetEditor = null;
            UnityEditor.EditorGUILayout.EndScrollView();

            return isDirty;
        }

        protected virtual bool OnCustomPropertyGUI()
        {
            UnityEditor.EditorGUI.indentLevel++;
            UnityEditor.EditorGUILayout.LabelField("Clip Params");
            UnityEditor.EditorGUI.indentLevel++;

            return false;
        }
#endif
    }
}

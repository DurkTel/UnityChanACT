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

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            UnityEditor.EditorGUI.indentLevel++;
            UnityEditor.EditorGUILayout.LabelField("GameplayEffect");
            UnityEditor.EditorGUI.indentLevel++;

            gameplayEffect = UnityEditor.EditorGUILayout.ObjectField(gameplayEffect, typeof(GameplayEffectAsset), false) as GameplayEffectAsset;

            if (gameplayEffect != null)
            {
                UnityEditor.EditorGUI.indentLevel -= 2;
                m_AssetEditor ??= UnityEditor.Editor.CreateEditor(gameplayEffect);
                gameplayEffect.Duration = Duration * 0.02f;

                UnityEditor.EditorGUI.BeginChangeCheck();
                m_AssetEditor.OnInspectorGUI();
                if (UnityEditor.EditorGUI.EndChangeCheck())
                {
                    isDirty = true;
                    m_EndTick = m_StartTick + Mathf.RoundToInt(gameplayEffect.Duration / 0.02f);
                }
            }

            return isDirty;
        }
#endif
    }
}

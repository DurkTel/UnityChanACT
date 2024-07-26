using System.Collections;
using System.Collections.Generic;
using UnityEditor.VersionControl;
using UnityEngine;

namespace GAS.Runtime
{
    [System.Serializable]
    public class CueAbilityClip : TimeLineAbilityClip
    {
        public GameplayCueAsset gameplayCue;

#if UNITY_EDITOR

        private UnityEditor.Editor m_AssetEditor;

        public override bool OnInspectorGUI()
        {

            bool isDirty = base.OnInspectorGUI();

            UnityEditor.EditorGUI.indentLevel++;
            UnityEditor.EditorGUILayout.LabelField("GameplayCue");
            UnityEditor.EditorGUI.indentLevel++;

            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                gameplayCue = UnityEditor.EditorGUILayout.ObjectField(gameplayCue, typeof(GameplayCueAsset), false) as GameplayCueAsset;
                if (GUILayout.Button("Defalut Length", GUILayout.Width(100)) && gameplayCue != null)
                {
                    UpdateTime(StartTick, StartTick + Mathf.RoundToInt(gameplayCue.GetDefaultLength() / 0.02f));
                    isDirty = true;
                }
            }

            if (gameplayCue != null)
            {
                m_AssetEditor ??= UnityEditor.Editor.CreateEditor(gameplayCue);

                UnityEditor.EditorGUI.BeginChangeCheck();
                m_AssetEditor.OnInspectorGUI();
                if(UnityEditor.EditorGUI.EndChangeCheck())
                    isDirty = true;
            }

            return isDirty;
        }
#endif
    }
}

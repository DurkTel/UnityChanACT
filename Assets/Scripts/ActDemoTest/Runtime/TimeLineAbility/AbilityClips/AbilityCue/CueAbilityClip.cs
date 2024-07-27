using System;
using UnityEngine;

namespace GAS.Runtime
{
    [System.Serializable]
    public abstract class CueAbilityClip : TimeLineAbilityClip
    {
        public abstract void OnTrigger(AbilitySystemComponent asc);

#if UNITY_EDITOR

        public override bool OnInspectorGUI()
        {

            bool isDirty = base.OnInspectorGUI();

            UnityEditor.EditorGUI.indentLevel++;
            UnityEditor.EditorGUILayout.LabelField("Clip Params");
            UnityEditor.EditorGUI.indentLevel++;

            return isDirty;
        }
#endif
    }
}

using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    [System.Serializable]
    public class SearchEffectClip : EffectAbilityClip
    {
        public bool isAutoSearch;

        public float searchRadius;


#if UNITY_EDITOR

        protected override bool OnCustomPropertyGUI()
        {
            bool isDirty = base.OnCustomPropertyGUI();

            isAutoSearch = UnityEditor.EditorGUILayout.Toggle("�Ƿ����Զ�����", isAutoSearch);
            if (isAutoSearch)
                searchRadius = UnityEditor.EditorGUILayout.FloatField("�Զ����а뾶��Χ", searchRadius);

            UnityEditor.EditorGUI.indentLevel -= 2;

            return isDirty;
        }
#endif
    }
}

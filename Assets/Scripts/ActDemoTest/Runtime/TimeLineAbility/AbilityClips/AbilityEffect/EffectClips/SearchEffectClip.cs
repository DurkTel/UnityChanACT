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

            isAutoSearch = UnityEditor.EditorGUILayout.Toggle("ÊÇ·ñ¿ªÆô×Ô¶¯Ë÷µÐ", isAutoSearch);
            if (isAutoSearch)
                searchRadius = UnityEditor.EditorGUILayout.FloatField("×Ô¶¯Ë÷µÐ°ë¾¶·¶Î§", searchRadius);

            UnityEditor.EditorGUI.indentLevel -= 2;

            return isDirty;
        }
#endif
    }
}

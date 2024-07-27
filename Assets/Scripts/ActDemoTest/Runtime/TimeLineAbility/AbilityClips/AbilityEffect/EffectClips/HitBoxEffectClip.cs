using GAS.Runtime;
using UnityEngine;

namespace UnityChanAct
{
    [System.Serializable]
    public class HitBoxEffectClip : EffectAbilityClip
    {
        public PrimitiveType boxShape;

        public Vector3 position;

        public Vector3 rotation;

        public Vector3 scale = Vector3.one;

#if UNITY_EDITOR

        protected override bool OnCustomPropertyGUI()
        {
            bool isDirty = base.OnCustomPropertyGUI();

            UnityEditor.EditorGUI.BeginChangeCheck();
            boxShape = (PrimitiveType)UnityEditor.EditorGUILayout.EnumPopup("��ײ��״", boxShape);
            position = UnityEditor.EditorGUILayout.Vector3Field("�������", position);
            rotation = UnityEditor.EditorGUILayout.Vector3Field("��ԽǶ�", rotation);
            scale = UnityEditor.EditorGUILayout.Vector3Field("����", scale);
            if (UnityEditor.EditorGUI.EndChangeCheck())
                isDirty = true;

            UnityEditor.EditorGUI.indentLevel -= 2;
            return isDirty;
        }
#endif
    }
}

using GAS.Runtime;
using System;

namespace UnityChanAct
{
    [System.Serializable]
    public class ComboEffectClip : EffectAbilityClip
    {

        [Flags]
        public enum ComboCondition
        { 
            None = 0,
            NormalAttack = 1,
            MoveCommand = 2,
        }

        public enum ComboType
        { 
            Ability,
            Action
        }

        public string comboName;

        public ComboCondition condition;

        public ComboType type;

        public int delayComboTick;

#if UNITY_EDITOR

        protected override bool OnCustomPropertyGUI()
        {
            bool isDirty = base.OnCustomPropertyGUI();

            type = (ComboType)UnityEditor.EditorGUILayout.EnumPopup("��������", type);

            condition = (ComboCondition)UnityEditor.EditorGUILayout.EnumFlagsField("��������", condition);

            comboName = UnityEditor.EditorGUILayout.TextField("��������", comboName);

            delayComboTick = UnityEditor.EditorGUILayout.IntSlider("���ٸ�֮֡��Ŵ���", delayComboTick, StartTick, EndTick);

            UnityEditor.EditorGUI.indentLevel -= 2;
            return isDirty;
        }
#endif
    }
}

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

            type = (ComboType)UnityEditor.EditorGUILayout.EnumPopup("派生类型", type);

            condition = (ComboCondition)UnityEditor.EditorGUILayout.EnumFlagsField("触发条件", condition);

            comboName = UnityEditor.EditorGUILayout.TextField("派生名称", comboName);

            delayComboTick = UnityEditor.EditorGUILayout.IntSlider("至少该帧之后才触发", delayComboTick, StartTick, EndTick);

            UnityEditor.EditorGUI.indentLevel -= 2;
            return isDirty;
        }
#endif
    }
}

using GAS.Runtime;

namespace UnityChanAct
{
    [System.Serializable]
    public class ComboEffectClip : EffectAbilityClip
    {

        public enum ComboCondition
        { 
            NormalAttack,
        }

        public string comboName;

        public ComboCondition condition;

        public int delayComboTick;

#if UNITY_EDITOR

        protected override bool OnCustomPropertyGUI()
        {
            bool isDirty = base.OnCustomPropertyGUI();

            condition = (ComboCondition)UnityEditor.EditorGUILayout.EnumPopup("触发条件", condition);

            comboName = UnityEditor.EditorGUILayout.TextField("派生技能名称", comboName);

            delayComboTick = UnityEditor.EditorGUILayout.IntSlider("至少该帧之后才触发", delayComboTick, StartTick, EndTick);

            UnityEditor.EditorGUI.indentLevel -= 2;
            return isDirty;
        }
#endif
    }
}

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

            condition = (ComboCondition)UnityEditor.EditorGUILayout.EnumPopup("��������", condition);

            comboName = UnityEditor.EditorGUILayout.TextField("������������", comboName);

            delayComboTick = UnityEditor.EditorGUILayout.IntSlider("���ٸ�֮֡��Ŵ���", delayComboTick, StartTick, EndTick);

            UnityEditor.EditorGUI.indentLevel -= 2;
            return isDirty;
        }
#endif
    }
}

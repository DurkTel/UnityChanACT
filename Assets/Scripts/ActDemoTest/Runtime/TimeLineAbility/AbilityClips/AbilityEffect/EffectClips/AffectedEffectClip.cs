using GAS.Runtime;

namespace UnityChanAct
{
    [System.Serializable]
    public class AffectedEffectClip : EffectAbilityClip
    {
        public FightBoxShape boxShape;

        public BoxParams boxParams;

        public SphereParams sphereParams;

        public CapsuleParams capsuleParams;

#if UNITY_EDITOR

        protected override bool OnCustomPropertyGUI()
        {
            bool isDirty = base.OnCustomPropertyGUI();

            UnityEditor.EditorGUI.BeginChangeCheck();
            boxShape = (FightBoxShape)UnityEditor.EditorGUILayout.EnumPopup("��ײ��״", boxShape);

            switch (boxShape)
            {
                case FightBoxShape.Box:
                    boxParams.center = UnityEditor.EditorGUILayout.Vector3Field("�������", boxParams.center);
                    boxParams.halfExtents = UnityEditor.EditorGUILayout.Vector3Field("����ά�ȴ�С", boxParams.halfExtents);
                    break;
                case FightBoxShape.Sphere:
                    sphereParams.position = UnityEditor.EditorGUILayout.Vector3Field("�������", sphereParams.position);
                    sphereParams.radius = UnityEditor.EditorGUILayout.FloatField("�뾶", sphereParams.radius);
                    break;
                case FightBoxShape.Capsule:
                    capsuleParams.point0 = UnityEditor.EditorGUILayout.Vector3Field("Start������������", capsuleParams.point0);
                    capsuleParams.point1 = UnityEditor.EditorGUILayout.Vector3Field("End������������", capsuleParams.point1);
                    capsuleParams.radius = UnityEditor.EditorGUILayout.FloatField("�뾶", capsuleParams.radius);
                    break;
            }

            if (UnityEditor.EditorGUI.EndChangeCheck())
                isDirty = true;

            UnityEditor.EditorGUI.indentLevel -= 2;
            return isDirty;
        }
#endif
    }
}

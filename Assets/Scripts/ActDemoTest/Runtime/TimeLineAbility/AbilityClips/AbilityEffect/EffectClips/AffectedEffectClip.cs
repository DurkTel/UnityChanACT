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
            boxShape = (FightBoxShape)UnityEditor.EditorGUILayout.EnumPopup("碰撞形状", boxShape);

            switch (boxShape)
            {
                case FightBoxShape.Box:
                    boxParams.center = UnityEditor.EditorGUILayout.Vector3Field("相对坐标", boxParams.center);
                    boxParams.halfExtents = UnityEditor.EditorGUILayout.Vector3Field("各个维度大小", boxParams.halfExtents);
                    break;
                case FightBoxShape.Sphere:
                    sphereParams.position = UnityEditor.EditorGUILayout.Vector3Field("相对坐标", sphereParams.position);
                    sphereParams.radius = UnityEditor.EditorGUILayout.FloatField("半径", sphereParams.radius);
                    break;
                case FightBoxShape.Capsule:
                    capsuleParams.point0 = UnityEditor.EditorGUILayout.Vector3Field("Start处的球体中心", capsuleParams.point0);
                    capsuleParams.point1 = UnityEditor.EditorGUILayout.Vector3Field("End处的球体中心", capsuleParams.point1);
                    capsuleParams.radius = UnityEditor.EditorGUILayout.FloatField("半径", capsuleParams.radius);
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

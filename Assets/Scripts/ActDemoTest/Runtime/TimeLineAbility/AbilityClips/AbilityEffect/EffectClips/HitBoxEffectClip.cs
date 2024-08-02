using GAS.Runtime;
using UnityEngine;

namespace UnityChanAct
{

    public enum FightBoxShape
    {
        Box,
        Sphere,
        Capsule
    }

    public struct ColliderParams
    {
        public BoxParams boxParams;

        public SphereParams sphereParams;

        public CapsuleParams capsuleParams;
    }

    [System.Serializable]
    public struct BoxParams
    {
        public Vector3 center;
        public Vector3 halfExtents;
    }

    [System.Serializable]
    public struct SphereParams
    {
        public Vector3 position;
        public float radius;
    }

    [System.Serializable]
    public struct CapsuleParams
    {
        public Vector3 point0;
        public Vector3 point1;
        public float radius;
    }

    [System.Serializable]
    public class HitBoxEffectClip : EffectAbilityClip
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

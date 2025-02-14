
using LGameFramework.GameLogic;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionParticleClipEditor : ActionClipEditor
    {
        private ActionParticleClip m_ParticleClip;
        public ActionParticleClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_ParticleClip = actionClip as ActionParticleClip;
        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            m_ParticleClip.duration = m_ParticleClip.Duration * 0.02f;
            m_ParticleClip.particleEffect = UnityEditor.EditorGUILayout.TextField("特效预制", m_ParticleClip.particleEffect);
            m_ParticleClip.effectPointType = (EffectPointType)UnityEditor.EditorGUILayout.EnumPopup("创建位置", m_ParticleClip.effectPointType);
            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                m_ParticleClip.constraintType = (ConstraintType)UnityEditor.EditorGUILayout.EnumPopup("约束位置", m_ParticleClip.constraintType);

                if (m_ParticleClip.constraintType != ConstraintType.None)
                {
                    m_ParticleClip.bindBone = UnityEditor.EditorGUILayout.TextField("约束绑定骨骼", m_ParticleClip.bindBone);
                }
            }
            UnityEditor.EditorGUI.BeginChangeCheck();

            m_ParticleClip.position = UnityEditor.EditorGUILayout.Vector3Field("相对坐标", m_ParticleClip.position);
            m_ParticleClip.rotation = UnityEditor.EditorGUILayout.Vector3Field("相对角度", m_ParticleClip.rotation);
            m_ParticleClip.scale = UnityEditor.EditorGUILayout.Vector3Field("缩放", m_ParticleClip.scale);
            if (UnityEditor.EditorGUI.EndChangeCheck())
                isDirty = true;

            return isDirty;
        }
    }
}

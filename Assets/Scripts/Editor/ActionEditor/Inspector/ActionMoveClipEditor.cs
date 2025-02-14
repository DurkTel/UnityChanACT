using DG.Tweening;
using LGameFramework.GameLogic;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionMoveClipEditor : ActionClipEditor
    {
        private ActionMoveClip m_MoveClip;
        public ActionMoveClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_MoveClip = actionClip as ActionMoveClip;
        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            m_MoveClip.mode = (ActionMoveMode)EditorGUILayout.EnumPopup("λ��ģʽ", m_MoveClip.mode);

            if (m_MoveClip.mode == ActionMoveMode.Position)
            {
                m_MoveClip.position = EditorGUILayout.Vector3Field("�̶�λ��", m_MoveClip.position);

            }
            else if (m_MoveClip.mode == ActionMoveMode.Velocity)
            {
                m_MoveClip.averageVelocity = EditorGUILayout.Vector3Field("ƽ���ٶ�", m_MoveClip.averageVelocity);
            }

            m_MoveClip.moveCurve = EditorGUILayout.CurveField("�˶�����", m_MoveClip.moveCurve);

            return isDirty;
        }
    }
}

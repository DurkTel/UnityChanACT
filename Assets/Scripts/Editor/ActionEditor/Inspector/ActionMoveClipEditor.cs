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

            m_MoveClip.mode = (ActionMoveMode)EditorGUILayout.EnumPopup("位移模式", m_MoveClip.mode);

            if (m_MoveClip.mode == ActionMoveMode.Position)
            {
                m_MoveClip.position = EditorGUILayout.Vector3Field("固定位置", m_MoveClip.position);

            }
            else if (m_MoveClip.mode == ActionMoveMode.Velocity)
            {
                m_MoveClip.averageVelocity = EditorGUILayout.Vector3Field("平均速度", m_MoveClip.averageVelocity);
            }

            m_MoveClip.moveCurve = EditorGUILayout.CurveField("运动曲线", m_MoveClip.moveCurve);

            return isDirty;
        }
    }
}

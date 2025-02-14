using GAS.Runtime;
using LGameFramework.GameLogic;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionBoxClipEditor : ActionClipEditor
    {
        private ActionBoxClip m_BoxClip;
        public ActionBoxClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_BoxClip = actionClip as ActionBoxClip;
        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            EditorGUI.BeginChangeCheck();
            m_BoxClip.boxType = (ActionBoxType)EditorGUILayout.EnumPopup("盒子类型", m_BoxClip.boxType);
            m_BoxClip.center = EditorGUILayout.Vector3Field("相对坐标", m_BoxClip.center);
            m_BoxClip.rotation = EditorGUILayout.Vector3Field("相对旋转", m_BoxClip.rotation);
            m_BoxClip.halfExtents = EditorGUILayout.Vector3Field("各个维度大小", m_BoxClip.halfExtents);
            m_BoxClip.notDisable = EditorGUILayout.ToggleLeft("不会随着片段结束消失", m_BoxClip.notDisable);
            if (EditorGUI.EndChangeCheck())
                isDirty = true;

            EditorGUI.indentLevel -= 2;
            return isDirty;
        }
    }
}

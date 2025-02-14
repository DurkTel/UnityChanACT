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
            m_BoxClip.boxType = (ActionBoxType)EditorGUILayout.EnumPopup("��������", m_BoxClip.boxType);
            m_BoxClip.center = EditorGUILayout.Vector3Field("�������", m_BoxClip.center);
            m_BoxClip.rotation = EditorGUILayout.Vector3Field("�����ת", m_BoxClip.rotation);
            m_BoxClip.halfExtents = EditorGUILayout.Vector3Field("����ά�ȴ�С", m_BoxClip.halfExtents);
            m_BoxClip.notDisable = EditorGUILayout.ToggleLeft("��������Ƭ�ν�����ʧ", m_BoxClip.notDisable);
            if (EditorGUI.EndChangeCheck())
                isDirty = true;

            EditorGUI.indentLevel -= 2;
            return isDirty;
        }
    }
}

using LGameFramework.GameLogic;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionHandOffClipEditor : ActionClipEditor
    {
        private ActionHandOffClip m_HandOffClip;

        public ActionHandOffClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_HandOffClip = actionClip as ActionHandOffClip;

        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            m_HandOffClip.skillName = EditorGUILayout.TextField("��������", m_HandOffClip.skillName);
            m_HandOffClip.position = EditorGUILayout.Vector3Field("��ʼ����", m_HandOffClip.position);
            return isDirty; 
        }
    }
}

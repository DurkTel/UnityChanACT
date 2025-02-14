using LGameFramework.GameLogic;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionBeCancelClipEditor : ActionClipEditor
    {
        private ActionBeCancelClip m_BeCancelClip;

        public ActionBeCancelClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_BeCancelClip = actionClip as ActionBeCancelClip;
        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            m_BeCancelClip.beCancelTag = (ActionCancelTag)UnityEditor.EditorGUILayout.EnumPopup("�ö�����CancelTag", m_BeCancelClip.beCancelTag);

            m_BeCancelClip.priority = UnityEditor.EditorGUILayout.IntField("�л����ӵ����ȼ�", m_BeCancelClip.priority);

            m_BeCancelClip.cancelBySelf = UnityEditor.EditorGUILayout.ToggleLeft("���Ա��Լ�Cancel", m_BeCancelClip.cancelBySelf);


            return isDirty;
        }
    }
}

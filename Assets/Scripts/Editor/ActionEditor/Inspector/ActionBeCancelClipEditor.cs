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

            m_BeCancelClip.beCancelTag = (ActionCancelTag)UnityEditor.EditorGUILayout.EnumPopup("该动作的CancelTag", m_BeCancelClip.beCancelTag);

            m_BeCancelClip.priority = UnityEditor.EditorGUILayout.IntField("切换增加的优先级", m_BeCancelClip.priority);

            m_BeCancelClip.cancelBySelf = UnityEditor.EditorGUILayout.ToggleLeft("可以被自己Cancel", m_BeCancelClip.cancelBySelf);


            return isDirty;
        }
    }
}

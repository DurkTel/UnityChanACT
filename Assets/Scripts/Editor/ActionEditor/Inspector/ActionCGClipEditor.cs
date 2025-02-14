using LGameFramework.GameLogic;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionCGClipEditor : ActionClipEditor
    {
        private ActionCGClip m_CGClip;
        public ActionCGClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_CGClip = actionClip as ActionCGClip;
        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            m_CGClip.timelineAsset = EditorGUILayout.TextField("CG×ÊÔ´Ãû", m_CGClip.timelineAsset);


            return isDirty;
        }
    }
}

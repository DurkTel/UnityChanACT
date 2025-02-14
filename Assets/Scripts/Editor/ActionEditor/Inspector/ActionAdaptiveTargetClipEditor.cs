using LGameFramework.GameLogic;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionAdaptiveTargetClipEditor : ActionClipEditor
    {
        private ActionAdaptiveTargetClip m_AdaptiveTargetClip;
        public ActionAdaptiveTargetClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_AdaptiveTargetClip = actionClip as ActionAdaptiveTargetClip;
        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            m_AdaptiveTargetClip.range = EditorGUILayout.FloatField("…˙–ß∑∂Œß", m_AdaptiveTargetClip.range);
            m_AdaptiveTargetClip.stopDistance = EditorGUILayout.FloatField("Õ£÷πæ‡¿Î", m_AdaptiveTargetClip.stopDistance);

            return isDirty;
        }
    }
}

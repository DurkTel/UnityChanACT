using LGameFramework.GameLogic;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionClipEditor 
    {
        private ActionClip m_ActionClip;

        public ActionClipEditor(ActionClip actionClip)
        {
            m_ActionClip = actionClip;
        }

        public virtual bool OnInspectorGUI()
        {
            bool isDirty = false;
            UnityEditor.EditorGUILayout.LabelField("Clip Label");

            UnityEditor.EditorGUI.indentLevel++;
            m_ActionClip.clipLabel = UnityEditor.EditorGUILayout.TextField(m_ActionClip.clipLabel);
            UnityEditor.EditorGUI.indentLevel--;

            UnityEditor.EditorGUILayout.LabelField("Clip Timing");

            UnityEditor.EditorGUI.indentLevel++;

            UnityEditor.EditorGUI.BeginChangeCheck();
            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                UnityEditor.EditorGUILayout.LabelField("Start");
                GUILayout.FlexibleSpace();
                GUILayout.Label("f");
                m_ActionClip.StartTick = Mathf.Clamp(UnityEditor.EditorGUILayout.IntField(m_ActionClip.StartTick), 0, m_ActionClip.EndTick - 1);
                GUILayout.Label("s");
                UnityEditor.EditorGUILayout.FloatField(m_ActionClip.StartTick * TimeLineArea.c_FrameSec);
            }
            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                UnityEditor.EditorGUILayout.LabelField("End");
                GUILayout.FlexibleSpace();
                GUILayout.Label("f");
                m_ActionClip.EndTick = Mathf.Max(UnityEditor.EditorGUILayout.IntField(m_ActionClip.EndTick), m_ActionClip.StartTick + 1);
                GUILayout.Label("s");
                UnityEditor.EditorGUILayout.FloatField(m_ActionClip.EndTick * TimeLineArea.c_FrameSec);
            }
            if (UnityEditor.EditorGUI.EndChangeCheck())
            {
                isDirty = true;
            }
            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                UnityEditor.EditorGUILayout.LabelField("Duration");
                GUILayout.FlexibleSpace();
                GUILayout.Label("f");
                UnityEditor.EditorGUILayout.IntField(m_ActionClip.Duration);
                GUILayout.Label("s");
                UnityEditor.EditorGUILayout.FloatField(m_ActionClip.Duration * TimeLineArea.c_FrameSec);

            }

            UnityEditor.EditorGUI.indentLevel--;
            UnityEditor.EditorGUILayout.Space();

            UnityEditor.EditorGUILayout.LabelField("Clip Params");
            UnityEditor.EditorGUI.indentLevel++;

            return isDirty;
        }
    }
}

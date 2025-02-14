using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public abstract class ActionClip
    {
        public string clipLabel;

        public string actionId;

        [SerializeField]
        protected int m_StartTick;
        /// <summary>
        /// 开始时间
        /// </summary>
        public int StartTick { get { return m_StartTick; } set { m_StartTick = value; } }

        [SerializeField]
        protected int m_EndTick;
        /// <summary>
        /// 结束时间
        /// </summary>
        public int EndTick { get { return m_EndTick; } set { m_EndTick = value; } }

        /// <summary>
        /// 持续时间
        /// </summary>
        public int Duration { get { return m_EndTick - m_StartTick; } }

        /// <summary>
        /// 更新时间
        /// </summary>
        /// <param name="sTime"></param>
        /// <param name="eTime"></param>
        public virtual void UpdateTime(int sTime, int eTime)
        {
            m_StartTick = sTime;
            m_EndTick = eTime;
        }

        public virtual string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionClipEditor";
        }

#if UNITY_EDITOR

        public virtual bool OnInspectorGUI()
        {
            bool isDirty = false;
            UnityEditor.EditorGUILayout.LabelField("Clip Label");

            UnityEditor.EditorGUI.indentLevel++;
            clipLabel = UnityEditor.EditorGUILayout.TextField(clipLabel);
            UnityEditor.EditorGUI.indentLevel--;

            UnityEditor.EditorGUILayout.LabelField("Clip Timing");

            UnityEditor.EditorGUI.indentLevel++;

            UnityEditor.EditorGUI.BeginChangeCheck();
            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                UnityEditor.EditorGUILayout.LabelField("Start");
                GUILayout.FlexibleSpace();
                GUILayout.Label("f");
                m_StartTick = Mathf.Clamp(UnityEditor.EditorGUILayout.IntField(m_StartTick), 0, EndTick - 1);
                GUILayout.Label("s");
                UnityEditor.EditorGUILayout.FloatField(m_StartTick * 0.02f);
            }
            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                UnityEditor.EditorGUILayout.LabelField("End");
                GUILayout.FlexibleSpace();
                GUILayout.Label("f");
                m_EndTick = Mathf.Max(UnityEditor.EditorGUILayout.IntField(m_EndTick), StartTick + 1);
                GUILayout.Label("s");
                UnityEditor.EditorGUILayout.FloatField(m_EndTick * 0.02f);
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
                UnityEditor.EditorGUILayout.IntField(Duration);
                GUILayout.Label("s");
                UnityEditor.EditorGUILayout.FloatField(Duration * 0.02f);

            }

            UnityEditor.EditorGUI.indentLevel--;
            UnityEditor.EditorGUILayout.Space();

            UnityEditor.EditorGUILayout.LabelField("Clip Params");
            UnityEditor.EditorGUI.indentLevel++;

            return isDirty;
        }
#endif
    }
}

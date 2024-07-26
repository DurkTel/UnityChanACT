#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;

namespace GAS.Runtime
{
    [System.Serializable]
    public class TimeLineAbilityClip
    {
        public string clipLabel = "Clip";

        [SerializeField]
        protected int m_StartTick;
        /// <summary>
        /// 开始时间
        /// </summary>
        public int StartTick { get { return m_StartTick; } }

        [SerializeField]
        protected int m_EndTick;
        /// <summary>
        /// 结束时间
        /// </summary>
        public int EndTick { get { return m_EndTick; } }

        /// <summary>
        /// 持续时间
        /// </summary>
        public int Duration { get { return m_EndTick - m_StartTick; }}

        /// <summary>
        /// 更新时间
        /// </summary>
        /// <param name="sTime"></param>
        /// <param name="eTime"></param>
        public void UpdateTime(int sTime, int eTime)
        { 
            m_StartTick = sTime;
            m_EndTick = eTime;
        }

#if UNITY_EDITOR

        public virtual bool OnInspectorGUI()
        {
            bool isDirty = false;
            EditorGUI.indentLevel++;

            clipLabel = EditorGUILayout.TextField(clipLabel);

            EditorGUILayout.LabelField("Clip Timing");

            EditorGUI.indentLevel++;

            EditorGUI.BeginChangeCheck();
            using (new EditorGUILayout.HorizontalScope())
            {
                EditorGUILayout.LabelField("Start");
                GUILayout.FlexibleSpace();
                GUILayout.Label("f");
                m_StartTick = Mathf.Clamp(EditorGUILayout.IntField(m_StartTick), 0, EndTick - 1);
                GUILayout.Label("s");
                EditorGUILayout.FloatField(m_StartTick * 0.02f);
            }
            using (new EditorGUILayout.HorizontalScope())
            {
                EditorGUILayout.LabelField("End");
                GUILayout.FlexibleSpace();
                GUILayout.Label("f");
                m_EndTick = Mathf.Max(EditorGUILayout.IntField(m_EndTick), StartTick + 1);
                GUILayout.Label("s");
                EditorGUILayout.FloatField(m_EndTick * 0.02f);
            }
            if (EditorGUI.EndChangeCheck())
            {
                isDirty = true;
            }
            using (new EditorGUILayout.HorizontalScope())
            {
                EditorGUILayout.LabelField("Duration");
                GUILayout.FlexibleSpace();
                GUILayout.Label("f");
                EditorGUILayout.IntField(Duration);
                GUILayout.Label("s");
                EditorGUILayout.FloatField(Duration * 0.02f);

            }

            EditorGUI.indentLevel -= 2;
            EditorGUILayout.Space(10);    

            return isDirty;
        }
#endif
    }
}

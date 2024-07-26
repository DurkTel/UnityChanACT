using GAS.Runtime;
using LGameFramework.GameEditor;
using UnityEditor;
using UnityEngine;

namespace GAS.Editor
{
    //[CustomEditor(typeof(SkillAbilityAsset), true)]
    public partial class SkillAbilityEditor : GameplayAbilityAssetEditor
    {

        private TimeLineArea m_TimeLineArea;

        private float m_SplitterPosition = 200;

        private bool m_IsDraggingSplitter;

        private bool m_IsPlayingTimeline;

        private float m_PlayTotalTime;

        private float m_LastUpdateTime;

        private int m_StartTick;

        private void OnEnable()
        {
            m_AbilityAsset = target as GameplayAbilityAsset;
            m_TagsArrayInspector ??= new TagsArrayInspector(m_AbilityAsset);

            m_TimeLineArea = new TimeLineArea();
            m_TimeLineArea.Repaint += Repaint;
            m_TimeLineArea.OnSelectTick += ResetTimePlaying;

            EditorApplication.update += OnEditorUpdate;
        }

        private void OnDisable()
        {
            EditorApplication.update -= OnEditorUpdate;
        }

        private void OnEditorUpdate()
        {
            if (m_IsPlayingTimeline)
            {
                var currentTime = (float)EditorApplication.timeSinceStartup; //编辑器模式 不能用Time.deltaTime
                var deltaTime = currentTime - m_LastUpdateTime;
                m_LastUpdateTime = currentTime;

                m_PlayTotalTime += deltaTime;
                var targetFrame = (int)(m_PlayTotalTime * m_TimeLineArea.FrameRate) + m_StartTick; //如果开始播放时不是0帧 要加上该帧

                //模拟fixedUpdate 
                while (m_TimeLineArea.CurrentSelectedTick < targetFrame)
                {
                    m_TimeLineArea.CurrentSelectedTick++;
                    Repaint();
                }

                if (m_TimeLineArea.CurrentSelectedTick >= m_TimeLineArea.TimelineLength)
                {
                    ResetTimePlaying();
                }
            }
        }

        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            Rect inspector = EditorGUILayout.GetControlRect();
            GUILayoutUtility.GetRect(inspector.width, 1000);
            float y = 260;

            Rect topRect = new Rect(10, y - 23, 620, 20);
            Rect leftRect = new Rect(10, y, m_SplitterPosition, 600);
            Rect splitterRect = new Rect(m_SplitterPosition + 10, y, 2, 600);
            Rect rightRect = new Rect(m_SplitterPosition + 12, y, 620 - m_SplitterPosition - 22, 600);

            GUILayout.BeginArea(topRect, EditorStyles.toolbar);
            OnDrawToolBar();
            GUILayout.EndArea();

            GUILayout.BeginArea(leftRect, EditorStyles.textField);
            OnDrawLeftToolBar();
            GUILayout.EndArea();

            //GUI.Box(rightRect, "");
            //GUILayout.BeginArea(rightRect);
            //m_TimeLineArea.OnUpdate(new Rect(rightRect.x + 10, rightRect.y, rightRect.width, 22));

            //GUILayout.EndArea();

            EditorGUIUtility.AddCursorRect(splitterRect, MouseCursor.ResizeHorizontal);

            if (Event.current.type == EventType.MouseDown && splitterRect.Contains(Event.current.mousePosition))
            {
                m_IsDraggingSplitter = true;
            }

            if (m_IsDraggingSplitter)
            {
                m_SplitterPosition = Mathf.Clamp(Event.current.mousePosition.x, 200, 620 - 200);
                Repaint();

                if (Event.current.type == EventType.MouseUp)
                {
                    m_IsDraggingSplitter = false;
                }
            }
        }

        private void OnDrawToolBar()
        {
            using (new GUILayout.HorizontalScope())
            {
                var btnWidth = GUILayout.Width(30);

                if (GUILayout.Button(GameEditorStyles.gotoBeginingContent, EditorStyles.toolbarButton, btnWidth))
                {
                    m_TimeLineArea.CurrentSelectedTick = 0;
                    ResetTimePlaying();
                }

                if (GUILayout.Button(GameEditorStyles.previousFrameContent, EditorStyles.toolbarButton, btnWidth))
                {
                    m_TimeLineArea.CurrentSelectedTick = Mathf.Max(0, m_TimeLineArea.CurrentSelectedTick - 1);
                    ResetTimePlaying();
                }

                EditorGUI.BeginChangeCheck();
                var isPlay = GUILayout.Toggle(m_IsPlayingTimeline, GameEditorStyles.playContent, EditorStyles.toolbarButton, btnWidth);
                if (EditorGUI.EndChangeCheck())
                {
                    m_IsPlayingTimeline = isPlay;
                    if (m_IsPlayingTimeline)
                    {
                        m_StartTick = m_TimeLineArea.CurrentSelectedTick;
                        m_LastUpdateTime = (float)EditorApplication.timeSinceStartup;
                    }

                }

                if (GUILayout.Button(GameEditorStyles.nextFrameContent, EditorStyles.toolbarButton, btnWidth))
                {
                    m_TimeLineArea.CurrentSelectedTick = Mathf.Min(m_TimeLineArea.TimelineLength, m_TimeLineArea.CurrentSelectedTick + 1);
                    ResetTimePlaying();
                }

                if (GUILayout.Button(GameEditorStyles.gotoEndContent, EditorStyles.toolbarButton, btnWidth))
                {
                    m_TimeLineArea.CurrentSelectedTick = m_TimeLineArea.TimelineLength;
                    ResetTimePlaying();
                }

                EditorGUI.BeginChangeCheck();
                m_TimeLineArea.CurrentSelectedTick = EditorGUILayout.IntField(m_TimeLineArea.CurrentSelectedTick, GUILayout.Width(100));
                if (EditorGUI.EndChangeCheck())
                    ResetTimePlaying();
            }
        }

        private void OnDrawLeftToolBar()
        {
            using (new GUILayout.HorizontalScope(EditorStyles.toolbar))
            {
                if (EditorGUILayout.DropdownButton(GameEditorStyles.newContent, FocusType.Passive, EditorStyles.toolbarPopup))
                {
                    
                }

                GUILayout.FlexibleSpace();

            }
        }

        private void ResetTimePlaying()
        {
            m_IsPlayingTimeline = false;
            m_PlayTotalTime = 0;
        }
    }
}

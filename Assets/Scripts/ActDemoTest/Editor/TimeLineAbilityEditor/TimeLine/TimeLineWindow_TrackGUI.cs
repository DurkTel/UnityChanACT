using LGameFramework.GameEditor;
using UnityEditor;
using UnityEngine;

namespace GAS.Editor
{
    public partial class TimeLineWindow : UnityEditor.EditorWindow
    {
        /// <summary>
        /// 绘制头顶工具栏
        /// </summary>
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

                GUILayout.FlexibleSpace();

                if (GUILayout.Button("Save", EditorStyles.toolbarButton, GUILayout.Width(60)))
                {
                    EditorUtility.SetDirty(m_AbilityAsset);
                }

            }
        }

        /// <summary>
        /// 绘制左边工具栏
        /// </summary>
        private void OnDrawLeftToolBar()
        {
            using (new GUILayout.HorizontalScope(EditorStyles.toolbar))
            {
                if (EditorGUILayout.DropdownButton(GameEditorStyles.newContent, FocusType.Passive, EditorStyles.toolbarPopup))
                {
                    OpenAddTrackMenu();
                }

                GUILayout.FlexibleSpace();

            }
        }

        /// <summary>
        /// 绘制轨道头部
        /// </summary>
        private void OnDrawTrackHeader()
        {
            GUILayout.Space(5);

            using (new GUILayout.VerticalScope())
            {
                for (int i = 0; i < m_TrackClipGUIData.Count; i++)
                {
                    Rect rect = GUILayoutUtility.GetRect(m_LeftRect.width, 35f);
                    EditorGUILayout.Space(3);
                    Color color = m_CurrentSelectTrack == i ? TimeLineStyles.colorSelection : TimeLineStyles.colorTrackHeaderBackground;  
                    EditorGUI.DrawRect(rect, color);
                    var kind = new Rect(rect);
                    kind.width = 4;

                    var track = m_AbilityAsset.AbilityTracks[i];

                    OnDrawColorKind(kind, track.TrackColor);

                    kind.width = rect.width;
                    kind.xMin += 20;
                    GUI.Label(kind, string.IsNullOrEmpty(track.trackLabel) ? track.GetType().Name : track.trackLabel);
                    var e = Event.current;
                    if (e.type == EventType.MouseDown && rect.Contains(e.mousePosition))
                    {
                        if (e.button == 1)
                        {
                            OpenOperateTrackpMenu();
                            e.Use();
                        }
                        else if (e.button == 0)
                        {
                            m_CurrentSelectTrack = i;
                            Repaint();
                        }
                    }
                }
            }
        }

        void OnDrawColorKind(Rect rect, Color color)
        {
            EditorGUI.DrawRect(rect, color);
        }

        private bool m_IsRenameing;

        /// <summary>
        /// 绘制轨道
        /// </summary>
        private void OnDrawTrack()
        {
            GUILayout.Space(26);

            using (new GUILayout.VerticalScope())
            {
                for (int i = 0; i < m_TrackClipGUIData.Count; i++)
                {
                    Rect rect = GUILayoutUtility.GetRect(m_RightRect.width, 35f);
                    rect.width = m_TimeLineArea.TimelineLength * m_TimeLineArea.Scale;
                    EditorGUILayout.Space(3);
                    bool isSelect = m_CurrentSelectTrack == i;
                    Color color = isSelect ? TimeLineStyles.colorTrackBackgroundSelected : TimeLineStyles.colorTrackBackground;
                    EditorGUI.DrawRect(rect, color);

                    DrawTrackClip(m_TrackClipGUIData[i], i);

                    var e = Event.current;
                    if (e.type == EventType.MouseDown)
                    {
                        if (e.button == 0 && rect.Contains(e.mousePosition))
                        {
                            m_CurrentSelectTrack = i;
                            Repaint();
                        }
                        else if (e.button == 1 && rect.Contains(e.mousePosition))
                        {
                            OpneAddClipMenu();
                        }
                    }
                }
            }
        }
    }
}

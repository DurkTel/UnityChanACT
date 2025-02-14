using LGameFramework.GameBase;
using LGameFramework.GameEditor;
using LGameFramework.GameLogic;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameEditor
{
    public partial class ActionWindow : EditorWindow
    {
        private static bool s_ActionWindowOpening = false;

        private static ActionWindow s_Instance = null;

        private static ActionInfo s_SelectActionInfo = null;
        public static ActionInfo ActionInfo { get { return s_SelectActionInfo; } }

        [MenuItem("LGame/ActionEditor")]
        private static void OpenGUI()
        {
            if (s_ActionWindowOpening)
                return;

            float height = 620;
            float manifestHeight = 200;
            float leftWidth = 500;
            float middleWidth = 1000;
            float rightWidth = 635;


            var container = EditorContainerWindow.CreateInstance();
            var splitView = EditorSplitView.CreateInstance();

            EditorContainerWindow.SetRootView(container, splitView);

            var leftSplitView = EditorSplitView.CreateInstance();
            EditorSplitView.SetVertical(leftSplitView, true);
            EditorDockArea.SetPosition(leftSplitView, new Rect(0, 0, leftWidth, height));

            ActionPreview preview = (ActionPreview)ScriptableObject.CreateInstance(typeof(ActionPreview));
            preview.titleContent = new GUIContent("Action Preview");
            var previewDockArea = EditorDockArea.CreateInstance();
            EditorDockArea.SetPosition(previewDockArea, new Rect(0, 0, leftWidth, height - manifestHeight));
            EditorDockArea.AddTab(previewDockArea, preview);

            ActionManifestWindow manifest = (ActionManifestWindow)ScriptableObject.CreateInstance(typeof(ActionManifestWindow));
            manifest.titleContent = EditorGUIUtility.TrTextContentWithIcon("Action Manifest", "UnityEditor.SceneHierarchyWindow");
            var manifestDockArea = EditorDockArea.CreateInstance();
            EditorDockArea.SetPosition(manifestDockArea, new Rect(0, 0, leftWidth, manifestHeight));
            EditorDockArea.AddTab(manifestDockArea, manifest);

            EditorSplitView.AddChild(leftSplitView, previewDockArea);
            EditorSplitView.AddChild(leftSplitView, manifestDockArea);

            EditorSplitView.AddChild(splitView, leftSplitView);


            ActionWindow timeline = (ActionWindow)ScriptableObject.CreateInstance(typeof(ActionWindow));
            timeline.m_TimeLineArea.OnTickChange += preview.OnTimeTick;
            timeline.OnAssetUpdate += preview.OnAssetUpdate;
            timeline.titleContent = EditorGUIUtility.TrTextContentWithIcon("Action TimeLine", "UnityEditor.Timeline.TimelineWindow");
            var timelineDockArea = EditorDockArea.CreateInstance();
            EditorDockArea.SetPosition(timelineDockArea, new Rect(0, 0, middleWidth, height));
            EditorDockArea.AddTab(timelineDockArea, timeline);
            EditorSplitView.AddChild(splitView, timelineDockArea);

            ActionInspector inspector = (ActionInspector)ScriptableObject.CreateInstance(typeof(ActionInspector));
            inspector.titleContent = EditorGUIUtility.TrTextContentWithIcon("Action Inspector", "UnityEditor.InspectorWindow");
            inspector.OnRepaint += () => { timeline.OnInit(); timeline.Repaint(); };
            inspector.OnRepaint += () => { preview.OnPreviewRepaint(); };
            timeline.m_InspectorWindow = inspector;
            var inspectorDockArea = EditorDockArea.CreateInstance();
            EditorDockArea.SetPosition(inspectorDockArea, new Rect(0, 0, rightWidth, height));
            EditorDockArea.AddTab(inspectorDockArea, inspector);
            EditorSplitView.AddChild(splitView, inspectorDockArea);

            EditorEditorWindow.MakeParentsSettingsMatchMe(timeline);
            EditorEditorWindow.MakeParentsSettingsMatchMe(inspector);

            EditorContainerWindow.SetPosition(container, new Rect(100, 300, leftWidth + middleWidth + rightWidth, height));
            EditorSplitView.SetPosition(splitView, new Rect(0, 0, leftWidth + middleWidth + rightWidth, height));
            EditorContainerWindow.Show(container, 0, true, false, true);
            EditorContainerWindow.OnResize(container);

            s_ActionWindowOpening = true;
            s_Instance = timeline;

        }

        public static void UpdateSelectInfo(ActionInfo info)
        {
            if (!s_ActionWindowOpening)
                return;
            s_SelectActionInfo = info;
            s_Instance.OnInit();
            s_Instance.OnAssetUpdate?.Invoke(info);
            s_Instance.Repaint();
            s_Instance.Focus();
        }

        public UnityAction<ActionInfo> OnAssetUpdate;

        private TimeLineArea m_TimeLineArea;

        private ActionInspector m_InspectorWindow;

        private Vector2 m_ScrollPositionY, m_ScrollPositionX;

        private Rect m_TopRect, m_LeftRect, m_RightRect, m_TimeLineRect;

        private float m_SplitterPosition = 200;

        private float m_TimeLineAreaHeight = 22f;

        private bool m_IsDraggingSplitter;

        private bool m_IsPlayingTimeline;

        private float m_PlayTotalTime;

        private float m_LastUpdateTime;

        private int m_StartTick;

        private int m_CurrentSelectTrack;

        private ActionClip m_CurrentSelectClip;

        private List<List<TrackClipGUIData>> m_TrackClipGUIData = new List<List<TrackClipGUIData>>();


        public void OnInit()
        {
            if (s_SelectActionInfo == null)
                return;

            m_TrackClipGUIData.Clear();

            for (int i = 0; i < s_SelectActionInfo.Count; i++)
            {
                List<TrackClipGUIData> temp = new List<TrackClipGUIData>();

                var track = s_SelectActionInfo[i];
                for (int j = 0; j < track.Count; j++)
                {
                    var clip = track[j];
                    TrackClipGUIData guiData = new TrackClipGUIData();
                    guiData.rectRaw = new Rect(clip.StartTick * 10, 28 + i * 38, clip.Duration * 10, 35);
                    temp.Add(guiData);
                }

                m_TrackClipGUIData.Add(temp);
            }

            RepaintInspector();
        }

        private void OnEnable()
        {
            m_TimeLineArea = new TimeLineArea();
            m_TimeLineArea.ShowScrollbar = false;
            m_TimeLineArea.Repaint += Repaint;
            m_TimeLineArea.OnSelectTick += ResetTimePlaying;
            m_CurrentSelectTrack = -1;
        }

        private void OnDisable()
        {
            m_TimeLineArea.Repaint -= Repaint;
            m_TimeLineArea.OnSelectTick -= ResetTimePlaying;
            s_ActionWindowOpening = false;
            s_SelectActionInfo = null;
            s_Instance = null;
        }

        private void Update()
        {
            if (m_IsPlayingTimeline)
            {
                var currentTime = (float)EditorApplication.timeSinceStartup; //编辑器模式 不能用Time.deltaTime
                var deltaTime = currentTime - m_LastUpdateTime;
                m_LastUpdateTime = currentTime;

                m_PlayTotalTime += deltaTime;
                var targetFrame = (int)(m_PlayTotalTime * TimeLineArea.c_FrameRate) + m_StartTick; //如果开始播放时不是0帧 要加上该帧

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

        private void OnGUI()
        {
            m_TimeLineArea.TimeLineHeight = position.height;
            float y = 23;
            m_TopRect = new Rect(0, 0, position.width, 20);
            m_LeftRect = new Rect(0, y, m_SplitterPosition, position.height);
            m_RightRect = new Rect(m_SplitterPosition + 7, y, position.width - m_SplitterPosition, position.height);
            Rect splitterRect = new Rect(m_SplitterPosition, y, 2, position.height);

            GUILayout.BeginArea(m_TopRect, EditorStyles.toolbar);
            OnDrawToolBar();
            GUILayout.EndArea();

            if (s_SelectActionInfo == null)
            {
                GUILayout.FlexibleSpace();
                using (new EditorGUILayout.HorizontalScope())
                {
                    GUILayout.FlexibleSpace();
                    GUILayout.Label("当前尚未选择动作，请新建动作或在动作列表选择一个动作");
                    GUILayout.FlexibleSpace();
                }
                //using (new EditorGUILayout.HorizontalScope())
                //{
                //    GUILayout.FlexibleSpace();
                //    if (GUILayout.Button("打开动作列表", GUILayout.Height(50), GUILayout.Width(150)))
                //    {
                //        ActionManifestWindow.OpenGUI();
                //    }

                //    GUILayout.FlexibleSpace();
                //}
                GUILayout.FlexibleSpace();
                return;
            }

            GUILayout.BeginArea(m_LeftRect, EditorStyles.textField);
            OnDrawLeftToolBar();
            m_ScrollPositionY = GUILayout.BeginScrollView(m_ScrollPositionY);
            OnDrawTrackHeader();
            GUILayout.EndScrollView();
            GUILayout.EndArea();
            OnClickTrackMenu();

            GUILayout.BeginArea(m_RightRect, EditorStyles.textField);
            var contentRect = new Rect(0, 0, m_TimeLineArea.TimelineLength * m_TimeLineArea.Scale, m_RightRect.height - m_TimeLineAreaHeight - 20);
            var viewRect = new Rect(0, 0, m_RightRect.width, m_RightRect.height - m_TimeLineAreaHeight);
            if (m_ScrollPositionX != m_TimeLineArea.ScrollPosition)
                m_ScrollPositionX = m_TimeLineArea.ScrollPosition;
            m_ScrollPositionX = GUI.BeginScrollView(viewRect, m_ScrollPositionX, contentRect);

            OnDrawTrack();

            GUI.EndScrollView();
            GUILayout.EndArea();

            m_TimeLineRect = new Rect(m_RightRect);
            m_TimeLineArea.OnUpdate(m_TimeLineRect, m_TimeLineAreaHeight);

            EditorGUIUtility.AddCursorRect(splitterRect, MouseCursor.ResizeHorizontal);

            if (Event.current.type == EventType.MouseDown && splitterRect.Contains(Event.current.mousePosition))
            {
                m_IsDraggingSplitter = true;
            }

            if (m_IsDraggingSplitter)
            {
                m_SplitterPosition = Mathf.Clamp(Event.current.mousePosition.x, 200, position.width - 200);
                Repaint();

                if (Event.current.type == EventType.MouseUp)
                {
                    m_IsDraggingSplitter = false;
                }
            }
        }

        private void ResetTimePlaying()
        {
            m_IsPlayingTimeline = false;
            m_PlayTotalTime = 0;
        }

        private void GetSelectIndex(ref int trackIndex, ref int clipIndex)
        {
            if (m_CurrentSelectTrack == -1)
                return;

            for (int i = 0; i < m_TrackClipGUIData.Count; i++)
            {
                if (m_CurrentSelectTrack == i)
                {
                    trackIndex = i;
                    return;
                }

                var track = m_TrackClipGUIData[i];
                for (int j = 0; j < track.Count; j++)
                {
                    if (m_CurrentSelectTrack == track[j].GetHashCode())
                    {
                        trackIndex = i;
                        clipIndex = j;
                        return;
                    }
                }
            }
        }

        private void RepaintInspector()
        {
            m_InspectorWindow.Repaint();
        }
    }
}

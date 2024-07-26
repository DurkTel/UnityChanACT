using GAS.Runtime;
using LGameFramework.GameEditor;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEngine;
using UnityEngine.Events;

namespace GAS.Editor
{
    public partial class TimeLineWindow : UnityEditor.EditorWindow
    {
        [MenuItem("LGame/GAS/GAS SkillEditor")]
        private static TimeLineWindow OpenGUI()
        {
            float height = 620;
            float leftWidth = 500;
            float middleWidth = 1000;
            float rightWidth = 635;


            var container = EditorContainerWindow.CreateInstance();
            var splitView = EditorSplitView.CreateInstance();

            EditorContainerWindow.SetRootView(container, splitView);

            TimeLinePreview preview = (TimeLinePreview)ScriptableObject.CreateInstance(typeof(TimeLinePreview));
            preview.titleContent = new GUIContent("GAS Preview");
            var previewDockArea = EditorDockArea.CreateInstance();
            EditorDockArea.SetPosition(previewDockArea, new Rect(0, 0, leftWidth, height));
            EditorDockArea.AddTab(previewDockArea, preview);
            EditorSplitView.AddChild(splitView, previewDockArea);


            TimeLineWindow timeline = (TimeLineWindow)ScriptableObject.CreateInstance(typeof(TimeLineWindow));
            timeline.m_TimeLineArea.OnTickChange += preview.OnTimeTick;
            timeline.OnAssetUpdate += preview.OnAssetUpdate;
            timeline.titleContent = new GUIContent("GAS TimeLine");
            var timelineDockArea = EditorDockArea.CreateInstance();
            EditorDockArea.SetPosition(timelineDockArea, new Rect(0, 0, middleWidth, height));
            EditorDockArea.AddTab(timelineDockArea, timeline);
            EditorSplitView.AddChild(splitView, timelineDockArea);  

            TimeLineInspector inspector = (TimeLineInspector)ScriptableObject.CreateInstance(typeof(TimeLineInspector));
            inspector.titleContent = new GUIContent("GAS Inspector");
            inspector.OnRepaint += () => { timeline.OnInit(); timeline.Repaint(); };
            inspector.OnRepaint += () => { preview.OnPreviewRepaint(); };
            timeline.m_InspectorWindow = inspector;
            var inspectorDockArea = EditorDockArea.CreateInstance();
            EditorDockArea.SetPosition(inspectorDockArea, new Rect(0, 0, rightWidth, height));
            EditorDockArea.AddTab(inspectorDockArea, inspector);
            EditorSplitView.AddChild(splitView, inspectorDockArea);

            EditorEditorWindow.MakeParentsSettingsMatchMe(timeline);
            EditorEditorWindow.MakeParentsSettingsMatchMe(inspector);

            EditorContainerWindow.SetPosition(container, new Rect(100, 100, leftWidth + middleWidth + rightWidth, height));
            EditorSplitView.SetPosition(splitView, new Rect(0, 0, leftWidth + middleWidth + rightWidth, height));
            EditorContainerWindow.Show(container, 0, true, false, true);
            EditorContainerWindow.OnResize(container);

            return timeline;
        }

        [OnOpenAsset(1)]
        public static bool CallOpenTimeLineWindow(int instanceID, int line)
        {
            var obj = EditorUtility.InstanceIDToObject(instanceID);
            if (obj is TimeLineAbilityAsset asset)
            {
                var win = OpenGUI();
                win.AbilityAsset = asset;
                win.OnInit();
                win.Repaint();

                return true;
            }
            return false;
        }

        public UnityAction<TimeLineAbilityAsset> OnAssetUpdate;

        private TimeLineArea m_TimeLineArea;

        private TimeLineInspector m_InspectorWindow;

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

        private TimeLineAbilityAsset m_AbilityAsset;

        public TimeLineAbilityAsset AbilityAsset
        {
            get { return m_AbilityAsset; }
            set 
            { 
                m_AbilityAsset = value;
                OnAssetUpdate?.Invoke(m_AbilityAsset);
            }
        }

        private TimeLineAbilityClip m_CurrentSelectClip;

        private List<List<TrackClipGUIData>> m_TrackClipGUIData = new List<List<TrackClipGUIData>>();


        public void OnInit()
        {
            if (m_AbilityAsset == null)
                return;

            m_TrackClipGUIData.Clear();

            for (int i = 0; i < m_AbilityAsset.AbilityTracks.Count; i++)
            {
                List<TrackClipGUIData> temp = new List<TrackClipGUIData>();

                var track = m_AbilityAsset.AbilityTracks[i];
                for (int j = 0; j < track.Clips.Count; j++)
                {
                    var clip = track.Clips[j];
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
        }

        private void OnSelectionChange()
        {
            //m_AbilityAsset = null;
            if (Selection.activeObject != null && Selection.activeObject is TimeLineAbilityAsset asset)
                AbilityAsset = asset;

            OnInit();
            Repaint();
        }

        private void Update()
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

            if (m_AbilityAsset == null)
            {
                var emptyRect = new Rect(m_TopRect);
                emptyRect.yMax += 400;
                emptyRect.xMin += 400;
                GUI.Label(emptyRect, "请选中要编辑的SkillAbilityAsset");
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

using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering;

namespace GAS.Editor
{
    public partial class TimeLineWindow : UnityEditor.EditorWindow
    {

        public class TrackClipGUIData
        {
            public Rect rectRaw;
            public Rect rectScale;
            public ClipBlendData clipBlend;
            public bool isDrag;
            public int isSplitter;
        }

        public enum BlendFadeType
        {
            Node,
            FadeIn,
            FadeOut,
        }

        public struct ClipBlendData
        {
            public Rect rectBlend;
            public BlendFadeType fadeType;
            public ClipBlendData(Rect rectBlend, BlendFadeType fadeType)
            { 
                this.rectBlend = rectBlend;
                this.fadeType = fadeType;   
            }
        }

        private static Vector3[] s_BlendVertices = new Vector3[3];
        private static Vector3[] s_BlendLines = new Vector3[4];

        #region GUI绘制

        /// <summary>
        /// 绘制片段背景
        /// </summary>
        /// <param name="clipCenterSection"></param>
        /// <param name="selected"></param>
        private void DrawTrackClipBackground(Rect clipCenterSection, bool selected)
        {
            if (Event.current.type != EventType.Repaint)
                return;

            var color = selected ? TimeLineStyles.clipSelectedBckg : TimeLineStyles.clipBckg;
            EditorGUI.DrawRect(clipCenterSection, color);
        }

        /// <summary>
        /// 绘制片段混合相交部分
        /// </summary>
        /// <param name="clips"></param>
        private void DrawTrackClipBlend(List<TrackClipGUIData> clips)
        {
            var prevColor = Handles.color;
            Handles.color = TimeLineStyles.clipBlendIn;
            for (int i = 0; i < clips.Count; i++)
            {
                for (int j = i + 1; j < clips.Count; j++)
                {
                    if (clips[i].rectScale.Overlaps(clips[j].rectScale))
                    {
                        var overlapRect = GetOverlapRect(clips[i].rectScale, clips[j].rectScale);
                        var isFadeIn = clips[i].rectRaw.x <= clips[j].rectRaw.x;
                        clips[i].clipBlend = new ClipBlendData(overlapRect, isFadeIn ? BlendFadeType.FadeIn : BlendFadeType.FadeOut);
                        clips[j].clipBlend = new ClipBlendData(overlapRect, !isFadeIn ? BlendFadeType.FadeIn : BlendFadeType.FadeOut);

                        s_BlendVertices[0] = new Vector3(overlapRect.xMin, overlapRect.yMin);
                        s_BlendVertices[1] = new Vector3(overlapRect.xMin, overlapRect.yMax);
                        s_BlendVertices[2] = new Vector3(overlapRect.xMax, overlapRect.yMax);
                        Handles.DrawAAConvexPolygon(s_BlendVertices);

                        s_BlendVertices[0] = new Vector3(overlapRect.xMin, overlapRect.yMin);
                        s_BlendVertices[1] = new Vector3(overlapRect.xMax, overlapRect.yMax);
                        s_BlendVertices[2] = new Vector3(overlapRect.xMax, overlapRect.yMin);
                        Handles.DrawAAConvexPolygon(s_BlendVertices);
                    }
                }
            }
            Handles.color = prevColor;
        }

        /// <summary>
        /// 绘制片段边界
        /// </summary>
        /// <param name="clipInfo"></param>
        private void DrawClipBorder(TrackClipGUIData clipInfo)
        {
            bool isSelect = m_CurrentSelectTrack == clipInfo.GetHashCode();
            Color color = isSelect ? Color.white : TimeLineStyles.clipBorderColor;
            Rect clipRect = clipInfo.rectScale;
            Rect blendRect = clipInfo.clipBlend.rectBlend;
            float thickness = 1f;
            BlendFadeType fadeType = clipInfo.clipBlend.fadeType;

            if (fadeType == BlendFadeType.Node || fadeType == BlendFadeType.FadeIn)
                EditorGUI.DrawRect(new Rect(clipRect.xMin, clipRect.y, thickness, clipRect.height), color); //left
            if (fadeType == BlendFadeType.Node || fadeType == BlendFadeType.FadeOut)
                EditorGUI.DrawRect(new Rect(clipRect.xMax, clipRect.y, thickness, clipRect.height), color); //right

            if (isSelect)
            {
                float xTop = clipRect.width;
                if (fadeType == BlendFadeType.FadeIn)
                    xTop = clipRect.width - (clipRect.xMax - blendRect.xMin);

                EditorGUI.DrawRect(new Rect(clipRect.xMin, clipRect.yMin, xTop, thickness), color); //top

                float xBottom = clipRect.width;
                if (fadeType == BlendFadeType.FadeOut)
                    xBottom = clipRect.width - (blendRect.xMax - clipRect.xMin);

                float xBottom2 = clipRect.xMin;
                if (fadeType == BlendFadeType.FadeOut)
                    xBottom2 = blendRect.xMax;

                EditorGUI.DrawRect(new Rect(xBottom2, clipRect.yMax - thickness, xBottom, thickness), color); //bottom
            }

            if (fadeType != BlendFadeType.Node)
            {
                var halfWidth = thickness / 2.0f;
                var inverse = 1.0f;

                var p0 = blendRect.min;
                var p1 = blendRect.max;
                s_BlendLines[0] = new Vector3(p0.x - halfWidth, p0.y + halfWidth * inverse);
                s_BlendLines[1] = new Vector3(p1.x - halfWidth, p1.y + halfWidth * inverse);
                s_BlendLines[2] = new Vector3(p1.x + halfWidth, p1.y - halfWidth * inverse);
                s_BlendLines[3] = new Vector3(p0.x + halfWidth, p0.y - halfWidth * inverse);
                var prevColor = Handles.color;
                Handles.color = color;
                Handles.DrawAAConvexPolygon(s_BlendLines);
                Handles.color = prevColor;
            }
        }

        /// <summary>
        /// 绘制轨道片段
        /// </summary>
        /// <param name="clips"></param>
        private void DrawTrackClip(List<TrackClipGUIData> clips, int index)
        {
            for (int i = 0; i < clips.Count; i++)
            {
                var clipInfo = clips[i];
                clipInfo.clipBlend = new ClipBlendData(default, BlendFadeType.Node);
                clipInfo.rectScale = new Rect(clipInfo.rectRaw);
                clipInfo.rectScale.width = clipInfo.rectRaw.width * m_TimeLineArea.Scale / 10f;
                clipInfo.rectScale.x = clipInfo.rectRaw.x * m_TimeLineArea.Scale / 10f;

                bool isSelect = m_CurrentSelectTrack == clipInfo.GetHashCode();
                DrawTrackClipBackground(clipInfo.rectScale, isSelect);

                var e = Event.current;

                var splitterLeft = new Rect(clipInfo.rectScale);
                var splitterRight = new Rect(clipInfo.rectScale);
                splitterLeft.width = 2;
                splitterRight.xMin = splitterRight.xMax - 2;
                splitterRight.width = 2;

                EditorGUIUtility.AddCursorRect(splitterLeft, MouseCursor.ResizeHorizontal);
                EditorGUIUtility.AddCursorRect(splitterRight, MouseCursor.ResizeHorizontal);

                if (e.type == EventType.MouseDown)
                {
                    if (e.button == 0 && (splitterLeft.Contains(e.mousePosition) || splitterRight.Contains(e.mousePosition)))
                    {
                        m_CurrentSelectTrack = clipInfo.GetHashCode();

                        int trackIndex = -1;
                        int clipIndex = -1;
                        GetSelectIndex(ref trackIndex, ref clipIndex);
                        m_CurrentSelectClip = m_AbilityAsset.GetClip(trackIndex, clipIndex);
                        clipInfo.isSplitter = splitterLeft.Contains(e.mousePosition) ? 1 : -1;
                        e.Use();
                    }
                    else if (e.button == 0 && clipInfo.rectScale.Contains(e.mousePosition))
                    {
                        m_CurrentSelectTrack = clipInfo.GetHashCode();

                        int trackIndex = -1;
                        int clipIndex = -1;
                        GetSelectIndex(ref trackIndex, ref clipIndex);
                        m_CurrentSelectClip = m_AbilityAsset.GetClip(trackIndex, clipIndex);

                        clipInfo.isDrag = true;
                        m_InspectorWindow.UpdateSelect(m_CurrentSelectClip);
                        e.Use();
                    }
                    else if (e.button == 1 && isSelect && clipInfo.rectScale.Contains(e.mousePosition))
                    {
                        OpenOperateClipMenu();
                        e.Use();
                    }
                }
                else if (e.type == EventType.MouseUp)
                {
                    if (clipInfo.isDrag || clipInfo.isSplitter != 0)
                    {
                        clipInfo.isDrag = false;
                        clipInfo.isSplitter = 0;
                        var xMin = Mathf.RoundToInt(clipInfo.rectRaw.xMin / 10);
                        var xMax = Mathf.RoundToInt(clipInfo.rectRaw.xMax / 10);

                        if (m_CurrentSelectClip != null)
                            m_CurrentSelectClip.UpdateTime(xMin, xMax);

                        clipInfo.rectRaw.xMin = xMin * 10; //对齐帧
                        clipInfo.rectRaw.xMax = xMax * 10; //对齐帧


                        Repaint();
                        RepaintInspector();
                        m_CurrentSelectClip = null;
                    }
                }

                if (e.type == EventType.MouseDrag)
                {
                    if (clipInfo.isSplitter != 0)
                    {
                        var sTime = e.mousePosition.x / m_TimeLineArea.Scale * 10;
                        if (clipInfo.isSplitter == 1)
                            clipInfo.rectRaw.xMin = Mathf.Clamp(sTime, 0, clipInfo.rectRaw.xMax - 10);
                        else
                            clipInfo.rectRaw.xMax = Mathf.Clamp(sTime, clipInfo.rectRaw.xMin + 10, m_TimeLineArea.TimelineLength * m_TimeLineArea.Scale);

                        Repaint();
                    }
                    else if (clipInfo.isDrag)
                    {
                        clipInfo.rectRaw.x += e.delta.x;
                        clipInfo.rectRaw.x = Mathf.Clamp(clipInfo.rectRaw.x, 0, m_TimeLineArea.TimelineLength * m_TimeLineArea.Scale - clipInfo.rectScale.width);

                        Repaint();
                    }
                }
            }

            DrawTrackClipBlend(clips);

            var oriAlig = GUI.skin.label.alignment;
            GUI.skin.label.alignment = TextAnchor.MiddleCenter;

            var track = m_AbilityAsset.AbilityTracks[index];
            Color color = track.TrackColor;
            for (int i = 0; i < clips.Count; i++)
            {
                var clipInfo = clips[i];


                var kind = new Rect(clipInfo.rectScale);
                kind.yMin = kind.yMax - 4;
                kind.height = 4;
                OnDrawColorKind(kind, color);
                DrawClipBorder(clipInfo);

                var clip = track.Clips[i];
                GUI.Label(clipInfo.rectScale, string.IsNullOrEmpty(clip.clipLabel) ? clip.GetType().Name : clip.clipLabel);
            }
            GUI.skin.label.alignment = oriAlig;
        }

        /// <summary>
        /// 返回相交的Rect
        /// </summary>
        /// <param name="rect1"></param>
        /// <param name="rect2"></param>
        /// <returns></returns>
        private Rect GetOverlapRect(Rect rect1, Rect rect2)
        {
            float xMin = Mathf.Max(rect1.xMin, rect2.xMin);
            float xMax = Mathf.Min(rect1.xMax, rect2.xMax);
            float yMin = Mathf.Max(rect1.yMin, rect2.yMin);
            float yMax = Mathf.Min(rect1.yMax, rect2.yMax);

            if (xMin < xMax && yMin < yMax)
            {
                return new Rect(xMin, yMin, xMax - xMin, yMax - yMin);
            }
            else
            {
                return Rect.zero;
            }
        }

        #endregion

        private void OnClickTrackMenu()
        {
            var e = Event.current;
            if (e.type == EventType.MouseDown && e.button == 1)
            {
                var newRect = new Rect(m_LeftRect);
                newRect.yMin += 20;
                if (newRect.Contains(e.mousePosition))
                {
                    OpenAddTrackMenu();
                    e.Use();
                }
            }
        }

        /// <summary>
        /// 打开添加轨道菜单
        /// </summary>
        public void OpenAddTrackMenu()
        {
            Type type = typeof(TimeLineTrack);

            var list = typeof(TimeLineTrack).Assembly
            .GetTypes()
            .Where(t => t.IsClass && !t.IsAbstract && t.IsSubclassOf(type))
            .ToList();

            GenericMenu menu = new GenericMenu();
            foreach (var item in list)
            {
                menu.AddItem(new GUIContent(item.Name), false, () =>
                {
                    var track = Activator.CreateInstance(item) as TimeLineTrack;
                    m_AbilityAsset.AbilityTracks.Add(track);
                    OnInit();
                });
            }
            

            menu.ShowAsContext();
        }

        /// <summary>
        /// 打开添加片段菜单
        /// </summary>
        public void OpneAddClipMenu()
        {
            if (m_AbilityAsset == null || m_CurrentSelectTrack == -1 || m_CurrentSelectTrack >= m_AbilityAsset.AbilityTracks.Count)
                return;
            var mousePos = Event.current.mousePosition;
            GenericMenu menu = new GenericMenu();
            var track = m_AbilityAsset.AbilityTracks[m_CurrentSelectTrack];
            Type baseType = track.GetClipType();
            var list = AppDomain.CurrentDomain.GetAssemblies()
                    .SelectMany(assembly => assembly.GetTypes())
                    .Where(type => type.IsSubclassOf(baseType) && !type.IsAbstract).ToList();

            foreach (var itemType in list)
            {
                menu.AddItem(new GUIContent($"Add {itemType.Name}"), false, () =>
                {
                    var track = m_AbilityAsset.AbilityTracks[m_CurrentSelectTrack];
                    var clip = Activator.CreateInstance(itemType) as TimeLineAbilityClip;
                    var sTime = mousePos.x;
                    sTime = Mathf.RoundToInt(sTime / 10); //对齐帧

                    clip.UpdateTime((int)sTime, (int)sTime + 25);
                    track.Add(clip);
                    OnInit();
                });
            }

            menu.ShowAsContext();
        }

        /// <summary>
        /// 打开操作轨道菜单
        /// </summary>
        public void OpenOperateTrackpMenu()
        {
            GenericMenu menu = new GenericMenu();
            menu.AddItem(new GUIContent("Delete"), false, () =>
            {
                if (m_AbilityAsset == null || m_CurrentSelectTrack == -1)
                    return;

                m_AbilityAsset.AbilityTracks.RemoveAt(m_CurrentSelectTrack);
                OnInit();
            });

            menu.AddItem(new GUIContent("Rename"), false, () =>
            {
                if (m_AbilityAsset == null || m_CurrentSelectTrack == -1)
                    return;
                InputStringWindow.OpenWindow("Rename", (p) =>
                {
                    var track = m_AbilityAsset.AbilityTracks[m_CurrentSelectTrack];
                    track.trackLabel = p[0];
                    Repaint();
                }, new InputStringWindow.InputStringSet[] { new InputStringWindow.InputStringSet() { tips = "Input New Name"} });
            });

            menu.ShowAsContext();

        }

        /// <summary>
        /// 打开操作片段菜单
        /// </summary>
        public void OpenOperateClipMenu()
        {
            GenericMenu menu = new GenericMenu();
            menu.AddItem(new GUIContent("Delete"), false, () =>
            {
                if (m_AbilityAsset == null || m_CurrentSelectTrack == -1)
                    return;

                int trackIndex = -1;
                int clipIndex = -1;
                GetSelectIndex(ref trackIndex, ref clipIndex);

                if (trackIndex == -1 || clipIndex == -1)
                    return;
                m_AbilityAsset.AbilityTracks[trackIndex].RemoveAt(clipIndex);
                OnInit();
            });

            menu.ShowAsContext();

        }
    }
}

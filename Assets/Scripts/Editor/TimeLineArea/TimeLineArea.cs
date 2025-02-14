using System;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameEditor
{

    public class TimeLineArea
    {
        public enum TimeLineTimeFormat
        { 
            /// <summary>
            /// 帧格式
            /// </summary>
            Frame,
            /// <summary>
            /// 秒格式
            /// </summary>
            Seconds
        }

        public enum MouseHolding
        { 
            None,
            /// <summary>
            /// 左键
            /// </summary>
            Left,
            /// <summary>
            /// 中键
            /// </summary>
            Middle,
            /// <summary>
            /// 右键
            /// </summary>
            Right,
        }

        /// <summary>
        /// 最小缩放
        /// </summary>
        private const float c_MinScale = 10f;

        /// <summary>
        /// 最大缩放
        /// </summary>
        private const float c_MaxScale = 100f;

        /// <summary>
        /// 帧速率
        /// </summary>
        public const float c_FrameRate = 15f;

        public const float c_FrameSec = 1 / c_FrameRate;

        /// <summary>
        /// 时间轴最大长度
        /// </summary>
        private int m_TimelineLength = 500;
        public int TimelineLength { get { return m_TimelineLength; } }


        /// <summary>
        /// 当前缩放比例
        /// </summary>
        private float m_Scale;
        public float Scale { get { return m_Scale; } }

        /// <summary>
        /// 当前滑动位置
        /// </summary>
        private Vector2 m_ScrollPosition;
        public Vector2 ScrollPosition { get { return m_ScrollPosition; } set { m_ScrollPosition = value; } }

        /// <summary>
        /// 当前鼠标按住情况
        /// </summary>
        private MouseHolding m_Holding; 

        /// <summary>
        /// 当前选中的刻度
        /// </summary>
        private int m_CurrentSelectedTick;
        public int CurrentSelectedTick 
        { 
            get {  return m_CurrentSelectedTick; } 
            set 
            {
                if (m_CurrentSelectedTick != value)
                {
                    m_CurrentSelectedTick = value;
                    OnTickChange?.Invoke(value);
                }
            } 
        }

        /// <summary>
        /// 帧速率
        /// </summary>
        private float m_TimeLineHeight = 0f;
        public float TimeLineHeight { get { return m_TimeLineHeight; } set { m_TimeLineHeight = value; } }

        public bool ShowScrollbar;

        public UnityAction Repaint;

        public UnityAction OnSelectTick;

        public UnityAction<int> OnTickChange;

        public UnityAction<Vector2> OnDrawTickHeader;

        public TimeLineArea() 
        {
            m_Scale = c_MinScale;
            m_Holding = MouseHolding.None;
            m_CurrentSelectedTick = -1;
        }

        public void OnUpdate(Rect viewRect, float areaHeight)
        {
            GUILayoutUtility.GetRect(viewRect.width, viewRect.height);
            Rect rect = new Rect(viewRect);
            rect.x -= 10;
            //rect.y -= 5;
            rect.width += 20;
            rect.height += 2;
            GUI.Box(rect, "", EditorStyles.helpBox);


            // 计算缩放后的时间轴长度
            float scaledTimelineLength = m_TimelineLength * m_Scale;

            // 绘制时间轴背景
            Rect contentRect = new Rect(viewRect.x, viewRect.y, scaledTimelineLength, areaHeight);

            // 获取当前事件
            Event e = Event.current;

            // 检查是否使用鼠标滚轮滚动
            if (e.type == EventType.ScrollWheel && viewRect.Contains(e.mousePosition))
            {
                // 调整缩放比例
                m_Scale -= e.delta.y;
                m_Scale = Mathf.Clamp(m_Scale, c_MinScale, c_MaxScale);
                e.Use();
            }

            if (e.type == EventType.MouseDown)
            {
                if (e.button == 2 && viewRect.Contains(e.mousePosition))
                {
                    m_Holding = MouseHolding.Middle;
                }
                else if (contentRect.Contains(e.mousePosition))
                {
                    SelectTickAtPosition(e.mousePosition, contentRect);
                    m_Holding = e.button == 1 ? MouseHolding.Left : MouseHolding.Right;

                    Repaint?.Invoke(); // 重新绘制窗口
                }
            }
            else if (e.type == EventType.MouseDrag)
            {
                if (m_Holding == MouseHolding.Middle)
                {
                    m_ScrollPosition.x -= e.delta.x;
                    Repaint?.Invoke();
                }
                if (m_Holding == MouseHolding.Left || m_Holding == MouseHolding.Right)
                {
                    SelectTickAtPosition(e.mousePosition, contentRect);
                    Repaint?.Invoke();
                }
            }
            else if (e.type == EventType.MouseUp)
            {
                m_Holding = MouseHolding.None;
            }

            m_ScrollPosition = GUI.BeginScrollView(new Rect(viewRect.x, viewRect.y, viewRect.width, viewRect.height + 20), m_ScrollPosition, contentRect, false, false, ShowScrollbar? GUI.skin.horizontalScrollbar : GUIStyle.none, ShowScrollbar ? GUI.skin.verticalScrollbar : GUIStyle.none);

            float bottomY = contentRect.height;
            float minHeight = bottomY * 0.8f;
            float maxHeight = bottomY * 0.3f;
            // 绘制时间标记
            for (int i = 0; i <= m_TimelineLength; i++)
            {
                float x = i * m_Scale;
                if (x >= m_ScrollPosition.x && x <= m_ScrollPosition.x + viewRect.width)
                {
                    float y;
                    bool highlight = i % 5 == 0;
                    if (highlight)
                        y = contentRect.y + maxHeight;
                    else
                        y = contentRect.y + Mathf.Lerp(minHeight, maxHeight, m_Scale / c_MaxScale);

                    DrawVerticalLine(contentRect.x + x, y, contentRect.y + contentRect.height, Color.white);
                    if (highlight || m_Scale >= 30)
                        GUI.Label(new Rect(contentRect.x + x, contentRect.y, 100, 20), (i * 1f / c_FrameRate).ToString("F2"));

                    if (m_CurrentSelectedTick == i)
                    {
                        var position = GetPositionByTick(m_CurrentSelectedTick, viewRect);
                        DrawTimeHeader(position, areaHeight);
                    }
                }
            }
            GUI.EndScrollView();
        }

        private void SelectTickAtPosition(Vector2 mousePosition, Rect viewRect)
        {
            // 计算滚动后的时间轴起点位置
            float startX = m_ScrollPosition.x;

            // 计算相对时间轴的鼠标位置
            float relativeMouseX = mousePosition.x + startX - viewRect.x;

            // 计算点击的时间刻度
            int clickedTick = Mathf.RoundToInt(relativeMouseX / m_Scale);

            // 检查是否在有效范围内
            if (clickedTick >= 0 && clickedTick <= m_TimelineLength)
            {
                if (CurrentSelectedTick != clickedTick)
                {
                    CurrentSelectedTick = clickedTick;
                    OnSelectTick?.Invoke();
                }
            }
        }

        public Vector2 GetPositionByTick(int tick, Rect viewRect)
        {
            return new Vector2(tick * m_Scale + viewRect.x, viewRect.y);
        }

        private void DrawTimeHeader(Vector2 position, float height)
        {
            // 计算角标顶点位置
            Vector3[] triangleVertices = new Vector3[]
            {
                    new Vector3(position.x - 5, position.y, 0),
                    new Vector3(position.x + 5, position.y, 0),
                    new Vector3(position.x + 5, position.y + height * 0.9f, 0),
                    new Vector3(position.x, position.y + height, 0),
                    new Vector3(position.x - 5, position.y + height * 0.9f, 0),
            };

            // 绘制角标
            Handles.DrawAAConvexPolygon(triangleVertices);

            TimeLineArea.DrawVerticalLine(position.x, position.y, position.y + m_TimeLineHeight, Color.white);
        }

        public static void DrawVerticalLine(float x, float minY, float maxY, Color color)
        {
            GL.Color(color);
            Handles.DrawLine(new Vector3(x, minY, 0), new Vector3(x, maxY, 0));
        }
    }

}
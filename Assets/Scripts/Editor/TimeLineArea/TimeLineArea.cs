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
            /// ֡��ʽ
            /// </summary>
            Frame,
            /// <summary>
            /// ���ʽ
            /// </summary>
            Seconds
        }

        public enum MouseHolding
        { 
            None,
            /// <summary>
            /// ���
            /// </summary>
            Left,
            /// <summary>
            /// �м�
            /// </summary>
            Middle,
            /// <summary>
            /// �Ҽ�
            /// </summary>
            Right,
        }

        /// <summary>
        /// ��С����
        /// </summary>
        private const float c_MinScale = 10f;

        /// <summary>
        /// �������
        /// </summary>
        private const float c_MaxScale = 100f;

        /// <summary>
        /// ֡����
        /// </summary>
        public const float c_FrameRate = 15f;

        public const float c_FrameSec = 1 / c_FrameRate;

        /// <summary>
        /// ʱ������󳤶�
        /// </summary>
        private int m_TimelineLength = 500;
        public int TimelineLength { get { return m_TimelineLength; } }


        /// <summary>
        /// ��ǰ���ű���
        /// </summary>
        private float m_Scale;
        public float Scale { get { return m_Scale; } }

        /// <summary>
        /// ��ǰ����λ��
        /// </summary>
        private Vector2 m_ScrollPosition;
        public Vector2 ScrollPosition { get { return m_ScrollPosition; } set { m_ScrollPosition = value; } }

        /// <summary>
        /// ��ǰ��갴ס���
        /// </summary>
        private MouseHolding m_Holding; 

        /// <summary>
        /// ��ǰѡ�еĿ̶�
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
        /// ֡����
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


            // �������ź��ʱ���᳤��
            float scaledTimelineLength = m_TimelineLength * m_Scale;

            // ����ʱ���ᱳ��
            Rect contentRect = new Rect(viewRect.x, viewRect.y, scaledTimelineLength, areaHeight);

            // ��ȡ��ǰ�¼�
            Event e = Event.current;

            // ����Ƿ�ʹ�������ֹ���
            if (e.type == EventType.ScrollWheel && viewRect.Contains(e.mousePosition))
            {
                // �������ű���
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

                    Repaint?.Invoke(); // ���»��ƴ���
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
            // ����ʱ����
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
            // ����������ʱ�������λ��
            float startX = m_ScrollPosition.x;

            // �������ʱ��������λ��
            float relativeMouseX = mousePosition.x + startX - viewRect.x;

            // ��������ʱ��̶�
            int clickedTick = Mathf.RoundToInt(relativeMouseX / m_Scale);

            // ����Ƿ�����Ч��Χ��
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
            // ����Ǳ궥��λ��
            Vector3[] triangleVertices = new Vector3[]
            {
                    new Vector3(position.x - 5, position.y, 0),
                    new Vector3(position.x + 5, position.y, 0),
                    new Vector3(position.x + 5, position.y + height * 0.9f, 0),
                    new Vector3(position.x, position.y + height, 0),
                    new Vector3(position.x - 5, position.y + height * 0.9f, 0),
            };

            // ���ƽǱ�
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
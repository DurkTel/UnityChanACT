using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.GUI
{
    public partial class GMGUIManager
    {
        public enum UILayerLevel
        {
            TouchLayer,
            MainUILayer,
            ViewUILayer,
            TopUILayer,
            LastFlag,
        }

        public static Dictionary<UILayerLevel, Type> s_UILayerClass = new Dictionary<UILayerLevel, Type>()
        {
            [UILayerLevel.TouchLayer] = typeof(GUITouchLayer),
        };

        public class GUIViewLayer
        {
            protected readonly GameObject m_GameObject;
            public GameObject GameObject { get { return m_GameObject; } }

            protected readonly Transform m_Transform;
            public Transform Transform { get { return m_Transform; } }

            protected readonly Canvas m_Canvas;
            public Canvas Canvas { get { return m_Canvas; } }

            protected Dictionary<GUIView, int> m_SortingOrder;

            protected List<GUIView> m_Views;

            protected int m_MinSortingOrder;

            protected int m_MaxSortingOrder;

            protected int m_ViewOffsetOrder = 50;

            public GUIViewLayer(GameObject go, Canvas canvas)
            {
                m_GameObject = go;
                m_Transform = go.transform;
                m_Canvas = canvas;
            }

            public void SetSortingOrder(int min, int max)
            {
                m_MinSortingOrder = min;
                m_MaxSortingOrder = max;
            }

            public void AddView(GUIView view)
            {
                view.RectTransform.SetParentZero(m_Transform);
                view.RectTransform.TileRectTransform();

                m_SortingOrder ??= new Dictionary<GUIView, int>();
                m_SortingOrder.Add(view, 0);
                UpdateSortingOrder(view);

                m_Views ??= new List<GUIView>();
                m_Views.Add(view);
            }

            public void RemoveView(GUIView view)
            {
                m_Views?.Remove(view);
            }

            public void SetAsTop(GUIView view)
            {
                if (m_Views != null && m_Views.IndexOf(view) == m_Views.Count - 1) return;
                m_Views?.Remove(view);
                m_Views.Add(view);
            }

            public void UpdateSortingOrder(GUIView view)
            {
                if (m_Views != null && m_Views.IndexOf(view) == m_Views.Count - 1) return;

                int topOrder = GetTopSortingOrder() + m_ViewOffsetOrder;
                //新界面超出此层最大order
                if (topOrder >= m_MaxSortingOrder)
                {
                    IUIBehaviour temp;
                    int order = m_MinSortingOrder;
                    for (int i = 0; i < m_Views.Count; i++)
                    {
                        order = m_MinSortingOrder + i * m_ViewOffsetOrder;
                        temp = m_Views[i];
                        temp.GameObject.UpdateCanvas(order);
                        temp.RectTransform.SetAsLastSibling();
                        m_SortingOrder[view] = order;
                    }
                    topOrder = order + m_ViewOffsetOrder;
                }

                view.GameObject.UpdateCanvas(topOrder);
                view.RectTransform.SetAsLastSibling();
                m_SortingOrder[view] = topOrder;
            }

            public int GetTopSortingOrder()
            {
                int order = m_MinSortingOrder;
                if (m_Views != null && m_Views.Count > 0)
                    order = m_SortingOrder[m_Views[m_Views.Count - 1]];

                return order;
            }
        }
    }
}

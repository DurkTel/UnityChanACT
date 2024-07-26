using System;
using System.Collections.Generic;
using System.Drawing;
using UnityEditor;
using UnityEditor.AnimatedValues;
using UnityEngine;

public class FadeTabWindow
{
    private Editor m_Editor;

    private Vector2 m_Scroll;

    public List<FadeTabPage> TabPages = new List<FadeTabPage>();

    private int m_CurrentIndex = -1;

    public int CurrentIndex { get { return m_CurrentIndex; } }

    public FadeTabWindow(Editor editor) 
    {
        m_Editor = editor;
    }
    public void OnEnable()
    {
        TabPages.Sort();

        for (int i = 0; i < TabPages.Count; i++)
        {
            TabPages[i].OnEnable(i, this);
        }
    }

    public void OnDisable()
    {
        for (int i = 0; i < TabPages.Count; i++)
        {
            TabPages[i].OnDisable();
        }
    }

    public void OnSelectionChange()
    {
        for (int i = 0; i < TabPages.Count; i++)
        {
            TabPages[i].OnSelectionChanged();
        }
        Repaint();
    }

    public void OnGUI()
    {
        m_Scroll = GUILayout.BeginScrollView(m_Scroll);
        GUILayout.BeginVertical();
        GUILayout.EndVertical();
        for (int i = 0; i < TabPages.Count; i++)
            TabPages[i].OnGUI();
        GUILayout.EndScrollView();

    }

    public void Repaint()
    {
        m_Editor.Repaint();

    }

    public abstract class FadeTabPage : IComparable<FadeTabPage>
    {
        /// <summary>
        /// 动画开关
        /// </summary>
        private AnimBool m_FullAnim, m_BodyAnim;

        /// <summary>
        /// 下标
        /// </summary>
        private int m_Index;

        /// <summary>
        /// 是否显示中
        /// </summary>
        public bool IsVisible { get { return m_TabWindow.CurrentIndex == m_Index || m_TabWindow.CurrentIndex < 0; } }

        /// <summary>
        /// 主体是否显示中
        /// </summary>
        public bool IsBodyVisible
        {
            get { return m_TabWindow.CurrentIndex == m_Index; }
            set
            {
                if (value)
                    m_TabWindow.m_CurrentIndex = m_Index;
                else if (IsBodyVisible)
                    m_TabWindow.m_CurrentIndex = -1;
            }
        }

        protected FadeTabWindow m_TabWindow;

        /// <summary>
        /// 大的优先
        /// </summary>
        public abstract int Order { get; }

        /// <summary>
        /// 说明
        /// </summary>
        public abstract string Instructions { get; }

        /// <summary>
        /// 标签页名字
        /// </summary>
        public abstract string Name { get; }

        public int CompareTo(FadeTabPage other)
        {
            return other.Order.CompareTo(Order);
        }

        public virtual void OnEnable(int index, FadeTabWindow tabWindow)
        {
            m_Index = index;
            m_TabWindow = tabWindow;
            m_FullAnim = new AnimBool(IsVisible);
            m_BodyAnim = new AnimBool(IsBodyVisible);
        }

        public virtual void OnDisable()
        {

        }

        public virtual void OnSelectionChanged()
        {

        }

        public virtual void OnGUI()
        {
            var enabled = GUI.enabled;

            m_FullAnim.target = IsVisible;

            if (EditorGUILayout.BeginFadeGroup(m_FullAnim.faded))
            {
                GUILayout.BeginVertical(EditorStyles.helpBox);

                DoHeaderGUI();

                m_BodyAnim.target = IsBodyVisible;

                if (EditorGUILayout.BeginFadeGroup(m_BodyAnim.faded))
                {
                    if (!string.IsNullOrEmpty(Instructions))
                        EditorGUILayout.HelpBox(Instructions, MessageType.Info);

                    DoBodyGUI();
                }
                EditorGUILayout.EndFadeGroup();
                GUILayout.EndVertical();
            }
            EditorGUILayout.EndFadeGroup();

            if (m_FullAnim.isAnimating || m_BodyAnim.isAnimating)
                m_TabWindow.Repaint();

            GUI.enabled = enabled;

        }

        protected virtual void DoHeaderGUI()
        {
            var area = EditorHelper.LayoutSingleLineRect(EditorHelper.SpacingMode.BeforeAndAfter);

            if (GUI.Button(area, Name, EditorStyles.boldLabel))
            {
                IsBodyVisible = !IsBodyVisible;
            }
        }

        protected abstract void DoBodyGUI();
    }
}

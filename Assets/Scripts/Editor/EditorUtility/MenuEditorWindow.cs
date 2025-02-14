using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEngine;


public abstract class MenuEditorWindow : EditorWindow
{
    public abstract Dictionary<Type, MenuContentRenderer> MenuDefine { get; }
    public MenuContentRenderer CurrentView { get; set; }

    private float m_SplitterPosition = 200;

    private bool m_IsDraggingSplitter = false;

    private MenuTreeView m_TreeView;

    private SearchField m_Search;

    private string m_SearchStr;

    protected abstract MenuTreeView OnCreate();

    private void OnEnable()
    {
        m_TreeView = OnCreate();
        m_TreeView.OnSelect += OnTreeSelectionChange;

        EditorApplication.projectChanged += m_TreeView.Reload;

        foreach (var view in MenuDefine.Values)
            view.OnInit(this);

        m_Search = new SearchField();

    }

    private void OnDisable()
    {
        m_TreeView.OnSelect -= OnTreeSelectionChange;
        EditorApplication.projectChanged -= m_TreeView.Reload;

    }

    private void OnGUI()
    {
        Rect leftRect = new Rect(0, 0, m_SplitterPosition, position.height);
        Rect splitterRect = new Rect(m_SplitterPosition, 0, 2, position.height);
        Rect rightRect = new Rect(m_SplitterPosition + 2, 0, position.width - m_SplitterPosition - 2, position.height);


        GUILayout.BeginArea(leftRect, EditorStyles.helpBox);

        m_SearchStr = m_Search.OnToolbarGUI(new Rect(5, 5, leftRect.size.x - 8, 20), m_SearchStr);

        m_TreeView.OnGUI(new Rect(0, 25, leftRect.width, leftRect.height - 25));
        m_TreeView.searchString = m_SearchStr;

        GUILayout.EndArea();


        GUILayout.BeginArea(rightRect);
        if (CurrentView != null)
            CurrentView.OnGUI();
        else
            DrawEmptyGUI();
        GUILayout.EndArea();

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

    protected virtual void DrawEmptyGUI()
    {
        EditorGUILayout.HelpBox("视图内容为空，请从左侧选择要显示的资源，或者新建资源", MessageType.Warning);
    }

    protected virtual void OnTreeSelectionChange(TreeViewItem item)
    {
        var menuItem = item as MenuTreeView.MenuTreeItem;

        if (menuItem.isParent)
            OnTreeSelectParent(menuItem);
        else
            OnTreeSelectChild(menuItem);

    }

    protected virtual void OnTreeSelectParent(MenuTreeView.MenuTreeItem item)
    {
        CurrentView = null;
    }

    protected virtual void OnTreeSelectChild(MenuTreeView.MenuTreeItem item)
    {
        CurrentView = MenuDefine.GetValueOrDefault(item.menuType);
        if (CurrentView == null)
        {
            Debug.LogError("MenuDefine没有配置标签的MenuContentRenderer");
            return;
        }

        CurrentView.OnEnable(item);
    }
}

public abstract class MenuContentRenderer
{
    protected EditorWindow m_EditorWindow;

    public virtual void OnInit(EditorWindow window)
    {
        m_EditorWindow = window;
    }

    public abstract string Name { get; }

    public abstract void OnEnable(TreeViewItem item);

    public abstract void OnDisable();

    public abstract void OnGUI();

    public virtual void OnInspectorUpdate() { }

    public void Repaint()
    {
        m_EditorWindow.Repaint();
    }
}

public abstract class MenuContentRenderer<T> : MenuContentRenderer
{
    protected T m_Asset;
}

public abstract class MenuTreeView : TreeView
{
    public class MenuTreeItem : TreeViewItem
    {
        public int index;

        public bool isParent;

        public Type menuType;
    }
    
    protected TreeViewState m_TreeViewState;

    protected MenuEditorWindow m_MenuWindow;

    public Action<TreeViewItem> OnSelect;

    protected MenuTreeView(TreeViewState state) : base(state)
    {
        m_TreeViewState = state;
    }

    public virtual bool ShowBorder { get { return true; } }
    public virtual bool UseScrollView { get { return true; } }
    public virtual bool ShowAlternatingRowBackgrounds { get { return true; } }
    public virtual float RowHeight { get { return 20; } }

    public virtual void OnInit(MenuEditorWindow window)
    {
        showBorder = ShowBorder;
        showAlternatingRowBackgrounds = ShowAlternatingRowBackgrounds;
        rowHeight = RowHeight;
        useScrollView = UseScrollView;

        m_MenuWindow = window;

        Reload();
    }

    protected override void SelectionChanged(IList<int> selectedIds)
    {
        base.SelectionChanged(selectedIds);
        OnSelect?.Invoke(FindItem(selectedIds[0], rootItem));
    }
}

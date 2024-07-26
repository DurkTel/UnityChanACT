using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditorInternal;
using UnityEngine;

public class ReorderableGenericList<T>
{
    protected ReorderableList m_List;

    protected List<T> m_Datas;
    public List<T> Datas { get { return m_Datas; } }

    protected List<T> m_DataList;
    public List<T> DataList { get { return m_DataList; } }

    private string[] m_headers;

    public ReorderableList.HeaderCallbackDelegate customHeaderRenderer;

    public ReorderableList.ElementCallbackDelegate customElementRenderer;

    public ReorderableList.SelectCallbackDelegate customSelectRenderer;

    private bool m_DisplayAdd, m_DisplayRemove;

    public ReorderableGenericList(List<T> dataList, string[] headers = null)
    {
        m_DataList = dataList;
        m_headers = headers;
    }

    public virtual void OnEnable(bool draggable = true, bool displayHeader = true, bool displayAddButton = true, bool displayRemoveButton = true, float elementHeight = 16)
    {
        m_DisplayAdd = displayAddButton;
        m_DisplayRemove = displayRemoveButton;
        if (m_Datas == null)
            m_Datas = new List<T>();

        if (m_List == null)
        {
            m_List = new ReorderableList(m_Datas, typeof(T), draggable, displayHeader, displayAddButton, displayRemoveButton);
            m_List.drawElementCallback = customElementRenderer == null ? DrawElement : customElementRenderer;
            m_List.drawHeaderCallback = customHeaderRenderer == null ? DrawHeader : customHeaderRenderer;
            m_List.onSelectCallback = customSelectRenderer == null ? SelectData : customSelectRenderer;
            m_List.onChangedCallback = OnChanged;
            m_List.onAddCallback = AddElement;
            m_List.onRemoveCallback = RemoveElement;
            m_List.elementHeight = elementHeight;
        }
    }

    protected virtual void SelectData(ReorderableList list)
    {
        
    }

    protected virtual void DrawElement(Rect rect, int index, bool selected, bool focused)
    {
        
    }

    protected virtual void DrawHeader(Rect rect)
    {
        if (m_headers == null || m_headers.Length == 0)
        {
            GUI.Label(rect, "ReorderableGenericList", EditorStyles.label);
            return;
        }
        float xMax = rect.xMax;
        for (int i = 0; i < m_headers.Length; i++)
        {
            rect.xMax = xMax / m_headers.Length * (i + 1);
            GUI.Label(rect, m_headers[i], EditorStyles.label);
            rect.xMin = rect.xMax;
        }
    }

    protected virtual void OnChanged(ReorderableList list)
    {
        if (m_DataList.Count == m_Datas.Count)
        {
            m_DataList.Clear();
            m_DataList.AddRange(m_Datas);
        }
    }

    protected virtual void AddElement(ReorderableList list)
    {
        m_DataList.Add(default);
        //m_Datas.Add(default);
        ReorderableList.defaultBehaviours.DoAddButton(list);

    }

    protected virtual void RemoveElement(ReorderableList list)
    {
        m_DataList.RemoveAt(list.index);
        ReorderableList.defaultBehaviours.DoRemoveButton(list);
    }

    
    protected virtual void RefreshListinternal(string searchStr = null)
    {
        if (!string.IsNullOrEmpty(searchStr))
        {
            FilterOverrides(searchStr);
            m_List.displayAdd = false;
            m_List.displayRemove = false;
        }
        else
        {
            if (m_DataList != null && m_Datas.Count != m_DataList.Count)
            {
                m_Datas.Clear();
                int count = m_DataList.Count;
                for (int i = 0; i < count; i++)
                    m_Datas.Add(m_DataList[i]);
            }
            m_List.displayAdd = m_DisplayAdd;
            m_List.displayRemove = m_DisplayRemove;
        }

        m_List.list = m_Datas;
    }

    public virtual void RefreshList(string searchStr = null)
    {
        RefreshListinternal(searchStr);
        m_List.DoLayoutList();
    }

    public virtual void RefreshList(Rect rect, string searchStr = null)
    {
        RefreshListinternal(searchStr);
        m_List.DoList(rect);
    }

    protected virtual void FilterOverrides(string searchStr)
    {
        
    }

}

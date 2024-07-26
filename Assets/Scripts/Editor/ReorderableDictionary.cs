using System.Collections.Generic;
using UnityEditor;
using UnityEditorInternal;
using UnityEngine;
using static UnityEditorInternal.ReorderableList;

namespace Actioner.Editor
{
    public class ReorderableDictionary<T> where T : UnityEngine.Object
    {
        private ReorderableList m_List;

        private List<KeyValuePair<string, T>> m_Datas;
        public List<KeyValuePair<string, T>> Datas { get { return m_Datas; } }  

        private List<string> m_NameList;
        public List<string> NameList { get { return m_NameList; } }

        private List<T> m_DataList;
        public List<T> DataList { get { return m_DataList; } }

        private string[] m_headers;

        public HeaderCallbackDelegate customHeaderRenderer;

        public ElementCallbackDelegate customElementRenderer;

        public SelectCallbackDelegate customSelectRenderer;

        private bool m_DisplayAdd, m_DisplayRemove;

        public ReorderableDictionary(List<string> nameList, List<T> dataList, string[] headers = null)
        {
            m_NameList = nameList;
            m_DataList = dataList;
            m_headers = headers;
        }

        public void OnEnable(bool draggable = true, bool displayHeader = true, bool displayAddButton = true, bool displayRemoveButton = true)
        {
            m_DisplayAdd = displayAddButton;
            m_DisplayRemove = displayRemoveButton;
            if (m_Datas == null)
                m_Datas = new List<KeyValuePair<string, T>>();

            if (m_List == null)
            {
                m_List = new ReorderableList(m_Datas, typeof(KeyValuePair<string, T>), draggable, displayHeader, displayAddButton, displayRemoveButton);
                m_List.drawElementCallback = customElementRenderer == null ? DrawElement : customElementRenderer;
                m_List.drawHeaderCallback = customHeaderRenderer == null ? DrawHeader : customHeaderRenderer;
                m_List.onSelectCallback = customSelectRenderer == null ? SelectData : customSelectRenderer;
                m_List.onAddCallback = AddElement;
                m_List.onRemoveCallback = RemoveElement;
                m_List.elementHeight = 16;
            }
        }

        protected virtual void SelectData(ReorderableList list)
        {
            if (0 <= list.index && list.index < m_Datas.Count)
                EditorGUIUtility.PingObject(m_Datas[list.index].Value);
        }

        protected virtual void DrawElement(Rect rect, int index, bool selected, bool focused)
        {
            string name = m_Datas[index].Key;
            T action = m_Datas[index].Value;

            EditorGUI.BeginChangeCheck();

            float xMax = rect.xMax;
            rect.xMax = xMax / 3f;
            name = EditorGUI.TextField(rect, name);
            rect.xMin = xMax / 2f;
            rect.xMax = xMax;

            action = EditorGUI.ObjectField(rect, "", action, typeof(T), false) as T;
            if (EditorGUI.EndChangeCheck())
            {
                m_Datas[index] = new KeyValuePair<string, T>(name, action);
                m_NameList[index] = name;
                m_DataList[index] = action;
            }
        }

        protected virtual void DrawHeader(Rect rect)
        {
            if (m_headers == null || m_headers.Length == 0)
            {
                GUI.Label(rect, "ReorderableDictionary", EditorStyles.label);
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

        protected virtual void AddElement(ReorderableList list)
        {
            m_NameList.Add("");
            m_DataList.Add(null);
            m_Datas.Add(new KeyValuePair<string, T>("", null));
        }

        protected virtual void RemoveElement(ReorderableList list)
        {
            m_NameList.RemoveAt(list.index);
            m_DataList.RemoveAt(list.index);
            ReorderableList.defaultBehaviours.DoRemoveButton(list);
        }

        public virtual void RefreshList(string searchStr = null)
        {
            if (!string.IsNullOrEmpty(searchStr))
            {
                FilterOverrides(searchStr);
                m_List.displayAdd = false;
                m_List.displayRemove = false;
            }
            else
            {
                if (m_NameList != null && m_Datas.Count != m_NameList.Count)
                {
                    m_Datas.Clear();
                    int count = m_NameList.Count;
                    for (int i = 0; i < count; i++)
                        m_Datas.Add(new KeyValuePair<string, T>(m_NameList[i], m_DataList[i]));
                }
                m_List.displayAdd = m_DisplayAdd;
                m_List.displayRemove = m_DisplayRemove;
            }

            m_List.list = m_Datas;
            m_List.DoLayoutList();

        }

        protected virtual void FilterOverrides(string searchStr)
        {
            // Support multiple search words separated by spaces.
            string[] searchWords = searchStr.ToLower().Split(' ');

            // We keep two lists. Matches that matches the start of an item always get first priority.
            List<KeyValuePair<string, T>> matchesStart = new List<KeyValuePair<string, T>>();
            List<KeyValuePair<string, T>> matchesWithin = new List<KeyValuePair<string, T>>();
            foreach (KeyValuePair<string, T> kvp in m_Datas)
            {
                string name = kvp.Key;
                name = name.ToLower().Replace(" ", "");

                bool didMatchAll = true;
                bool didMatchStart = false;

                // See if we match ALL the search words.
                for (int w = 0; w < searchWords.Length; w++)
                {
                    string search = searchWords[w];
                    if (name.Contains(search))
                    {
                        // If the start of the item matches the first search word, make a note of that.
                        if (w == 0 && name.StartsWith(search))
                            didMatchStart = true;
                    }
                    else
                    {
                        // As soon as any word is not matched, we disregard this item.
                        didMatchAll = false;
                        break;
                    }
                }
                // We always need to match all search words.
                // If we ALSO matched the start, this item gets priority.
                if (didMatchAll)
                {
                    if (didMatchStart)
                        matchesStart.Add(kvp);
                    else
                        matchesWithin.Add(kvp);
                }
            }

            m_Datas.Clear();

            // Add search results
            m_Datas.AddRange(matchesStart);
            m_Datas.AddRange(matchesWithin);
        }

    }
}

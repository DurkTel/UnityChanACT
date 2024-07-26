using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class TogglesWindow<T> : EditorWindow
{

    private List<T> m_ToggleList;

    private bool[] m_Selects;

    private Action<T[]> m_Callback;

    private bool m_Single;

    public Vector2 scrollPosition;

    public void OnInit(List<T> list, string title = "Toggle", bool isSingle = false, Action<T[]> action = null)
    {
        m_ToggleList = list;
        m_Selects = new bool[list.Count];
        m_Callback = action;
        m_Single = isSingle;
    }

    private void OnGUI()
    {
        if (m_ToggleList.Count <= 0)
        {
            EditorGUILayout.HelpBox("Toggle List Is Empty", MessageType.Warning);
            return;
        }
        GUILayout.BeginArea(new Rect(5f, 10f, position.width - 10f, position.height - 10f));
        EditorGUILayout.BeginVertical();

        scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition);

        for (int i = 0; i < m_ToggleList.Count; i++)
        {
            EditorGUI.BeginChangeCheck();
            m_Selects[i] = EditorGUILayout.ToggleLeft(m_ToggleList[i].ToString(), m_Selects[i]);
            if (EditorGUI.EndChangeCheck() && m_Single && m_Selects[i])
            {
                for (int j = 0; j < m_ToggleList.Count; j++)
                {
                    if (j == i)
                        continue;
                    m_Selects[j] = false;
                }
            }

        }
        EditorGUILayout.EndScrollView();
        GUILayout.EndArea();
        EditorGUILayout.Space(10);
        if (GUILayout.Button("¡Ì"))
        {
            List<T> select = new List<T>();
            for (int i = 0; i < m_Selects.Length; i++)
            {
                if (m_Selects[i])
                    select.Add(m_ToggleList[i]);
            }
            Close();
            m_Callback?.Invoke(select.ToArray());   
        }
        EditorGUILayout.EndVertical();
    }
}

public class TogglesStringWindow : TogglesWindow<string>
{
    public static void OpenWindow(List<string> list, string title = "Toggle", bool isSingle = false, Action<string[]> action = null)
    {
        var window = GetWindow<TogglesStringWindow>();
        window.titleContent = new GUIContent(title);
        window.minSize = new Vector2(300, 300);
        window.OnInit(list, title, isSingle, action);

        window.ShowModalUtility();
    }
}

public class TogglesTypeWindow : TogglesWindow<Type>
{
    public static void OpenWindow(List<Type> list, string title = "Toggle", bool isSingle = false, Action<Type[]> action = null)
    {
        var window = GetWindow<TogglesTypeWindow>();
        window.titleContent = new GUIContent(title);
        window.minSize = new Vector2(300, 300);
        window.OnInit(list, title, isSingle, action);

        window.ShowModalUtility();
    }
}

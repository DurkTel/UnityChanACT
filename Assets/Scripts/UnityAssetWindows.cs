using UnityEngine;
using UnityEditor;
using System;
/// <summary>
/// ����ͼ����Դ
/// </summary>
class MyWindow : EditorWindow
{
    static string[] text;
    [MenuItem("Tool/My Window")]
    public static void ShowWindow()
    {
        EditorWindow.GetWindow(typeof(MyWindow));
        text = Resources.Load<TextAsset>("AssetName").text.Split("\n"[0]);
    }

    public Vector2 scrollPosition;

    void OnGUI()
    {

        scrollPosition = GUILayout.BeginScrollView(scrollPosition);

        //�����ڰ�ť�ϵ���ʽ
        foreach (MouseCursor item in Enum.GetValues(typeof(MouseCursor)))
        {
            GUILayout.Button(Enum.GetName(typeof(MouseCursor), item));
            EditorGUIUtility.AddCursorRect(GUILayoutUtility.GetLastRect(), item);
            GUILayout.Space(10);
        }


        //����ͼ��
        for (int i = 0; i < text.Length; i += 8)
        {
            GUILayout.BeginHorizontal();
            for (int j = 0; j < 8; j++)
            {
                int index = i + j;
                if (index < text.Length)
                {
                    GUIContent content = EditorGUIUtility.IconContent(text[index].Trim(), "����������ʾ");
                    //content.text = "Test label";

                    bool isPress = GUILayout.Button(content, GUILayout.Width(100), GUILayout.Height(60));
                    if (isPress)
                    {
                        UnityEngine.Debug.Log(text[index].Trim());
                    }
                }
            }
            GUILayout.EndHorizontal();
        }
        GUILayout.EndScrollView();
    }
}

/// <summary>
/// ����GUIStyle��ʽ
/// </summary>
public class GUIStyleViewer : EditorWindow
{

    Vector2 scrollPosition = new Vector2(0, 0);
    string search = "";
    GUIStyle textStyle;

    private static GUIStyleViewer window;
    [MenuItem("Tool/GUIStyleViewer", false, 10)]
    private static void OpenStyleViewer()
    {
        window = GetWindow<GUIStyleViewer>(false, "����GUIStyle");
    }

    void OnGUI()
    {
        if (textStyle == null)
        {
            textStyle = new GUIStyle("HeaderLabel");
            textStyle.fontSize = 25;
        }

        GUILayout.BeginHorizontal("HelpBox");
        GUILayout.Label("������£�", textStyle);
        GUILayout.FlexibleSpace();
        GUILayout.Label("Search:");
        search = EditorGUILayout.TextField(search);
        GUILayout.EndHorizontal();
        GUILayout.BeginHorizontal("PopupCurveSwatchBackground");
        GUILayout.Label("��ʽչʾ", textStyle, GUILayout.Width(300));
        GUILayout.Label("����", textStyle, GUILayout.Width(300));
        GUILayout.EndHorizontal();


        scrollPosition = GUILayout.BeginScrollView(scrollPosition);

        for (int i = 0; i < GUI.skin.customStyles.Length; i++)
        {
            var style = GUI.skin.customStyles[i];
            if (style.name.ToLower().Contains(search.ToLower()))
            {
                GUILayout.Space(15);
                GUILayout.BeginHorizontal("PopupCurveSwatchBackground");
                if (GUILayout.Button("", style, GUILayout.Width(300)))
                {
                    EditorGUIUtility.systemCopyBuffer = style.name;
                    Debug.Log(style.name);
                    Debug.Log(i);
                }
                EditorGUILayout.SelectableLabel(style.name, GUILayout.Width(300));
                GUILayout.EndHorizontal();
            }
        }

        GUILayout.EndScrollView();
    }
}

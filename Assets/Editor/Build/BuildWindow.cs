using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class BuildWindow : PageWindow
{
    private PageElement[] allPages;
    protected override PageElement[] m_AllPages { get { return allPages; } }

    [MenuItem("LGame/BuildWindow")]
    private static void OpenGUI()
    {
        BuildWindow resetPivot = (BuildWindow)EditorWindow.GetWindow(typeof(BuildWindow));
        resetPivot.titleContent = new GUIContent("AssetBundle Build");
        resetPivot.minSize = new Vector2(1000, 500);
        resetPivot.Show();
    }

    public override void OnEnable()
    {
        allPages = new PageElement[] { new BuildPage(), new CDNPage() };
        base.OnEnable();
    }
}

using LGameFramework.GameCore;
using LGameFramework.GameCore.Input;
using UnityEditor;
using UnityEngine;
using static LGameFramework.GameCore.Input.GMInputManager;

[CustomEditor(typeof(GMInputManagerHelper))]
public class GMInputManagerHelperEditor : Editor
{
    private GMInputManager m_GMInputManager;

    public void OnEnable()
    {
        m_GMInputManager = (target as GMInputManagerHelper).DataSource;
    }

    public void OnDisable()
    {
        m_GMInputManager = null;
    }

    public override void OnInspectorGUI()
    {
        EditorHelper.DrawBorder(m_GMInputManager.inputBehaviour.Values, 1, (p, r, i) =>
        {
            InputBehaviour info = (InputBehaviour)p;
            EditorGUILayout.LabelField(string.Format("行为名称：<color=#ffffff>{0}</color>", info.ActionName), GUI.skin.label);
            foreach (var item in info.InputAction.bindings)
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.LabelField(string.Format("绑定按键：<color=#ffffff>{0}</color>", item.effectivePath), GUI.skin.label);
                if (GUILayout.Button("修改", GUILayout.Width(100)))
                {
                    GameFrameworkEntry.GetModule<GMInputManager>().StartInteractiveRebind(info.InputAction, item.id.ToString());
                }
                if (GUILayout.Button("重置", GUILayout.Width(100)))
                {
                    GameFrameworkEntry.GetModule<GMInputManager>().ResetToDefault(info.InputAction, item.id.ToString());
                }
                EditorGUILayout.EndHorizontal();
            }


        });

    }
}

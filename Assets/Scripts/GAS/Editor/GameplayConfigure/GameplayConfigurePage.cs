using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace GAS.Editor
{
    public class GameplayConfigurePage : PageWindow.PageElement
    {
        public override string Name => "GameplayConfigure";

        private GameplayConfigureAsset m_ConfigureAsset;

        public override void OnEnable()
        {
            m_ConfigureAsset = GameplayConfigureAsset.LoadOrCreate();

        }

        public override void OnDisable()
        {
            
        }


        public override void OnGUI()
        {
            EditorGUILayout.HelpBox("Gen脚本输出路径设置", MessageType.Info);

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.TextField("脚本输出的路径", m_ConfigureAsset.ScriptGenPath);
            if (GUILayout.Button("选择路径", GUILayout.Width(100)))
            {
                string path = EditorUtility.OpenFolderPanel("选择目录", "", "");
                if (!string.IsNullOrEmpty(path))
                {
                    m_ConfigureAsset.ScriptGenPath = path;
                    m_ConfigureAsset.SaveAsset();   
                }
            }

            if (GUILayout.Button("打开文件夹", GUILayout.Width(100)))
            {
                EditorUtility.OpenWithDefaultApp(m_ConfigureAsset.ScriptGenPath);
            }
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.Space(20);

            EditorGUILayout.HelpBox("Gen资源输出路径设置", MessageType.Info);

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.TextField("资源输出的路径", m_ConfigureAsset.AssetGenPath);
            if (GUILayout.Button("选择路径", GUILayout.Width(100)))
            {
                string path = EditorUtility.OpenFolderPanel("选择目录", "", "");
                if (!string.IsNullOrEmpty(path))
                {
                    m_ConfigureAsset.AssetGenPath = path;
                    m_ConfigureAsset.SaveAsset();
                }
            }

            if (GUILayout.Button("打开文件夹", GUILayout.Width(100)))
            {
                EditorUtility.OpenWithDefaultApp(m_ConfigureAsset.AssetGenPath);
            }
            EditorGUILayout.EndHorizontal();
        }

    }
}

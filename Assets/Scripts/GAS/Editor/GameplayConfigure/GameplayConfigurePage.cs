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
            EditorGUILayout.HelpBox("Gen�ű����·������", MessageType.Info);

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.TextField("�ű������·��", m_ConfigureAsset.ScriptGenPath);
            if (GUILayout.Button("ѡ��·��", GUILayout.Width(100)))
            {
                string path = EditorUtility.OpenFolderPanel("ѡ��Ŀ¼", "", "");
                if (!string.IsNullOrEmpty(path))
                {
                    m_ConfigureAsset.ScriptGenPath = path;
                    m_ConfigureAsset.SaveAsset();   
                }
            }

            if (GUILayout.Button("���ļ���", GUILayout.Width(100)))
            {
                EditorUtility.OpenWithDefaultApp(m_ConfigureAsset.ScriptGenPath);
            }
            EditorGUILayout.EndHorizontal();

            EditorGUILayout.Space(20);

            EditorGUILayout.HelpBox("Gen��Դ���·������", MessageType.Info);

            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.TextField("��Դ�����·��", m_ConfigureAsset.AssetGenPath);
            if (GUILayout.Button("ѡ��·��", GUILayout.Width(100)))
            {
                string path = EditorUtility.OpenFolderPanel("ѡ��Ŀ¼", "", "");
                if (!string.IsNullOrEmpty(path))
                {
                    m_ConfigureAsset.AssetGenPath = path;
                    m_ConfigureAsset.SaveAsset();
                }
            }

            if (GUILayout.Button("���ļ���", GUILayout.Width(100)))
            {
                EditorUtility.OpenWithDefaultApp(m_ConfigureAsset.AssetGenPath);
            }
            EditorGUILayout.EndHorizontal();
        }

    }
}

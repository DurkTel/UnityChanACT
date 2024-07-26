using Actioner.Runtime;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEditor.IMGUI.Controls;

namespace Actioner.Editor
{
    [CustomEditor(typeof(ActionOverrideManifest))]
    public class ActionOverrideManifestEditor : UnityEditor.Editor
    {
        private ActionOverrideManifest m_ActionOverrideManifest;

        private ReorderableDictionary<ActionData> m_ActionList;

        private ReorderableDictionary<ActionBundle> m_BundleList;

        private ReorderableDictionary<ActionBlend> m_BlendList;

        private string m_SearchStr;

        private SearchField m_Search;

        private void OnEnable()
        {
            m_ActionOverrideManifest = (ActionOverrideManifest)target;
            var manifest = m_ActionOverrideManifest.manifest;
            m_Search = new SearchField();


            m_ActionList = new ReorderableDictionary<ActionData>(manifest == null ? null : manifest.actionNames, m_ActionOverrideManifest.actionDatas, new string[] { "Action", "Override" });
            m_ActionList.customElementRenderer = DrawActionElement;
            m_ActionList.OnEnable(false, true, false, false);

            m_BundleList = new ReorderableDictionary<ActionBundle>(manifest == null ? null : manifest.bundleNames, m_ActionOverrideManifest.bundleDatas, new string[] { "Bundle", "Override" });
            m_BundleList.customElementRenderer = DrawBundleElement;
            m_BundleList.OnEnable(false, true, false, false);

            m_BlendList = new ReorderableDictionary<ActionBlend>(manifest == null ? null : manifest.blendNames, m_ActionOverrideManifest.blendDatas, new string[] { "Blend", "Override" });
            m_BlendList.customElementRenderer = DrawBlendElement;
            m_BlendList.OnEnable(false, true, false, false);

        }

        public override void OnInspectorGUI()
        {
            EditorGUI.BeginChangeCheck();
            m_ActionOverrideManifest.manifest = (ActionManifest)EditorGUILayout.ObjectField("Manifest", m_ActionOverrideManifest.manifest, typeof(ActionManifest), false);
            if (EditorGUI.EndChangeCheck())
            {
                m_ActionList.Datas.Clear();
                m_BundleList.Datas.Clear();
                m_BlendList.Datas.Clear();
                if (m_ActionOverrideManifest.manifest != null)
                {
                    int count = m_ActionOverrideManifest.manifest.actionNames.Count;
                    for (int i = 0; i < count; i++)
                    {
                        m_ActionList.Datas.Add(new KeyValuePair<string, ActionData>(m_ActionOverrideManifest.manifest.actionNames[i], null));
                        m_ActionOverrideManifest.actionDatas.Add(null);
                    }

                    count = m_ActionOverrideManifest.manifest.bundleNames.Count;
                    for (int i = 0; i < count; i++)
                    {
                        m_BundleList.Datas.Add(new KeyValuePair<string, ActionBundle>(m_ActionOverrideManifest.manifest.bundleNames[i], null));
                        m_ActionOverrideManifest.bundleDatas.Add(null);
                    }

                    count = m_ActionOverrideManifest.manifest.blendNames.Count;
                    for (int i = 0; i < count; i++)
                    {
                        m_BlendList.Datas.Add(new KeyValuePair<string, ActionBlend>(m_ActionOverrideManifest.manifest.blendNames[i], null));
                        m_ActionOverrideManifest.blendDatas.Add(null);
                    }

                }
                EditorUtility.SetDirty(m_ActionOverrideManifest);
            }
            EditorGUILayout.Space(22);
            m_SearchStr = m_Search.OnToolbarGUI(new Rect(20, 25, EditorGUIUtility.currentViewWidth - 30, 20), m_SearchStr);

            using (new EditorGUI.DisabledScope(m_ActionOverrideManifest.manifest == null))
            {
                m_ActionList.RefreshList(m_SearchStr);
                m_BundleList.RefreshList(m_SearchStr);
                m_BlendList.RefreshList(m_SearchStr);
            }

            
        }

        private void DrawGenericElement<T>(List<KeyValuePair<string, T>> datas, List<T> overrideDatas, Rect rect, int index, bool selected, bool focused) where T : UnityEngine.Object
        {
            string name = datas[index].Key;
            T action = datas[index].Value;

            rect.xMax = rect.xMax / 2.0f;
            GUI.Label(rect, name, EditorStyles.label);
            rect.xMin = rect.xMax;
            rect.xMax *= 2.0f;

            EditorGUI.BeginChangeCheck();

            action = EditorGUI.ObjectField(rect, "", action, typeof(T), false) as T;
            if (EditorGUI.EndChangeCheck())
            {
                datas[index] = new KeyValuePair<string, T>(name, action);
                overrideDatas[index] = action;
            }
        }

        private void DrawActionElement(Rect rect, int index, bool selected, bool focused)
        {
            DrawGenericElement<ActionData>(m_ActionList.Datas, m_ActionOverrideManifest.actionDatas, rect, index, selected, focused);
        }

        private void DrawBundleElement(Rect rect, int index, bool selected, bool focused)
        {
            DrawGenericElement<ActionBundle>(m_BundleList.Datas, m_ActionOverrideManifest.bundleDatas, rect, index, selected, focused);
        }

        private void DrawBlendElement(Rect rect, int index, bool selected, bool focused)
        {
            DrawGenericElement<ActionBlend>(m_BlendList.Datas, m_ActionOverrideManifest.blendDatas, rect, index, selected, focused);
        }
    }
}

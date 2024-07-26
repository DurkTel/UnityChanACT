using Actioner.Runtime;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEngine;

namespace Actioner.Editor
{
    [CustomEditor(typeof(ActionManifest))]
    public class ActionManifestEditor : UnityEditor.Editor
    {
        private ActionManifest m_Manifest;

        private ReorderableDictionary<ActionData> m_ActionList;

        private ReorderableDictionary<ActionBundle> m_BundleList;

        private ReorderableDictionary<ActionBlend> m_BlendList;

        private string m_SearchStr;

        private SearchField m_Search;

        private void OnEnable()
        {
            m_Manifest = (ActionManifest)target;

            m_ActionList = new ReorderableDictionary<ActionData>(m_Manifest.actionNames, m_Manifest.actionDatas, new string[] {"Action", "Original"});
            m_ActionList.OnEnable();

            m_BundleList = new ReorderableDictionary<ActionBundle>(m_Manifest.bundleNames, m_Manifest.bundleDatas, new string[] { "Bundle", "Original" });
            m_BundleList.OnEnable();

            m_BlendList = new ReorderableDictionary<ActionBlend>(m_Manifest.blendNames, m_Manifest.blendDatas, new string[] { "Blend", "Original" });
            m_BlendList.OnEnable();

            m_Search = new SearchField();
        }

        public override void OnInspectorGUI()
        {
            m_SearchStr = m_Search.OnToolbarGUI(new Rect(20, 5, EditorGUIUtility.currentViewWidth - 30, 20), m_SearchStr);
            EditorGUILayout.Space(22);

            m_ActionList.RefreshList(m_SearchStr);
            m_BundleList.RefreshList(m_SearchStr);
            m_BlendList.RefreshList(m_SearchStr);
            EditorUtility.SetDirty(m_Manifest);
        }
    }
}

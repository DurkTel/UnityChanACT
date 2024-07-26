using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEditor.IMGUI.Controls;
using UnityEngine;

namespace GAS.Editor
{
    public class AbilitySystemArchetypeContent : MenuContentRenderer<AbilitySystemArchetype>
    {
        public override string Name => "ArchetypeAsset";

        private UnityEditor.Editor m_AssetEditor;

        public override void OnEnable(TreeViewItem item)
        {
            if (item is GASAssetTreeView.AssetSecondTreeItem second)
            {
                m_Asset = second.asset as AbilitySystemArchetype;
                m_AssetEditor = UnityEditor.Editor.CreateEditor(m_Asset);

            }
        }

        public override void OnDisable()
        {

        }

        public override void OnGUI()
        {
            m_AssetEditor.OnInspectorGUI();

        }
    }
}

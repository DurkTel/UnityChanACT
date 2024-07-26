using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEngine;

namespace GAS.Editor
{
    public class GameplayAbilityContent : MenuContentRenderer<GameplayAbilityAsset>
    {
        public override string Name => "AbilityAsset";

        private UnityEditor.Editor m_AssetEditor;

        public override void OnEnable(TreeViewItem item)
        {
            if (item is GASAssetTreeView.AssetSecondTreeItem second)
            { 
                m_Asset = second.asset as GameplayAbilityAsset;
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

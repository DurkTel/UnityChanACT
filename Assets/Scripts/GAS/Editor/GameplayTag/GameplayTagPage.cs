using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEngine;

namespace GAS.Editor
{
    public class GameplayTagPage : PageWindow.PageElement
    {
        public override string Name => "GameplayTag";

        private TreeViewState m_TreeViewState;

        private GameplayTagTreeView m_TreeView;

        private MultiColumnHeaderState m_MultiColumnHeaderState;

        private GameplayTagsAsset m_TagsAsset;

        private SearchField m_Search;

        private string m_SearchStr;

        public override void OnEnable()
        {
            m_TagsAsset = GameplayTagsAsset.LoadOrCreate();

            m_TreeViewState = new TreeViewState();
            m_MultiColumnHeaderState = GameplayTagTreeView.CreateDefaultMultiColumnHeaderState();
            MultiColumnHeader header = new MultiColumnHeader(m_MultiColumnHeaderState);
            m_TreeView = new GameplayTagTreeView(m_TreeViewState, header, m_TagsAsset);

            m_TreeView.OnChange += SaveAsset;

            m_Search = new SearchField();

        }

        public override void OnDisable()
        {
            
        }


        public override void OnGUI()
        {
            m_SearchStr = m_Search.OnToolbarGUI(new Rect(20, 40, EditorGUIUtility.currentViewWidth - 20, 20), m_SearchStr);

            m_TreeView.OnGUI(new Rect(5f, 60f, m_EditorWindow.position.size.x - 10f, m_EditorWindow.position.size.y - 100f));
            m_TreeView.searchString = m_SearchStr;

            if (GUI.Button(new Rect(m_EditorWindow.position.size.x / 2 - 50f, m_EditorWindow.position.size.y - 40f, 100f, 35f), "Gen Code"))
            {
                var path = GameplayConfigureAsset.LoadOrCreate().ScriptGenPath;

                if (!Directory.Exists(path))
                    Directory.CreateDirectory(path);

                GameplayTagsAsset.Gen(path);
                AssetDatabase.Refresh();
            }
        }

        private void SaveAsset()
        {
            EditorUtility.SetDirty(m_TagsAsset);
            GameplayTagsAsset.UpdateAsset(m_TagsAsset);
            GameplayTagsAsset.Save();
        }

        private class GameplayTagTreeItem : TreeViewItem
        {
            public GameplayTagsAsset.GameplayTagNode tagNode;
            public GameplayTagTreeItem() { }

        }

        private class GameplayTagTreeView : TreeView
        {
            private GameplayTagsAsset m_TagsAsset;

            private TreeViewState m_TreeViewState;

            public Action OnChange;

            public GameplayTagTreeView(TreeViewState state, MultiColumnHeader multiColumnHeader, GameplayTagsAsset asset) : base(state, multiColumnHeader)
            {
                showBorder = true;
                showAlternatingRowBackgrounds = true;
                rowHeight = 20;
                useScrollView = true;
                m_TreeViewState = state;
                m_TagsAsset = asset;

                Reload();
            }

            protected override bool CanRename(TreeViewItem item)
            {
                Rect renameRect = GetRenameRect(treeViewRect, 0, item);
                return renameRect.width > 320;
            }

            protected override void RenameEnded(RenameEndedArgs args)
            {
                if (args.acceptedRename)
                {
                    ModifyTag(args.newName);
                }
            }

            protected override void RowGUI(RowGUIArgs args)
            {
                base.RowGUI(args);
                GameplayTagTreeItem item = args.item as GameplayTagTreeItem;
                if (item != null)
                {
                    for (int i = 0; i < args.GetNumVisibleColumns(); ++i)
                    {
                        CellGUI(args.GetCellRect(i), item, args.GetColumn(i), ref args);
                    }
                }
            }

            private void CellGUI(Rect cellRect, GameplayTagTreeItem item, int column, ref RowGUIArgs args)
            {
                CenterRectUsingSingleLineHeight(ref cellRect);
                switch (column)
                {
                    case 0:
                        break;
                    case 1:
                        EditorGUI.LabelField(cellRect, item.depth.ToString());
                        break;
                    case 2:
                        EditorGUI.LabelField(cellRect, item.tagNode.description);
                        break;
                }
            }

            protected override TreeViewItem BuildRoot()
            {
                var root = new TreeViewItem { id = 0, depth = -1, displayName = "" };

                if (m_TagsAsset.RootNode.childs.Count > 0)
                {
                    int id = 1;
                    foreach (var node in m_TagsAsset.RootNode.childs)
                    {
                        IterRoot(ref id, root, node);
                    }

                    SetupDepthsFromParentsAndChildren(root);
                }
                else
                {
                    SetupParentsAndChildrenFromDepths(root, new List<TreeViewItem>());
                }


                return root;
            }

            protected override void KeyEvent()
            {
                if (Event.current.type == EventType.KeyUp && Event.current.keyCode == KeyCode.Delete)
                {
                    var selectionIds = GetSelection();
                    RemoveTag(selectionIds);
                    Reload();
                }
            }

            protected override void SingleClickedItem(int id)
            {
                if (Event.current.control && IsSelected(id))
                {
                    m_TreeViewState.selectedIDs.Remove(id);
                    return;
                }

                base.SingleClickedItem(id);
            }

            protected override void DoubleClickedItem(int id)
            {
                base.DoubleClickedItem(id);
                var inputSet1 = new InputStringWindow.InputStringSet() { tips = "New Tag Name"};
                var inputSet2 = new InputStringWindow.InputStringSet() { tips = "New Tag Description"};
                InputStringWindow.OpenWindow("Modify This Tag", (p) => { ModifyTag(p[0]); ModifyDescription(p[1]); }, inputSet1, inputSet2);

            }

            protected override void ContextClicked()
            {
                base.ContextClicked();

                GenericMenu menu = new GenericMenu();
                menu.AddItem(new GUIContent("Ìí¼Ó"), false, OpenInputString);
                if (HasSelection())
                    menu.AddItem(new GUIContent("É¾³ý"), false, RemoveTag);
                menu.AddItem(new GUIContent("É¾³ýËùÓÐ"), false, RemoveAllTag);
                menu.ShowAsContext();

            }

            private void OpenInputString()
            {
                var inputSet1 = new InputStringWindow.InputStringSet() { tips = "New Tag Name"};
                var inputSet2 = new InputStringWindow.InputStringSet() { tips = "New Tag Description"};
                InputStringWindow.OpenWindow("Create New Tag", (p) => { AddTag(p[0], p[1]); }, inputSet1, inputSet2);
            }

            private void ModifyDescription(string newDesc)
            {
                var allSelect = GetSelection();
                var item = FindItem(allSelect[0], rootItem) as GameplayTagTreeItem;
                item.tagNode.description = newDesc;
                OnChange?.Invoke();
                Reload();
            }

            private void ModifyTag(string newName)
            { 
                var allSelect = GetSelection();
                var item = FindItem(allSelect[0], rootItem) as GameplayTagTreeItem;
                var fullName = item.tagNode.fullName;
                item.tagNode.fullName = fullName.Replace(item.tagNode.name, newName);
                item.tagNode.name = newName;
                OnChange?.Invoke();
                Reload();
            }

            private void AddTag(string name, string desc)
            {
                var allSelect = GetSelection();
                if (allSelect != null && allSelect.Count > 0)
                {
                    foreach (var id in allSelect)
                    {
                        var item = FindItem(id, rootItem) as GameplayTagTreeItem;
                        var fullName = GetItemFullName(item);
                        item.tagNode.AddChild(new GameplayTagsAsset.GameplayTagNode(name, fullName + '.' + name, desc));
                    }
                    SetExpanded(allSelect);
                }
                else
                {
                    m_TagsAsset.RootNode.AddChild(new GameplayTagsAsset.GameplayTagNode(name, name, desc));
                }
                OnChange?.Invoke();
                Reload();
            }

            private void RemoveTag(IList<int> selects)
            {
                var allSelect = selects;
                foreach (var id in allSelect)
                {
                    var item = FindItem(id, rootItem) as GameplayTagTreeItem;
                    var parent = FindItem(item.parent.id, rootItem) as GameplayTagTreeItem;
                    if (parent != null)
                        parent.tagNode.childs.Remove(item.tagNode);
                    else
                        m_TagsAsset.RootNode.childs.Remove(item.tagNode);
                }
                OnChange?.Invoke();
                Reload();
            }

            private void RemoveTag()
            {
                var allSelect = GetSelection();
                RemoveTag(allSelect);
            }

            private void RemoveAllTag()
            {
                m_TagsAsset.RootNode.childs.Clear();
                OnChange?.Invoke();

                Reload();
            }

            private string GetItemFullName(GameplayTagTreeItem item)
            {
                var fullName = item.displayName;
                var parent = item.parent;
                while (parent != null)
                {
                    if (string.IsNullOrEmpty(parent.displayName))
                    {
                        parent = parent.parent;
                        continue;
                    }
                    fullName = parent.displayName + "." + fullName;
                    parent = parent.parent;
                }
                return fullName;
            }

            private void IterRoot(ref int id, TreeViewItem titem, GameplayTagsAsset.GameplayTagNode node)
            {
                if (titem.children == null)
                {
                    titem.children = new List<TreeViewItem>();
                }

                GameplayTagTreeItem ntitem = new GameplayTagTreeItem { id = id++, displayName = node.name, tagNode = node, parent = titem };
                titem.children.Add(ntitem);

                if (node.childs != null)
                {
                    foreach (var cnode in node.childs)
                    {
                        IterRoot(ref id, ntitem, cnode);
                    }
                }
            }

            public static MultiColumnHeaderState CreateDefaultMultiColumnHeaderState()
            {
                var columns = new[]
                    {
                    new MultiColumnHeaderState.Column
                    {
                        headerContent = new GUIContent("TagName"),
                        headerTextAlignment = TextAlignment.Left,
                        sortedAscending = true,
                        sortingArrowAlignment = TextAlignment.Center,
                        width = 320,
                        minWidth = 320,
                        autoResize = false,
                        allowToggleVisibility = false
                    },
                    new MultiColumnHeaderState.Column
                    {
                        headerContent = new GUIContent("Depth"),
                        headerTextAlignment = TextAlignment.Left,
                        sortedAscending = true,
                        sortingArrowAlignment = TextAlignment.Left,
                        width = 130,
                        minWidth = 130,
                        maxWidth = 130,
                        autoResize = true
                    },
                    new MultiColumnHeaderState.Column
                    {
                        headerContent = new GUIContent("Description"),
                        headerTextAlignment = TextAlignment.Left,
                        sortedAscending = true,
                        sortingArrowAlignment = TextAlignment.Left,
                        width = 520,
                        minWidth = 520,
                        autoResize = true,
                    },
                };
                var state = new MultiColumnHeaderState(columns);
                return state;
            }
        }
    }
}

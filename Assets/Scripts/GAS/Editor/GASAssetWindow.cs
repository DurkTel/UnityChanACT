using GAS.Runtime;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEngine;

namespace GAS.Editor
{
    public class GASAssetWindow : MenuEditorWindow
    {

        [MenuItem("LGame/GAS/GAS Asset")]
        private static void OpenGUI()
        {
            GASAssetWindow resetPivot = (GASAssetWindow)EditorWindow.GetWindow(typeof(GASAssetWindow));
            resetPivot.titleContent = new GUIContent("GAS Asset");
            resetPivot.minSize = new Vector2(1000, 500);
            resetPivot.Show();
        }

        private Dictionary<Type, MenuContentRenderer> m_MenuDefine = new Dictionary<Type, MenuContentRenderer>()
        {
            [typeof(GameplayAbilityAsset)] = new GameplayAbilityContent(),
            [typeof(GameplayEffectAsset)] = new GameplayEffectContent(),
            [typeof(AbilitySystemArchetype)] = new AbilitySystemArchetypeContent(),
            [typeof(ModifierMagnitudeCalculation)] = new GameplayMMCContent(),
        };
        public override Dictionary<Type, MenuContentRenderer> MenuDefine { get { return m_MenuDefine; } }

        protected GASAssetTreeView m_GASAssetTreeView;

        protected override MenuTreeView OnCreate()
        {
            m_GASAssetTreeView ??= new GASAssetTreeView(new TreeViewState());
            m_GASAssetTreeView.OnInit(this, MenuDefine);
            return m_GASAssetTreeView;
        }

        public static List<Type> GetAllSubClass(Type baseType)
        {
            return AppDomain.CurrentDomain.GetAssemblies()
                    .SelectMany(assembly => assembly.GetTypes())
                    .Where(type => type.IsSubclassOf(baseType) && !type.IsAbstract).ToList();
        }
    }

    public class GASAssetTreeView : MenuTreeView
    {

        public class AssetFirstTreeItem : MenuTreeItem
        {
            public string filePath;
            public override Texture2D icon { get => EditorGUIUtility.IconContent("Folder Icon").image as Texture2D; set => base.icon = value; }
        }

        public class AssetSecondTreeItem : MenuTreeItem
        {
            public object asset;
            public override Texture2D icon { get => AssetPreview.GetMiniThumbnail(asset as ScriptableObject); set => base.icon = value; }

        }

        public virtual void OnInit(MenuEditorWindow window, Dictionary<Type, MenuContentRenderer> define)
        {
            customFoldoutYOffset = 3;
            m_MenuDefine = define;
            base.OnInit( window);
        }

        private Dictionary<Type, MenuContentRenderer> m_MenuDefine;

        public GASAssetTreeView(TreeViewState state) : base(state)
        {
        }

        public override bool ShowAlternatingRowBackgrounds => false;

        public override float RowHeight => 30;

        protected override void RowGUI(RowGUIArgs args)
        {
            args.label = "";
            base.RowGUI(args);
            bool isParent = args.item.depth == 0;

            var originalSize = EditorStyles.label.fontSize;
            EditorStyles.label.fontSize = isParent ? 16 : 14;
            var labelRect = new Rect(args.rowRect);
            labelRect.x += args.item.depth * 15 + 40;
            EditorGUI.LabelField(labelRect, args.item.displayName, EditorStyles.label);
            labelRect.x = 15;
            labelRect.y += labelRect.height;

            labelRect.width -= 30;
            labelRect.height = 0.5f;
            EditorGUI.DrawRect(labelRect, Color.black);
            EditorStyles.label.fontSize = originalSize;
        }

        protected override float GetCustomRowHeight(int row, TreeViewItem item)
        {
            if (item is AssetFirstTreeItem)
                return 35;

            return base.GetCustomRowHeight(row, item);
        }

        protected override TreeViewItem BuildRoot()
        {
            var assetPath = GameplayConfigureAsset.LoadOrCreate();

            var root = new TreeViewItem { id = 0, depth = -1, displayName = "Root" };

            int id = 1;
            int index = 0;
            root.children ??= new List<TreeViewItem>();

            foreach (var child in m_MenuDefine)
            {
                var item = new AssetFirstTreeItem
                {
                    id = id++,
                    displayName = child.Value.Name,
                    depth = 0,
                    index = index++,
                    isParent = true,
                    menuType = child.Key,
                    filePath = Path.Combine(assetPath.AssetGenPath, child.Value.Name)
                };

                root.AddChild(item);

            }

            AddChildByDirectory(root, ref id);

            SetupDepthsFromParentsAndChildren(root);
            return root;
        }

        private void AddChildinternal(AssetFirstTreeItem parent, string path, ref int id)
        {
            var allFiles = Directory.GetFiles(path, "*.asset");
            if (allFiles.Length == 0)
                return;
            int index = 0;
            foreach (var file in allFiles)
            {
                var obj = AssetDatabase.LoadAssetAtPath(file, parent.menuType);
                if (obj == null)
                    continue;

                parent.children ??= new List<TreeViewItem>();
                var child = new AssetSecondTreeItem() { id = id++, displayName = obj.name, depth = parent.depth + 1, asset = obj, menuType = parent.menuType, isParent = false, index = index };
                parent.AddChild(child);
                index++;
            }
        }

        private void AddChildByDirectory(TreeViewItem parent, ref int id)
        {
            foreach (AssetFirstTreeItem first in parent.children)
            {
                if (!Directory.Exists(first.filePath))
                    Directory.CreateDirectory(first.filePath);

                var dirPath =  Directory.GetDirectories(first.filePath);
                if (dirPath.Length > 0)
                {
                    foreach (var dir in dirPath)
                    {
                        var child = new AssetFirstTreeItem()
                        {
                            id = id++,
                            displayName = Path.GetFileName(dir),
                            depth = parent.depth + 1,
                            menuType = first.menuType,
                            isParent = true,
                            index = first.index,
                            filePath = dir
                        };
                        first.AddChild(child);

                        AddChildinternal(child, dir, ref id);
                    }
                }

                AddChildinternal(first, first.filePath, ref id);


                //allFiles = Directory.GetFiles(first.filePath, "*.asset");
                //if (allFiles.Length == 0)
                //    continue;
                //int index = 0;
                //foreach (var file in allFiles)
                //{
                //    var obj = AssetDatabase.LoadAssetAtPath(file, first.menuType);
                //    if (obj == null)
                //        continue;

                //    first.children ??= new List<TreeViewItem>();
                //    var child = new AssetSecondTreeItem() { id = id++, displayName = obj.name, depth = parent.depth + 1, asset = obj, menuType = first.menuType, isParent = false, index = index };
                //    first.AddChild(child);
                //    index++;
                //}
            }
        }

        protected override bool CanMultiSelect(TreeViewItem item)
        {
            return false;
        }

        protected override void ContextClickedItem(int id)
        {
            base.ContextClickedItem(id);
            var item = FindItem(id, rootItem);
            GenericMenu menu = new GenericMenu();

            if (item is AssetFirstTreeItem first)
            {
                menu.AddItem(new GUIContent("创建资源"), false, () =>
                {
                    if (first.menuType == typeof(GameplayAbilityAsset))
                    {
                        Type baseType = typeof(GameplayAbilityAsset);
                        var list = GASAssetWindow.GetAllSubClass(baseType);

                        var types = Assembly.GetAssembly(baseType).GetTypes();
                        TogglesTypeWindow.OpenWindow(list, "Create New Ability Asset", true, (types) =>
                        {
                            InputStringWindow.OpenWindow("Create New Ability Asset", (p) =>
                            {
                                var asset = ScriptableObject.CreateInstance(types[0]);
                                AssetDatabase.CreateAsset(asset, Path.Combine(first.filePath, p[0] + ".asset"));
                            }, new InputStringWindow.InputStringSet() { tips = "New Ability Name" });
                        });

                    }
                    else if (first.menuType == typeof(GameplayEffectAsset))
                    {
                        Type baseType = typeof(GameplayEffectAsset);
                        var list = GASAssetWindow.GetAllSubClass(baseType);
                        list.Add(baseType);

                        var types = Assembly.GetAssembly(baseType).GetTypes();
                        TogglesTypeWindow.OpenWindow(list, "Create New Effect Asset", true, (types) =>
                        {
                            InputStringWindow.OpenWindow("Create New Effect Asset", (p) =>
                            {
                                var asset = ScriptableObject.CreateInstance(types[0]);
                                AssetDatabase.CreateAsset(asset, Path.Combine(first.filePath, p[0] + ".asset"));
                            }, new InputStringWindow.InputStringSet() { tips = "New Effect Name" });
                        });

                        //InputStringWindow.OpenWindow("Create New Effect Asset", (p) =>
                        //{
                        //    var asset = ScriptableObject.CreateInstance<GameplayEffectAsset>();
                        //    AssetDatabase.CreateAsset(asset, Path.Combine(first.filePath, p[0] + ".asset"));
                        //}, new InputStringWindow.InputStringSet() { tips = "New Effect Name", });
                    }
                    else if (first.menuType == typeof(AbilitySystemArchetype))
                    {
                        InputStringWindow.OpenWindow("Create New Archetype Asset", (p) =>
                        {
                            var asset = ScriptableObject.CreateInstance<AbilitySystemArchetype>();
                            AssetDatabase.CreateAsset(asset, Path.Combine(first.filePath, p[0] + ".asset"));
                        }, new InputStringWindow.InputStringSet() { tips = "New Archetype Name" });
                    }
                    else if (first.menuType == typeof(ModifierMagnitudeCalculation))
                    {
                        Type type = typeof(ModifierMagnitudeCalculation);
                        var list = GASAssetWindow.GetAllSubClass(type);
                        TogglesTypeWindow.OpenWindow(list, "Create New MMC Asset", true, (types) =>
                        {
                            InputStringWindow.OpenWindow("Create New MMC Asset", (p) =>
                            {
                                var asset = ScriptableObject.CreateInstance(types[0]);
                                AssetDatabase.CreateAsset(asset, Path.Combine(first.filePath, p[0] + ".asset"));
                            }, new InputStringWindow.InputStringSet() { tips = "New MMC Name" });
                        });
                    }
                });
            }
            else if (item is AssetSecondTreeItem second)
            {
                menu.AddItem(new GUIContent("删除资源"), false, DeleteAsset);
            }

            menu.ShowAsContext();
        }

        protected override void KeyEvent()
        {
            if (Event.current.type == EventType.KeyUp && Event.current.keyCode == KeyCode.Delete)
            {
                DeleteAsset();
            }
        }

        private void DeleteAsset()
        {
            var selection = GetSelection()[0];
            if (FindItem(selection, rootItem) is AssetSecondTreeItem second)
            {
                m_MenuWindow.CurrentView = null;
                AssetDatabase.DeleteAsset(AssetDatabase.GetAssetPath(second.asset as ScriptableObject));
            }
        }
    }
}

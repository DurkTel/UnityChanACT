using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEditorInternal;
using UnityEngine;

namespace GAS.Editor
{
    public class GameplayAttributePage : PageWindow.PageElement
    {
        public override string Name => "GameplayAttribute";

        private AttributeList m_AttributeList;

        private GameplayAttributeAsset m_AttributeAsset;

        private string m_SearchStr;

        private SearchField m_Search;

        public Vector2 scrollPosition;

        public override void OnEnable()
        {
            m_AttributeAsset = GameplayAttributeAsset.LoadOrCreate();
            m_AttributeList = new AttributeList(m_AttributeAsset.attributeInfos);
            m_AttributeList.AttributeAsset = m_AttributeAsset;
            m_AttributeList.OnEnable(true, true, true, true, 30);

            m_Search = new SearchField();

        }

        public override void OnDisable()
        {
            
        }

        public override void OnGUI()
        {

            m_SearchStr = m_Search.OnToolbarGUI(new Rect(20, 40, EditorGUIUtility.currentViewWidth - 20, 20), m_SearchStr);

            EditorGUILayout.Space(10);
            GUILayout.BeginArea(new Rect(5f, 60f, m_EditorWindow.position.size.x - 10f, m_EditorWindow.position.size.y - 100f));
            scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition);

            m_AttributeList.RefreshList(m_SearchStr);

            EditorGUILayout.EndScrollView();
            GUILayout.EndArea();

            if (GUI.Button(new Rect(m_EditorWindow.position.size.x / 2 - 50f, m_EditorWindow.position.size.y - 40f, 100f, 35f), "Gen Lib"))
            {
                var path = GameplayConfigureAsset.LoadOrCreate().ScriptGenPath;

                if (!Directory.Exists(path))
                    Directory.CreateDirectory(path);

                GameplayAttributeAsset.Gen(path);
                AssetDatabase.Refresh();
            }
        }



        public class AttributeList : ReorderableGenericList<GameplayAttributeAsset.AttributeInfo>
        {
            public GameplayAttributeAsset AttributeAsset;

            private int m_SelectIndex;

            private double m_LastClick;


            public AttributeList(List<GameplayAttributeAsset.AttributeInfo> dataList, string[] headers = null) : base(dataList, headers)
            {
            }

            private void SaveAsset()
            {
                EditorUtility.SetDirty(AttributeAsset);
                GameplayAttributeAsset.UpdateAsset(AttributeAsset);
                GameplayAttributeAsset.Save();
            }

            protected override void SelectData(ReorderableList list)
            {
                if (m_SelectIndex == list.index && (double)Time.realtimeSinceStartup - m_LastClick <= 0.15f)
                {
                    var inputSet1 = new InputStringWindow.InputStringSet() { tips = "New Attribute Name"};
                    var inputSet2 = new InputStringWindow.InputStringSet() { tips = "New Attribute Description"};
                    InputStringWindow.OpenWindow("Modify New Attribute", (p)=> { ModifyAttribute(p[0]); ModifyDescription(p[1]); }, inputSet1, inputSet2);
                    GUIUtility.ExitGUI();
                }

                m_SelectIndex = list.index;
                m_LastClick = (double)Time.realtimeSinceStartup;
            }

            protected override void DrawElement(Rect rect, int index, bool selected, bool focused)
            {
                var info = Datas[index];

                float xMin = rect.xMin;
                float xMax = rect.xMax;
                rect.xMax = xMin + 300f;

                GUI.Label(rect, info.name, EditorStyles.label);

                rect.xMin = rect.xMax;
                rect.xMax = xMax;
                GUI.Label(rect, info.description, EditorStyles.label);
            }

            protected override void DrawHeader(Rect rect)
            {
                float xMin = rect.xMin;
                float xMax = rect.xMax;
                rect.xMax = xMin + 300f;

                GUI.Label(rect, "Attribute Name", EditorStyles.label);

                rect.xMin = rect.xMax;
                rect.xMax = xMax;
                GUI.Label(rect, "Description", EditorStyles.label);
            }

            protected override void OnChanged(ReorderableList list)
            {
                base.OnChanged(list);
                SaveAsset();
            }

            protected override void AddElement(ReorderableList list)
            {
                var inputSet1 = new InputStringWindow.InputStringSet() { tips = "New Attribute Name"};
                var inputSet2 = new InputStringWindow.InputStringSet() { tips = "New Attribute Description"};
                InputStringWindow.OpenWindow("Create New Attribute", (p) => { AddAttribute(p[0]); ModifyDescription(p[1]); }, inputSet1, inputSet2);
                GUIUtility.ExitGUI();
            }

            protected override void RemoveElement(ReorderableList list)
            {
                AttributeAsset.RemoveAt(list.index);
                ReorderableList.defaultBehaviours.DoRemoveButton(list);
                SaveAsset();
            }

            private void AddAttribute(string name)
            {
                if (AttributeAsset.AddAttribute(name))
                {
                    m_SelectIndex = AttributeAsset.attributeInfos.Count - 1;
                    SaveAsset();
                    return;
                }

                EditorUtility.DisplayDialog("警告", "不能重复添加Attribute！", "确认");
            }

            private void ModifyAttribute(string name)
            {
                if (m_SelectIndex == -1)
                    return;

                AttributeAsset.attributeInfos[m_SelectIndex].name = name;
                SaveAsset();

            }

            private void ModifyDescription(string desc)
            {
                if (m_SelectIndex == -1)
                    return;

                AttributeAsset.attributeInfos[m_SelectIndex].description = desc;
                SaveAsset();

            }

            protected override void FilterOverrides(string searchStr)
            {
                // Support multiple search words separated by spaces.
                string[] searchWords = searchStr.ToLower().Split(' ');

                // We keep two lists. Matches that matches the start of an item always get first priority.
                List<GameplayAttributeAsset.AttributeInfo> matchesStart = new List<GameplayAttributeAsset.AttributeInfo>();
                List<GameplayAttributeAsset.AttributeInfo> matchesWithin = new List<GameplayAttributeAsset.AttributeInfo>();
                foreach (var attributeInfo in AttributeAsset.attributeInfos)
                {
                    var name = attributeInfo.name.ToLower().Replace(" ", "");

                    bool didMatchAll = true;
                    bool didMatchStart = false;

                    // See if we match ALL the search words.
                    for (int w = 0; w < searchWords.Length; w++)
                    {
                        string search = searchWords[w];
                        if (name.Contains(search))
                        {
                            // If the start of the item matches the first search word, make a note of that.
                            if (w == 0 && name.StartsWith(search))
                                didMatchStart = true;
                        }
                        else
                        {
                            // As soon as any word is not matched, we disregard this item.
                            didMatchAll = false;
                            break;
                        }
                    }
                    // We always need to match all search words.
                    // If we ALSO matched the start, this item gets priority.
                    if (didMatchAll)
                    {
                        if (didMatchStart)
                            matchesStart.Add(attributeInfo);
                        else
                            matchesWithin.Add(attributeInfo);
                    }
                }

                Datas.Clear();

                // Add search results
                Datas.AddRange(matchesStart);
                Datas.AddRange(matchesWithin);
            }
        }
    }
}

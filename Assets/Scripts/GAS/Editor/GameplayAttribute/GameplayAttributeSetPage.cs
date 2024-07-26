using GAS.Runtime;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEditorInternal;
using UnityEngine;

namespace GAS.Editor
{
    public class GameplayAttributeSetPage : PageWindow.PageElement
    {
        public override string Name => "GameplayAttributeSet";

        private GameplayAttributeSetAsset m_AttributeSetAsset;

        private AttributeSetList m_AttributeSetList;

        private string m_SearchStr;

        private SearchField m_Search;

        public Vector2 scrollPosition;

        public override void OnEnable()
        {
            m_AttributeSetAsset = GameplayAttributeSetAsset.LoadOrCreate();
            m_AttributeSetList = new AttributeSetList(m_AttributeSetAsset.attributeSets, new string[] { "AttributeSet" });
            m_AttributeSetList.OnChange += SaveAsset;
            m_AttributeSetList.AttributeSetAsset = m_AttributeSetAsset;
            m_AttributeSetList.OnEnable(true, true, true, true, 150);
            m_Search = new SearchField();   
        }

        public override void OnDisable()
        {
            
        }

        private void SaveAsset()
        {
            EditorUtility.SetDirty(m_AttributeSetAsset);
            GameplayAttributeSetAsset.UpdateAsset(m_AttributeSetAsset);
            GameplayAttributeSetAsset.Save();
        }

        public override void OnGUI()
        {
            m_SearchStr = m_Search.OnToolbarGUI(new Rect(20, 40, EditorGUIUtility.currentViewWidth - 20, 20), m_SearchStr);

            EditorGUILayout.Space(10);
            GUILayout.BeginArea(new Rect(5f, 60f, m_EditorWindow.position.size.x - 10f, m_EditorWindow.position.size.y - 100f));
            scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition);

            m_AttributeSetList.RefreshList(m_SearchStr);

            EditorGUILayout.EndScrollView();
            GUILayout.EndArea();

            if (GUI.Button(new Rect(m_EditorWindow.position.size.x / 2 - 50f, m_EditorWindow.position.size.y - 40f, 100f, 35f), "Gen Code"))
            {
                var path = GameplayConfigureAsset.LoadOrCreate().ScriptGenPath;

                if (!Directory.Exists(path))
                    Directory.CreateDirectory(path);

                GameplayAttributeSetAsset.Gen(path);
                AssetDatabase.Refresh();
            }
        }

        private class AttributeSetList : ReorderableGenericList<GameplayAttributeSetAsset.AttributeSetInfo>
        {
            public Action OnChange;

            public GameplayAttributeSetAsset AttributeSetAsset;

            private int m_SelectedIndex;

            private List<string> m_NoHaveAttr = new List<string>();

            private List<int> m_WaitDeleteList = new List<int>(0);

            private List<Vector2> m_ScrollPositions = new List<Vector2>();

            public AttributeSetList(List<GameplayAttributeSetAsset.AttributeSetInfo> dataList, string[] headers = null) : base(dataList, headers)
            {
            }

            private void GetCurrentNoHaveAttr(GameplayAttributeSetAsset.AttributeSetInfo setInfo, ref List<string> noHave)
            {
                noHave.Clear();
                foreach (var attr in GameplayAttributeLib.AttributeNames)
                {
                    bool add = true;
                    foreach (var selfAttr in setInfo.attributes)
                    {
                        if (selfAttr.attributeName == attr)
                        {
                            add = false;
                            break;
                        }
                    }
                    if (!add) continue;
                    noHave.Add(attr);
                }
            }

            public override void OnEnable(bool draggable = true, bool displayHeader = true, bool displayAddButton = true, bool displayRemoveButton = true, float elementHeight = 16)
            {
                base.OnEnable(draggable, displayHeader, displayAddButton, displayRemoveButton, elementHeight);
                m_ScrollPositions = new List<Vector2>();
                for (int i = 0; i < AttributeSetAsset.attributeSets.Count; i++)
                    m_ScrollPositions.Add(Vector2.zero);
            }

            protected override void OnChanged(ReorderableList list)
            {
                base.OnChanged(list);
                OnChange?.Invoke();
            }

            protected override void AddElement(ReorderableList list)
            {
                var inputSet1 = new InputStringWindow.InputStringSet() { tips = "New AttributeSet Name"};
                InputStringWindow.OpenWindow("Create New Attribute", (p) => { AddAttributeSet(p[0]); }, inputSet1);
                GUIUtility.ExitGUI();
            }

            protected override void RemoveElement(ReorderableList list)
            {
                m_ScrollPositions.RemoveAt(list.index);
                base.RemoveElement(list);
                OnChange?.Invoke();
            }

            protected override void DrawElement(Rect rect, int index, bool selected, bool focused)
            {

                var info = AttributeSetAsset.attributeSets[index];

                float titleY = rect.y - rect.height / 2f + 10f;
                GUI.Label(new Rect(rect.x, titleY, rect.width - 20f, rect.height), info.setName, EditorStyles.label);

                Rect area = new Rect(rect.x, rect.y + 20f, rect.width - 20f, rect.height - 25f);
                GUI.Box(area, "", EditorStyles.helpBox);

                GUI.Box(new Rect(area.x, area.y, area.width, 20f), "Attributes", EditorStyles.helpBox);
                if (GUI.Button(new Rect(area.width, area.y, 20f, 20f), "+"))
                {
                    m_SelectedIndex = index;
                    GetCurrentNoHaveAttr(info, ref m_NoHaveAttr);
                    TogglesStringWindow.OpenWindow(m_NoHaveAttr, "Add Attributes", false, AddAttribute);
                    GUIUtility.ExitGUI();
                }


                if (info.attributes.Count > 0)
                {
                    if (GUI.Button(new Rect(area.width - 62f, area.y, 60f, 20f), "Export"))
                    {
                        InputStringWindow.OpenWindow("Export AttributeSet",(p) => { ExportAttributeSetAsset(p[0]); }, new InputStringWindow.InputStringSet() { tips = "AttributeSet SO Name", 
                            initialString = "New AttributeSet"});
                        GUIUtility.ExitGUI();
                    }

                    Rect scrollRect = new Rect(area.x, area.y + 20f, area.width + 20f, area.height - 20f);
                    Rect viewRect = new Rect(area.x, area.y + 20f, area.width - 20f, 27f * info.attributes.Count);

                    m_ScrollPositions[index] = GUI.BeginScrollView(scrollRect, m_ScrollPositions[index], viewRect);

                    EditorGUI.BeginChangeCheck();
                    m_WaitDeleteList.Clear();
                    foreach (var attr in info.attributes)
                    {
                        area.y += 25f;
                        string[] showAttr = new string[m_NoHaveAttr.Count + 1];
                        showAttr[0] = attr.attributeName;
                        Array.Copy(m_NoHaveAttr.ToArray(), 0, showAttr, 1, m_NoHaveAttr.Count);
                        int newSelectIndex = EditorGUI.Popup(new Rect(area.x + 10f, area.y, area.width - 50f, 20f), 0, showAttr);
                        if (newSelectIndex != 0)
                        {
                            attr.attributeName = showAttr[newSelectIndex];
                            attr.attributeIndex = GameplayAttributeLib.AttributeNames.IndexOf(attr.attributeName);
                            OnChange?.Invoke();
                            GetCurrentNoHaveAttr(info, ref m_NoHaveAttr);
                        }

                        if (GUI.Button(new Rect(area.width, area.y, 20f, 20f), "x"))
                            m_WaitDeleteList.Add(attr.attributeIndex);
                    }
                    GUI.EndScrollView();

                    if (m_WaitDeleteList.Count > 0)
                    {
                        foreach (var id in m_WaitDeleteList)
                        { 
                            for (int i = info.attributes.Count - 1; i >= 0; i--)
                            {
                                if (info.attributes[i].attributeIndex == id)
                                {
                                    info.attributes.RemoveAt(i);
                                    break;
                                }
                            }
                        }
                        GetCurrentNoHaveAttr(info, ref m_NoHaveAttr);
                    }

                    if (EditorGUI.EndChangeCheck())
                        OnChange?.Invoke();

                }
                else
                {
                    GUIContent content = EditorGUIUtility.IconContent("console.erroricon");
                    content.text = "√ª”–≈‰÷√Attribute";
                    GUI.Label(new Rect(area.center.x - 80f, area.y, area.width, area.height), content);
                }

            }

            private void AddAttributeSet(string name)
            {
                var setInfo = new GameplayAttributeSetAsset.AttributeSetInfo() { setName = name };
                AttributeSetAsset.attributeSets.Add(setInfo);
                m_ScrollPositions.Add(Vector2.zero);
                OnChange?.Invoke();
            }

            private void AddAttribute(params string[] attrs)
            {
                if (m_SelectedIndex < 0 || m_SelectedIndex > AttributeSetAsset.attributeSets.Count) return;
                var set = AttributeSetAsset.attributeSets[m_SelectedIndex];
                foreach (var attrId in attrs)
                {
                    bool skip = false;
                    foreach(var attr in set.attributes)
                    {
                        if (attr.attributeName == attrId)
                        {
                            skip = true;
                            break;
                        }
                    }
                    if (skip) continue;
                    set.attributes.Add(new GameplayAttributeSetAsset.AttributeInfo() { attributeName = attrId, attributeIndex = GameplayAttributeLib.AttributeNames.IndexOf(attrId) });
                }
                GetCurrentNoHaveAttr(set, ref m_NoHaveAttr);

                OnChange?.Invoke();
            }

            private void ExportAttributeSetAsset(string name)
            {
                //var path = GameplayConfigureAsset.LoadOrCreate().AssetGenPath;

                //if (!Directory.Exists(path))
                //    Directory.CreateDirectory(path);

                //var fullName = path + "/" + name + ".asset";

                //if (File.Exists(fullName))
                //{
                //    if (!EditorUtility.DisplayDialog("Warring", "The same set already exists. Do you want to replace it", "yse", "no"))
                //        return;
                //    AssetDatabase.DeleteAsset(fullName);
                //}

                //var setAsset = ScriptableObject.CreateInstance<GameplayAttributeSet>();
                //setAsset.attributes = new List<GameplayAttribute>();
                //var setInfo = AttributeSetAsset.attributeSets[m_SelectedIndex];
                //foreach (var attrId in setInfo.attributes)
                //    setAsset.attributes.Add(new GameplayAttribute(setInfo.setName, attrId.attributeName));

                //AssetDatabase.CreateAsset(setAsset, fullName);
                //AssetDatabase.Refresh();
            }

            protected override void FilterOverrides(string searchStr)
            {
                // Support multiple search words separated by spaces.
                string[] searchWords = searchStr.ToLower().Split(' ');

                // We keep two lists. Matches that matches the start of an item always get first priority.
                List<GameplayAttributeSetAsset.AttributeSetInfo> matchesStart = new List<GameplayAttributeSetAsset.AttributeSetInfo>();
                List<GameplayAttributeSetAsset.AttributeSetInfo> matchesWithin = new List<GameplayAttributeSetAsset.AttributeSetInfo>();
                foreach (var attributeSets in AttributeSetAsset.attributeSets)
                {
                    var name = attributeSets.setName.ToLower().Replace(" ", "");

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
                            matchesStart.Add(attributeSets);
                        else
                            matchesWithin.Add(attributeSets);
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

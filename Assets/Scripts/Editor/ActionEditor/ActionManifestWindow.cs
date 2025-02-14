using LGameFramework.GameLogic;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.IMGUI.Controls;
using UnityEditorInternal;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionManifestWindow : EditorWindow
    {
        public static void OpenGUI()
        {
            ActionManifestWindow resetPivot = (ActionManifestWindow)EditorWindow.GetWindow(typeof(ActionManifestWindow));
            resetPivot.titleContent = new GUIContent("ActionManifest");
            resetPivot.minSize = new Vector2(500, 700);
            resetPivot.Show();
        }

        private ActionInfoManifest m_ActionSetting;

        private ActionList m_ActionList;

        private string m_SearchStr;

        private SearchField m_Search;

        public Vector2 scrollPosition;

        private void OnEnable()
        {
            m_ActionSetting = ActionInfoManifest.LoadFormJson();
            m_ActionList = new ActionList(m_ActionSetting.ActionInfoList);
            m_ActionList.ActionSetting = m_ActionSetting;
            m_ActionList.Window = this;
            m_ActionList.OnEnable(true, true, true, true, 30);

            m_Search = new SearchField();
        }

        private void OnGUI()
        {
            m_SearchStr = m_Search.OnToolbarGUI(new Rect(5, 5, EditorGUIUtility.currentViewWidth - 5, 20), m_SearchStr);

            EditorGUILayout.Space(10);
            GUILayout.BeginArea(new Rect(5f, 25f, position.size.x - 10f, position.size.y - 25f));
            scrollPosition = EditorGUILayout.BeginScrollView(scrollPosition);

            m_ActionList.RefreshList(m_SearchStr);

            EditorGUILayout.EndScrollView();
            GUILayout.EndArea();
        }



        public class ActionList : ReorderableGenericList<ActionInfo>
        {
            public ActionInfoManifest ActionSetting;

            public ActionManifestWindow Window;

            private int m_SelectIndex;

            private double m_LastClick;
            public ActionList(List<ActionInfo> dataList, string[] headers = null) : base(dataList, headers)
            {
            }

            private void SaveAsset()
            {
                EditorUtility.SetDirty(ActionSetting);
                ActionInfoManifest.ExprotJson();
            }

            protected override void DrawHeader(Rect rect)
            {
                float xMin = rect.xMin;
                float xMax = rect.xMax;
                rect.xMax = xMin + 300f;

                GUI.Label(rect, "所有动作数据", EditorStyles.label);

            }

            protected override void DrawElement(Rect rect, int index, bool selected, bool focused)
            {
                var info = Datas[index];

                float xMin = rect.xMin;
                float xMax = rect.xMax;
                rect.xMax = xMin + 300f;

                GUI.Label(rect, info.ActionID, EditorStyles.label);
            }

            protected override void OnChanged(ReorderableList list)
            {
                base.OnChanged(list);
                SaveAsset();
            }

            protected override void AddElement(ReorderableList list)
            {
                var inputSet1 = new InputStringWindow.InputStringSet() { tips = "New Attribute Name" };
                InputStringWindow.OpenWindow("Create New Attribute", (p) => 
                {
                    string newId = p[0];
                    if (ActionSetting.Contains(newId))
                    {
                        EditorUtility.DisplayDialog("警告", "已经有相同ActionID的动作了", "这就改");
                        return;
                    }
                    ActionSetting.ActionInfoList.Add(new ActionInfo(newId));
                    SaveAsset();
                }, inputSet1);
                GUIUtility.ExitGUI();
            }

            protected override void RemoveElement(ReorderableList list)
            {
                ActionSetting.ActionInfoList.RemoveAt(list.index);
                ReorderableList.defaultBehaviours.DoRemoveButton(list);
                SaveAsset();
            }

            protected override void SelectData(ReorderableList list)
            {
                if (m_SelectIndex == list.index && (double)Time.realtimeSinceStartup - m_LastClick <= 0.2f)
                {
                    ActionWindow.UpdateSelectInfo(Datas[m_SelectIndex]);
                    //Window.Close();
                }

                m_SelectIndex = list.index;
                m_LastClick = (double)Time.realtimeSinceStartup;
            }

            protected override void FilterOverrides(string searchStr)
            {
                // Support multiple search words separated by spaces.
                string[] searchWords = searchStr.ToLower().Split(' ');

                // We keep two lists. Matches that matches the start of an item always get first priority.
                List<ActionInfo> matchesStart = new List<ActionInfo>();
                List<ActionInfo> matchesWithin = new List<ActionInfo>();
                foreach (var info in ActionSetting.ActionInfoList)
                {
                    var name = info.ActionID.ToLower().Replace(" ", "");

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
                            matchesStart.Add(info);
                        else
                            matchesWithin.Add(info);
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

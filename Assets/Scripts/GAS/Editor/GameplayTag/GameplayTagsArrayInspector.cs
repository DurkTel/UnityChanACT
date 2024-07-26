using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace GAS.Editor
{
    public abstract class GameplayTagsArrayInspector
    {

        private readonly bool[] m_Foldout;

        private readonly int[] m_FoldPageIndex;

        private List<string> m_NoHasTags;

        public abstract string[] TagsNames { get; }

        public GameplayTagsArrayInspector() 
        {
            m_Foldout = new bool[TagsNames.Length];
            m_FoldPageIndex = new int[TagsNames.Length];
            m_NoHasTags = new List<string>();
        }

        public Rect OnDrawGameplayTags(Rect contentRect = default)
        {
            Rect titleRect = new Rect(contentRect.x + 350, contentRect.y + 15, 290, 20);

            var oriAlig = GUI.skin.label.alignment;
            GUI.skin.label.alignment = TextAnchor.MiddleCenter;
            EditorGUI.LabelField(titleRect, "标签", GUI.skin.label);
            GUI.skin.label.alignment = oriAlig;
            titleRect.y += 20;

            for (int i = 0; i < m_Foldout.Length; i++)
            {
                var assetTags = GetAbilityTags(i);
                titleRect.x -= 15;
                GUI.Box(titleRect, "", EditorStyles.helpBox);
                titleRect.x += 15;

                if (GUI.Button(new Rect(titleRect.x + titleRect.width - 35, titleRect.y, 20, 20), "+"))
                {
                    List<string> tags = new List<string>();
                    foreach (var item in GameplayTagsLib.TagMap)
                    {
                        if (assetTags != null && assetTags.Contains(item.Value))
                            continue;

                        tags.Add(item.Key);
                    }
                    TogglesStringWindow.OpenWindow(tags, "Select Tag", false, (selects) =>
                    {
                        SetAbilityTags(i, selects);

                        //EditorUtility.SetDirty(m_AbilityAsset);
                        SaveAsset();
                    });
                }

                bool showNextPage = m_Foldout[i] && assetTags.Length > 3;
                int allPage = 0;
                if (showNextPage)
                {
                    allPage = Mathf.CeilToInt(assetTags.Length / 3f);
                    if (GUI.Button(new Rect(titleRect.x + titleRect.width - 110, titleRect.y, 20, 20), EditorGUIUtility.IconContent("d_Animation.PrevKey")))
                    {
                        m_FoldPageIndex[i] = Mathf.Clamp(--m_FoldPageIndex[i], 0, allPage - 1);
                    }

                    if (GUI.Button(new Rect(titleRect.x + titleRect.width - 60, titleRect.y, 20, 20), EditorGUIUtility.IconContent("d_Animation.NextKey")))
                    {
                        m_FoldPageIndex[i] = Mathf.Clamp(++m_FoldPageIndex[i], 0, allPage - 1);
                    }

                    EditorGUI.LabelField(new Rect(titleRect.x + titleRect.width - 85, titleRect.y, 30, 20), string.Format("{0}/{1}", m_FoldPageIndex[i] + 1, allPage));
                }
                if (assetTags != null && assetTags.Length > 0)
                {
                    m_Foldout[i] = EditorGUI.Foldout(titleRect, m_Foldout[i], TagsNames[i], true);
                    if (m_Foldout[i])
                    {
                        m_NoHasTags.Clear();
                        GetCurrentNoHaveTag(assetTags, ref m_NoHasTags);

                        int sIndex = m_FoldPageIndex[i] * 3;
                        int eIndex = Mathf.Clamp(sIndex + 3, 0, assetTags.Length);

                        for (int j = sIndex; j < eIndex; j++)
                        {
                            titleRect.y += 22;

                            string[] showTag = new string[m_NoHasTags.Count + 1];
                            showTag[0] = assetTags[j].FullName;
                            Array.Copy(m_NoHasTags.ToArray(), 0, showTag, 1, m_NoHasTags.Count);
                            titleRect.width -= 50f;
                            int newSelectIndex = EditorGUI.Popup(titleRect, 0, showTag);
                            titleRect.width += 50f;
                            if (newSelectIndex != 0)
                            {
                                assetTags[j] = GameplayTagsLib.TagMap[showTag[newSelectIndex]];
                                //EditorUtility.SetDirty(m_AbilityAsset);
                                SaveAsset();
                            }

                            if (GUI.Button(new Rect(titleRect.x + titleRect.width - 40, titleRect.y, 20, 20), "x"))
                            {
                                RemoveAbilityTags(i, assetTags[j]);
                                //EditorUtility.SetDirty(m_AbilityAsset);
                                SaveAsset();
                                int curPage = Mathf.CeilToInt(assetTags.Length - 1 / 3f); //这时候资源还没刷
                                if (curPage != allPage)
                                    m_FoldPageIndex[i] = 0;
                            }
                        }
                    }
                }
                else
                    EditorGUI.LabelField(titleRect, TagsNames[i]);

                titleRect.y += 25;
            }

            titleRect.x = contentRect.x + 330;
            titleRect.width = 300;
            titleRect.height = titleRect.y - 10;
            titleRect.y = contentRect.y + 15;
            GUI.Box(titleRect, "", EditorStyles.helpBox);

            return titleRect;
        }

        public abstract GameplayTag[] GetAbilityTags(int index);

        public abstract void SetAbilityTags(int index, params string[] tags);

        public abstract void RemoveAbilityTags(int index, params GameplayTag[] tags);

        public abstract void SaveAsset();

        private void GetCurrentNoHaveTag(GameplayTag[] tags, ref List<string> noHave)
        {
            noHave.Clear();
            foreach (var tagGen in GameplayTagsLib.TagMap)
            {
                bool add = true;
                foreach (var selfTag in tags)
                {
                    if (selfTag == tagGen.Value)
                    {
                        add = false;
                        break;
                    }
                }
                if (!add) continue;
                noHave.Add(tagGen.Key);
            }
        }
    }
}

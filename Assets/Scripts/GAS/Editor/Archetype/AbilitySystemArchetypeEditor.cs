using GAS.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEditorInternal;
using UnityEngine;
using UnityEngine.UI;
using static GAS.Editor.GameplayAttributeSetAsset;

namespace GAS.Editor
{
    [CustomEditor(typeof(AbilitySystemArchetype))]
    public class AbilitySystemArchetypeEditor : UnityEditor.Editor
    {
        private AbilitySystemArchetype m_ArchetypeAsset;

        private TagsArrayInspector m_TagsArrayInspector;

        private AttributeSetList m_AttributeSetList;

        private AbilityAssetList m_AbilityAssetList;

        private void OnEnable()
        {
            m_ArchetypeAsset = target as AbilitySystemArchetype;
            if (m_ArchetypeAsset == null) return;
            m_TagsArrayInspector ??= new TagsArrayInspector(m_ArchetypeAsset);

            m_ArchetypeAsset.AttributeSets ??= new AttributeSetData[0];
            m_ArchetypeAsset.AbilityAssets ??= new GameplayAbilityAsset[0];

            m_AttributeSetList = new AttributeSetList(m_ArchetypeAsset.AttributeSets.ToList(), m_ArchetypeAsset, new string[] {"属性集"});
            m_AttributeSetList.OnEnable(true, true, true, true, 100);

            m_AbilityAssetList = new AbilityAssetList(m_ArchetypeAsset.AbilityAssets.ToList(), m_ArchetypeAsset, new string[] { "能力集" });
            m_AbilityAssetList.OnEnable(true, true, true, true, 16);

        }

        public override void OnInspectorGUI()
        {
            //base.OnInspectorGUI();
            OnDrawDescriptionTags();
            m_TagsArrayInspector.OnDrawGameplayTags();
            
            m_AttributeSetList.RefreshList(new Rect(10, 180, 300, 30));

            m_AbilityAssetList.RefreshList(new Rect(330, 180, 300, 30));


            GUILayout.Space(800);

        }

        private void OnDrawDescriptionTags()
        {
            Rect titleRect = new Rect(10, 15, 300, 150);
            GUI.Box(titleRect, "", EditorStyles.helpBox);

            titleRect.width = 290;

            titleRect.height = 20;
            titleRect.x += 110;
            EditorGUI.LabelField(titleRect, "基本信息");
            titleRect.x -= 110;
            titleRect.x += 5;
            titleRect.y += 25;
            titleRect.height = 110;

            string empty = "对于实体原型的描述\n目前未填写该原型的描述哦~";
            bool isEmpty = string.IsNullOrEmpty(m_ArchetypeAsset.Description);
            var style = new GUIStyle(EditorStyles.textField);
            style.fontStyle = isEmpty ? FontStyle.Italic : FontStyle.Normal;

            var str = EditorGUI.TextArea(titleRect, isEmpty ? empty : m_ArchetypeAsset.Description, style);
            if (str != empty)
                m_ArchetypeAsset.Description = str;
        }

        class TagsArrayInspector : GameplayTagsArrayInspector
        {
            private readonly AbilitySystemArchetype m_ArchetypeAsset;

            private readonly string[] m_TagsNames = new string[]
            {
                "固有标签 (FixedTags)",
            };
            public override string[] TagsNames { get { return m_TagsNames; } }

            public TagsArrayInspector(AbilitySystemArchetype asset) : base()
            {
                m_ArchetypeAsset = asset;
            }
            public override GameplayTag[] GetAbilityTags(int index)
            {
                switch (index)
                {
                    case 0:
                        return m_ArchetypeAsset.FixedTags;
                }
                return null;
            }

            public override void RemoveAbilityTags(int index, params GameplayTag[] tags)
            {
                void RemoveTo(ref GameplayTag[] removeto, GameplayTag[] tags)
                {
                    int origiCount = removeto.Length;
                    Array.Resize(ref removeto, origiCount - tags.Length);
                    var list = removeto.ToList();
                    foreach (var tag in tags)
                        list.Remove(tag);
                }

                switch (index)
                {
                    case 0:
                        RemoveTo(ref m_ArchetypeAsset.FixedTags, tags);
                        break;
                }
            }

            public override void SetAbilityTags(int index, params string[] tags)
            {
                void CopyTo(ref GameplayTag[] addto, string[] tags)
                {
                    int origiCount = addto.Length;
                    Array.Resize(ref addto, origiCount + tags.Length);
                    for (int i = 0; i < tags.Length; i++)
                        addto[i + origiCount] = GameplayTagsLib.TagMap[tags[i]];
                }

                switch (index)
                {
                    case 0:
                        CopyTo(ref m_ArchetypeAsset.FixedTags, tags);
                        break;
                }
            }

            public override void SaveAsset()
            {
                EditorUtility.SetDirty(m_ArchetypeAsset);
            }

        }

        public class AttributeSetList : ReorderableGenericList<AttributeSetData>
        {
            private AbilitySystemArchetype m_ArchetypeAsset;

            private GameplayAttributeSetAsset m_AttributeSetAsset;

            private List<Vector2> m_ScrollPositions = new List<Vector2>();

            public AttributeSetList(List<AttributeSetData> dataList, string[] headers = null) : base(dataList, headers)
            {
            }

            public AttributeSetList(List<AttributeSetData> dataList, AbilitySystemArchetype archetype, string[] headers = null) : base(dataList, headers)
            {
                m_ArchetypeAsset = archetype;
            }

            public override void OnEnable(bool draggable = true, bool displayHeader = true, bool displayAddButton = true, bool displayRemoveButton = true, float elementHeight = 16)
            {
                base.OnEnable(draggable, displayHeader, displayAddButton, displayRemoveButton, elementHeight);

                m_AttributeSetAsset = GameplayAttributeSetAsset.LoadOrCreate();
                m_ScrollPositions = new List<Vector2>();


                for (int i = 0; i < m_ArchetypeAsset.AttributeSets.Length; i++)
                {
                    var info = m_ArchetypeAsset.AttributeSets[i];
                    m_ScrollPositions.Add(Vector2.zero);

                    List<AttributeData> newData = new List<AttributeData>();

                    AttributeSetInfo setInfo = null;

                    foreach (var item in m_AttributeSetAsset.attributeSets)
                    {
                        if (item.setName == info.AttributeSetName)
                        {
                            setInfo = item;
                            break;
                        }
                    }

                    foreach (var attr in setInfo.attributes)
                    {
                        float value = 0;
                        foreach (var data in info.AttributeData)
                        {
                            if (data.AttributeName == attr.attributeName)
                                value = data.BaseValue;
                        }
                        newData.Add(new AttributeData() { AttributeName = attr.attributeName, BaseValue = value });
                    }

                    m_ArchetypeAsset.AttributeSets[i].AttributeData = newData.ToArray();
                }

            }

            protected override void AddElement(ReorderableList list)
            {
                var typeList = new List<string>();
                foreach (var item in GameplayAttributeSetLib.AttributeSetMap.Keys)
                {
                    bool skip = false;
                    foreach (var data in m_DataList)
                    {
                        if (data.AttributeSetName == item)
                        {
                            skip = true;
                            continue;
                        }
                    }

                    if (skip)
                        continue;

                    typeList.Add(item);
                }

                if (typeList.Count <= 0)
                {
                    EditorUtility.DisplayDialog("提示", "已经没有多余的属性集了", "确认");
                    return;
                }

                TogglesStringWindow.OpenWindow(typeList, "Add AttributesSet", false, (select) =>
                {
                    var newArray = new List<AttributeSetData>();
                    newArray.AddRange(m_ArchetypeAsset.AttributeSets);
                    foreach (var item in select)
                    {
                        foreach (var set in m_AttributeSetAsset.attributeSets)
                        {
                            if (set.setName == item)
                            {
                                List<AttributeData> tempData = new List<AttributeData>();
                                foreach (var attInfo in set.attributes)
                                    tempData.Add(new AttributeData() { AttributeName = attInfo.attributeName });

                                newArray.Add(new AttributeSetData() { AttributeSetName = item, AttributeData = tempData.ToArray() });
                            }
                        }

                    }

                    m_ArchetypeAsset.AttributeSets = newArray.ToArray();
                    m_DataList = newArray.ToList();
                    m_ScrollPositions.Add(Vector2.zero);
                    EditorUtility.SetDirty(m_ArchetypeAsset);
                });
            }

            protected override void RemoveElement(ReorderableList list)
            {
                base.RemoveElement(list);
                m_ScrollPositions.RemoveAt(list.index);
                m_ArchetypeAsset.AttributeSets = m_DataList.ToArray();
                EditorUtility.SetDirty(m_ArchetypeAsset);
            }

            protected override void DrawElement(Rect rect, int index, bool selected, bool focused)
            {
                var info = m_ArchetypeAsset.AttributeSets[index];
                if (info.AttributeData == null)
                    return;

                float titleY = rect.y - rect.height / 2f + 10f;
                GUI.Label(new Rect(rect.x, titleY, rect.width - 20f, rect.height), info.AttributeSetName, EditorStyles.label);

                Rect area = new Rect(rect.x, rect.y + 20f, rect.width - 20f, rect.height - 25f);
                GUI.Box(area, "", EditorStyles.helpBox);

                Rect scrollRect = new Rect(area.x, area.y + 5f, area.width + 20f, area.height - 10f);
                Rect viewRect = new Rect(area.x, area.y + 0f, area.width - 20f, 26f * info.AttributeData.Length);

                m_ScrollPositions[index] = GUI.BeginScrollView(scrollRect, m_ScrollPositions[index], viewRect);

                for (int i = 0; i < info.AttributeData.Length; i++)
                {
                    EditorGUI.BeginChangeCheck();
                    var newValue = EditorGUI.FloatField(new Rect(area.x + 10f, area.y, area.width - 20f, 20f), info.AttributeData[i].AttributeName, info.AttributeData[i].BaseValue);
                    area.y += 25f;
                    if (EditorGUI.EndChangeCheck())
                    {
                        info.AttributeData[i] = new AttributeData() { AttributeName = info.AttributeData[i].AttributeName, BaseValue = newValue };
                        m_DataList[index] = new AttributeSetData() { AttributeSetName = info.AttributeSetName, AttributeData = info.AttributeData };
                        EditorUtility.SetDirty(m_ArchetypeAsset);
                    }
                }

                GUI.EndScrollView();
            }
        }


        public class AbilityAssetList : ReorderableGenericList<GameplayAbilityAsset>
        {
            private AbilitySystemArchetype m_ArchetypeAsset;

            public AbilityAssetList(List<GameplayAbilityAsset> dataList, string[] headers = null) : base(dataList, headers)
            {
            }

            public AbilityAssetList(List<GameplayAbilityAsset> dataList, AbilitySystemArchetype archetype, string[] headers = null) : base(dataList, headers)
            {
                m_ArchetypeAsset = archetype;
            }

            protected override void OnChanged(ReorderableList list)
            {
                base.OnChanged(list);
                m_ArchetypeAsset.AbilityAssets = m_DataList.ToArray();
                EditorUtility.SetDirty(m_ArchetypeAsset);
            }

            protected override void AddElement(ReorderableList list)
            {
                m_DataList.Add(null);
                //ReorderableList.defaultBehaviours.DoAddButton(list);
            }

            protected override void RemoveElement(ReorderableList list)
            {
                base.RemoveElement(list);
                m_ArchetypeAsset.AbilityAssets = m_DataList.ToArray();
                EditorUtility.SetDirty(m_ArchetypeAsset);
            }

            protected override void DrawElement(Rect rect, int index, bool selected, bool focused)
            {
                EditorGUI.BeginChangeCheck();

                m_DataList[index] = EditorGUI.ObjectField(rect, "", m_DataList[index], typeof(GameplayAbilityAsset), false) as GameplayAbilityAsset;

                if (EditorGUI.EndChangeCheck())
                {
                    m_ArchetypeAsset.AbilityAssets = m_DataList.ToArray();
                    EditorUtility.SetDirty(m_ArchetypeAsset);

                }
            }
        }
    }
}

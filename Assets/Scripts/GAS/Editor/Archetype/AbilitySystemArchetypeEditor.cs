using GAS.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEditorInternal;
using UnityEngine;

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

            m_ArchetypeAsset.AttributeSets ??= new string[0];
            m_ArchetypeAsset.AbilityAssets ??= new GameplayAbilityAsset[0];

            m_AttributeSetList = new AttributeSetList(m_ArchetypeAsset.AttributeSets.ToList(), m_ArchetypeAsset, new string[] {"属性集"});
            m_AttributeSetList.OnEnable(true, true, true, true, 16);

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

        public class AttributeSetList : ReorderableGenericList<string>
        {
            private AbilitySystemArchetype m_ArchetypeAsset;

            public AttributeSetList(List<string> dataList, string[] headers = null) : base(dataList, headers)
            {
            }

            public AttributeSetList(List<string> dataList, AbilitySystemArchetype archetype, string[] headers = null) : base(dataList, headers)
            {
                m_ArchetypeAsset = archetype;   
            }

            protected override void AddElement(ReorderableList list)
            {
                var typeList = new List<string>();
                foreach (var item in GameplayAttributeSetLib.AttributeSetMap.Keys)
                {
                    if (!m_DataList.Contains(item))
                        typeList.Add(item);
                }

                if (typeList.Count <= 0)
                {
                    EditorUtility.DisplayDialog("提示", "已经没有多余的属性集了", "确认");
                    return;
                }

                TogglesStringWindow.OpenWindow(typeList, "Add AttributesSet", false, (select) =>
                {
                    var newArray = new string[m_DataList.Count + select.Length];
                    m_ArchetypeAsset.AttributeSets.CopyTo(newArray, 0);
                    select.CopyTo(newArray, m_DataList.Count);
                    m_ArchetypeAsset.AttributeSets = newArray;
                    m_DataList = newArray.ToList();
                    EditorUtility.SetDirty(m_ArchetypeAsset);
                });
            }

            protected override void RemoveElement(ReorderableList list)
            {
                base.RemoveElement(list);
                m_ArchetypeAsset.AttributeSets = m_DataList.ToArray();
                EditorUtility.SetDirty(m_ArchetypeAsset);
            }

            protected override void DrawElement(Rect rect, int index, bool selected, bool focused)
            {
                GUI.Label(rect, m_DataList[index], EditorStyles.label);

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

            protected override void AddElement(ReorderableList list)
            {
                m_DataList.Add(null);
                //ReorderableList.defaultBehaviours.DoAddButton(list);
            }

            protected override void RemoveElement(ReorderableList list)
            {
                base.RemoveElement(list);
                m_ArchetypeAsset.AbilityAssets = m_DataList.ToArray();
            }

            protected override void DrawElement(Rect rect, int index, bool selected, bool focused)
            {
                EditorGUI.BeginChangeCheck();

                m_DataList[index] = EditorGUI.ObjectField(rect, "", m_DataList[index], typeof(GameplayAbilityAsset), false) as GameplayAbilityAsset;

                if (EditorGUI.EndChangeCheck())
                {
                    m_ArchetypeAsset.AbilityAssets = m_DataList.ToArray();
                }
            }
        }
    }
}

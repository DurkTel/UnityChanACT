using GAS.Runtime;
using System;
using System.Linq;
using UnityEditor;
using UnityEngine;
using System.Collections.Generic;

namespace GAS.Editor
{
    [CustomEditor(typeof(GameplayAbilityAsset), true)]
    public class GameplayAbilityAssetEditor : UnityEditor.Editor
    {
        protected GameplayAbilityAsset m_AbilityAsset;

        protected TagsArrayInspector m_TagsArrayInspector;

        //父类的字段 全部隐藏
        private readonly HashSet<string> m_IgnoreProperty = new HashSet<string>()
        {
            "m_Script",
            "Description",
            "UID",
            "FixedTags",
            "ActivationTags",
            "CancelTags",
            "BlockActiveTags",
            "BlockInActiveTags",
            "RequireTags",
        };
        private void OnEnable()
        {
            m_AbilityAsset = target as GameplayAbilityAsset;
            m_TagsArrayInspector ??= new TagsArrayInspector(m_AbilityAsset);

        }


        public override void OnInspectorGUI()
        {
            //base.OnInspectorGUI();
            serializedObject.Update();
            
            OnDrawDescriptionTags();
            Rect tagRect = m_TagsArrayInspector.OnDrawGameplayTags();

            Rect subTitleRect = new Rect(10, tagRect.y + tagRect.height + 15, 620, 20);
            GUI.Box(subTitleRect, "", EditorStyles.helpBox);
            subTitleRect.x += 280;
            EditorGUI.LabelField(subTitleRect, "派生类字段");
            subTitleRect.x -= 280;

            GUILayout.Space(1000);

            subTitleRect.height = 1000;
            subTitleRect.y += 25;
            serializedObject.UpdateIfRequiredOrScript();
            SerializedProperty iterator = serializedObject.GetIterator();
            GUILayout.BeginArea(subTitleRect);
            bool enterChildren = true;
            while (iterator.NextVisible(enterChildren))
            {
                //将不是父类的字段全部按照默认的显示出来
                if (!m_IgnoreProperty.Contains(iterator.propertyPath))
                    EditorGUILayout.PropertyField(iterator, true);

                enterChildren = false;
            }
            GUILayout.EndArea();
            serializedObject.ApplyModifiedProperties();

        }

        private void OnDrawDescriptionTags()
        { 
            Rect titleRect = new Rect(10, 15, 300, 175);
            GUI.Box(titleRect, "", EditorStyles.helpBox);

            titleRect.width = 290;

            titleRect.height = 20;
            titleRect.x += 110;
            EditorGUI.LabelField(titleRect, "基本信息");
            titleRect.x -= 110;
            titleRect.x += 20;

            titleRect.y += 20;
            titleRect.x -= 15;
            GUI.Box(titleRect, "", EditorStyles.helpBox);
            titleRect.x += 15;
            EditorGUI.SelectableLabel(titleRect, "所属能力："+ m_AbilityAsset.GetAbilityType().Name);
            titleRect.y += 25;
            titleRect.x -= 15;
            GUI.Box(titleRect, "", EditorStyles.helpBox);
            titleRect.x += 15;
            EditorGUI.SelectableLabel(titleRect, "资源类名：" + m_AbilityAsset.Name);
            titleRect.y += 25;
            titleRect.x -= 15;
            GUI.Box(titleRect, "", EditorStyles.helpBox);
            titleRect.x += 15;
            EditorGUI.LabelField(titleRect, "唯一标识：");
            titleRect.x += 60;
            titleRect.width = 210;
            if (string.IsNullOrEmpty(m_AbilityAsset.UID))
                m_AbilityAsset.UID = m_AbilityAsset.name;
            m_AbilityAsset.UID = EditorGUI.TextField(titleRect, m_AbilityAsset.UID);

            titleRect.width = 290;
            titleRect.x = 15;
            titleRect.y += 25;
            titleRect.height = 60;

            string empty = "对于能力的描述\n目前未填写该能力的描述哦~";
            bool isEmpty = string.IsNullOrEmpty(m_AbilityAsset.Description);
            var style = new GUIStyle(EditorStyles.textField);
            style.fontStyle = isEmpty ? FontStyle.Italic : FontStyle.Normal;

            var str = EditorGUI.TextArea(titleRect, isEmpty ? empty : m_AbilityAsset.Description, style);
            if(str != empty )
                m_AbilityAsset.Description = str;
        }

        public class TagsArrayInspector : GameplayTagsArrayInspector
        {
            private readonly GameplayAbilityAsset m_AbilityAsset;


            private readonly string[] m_TagsNames = new string[]
            {
                "固有标签 (FixedTags)",
                "激活标签 (ActivationTags)",
                "取消标签 (CancelTags)",
                "阻碍标签 (BlockActiveTags)",
                "阻碍标签 (BlockInActiveTags)",
                "必需标签 (RequireTags)",
            };

            public override string[] TagsNames { get { return m_TagsNames; } }

            public TagsArrayInspector(GameplayAbilityAsset asset) : base()
            {
                m_AbilityAsset = asset;
            }

            public override GameplayTag[] GetAbilityTags(int index)
            {
                switch (index)
                {
                    case 0:
                        return m_AbilityAsset.FixedTags;
                    case 1:
                        return m_AbilityAsset.ActivationTags;
                    case 2:
                        return m_AbilityAsset.CancelTags;
                    case 3:
                        return m_AbilityAsset.BlockActiveTags;
                    case 4:
                        return m_AbilityAsset.BlockInActiveTags;
                    case 5:
                        return m_AbilityAsset.RequireTags;
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
                        RemoveTo(ref m_AbilityAsset.FixedTags, tags);
                        break;
                    case 1:
                        RemoveTo(ref m_AbilityAsset.ActivationTags, tags);
                        break;
                    case 2:
                        RemoveTo(ref m_AbilityAsset.CancelTags, tags);
                        break;
                    case 3:
                        RemoveTo(ref m_AbilityAsset.BlockActiveTags, tags);
                        break;
                    case 4:
                        RemoveTo(ref m_AbilityAsset.BlockInActiveTags, tags);
                        break;
                    case 5:
                        RemoveTo(ref m_AbilityAsset.RequireTags, tags);
                        break;
                }
            }

            public override void SetAbilityTags(int index, params string[] tags)
            {
                void CopyTo(ref GameplayTag[] addto, string[] tags)
                {
                    int origiCount = addto == null ? 0 : addto.Length;
                    Array.Resize(ref addto, origiCount + tags.Length);
                    for (int i = 0; i < tags.Length; i++)
                        addto[i + origiCount] = GameplayTagsLib.TagMap[tags[i]];
                }

                switch (index)
                {
                    case 0:
                        CopyTo(ref m_AbilityAsset.FixedTags, tags);
                        break;
                    case 1:
                        CopyTo(ref m_AbilityAsset.ActivationTags, tags);
                        break;
                    case 2:
                        CopyTo(ref m_AbilityAsset.CancelTags, tags);
                        break;
                    case 3:
                        CopyTo(ref m_AbilityAsset.BlockActiveTags, tags);
                        break;
                    case 4:
                        CopyTo(ref m_AbilityAsset.BlockInActiveTags, tags);
                        break;
                    case 5:
                        CopyTo(ref m_AbilityAsset.RequireTags, tags);
                        break;
                }
            }

            public override void SaveAsset()
            {
                EditorUtility.SetDirty(m_AbilityAsset);
            }
        }
    }
}

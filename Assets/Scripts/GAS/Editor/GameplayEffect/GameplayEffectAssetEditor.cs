using GAS.Runtime;
using System.Linq;
using System;
using UnityEditor;
using UnityEngine;
using System.Collections.Generic;

namespace GAS.Editor
{
    [CustomEditor(typeof(GameplayEffectAsset), true)]
    public class GameplayEffectAssetEditor : UnityEditor.Editor
    {
        private GameplayEffectAsset m_EffectAsset;

        private TagsArrayInspector m_TagsArrayInspector;

        private Rect m_ContentRect;

        private List<Type> m_AllEffectSubClass;

        private string[] m_AllEffectSubName;

        private int m_CurrentSelectSubClass;

        private void OnEnable()
        {
            m_EffectAsset = target as GameplayEffectAsset;
            m_TagsArrayInspector ??= new TagsArrayInspector(m_EffectAsset);
            m_AllEffectSubClass = GASAssetWindow.GetAllSubClass(typeof(GameplayEffect));

            m_AllEffectSubName = new string[m_AllEffectSubClass.Count + 1];
            m_AllEffectSubName[0] = typeof(GameplayEffect).Name;
            for (int i = 0; i < m_AllEffectSubClass.Count; i++)
                m_AllEffectSubName[i + 1] = m_AllEffectSubClass[i].Name;

            m_CurrentSelectSubClass = Array.IndexOf<string>(m_AllEffectSubName, m_EffectAsset.Type);
            m_CurrentSelectSubClass = m_CurrentSelectSubClass < 0 ? 0 : m_CurrentSelectSubClass;

        }

        public override void OnInspectorGUI()
        {
            m_ContentRect = GUILayoutUtility.GetRect(680, 500);
            //base.OnInspectorGUI();
            OnDrawDescription();
            m_TagsArrayInspector.OnDrawGameplayTags(m_ContentRect);
            OnDrawEffectType();

            GUILayout.Space(600);
        }

        private void OnDrawDescription()
        {
            
            Rect titleRect = new Rect(m_ContentRect.x, m_ContentRect.y + 15, 300, 150);
            GUI.Box(titleRect, "", EditorStyles.helpBox);
            titleRect.width = 290;
            titleRect.height = 20;

            var oriAlig = GUI.skin.label.alignment;
            GUI.skin.label.alignment = TextAnchor.MiddleCenter;
            EditorGUI.LabelField(titleRect, "基本信息", GUI.skin.label);
            GUI.skin.label.alignment = oriAlig;
            titleRect.x += 5;
            titleRect.y += 20;
            titleRect.height = 20;
            titleRect.width = 70;
            EditorGUI.LabelField(titleRect, "要应用的类");
            titleRect.x += titleRect.width;
            titleRect.width = 220;
            EditorGUI.BeginChangeCheck();
            m_CurrentSelectSubClass = EditorGUI.Popup(titleRect, m_CurrentSelectSubClass, m_AllEffectSubName);
            if (EditorGUI.EndChangeCheck())
                m_EffectAsset.Type = m_AllEffectSubName[m_CurrentSelectSubClass];
            titleRect.x = m_ContentRect.x + 5;
            titleRect.y += 20;
            titleRect.width = 290;
            titleRect.height = 100;
            string empty = "对于特效的描述\n目前未填写该特效的描述哦~";
            bool isEmpty = string.IsNullOrEmpty(m_EffectAsset.Description);

            var oriFont = EditorStyles.textField.fontStyle;
            EditorStyles.textField.fontStyle = isEmpty ? FontStyle.Italic : FontStyle.Normal;
            var str = EditorGUI.TextArea(titleRect, isEmpty ? empty : m_EffectAsset.Description, EditorStyles.textField);
            if (str != empty)
                m_EffectAsset.Description = str;
            EditorStyles.textField.fontStyle = oriFont;

        }

        private void OnDrawEffectType()
        {
            Rect titleRect = new Rect(m_ContentRect.x, m_ContentRect.y + 180, 300, 270);
            GUI.Box(titleRect, "", EditorStyles.helpBox);

            titleRect.height = 20;

            var oriAlig = GUI.skin.label.alignment;
            GUI.skin.label.alignment = TextAnchor.MiddleCenter;
            EditorGUI.LabelField(titleRect, "特效类型", GUI.skin.label);
            GUI.skin.label.alignment = oriAlig;

            var x1 = m_ContentRect.x + 5;

            titleRect.height = 20;
            titleRect.x = x1;
            titleRect.y += 25;
            titleRect.width = 60;
            EditorGUI.LabelField(titleRect, "持续类型");
            titleRect.x += titleRect.width;
            titleRect.width += 170;
            EditorGUI.BeginChangeCheck();
            m_EffectAsset.DurationType = (EffectDurationType)EditorGUI.EnumPopup(titleRect, m_EffectAsset.DurationType);
            if (EditorGUI.EndChangeCheck() && m_EffectAsset.DurationType == EffectDurationType.Instant)
            {
                m_EffectAsset.TriggerType = EffectTriggerType.None;
                m_EffectAsset.Duration = 0;
                m_EffectAsset.Period = 0;
            }

            using (new EditorGUI.DisabledScope(m_EffectAsset.DurationType == EffectDurationType.Instant))
            {
                titleRect.x = x1;
                titleRect.y += 25;
                titleRect.width = 60;
                EditorGUI.LabelField(titleRect, "触发类型");
                titleRect.x += titleRect.width;
                titleRect.width += 170;
                m_EffectAsset.TriggerType = (EffectTriggerType)EditorGUI.EnumPopup(titleRect, m_EffectAsset.TriggerType);

                using (new EditorGUI.DisabledScope(m_EffectAsset.DurationType == EffectDurationType.TimeLine))
                {
                    titleRect.x = x1;
                    titleRect.y += 25;
                    titleRect.width = 60;
                    EditorGUI.LabelField(titleRect, "持续时间");
                    titleRect.y += 25;
                    m_EffectAsset.Duration = EditorGUI.FloatField(titleRect, m_EffectAsset.Duration);
                    titleRect.y -= 25;
                }

                using (new EditorGUI.DisabledScope(m_EffectAsset.TriggerType == EffectTriggerType.None))
                {
                    titleRect.x += 90;
                    EditorGUI.LabelField(titleRect, "周期时间");
                    titleRect.y += 25;
                    m_EffectAsset.Period = EditorGUI.FloatField(titleRect, m_EffectAsset.Period);
                }

                using (new EditorGUI.DisabledScope(m_EffectAsset.DurationType != EffectDurationType.TimeLine))
                {
                    titleRect.y -= 25;
                    titleRect.x += 90;
                    EditorGUI.LabelField(titleRect, "片段时间");
                    titleRect.y += 25;
                    m_EffectAsset.ClipDuration = EditorGUI.FloatField(titleRect, m_EffectAsset.ClipDuration);
                }
            }


            titleRect.x = x1;
            titleRect.y = m_ContentRect.y + 325;
            titleRect.width = 60;
            EditorGUI.LabelField(titleRect, "叠加类型");
            titleRect.x += titleRect.width;
            titleRect.width += 170;
            m_EffectAsset.StackingEffect.stackingType = (StackingType)EditorGUI.EnumPopup(titleRect, m_EffectAsset.StackingEffect.stackingType);
            using (new EditorGUI.DisabledScope(m_EffectAsset.StackingEffect.stackingType == StackingType.None))
            {
                titleRect.x = x1;
                titleRect.y += 25;
                titleRect.width = 60;
                EditorGUI.LabelField(titleRect, "叠加刷新");
                titleRect.x += titleRect.width;
                titleRect.width += 170;
                m_EffectAsset.StackingEffect.durationRefreshType = (StackingDurationRefreshType)EditorGUI.EnumPopup(titleRect, m_EffectAsset.StackingEffect.durationRefreshType);

                titleRect.x = x1;
                titleRect.y += 25;
                titleRect.width = 60;
                EditorGUI.LabelField(titleRect, "叠加清除");
                titleRect.x += titleRect.width;
                titleRect.width += 170;
                m_EffectAsset.StackingEffect.expirationType = (StackingExpirationType)EditorGUI.EnumPopup(titleRect, m_EffectAsset.StackingEffect.expirationType);

                titleRect.y += 25;

                titleRect.x = x1;
                EditorGUI.LabelField(titleRect, "最大堆叠数量");

                titleRect.y += 25;
                titleRect.width = 290;
                m_EffectAsset.StackingEffect.maxStackNum = EditorGUI.IntField(titleRect, m_EffectAsset.StackingEffect.maxStackNum);
            }
        }

        class TagsArrayInspector : GameplayTagsArrayInspector
        {
            private readonly GameplayEffectAsset m_EffectAsset;


            private readonly string[] m_TagsNames = new string[]
            {
                "固有标签 (FixedTags)",
                "激活标签 (ActivationTags)",
                "取消标签 (CancelTags)",
                "阻碍标签 (BlockActiveTags)",
                "必需标签 (RequireTags)",
            };

            public override string[] TagsNames { get { return m_TagsNames; } }

            public TagsArrayInspector(GameplayEffectAsset asset) : base()
            {
                m_EffectAsset = asset;
            }

            public override GameplayTag[] GetAbilityTags(int index)
            {
                switch (index)
                {
                    case 0:
                        return m_EffectAsset.FixedTags;
                    case 1:
                        return m_EffectAsset.ActivationTags;
                    case 2:
                        return m_EffectAsset.CancelTags;
                    case 3:
                        return m_EffectAsset.BlockActiveTags;
                    case 4:
                        return m_EffectAsset.RequireTags;
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
                        RemoveTo(ref m_EffectAsset.FixedTags, tags);
                        break;
                    case 1:
                        RemoveTo(ref m_EffectAsset.ActivationTags, tags);
                        break;
                    case 2:
                        RemoveTo(ref m_EffectAsset.CancelTags, tags);
                        break;
                    case 3:
                        RemoveTo(ref m_EffectAsset.BlockActiveTags, tags);
                        break;
                    case 4:
                        RemoveTo(ref m_EffectAsset.RequireTags, tags);
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
                        CopyTo(ref m_EffectAsset.FixedTags, tags);
                        break;
                    case 1:
                        CopyTo(ref m_EffectAsset.ActivationTags, tags);
                        break;
                    case 2:
                        CopyTo(ref m_EffectAsset.CancelTags, tags);
                        break;
                    case 3:
                        CopyTo(ref m_EffectAsset.BlockActiveTags, tags);
                        break;
                    case 4:
                        CopyTo(ref m_EffectAsset.RequireTags, tags);
                        break;
                }
            }

            public override void SaveAsset()
            {
                EditorUtility.SetDirty(m_EffectAsset);
            }
        }
    }
}

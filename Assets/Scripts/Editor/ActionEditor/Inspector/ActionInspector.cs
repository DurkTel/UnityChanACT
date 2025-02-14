using GAS.Runtime;
using LGameFramework.GameLogic;
using System;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameEditor

{
    public class ActionInspector : EditorWindow
    {
        private ActionClip m_CurrentSelectClip;

        private ActionClipEditor m_ClipEditor;

        private bool m_IsDirty;

        private Vector2 m_ScrollPosition;

        private CancelList m_CancelList;

        public UnityAction OnRepaint;

        private string[] m_Tags;

        private void Update()
        {
            if (m_IsDirty)
            {
                m_IsDirty = false;
                OnRepaint?.Invoke();
            }
        }

        private void OnGUI()
        {
            m_ScrollPosition = EditorGUILayout.BeginScrollView(m_ScrollPosition);
            EditorGUI.indentLevel++;

            if (ActionWindow.ActionInfo != null)
            {
                if (m_CancelList == null)
                    InitCancelList();

                GetTagArray();
                EditorGUILayout.LabelField("Action Info");

                EditorGUI.indentLevel++;

                ActionWindow.ActionInfo.ActionID = EditorGUILayout.TextField("动作ID", ActionWindow.ActionInfo.ActionID);
                EditorGUI.BeginChangeCheck();
                int newSelectIndex = EditorGUILayout.Popup("动作标签", Array.IndexOf(m_Tags, ActionWindow.ActionInfo.ActionTag), m_Tags);
                if (EditorGUI.EndChangeCheck())
                    ActionWindow.ActionInfo.ActionTag = m_Tags[newSelectIndex];

                if (ActionWindow.ActionInfo.ActionTag == "Action.Attack" || ActionWindow.ActionInfo.ActionTag == "Action.HandOffSkill")
                    ActionWindow.ActionInfo.AttackConfig = EditorGUILayout.TextField("攻击配置(GE)", ActionWindow.ActionInfo.AttackConfig);

                ActionWindow.ActionInfo.AutoNextActionID = EditorGUILayout.TextField("下一个动作ID", ActionWindow.ActionInfo.AutoNextActionID);
                ActionWindow.ActionInfo.AutoTransitionSecond = EditorGUILayout.FloatField("下一个动作过渡时间", ActionWindow.ActionInfo.AutoTransitionSecond);
                ActionWindow.ActionInfo.Priority = EditorGUILayout.IntField("优先级", ActionWindow.ActionInfo.Priority);
                //m_CancelList.RefreshList();

                EditorGUILayout.Space();
                EditorGUI.indentLevel--;
            }

            if (m_ClipEditor != null)
                m_IsDirty = m_ClipEditor.OnInspectorGUI() || m_IsDirty;

            EditorGUILayout.EndScrollView();
        }

        private void GetTagArray()
        {
            if (m_Tags != null)
                return;

            List<string> temp = new List<string>();
            foreach (var tagGen in GameplayTagsLib.TagMap)
            {
                if (tagGen.Value.HasTag(GameplayTagsLib.Action))
                    temp.Add(tagGen.Key);
            }

            m_Tags = temp.ToArray();
        }

        private void InitCancelList()
        { 
            m_CancelList = new CancelList(ActionWindow.ActionInfo.CancelTags);
            m_CancelList.OnEnable(true, true, true, true, 50);

        }

        public void UpdateSelect(ActionClip clip)
        { 
            m_CurrentSelectClip = clip;
            var editor = Type.GetType(clip.GetInspectorEditorName());
            m_ClipEditor =  Activator.CreateInstance(editor, new object[] { clip }) as ActionClipEditor;
            Repaint();
        }


        public class CancelList : ReorderableGenericList<CancelTag>
        {
            public CancelList(List<CancelTag> dataList, string[] headers = null) : base(dataList, headers)
            {
            }

            protected override void DrawHeader(Rect rect)
            {
                EditorGUI.LabelField(rect, "可以Cancel的动作");
            }

            protected override void DrawElement(Rect rect, int index, bool selected, bool focused)
            {
                var info = Datas[index];
                float height = rect.height / 3f - 2;
                Rect newRect = new Rect(rect);
                newRect.height = height;
                EditorGUI.BeginChangeCheck();
                var tag = (ActionCancelTag)EditorGUI.EnumFlagsField(newRect, "CancelTag", info.tag);
                newRect.y += height + 2;
                var priority = EditorGUI.IntField(newRect, "增加的优先级", info.priority);
                newRect.y += height + 2;
                var startFromTick = EditorGUI.IntField(newRect, "从多少帧开始播放", info.startFromTick);
                if (EditorGUI.EndChangeCheck())
                {
                    ActionWindow.ActionInfo.CancelTags[index] = new CancelTag() { tag = tag, priority = priority, startFromTick = startFromTick };
                    Datas[index] = ActionWindow.ActionInfo.CancelTags[index];
                }
            }
        }
    }
}

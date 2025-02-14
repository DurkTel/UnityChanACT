using GAS.Runtime;
using LGameFramework.GameLogic;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionTagsClipEditor : ActionClipEditor
    {
        private ActionTagsClip m_TagsClip;

        private string[] m_Tags;

        public ActionTagsClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_TagsClip = actionClip as ActionTagsClip;
            GetTagArray();
        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();
            EditorGUI.BeginChangeCheck();
            int newSelectIndex = EditorGUILayout.Popup("±Í«©", Array.IndexOf(m_Tags, m_TagsClip.dynamicTags), m_Tags);
            if (EditorGUI.EndChangeCheck())
            {
                m_TagsClip.dynamicTags = m_Tags[newSelectIndex];
                isDirty = true;
            }

            return isDirty;
        }

        private void GetTagArray()
        {
            if (m_Tags != null)
                return;

            m_Tags = new string[GameplayTagsLib.TagMap.Count];
            int i = 0;
            foreach (var tagGen in GameplayTagsLib.TagMap)
                m_Tags[i++] = tagGen.Key;
        }
    }
}

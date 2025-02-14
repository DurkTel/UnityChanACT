using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionTagsTrack : ActionTrack
    {
        public override string TrackName => "¶¯Ì¬±êÇ©¹ìµÀ";

        public override string GetClipSpec()
        {
            return "ActionTagsClipSpec";
        }

        public override Type GetClipType()
        {
            return typeof(ActionTagsClip);
        }
    }

    public class ActionTagsClipSpec : ActionClipSpec
    {
        private GMEntity m_Entity;

        private ActionTagsClip m_TagsClip;

        public override void OnInit(ActionClip clipData, IActionSystemComponent controller, int id)
        {
            base.OnInit(clipData, controller, id);
            m_TagsClip = clipData as ActionTagsClip;
            m_Entity = EntityUtility.GetEntity(controller.Id);
        }

        public override void Dispose()
        {
            if (m_Entity != null)
                m_Entity.Tags.RemoveDynamicTags(m_TagsClip, m_TagsClip.dynamicTags);
            m_Entity = null;
        }

        public override void OnEnter(float deltaTime)
        {
            if (m_Entity != null)
                m_Entity.Tags.AddDynamicTags(m_TagsClip, m_TagsClip.dynamicTags);
        }

        public override void OnExit(float deltaTime)
        {
            
        }

        public override void OnTick(float deltaTime)
        {
            
        }
    }

    [System.Serializable]
    public class ActionTagsClip : ActionClip
    {
        public string dynamicTags;

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionTagsClipEditor";
        }
    }
}

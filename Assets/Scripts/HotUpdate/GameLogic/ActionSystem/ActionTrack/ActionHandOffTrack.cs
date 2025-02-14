using GAS.Runtime;
using LGameFramework.GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionHandOffTrack : ActionTrack
    {
        public override string TrackName => "技能脱手轨道";

        public override string GetClipSpec()
        {
            return "ActionHandOffSpec";
        }

        public override Type GetClipType()
        {
            return typeof(ActionHandOffClip);
        }
    }

    public class ActionHandOffSpec : ActionClipSpec
    {
        private ActionHandOffClip Data { get { return RawData as ActionHandOffClip; } }

        private GMEntity m_SkillEntity;

        public override void Dispose()
        {
            m_SkillEntity = null;
        }

        public override void OnEnter(float deltaTime)
        {
            m_SkillEntity = EntityUtility.EnterEntity(AssetUtility.LoadAsset<AbilitySystemArchetype>("HandsOffSkill.asset"));
            m_SkillEntity.Transform.rotation = Controller.Transform.rotation;
            m_SkillEntity.Transform.localPosition = Controller.Transform.position + Controller.Transform.rotation * Data.position;
            m_SkillEntity.Abilitys.TryActivateAbility<HandOffAbility>(Data.skillName, ActionUID);
        }

        public override void OnExit(float deltaTime)
        {

        }

        public override void OnTick(float deltaTime)
        {
            
        }
    }

    [System.Serializable]
    public class ActionHandOffClip : ActionClip
    {
        public string skillName;

        public Vector3 position;

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionHandOffClipEditor";
        }
    }
}

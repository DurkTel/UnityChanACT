using Actioner.Runtime;
using LGameFramework.GameCore;
using System;
using UnityEngine;
using GAS.Runtime;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionAnimationTrack : ActionTrack
    {
        public override string TrackName => "¶¯»­¹ìµÀ";

        public override string GetClipSpec()
        {
            return "ActionAnimationClipSpec";
        }

        public override Type GetClipType()
        {
            return typeof(ActionAnimationClip);
        }
    }

    public class ActionAnimationClipSpec : ActionClipSpec
    {
        private ActionAnimationClip Data { get { return RawData as ActionAnimationClip; } }

        private ActionerController m_Actioner;

        private Animator m_Animator;

        private GMEntity m_Entity;

        private int m_FlagCount;

        public override void OnInit(ActionClip clipData, IActionSystemComponent controller, int id)
        {
            base.OnInit(clipData, controller, id);
            m_Entity = EntityUtility.GetEntity(controller.Id);
            m_Animator = controller.GameObject.GetComponentInChildren<Animator>();
            m_Actioner = controller.GameObject.GetComponentInChildren<ActionerController>();
            m_FlagCount = 0;

            m_Entity.Tags.AddTagsChangeEvent(GameplayTagsLib.Event_Fight_TickFreeze, TickFreeze);
        }

        public override void Dispose()
        {
            //PreloadAnimationCache.Release(Data.animationClip);
            m_Entity.Tags.RemoveTagsChangeEvent(GameplayTagsLib.Event_Fight_TickFreeze, TickFreeze);
            m_FlagCount = 0;
            m_Actioner = null;
            m_Entity = null;

        }

        public override void OnEnter(float deltaTime)
        {
            var duration = Data.durationByCancel ? Controller.PreviousChangeInfo.TransitionSecond : Data.duration;
            if (m_FlagCount == 0 || !Data.isLoop)
            {
                m_Animator.CrossFadeInFixedTime(Data.animationClip.Replace(".anim", ""), duration);
                //m_Animator.SetFloat("AttackSpeed", 1.5f);
                //var ani = PreloadAnimationCache.Get(Data.animationClip);
                //var action = m_Actioner.CrossFade(ani, duration, Data.layer);
            }
            m_FlagCount++;

        }

        public override void OnExit(float deltaTime)
        {
            
        }

        public override void OnTick(float deltaTime)
        {
            
        }

        private void TickFreeze(bool value)
        {
            m_Animator.speed = value ? 0 : 1;
        }
    }

    [System.Serializable]
    public class ActionAnimationClip : ActionClip
    {
        [Flags]
        public enum RoomTransformWrite
        {
            None = 0,
            Rotation = 2,
            PositionY = 4,
            PositionXZ = 8,
        }

        public int layer;

        public float duration;

        public float speed;

        public bool durationByCancel;

        public bool isLoop;

        public bool rootMotion;

        public RoomTransformWrite rootWrite;

        public string animationClip;

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionAnimationClipEditor";
        }
    }
}

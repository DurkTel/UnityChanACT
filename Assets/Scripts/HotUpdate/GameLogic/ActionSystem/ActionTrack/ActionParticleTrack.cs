using GAS.Runtime;
using LGameFramework.GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionParticleTrack : ActionTrack
    {
        public override string TrackName => "粒子特效轨道";

        public override string GetClipSpec()
        {
            return "ActionParticleClipSpec";
        }

        public override Type GetClipType()
        {
            return typeof(ActionParticleClip);
        }
    }

    public class ActionParticleClipSpec : ActionClipSpec
    {
        private ActionParticleClip Data { get { return RawData as ActionParticleClip; } }

        private GameObject m_Effect;

        private ParticleSystem m_ParticleSystem;

        private GMEntity m_Entity;

        private bool m_IsDispose;

        public override void OnInit(ActionClip clipData, IActionSystemComponent controller, int id)
        {
            base.OnInit(clipData, controller, id);

            m_Entity = EntityUtility.GetEntity(controller.Id);

            m_Entity.Tags.AddTagsChangeEvent(GameplayTagsLib.Event_Fight_TickFreeze, TickFreeze);
            
        }

        public override void Dispose()
        {
            m_IsDispose = true;
            m_Entity.Tags.RemoveTagsChangeEvent(GameplayTagsLib.Event_Fight_TickFreeze, TickFreeze);
            m_Entity = null;
            if (m_Effect != null)
            {
                GameObjectPool.Release(Data.particleEffect, m_Effect);
                m_Effect = null;
                m_ParticleSystem = null;
            }
        }

        public override void OnEnter(float deltaTime)
        {
            m_IsDispose = false;
            GameObjectPool.GetAsset(Data.particleEffect, OnLoadComplete);
        }

        public override void OnExit(float deltaTime)
        {
            if (m_Effect == null)
                return;

            m_Effect.SetActive(false);
        }

        public override void OnTick(float deltaTime)
        {
            if (m_Effect == null)
                return;

            m_Effect.transform.rotation = Controller.Transform.rotation * Quaternion.Euler(Data.rotation);
            m_Effect.transform.localPosition = GetTargetPos();
            m_Effect.transform.localScale = Data.scale;


        }

        private void OnLoadComplete(GameObject gameObject)
        {
            if (m_IsDispose)
            {
                GameObjectPool.Release(Data.particleEffect, gameObject);
                return;
            }
            m_Effect = gameObject;
            m_Effect.transform.rotation = GetTargetRot() * Quaternion.Euler(Data.rotation);
            m_Effect.transform.localPosition = GetTargetPos();
            m_Effect.transform.localScale = Data.scale;
            m_ParticleSystem = m_Effect.GetComponent<ParticleSystem>();
            m_Effect.SetActive(true);
            m_ParticleSystem.Play();
        }

        private Vector3 GetTargetPos()
        {
            Vector3 pos = Vector3.zero;
            if (Data.effectPointType == EffectPointType.Source)
                pos = Controller.Transform.position;
            else if (Data.effectPointType == EffectPointType.HitPoints)
                pos = Controller.Transform.forward;
            else if(Data.effectPointType == EffectPointType.Camera)
                pos = CameraUtility.GetOrbitCamera().CameraTran.position;

            pos += GetTargetRot() * Data.position;

            return pos;
        }

        private Quaternion GetTargetRot()
        {
            Quaternion rot = Quaternion.identity;
            if (Data.effectPointType == EffectPointType.Source)
                rot = Controller.Transform.rotation;
            else if (Data.effectPointType == EffectPointType.Camera)
                rot = CameraUtility.GetOrbitCamera().CameraTran.rotation;

            return rot;
        }

        private void TickFreeze(bool value)
        {
            if (m_ParticleSystem != null)
            {
                if (value)
                    m_ParticleSystem.Pause();
                else
                    m_ParticleSystem.Play();
            }
        }
    }

    [System.Serializable]
    public class ActionParticleClip : ActionClip
    {
        public string particleEffect;

        public EffectPointType effectPointType;

        public ConstraintType constraintType;

        public string bindBone;

        public Vector3 position;

        public Vector3 rotation;

        public Vector3 scale = Vector3.one;

        public float duration;

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionParticleClipEditor";
        }
    }

    /// <summary>
    /// 约束类型
    /// </summary>
    [Flags]
    public enum ConstraintType
    {
        /// <summary>
        /// 无约束
        /// </summary>
        None = 0,
        /// <summary>
        /// 位置约束
        /// </summary>
        PosConstraint = 1,
        /// <summary>
        /// 旋转约束
        /// </summary>
        RotationConstraint = 2,
        /// <summary>
        /// 缩放约束
        /// </summary>
        ScaleConstraint = 4,
    }

    /// <summary>
    /// 创建位置
    /// </summary>
    public enum EffectPointType
    {
        /// <summary>
        /// 创建在来源对象位置
        /// </summary>
        Source,
        /// <summary>
        /// 创建在打击点
        /// </summary>
        HitPoints,
        /// <summary>
        /// 创建在相机
        /// </summary>
        Camera,
    }
}

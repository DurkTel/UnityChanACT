using GAS.Runtime;
using LGameFramework.GameCore;
using LGameFramework.GameCore.Asset;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionBoxTrack : ActionTrack
    {
        public override string TrackName => "行为盒轨道";

        public override string GetClipSpec()
        {
            return "ActionBoxClipSpec";
        }

        public override Type GetClipType()
        {
            return typeof(ActionBoxClip);
        }
    }

    public class ActionBoxClipSpec : ActionClipSpec
    {
        private int m_BoxId;

        private OBBCollision m_OBB;

        private GMEntity m_Entity;
        private ActionBoxClip Data { get { return RawData as ActionBoxClip; } }

        public override void OnInit(ActionClip clipData, IActionSystemComponent controller, int id)
        {
            base.OnInit(clipData, controller, id);
            m_Entity = EntityUtility.GetEntity(controller.Id);
        }
        public override void Dispose()
        {
            if (m_OBB != null)
            {
                m_OBB.OnCollisionEnter.RemoveListener(OnCollisionEnter);
                m_OBB = null;
                PhysicUtility.RemoveCollision(m_BoxId);
            }
        }

        public override void OnEnter(float deltaTime)
        {
            if (m_OBB == null)
            {
                //ActionUID=AttackId
                m_BoxId = PhysicUtility.AddCollision((int)Data.boxType, Controller.Id, ActionUID, Data.halfExtents);
                m_OBB = PhysicUtility.GetCollision(m_BoxId) as OBBCollision;
                if (Data.boxType == ActionBoxType.Hit)
                    m_OBB.OnCollisionEnter.AddListener(OnCollisionEnter);

            }
        }

        public override void OnExit(float deltaTime)
        {
            if (!Data.notDisable)
            {
                PhysicUtility.RemoveCollision(m_BoxId);
                if (Data.boxType == ActionBoxType.Hit)
                    m_OBB.OnCollisionEnter.RemoveListener(OnCollisionEnter);
                m_OBB = null;
            }

            //攻击盒消失 清掉这个攻击信息的击中记录（多段攻击由一个轨道多段攻击盒实现）
            if (Data.boxType == ActionBoxType.Hit)
                FightUtility.ResetHitRecord(ActionUID); 
        }

        public override void OnTick(float deltaTime)
        {
            if (m_OBB == null)
                return;
            var rotate = Quaternion.Euler(Data.rotation);

            m_OBB.Rotation = Controller.Transform.rotation * rotate;
            m_OBB.Position = Controller.Transform.position + m_OBB.Rotation * Data.center;
        }

        private void OnCollisionEnter(int id)
        {
            //GMFightPerformance.OnAttackHit(ActionUID, id);
            if (FightUtility.TryGetAttackInfo(ActionUID, out AttackInfo info) && info.ConfigAsset != null)//通过GE结算
            {
                var coll = PhysicUtility.GetCollision(id) as OBBCollision;
                m_Entity.Effects.TryAddEffect<AttackEffectSpec>(info.ConfigAsset, out var effect, info, coll);
            }
        }


    }

    [System.Serializable]
    public class ActionBoxClip : ActionClip
    {
        public ActionBoxType boxType;

        public Vector3 center;

        public Vector3 halfExtents;

        public Vector3 rotation;

        public bool notDisable;

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionBoxClipEditor";
        }
    }

    public enum ActionBoxType
    {
        /// <summary>
        /// 受击盒
        /// 角色实际会受到伤害的部分
        /// </summary>
        Affected,
        /// <summary>
        /// 打击盒
        /// 一次攻击中实际生效的部分
        /// </summary>
        Hit,
        /// <summary>
        /// 闪避盒
        /// 用于极限闪避
        /// </summary>
        Dodge,
        /// <summary>
        /// 防御盒
        /// 角色受到防御的部分
        /// </summary>
        Defense,
        /// <summary>
        /// 霸体
        /// </summary>
        Armor,
    }
}

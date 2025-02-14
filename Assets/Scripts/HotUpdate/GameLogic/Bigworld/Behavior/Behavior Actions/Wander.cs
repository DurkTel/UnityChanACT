using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class Wander : AbstractAction
    {
        /// <summary>
        /// 漫步半径
        /// </summary>
        public SharedFloat wanderRadius;

        /// <summary>
        /// 巡逻次数
        /// 小于0是无限
        /// </summary>
        public SharedInt count;

        private int m_CurrentCount;

        private Vector3 m_Center;

        private Vector3 m_TargetPos;

        private ExternalInputAbility m_Input;

        private SyncAbility m_Sync;

        public override void OnAwake()
        {
            base.OnAwake();
            m_Input = Entity.Abilitys.GetAbility<ExternalInputAbility>();
            m_Sync = Entity.Abilitys.GetAbility<SyncAbility>();
            m_Center = m_Sync.SyncPosition;
        }

        public override void OnStart()
        {
            base.OnStart();
            m_CurrentCount = 0;
        }

        public override TaskStatus OnUpdate()
        {
            if (m_Input == null)
                return TaskStatus.Failure;

            if (count.Value > 0 && m_CurrentCount >= count.Value)
                return TaskStatus.Success;

            if (m_CurrentCount == 0 || Vector2.Distance(new Vector2(m_TargetPos.x, m_TargetPos.z), new Vector2(m_Sync.SyncPosition.x, m_Sync.SyncPosition.z)) <= 1f)
            {
                UpdateTarget();
                m_CurrentCount++;
            }

            return TaskStatus.Running;
        }

        private void UpdateTarget()
        {
            Random.InitState(Time.frameCount);
            var x = Random.Range(m_Center.x - wanderRadius.Value, m_Center.x + wanderRadius.Value);
            var z = Random.Range(m_Center.z - wanderRadius.Value, m_Center.z + wanderRadius.Value);
            m_TargetPos.x = x; 
            m_TargetPos.z = z;

            var dir = m_TargetPos - m_Sync.SyncPosition;
            dir.Normalize();
            dir.y = 0;

            m_Input.UpdateDirection(dir);
        }

        public override void OnDrawGizmos()
        {
            base.OnDrawGizmos();

            Gizmos.DrawLine(Entity.Transform.position, m_TargetPos);
        }
    }
}

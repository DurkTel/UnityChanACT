using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GAS.Runtime;

namespace LGameFramework.GameLogic
{
    public class RushTarget : AbstractAction
    {
        public SharedInt targetEntityId;

        public SharedFloat radiusRange;

        public SharedFloat stopDistance;

        private Vector3 m_OffsetPosition;

        private SyncAbility m_SyncOwnerAbility, m_SyncAbility;

        private ExternalInputAbility m_InputAbility;

        private float m_WaitTick;

        private float m_LastDistance;

        public override void OnStart()
        {
            UpdateTargetPosition();
        }

        public override void OnEnd()
        {
            base.OnEnd();
            m_InputAbility.UpdateDirection(Vector3.zero);
        }

        public override TaskStatus OnUpdate()
        {
            m_WaitTick += Time.deltaTime;
            if (m_WaitTick <= BattlefieldLogic.c_SyncTime * 3) //обр╩ж║тыеп╤о
                return TaskStatus.Running;

            Vector3 targetPos = m_SyncAbility.SyncPosition + m_OffsetPosition;
            m_InputAbility.UpdateDirection(targetPos - m_SyncOwnerAbility.SyncPosition);

            var dis = Vector3.Distance(m_SyncOwnerAbility.SyncPosition, targetPos);
            if (dis > m_LastDistance && m_LastDistance != 0f)
            {
                UpdateTargetPosition();
                return TaskStatus.Running;
            }

            m_LastDistance = dis;
            if (dis <= stopDistance.Value)
                return TaskStatus.Success;

            return TaskStatus.Running;
        }

        private void UpdateTargetPosition()
        {
            if (!EntityUtility.TryGetEntity(targetEntityId.Value, out var entity))
                return;

            if (!Entity.Abilitys.TryGetAbility(out m_InputAbility))
                return;

            if (!Entity.Abilitys.TryGetAbility(out m_SyncOwnerAbility))
                return;

            if (!entity.Abilitys.TryGetAbility(out m_SyncAbility))
                return;

            float x = Random.Range(-radiusRange.Value, radiusRange.Value);
            float z = Random.Range(-radiusRange.Value, radiusRange.Value);
            m_OffsetPosition = new Vector3(x, 0, z);
            m_WaitTick = 0;
            m_LastDistance = 0;
        }
    }
}

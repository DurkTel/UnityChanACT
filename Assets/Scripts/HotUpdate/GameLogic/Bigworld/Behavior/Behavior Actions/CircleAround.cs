using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class CircleAround : AbstractAction
    {
        public SharedInt targetEntityId;

        public SharedFloat smooth;

        private ExternalInputAbility m_Input;

        private SyncAbility m_Sync;

        private float m_Angle;

        private Vector3 m_TargetPosition;

        private bool m_OnInit;

        public override void OnAwake()
        {
            base.OnAwake();
            m_Input = Entity.Abilitys.GetAbility<ExternalInputAbility>();
            m_Sync = Entity.Abilitys.GetAbility<SyncAbility>();
        }

        public override void OnStart()
        {
            base.OnStart();
            m_OnInit = false;
        }

        public override TaskStatus OnUpdate()
        {
            if (!EntityUtility.TryGetEntity(targetEntityId.Value, out var target))
                return TaskStatus.Failure;

            if (!target.Abilitys.TryGetAbility<SyncAbility>(out var sync))
                return TaskStatus.Failure;

            if (m_OnInit && Vector3.Distance(m_Sync.SyncPosition, m_TargetPosition) > 0.15f)
                m_Input.UpdateDirection(m_TargetPosition - m_Sync.SyncPosition);
            else
            {
                m_OnInit = true;
                m_Angle += smooth.Value;
                if (m_Angle > 360)
                    m_Angle = 0;
                m_TargetPosition = GetTargetPosition(sync.SyncPosition);
            }

            return TaskStatus.Running;
        }

        private Vector3 GetTargetPosition(Vector3 center)
        {
            float x = center.x + Mathf.Cos(m_Angle) * 5f;
            float z = center.z + Mathf.Sin(m_Angle) * 5f;
            return new Vector3(x, 0, z);
        }
    }
}

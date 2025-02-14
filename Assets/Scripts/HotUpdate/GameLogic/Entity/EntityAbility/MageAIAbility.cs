using GameMessage;
using GAS.Runtime;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

namespace LGameFramework.GameLogic
{
    public class MageAIAbility : GameplayAbility, IGameplaySyncUpdate, IGameplayUpdate
    {
        [AbilityInject("")]
        private SyncAbility m_Sync;

        [AbilityInject("")]
        private AvatarAbility m_Avatar;

        private List<OperationCommandRecord> m_InputRecord;
        public List<OperationCommandRecord> InputRecord { get { return m_InputRecord; } }

        public MageAIAbilityAsset SubAsset { get { return AbilityAsset as MageAIAbilityAsset; } }

        private Vector3 m_WorldDirection;
        public Vector3 WorldDirection { get { return m_WorldDirection; } }

        private Vector3 m_TargetPosition;

        private int m_SyncFrame;

        private float m_AttackTimer;

        private GMEntity m_Target;

        private Transform m_LookTarget;

        private float m_Angle;

        public override void OnInit(GameplayAbilityAsset abilityAsset, IAbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_InputRecord = new List<OperationCommandRecord>();


        }

        public void OnSyncUpdate(int tick)
        {
            m_SyncFrame = tick;
            if (BattlefieldModule.s_Battlefield != null)
            {
                BattlefieldModule.s_Battlefield.SendRobotOperation(m_InputRecord, m_WorldDirection, 1);
                ClearInput();
            }

            m_Target ??= GMEntitySelectionFunc.GetTarget(m_ASC as GMEntity);


            if (Vector3.Distance(m_Sync.SyncPosition, m_TargetPosition) > 0.15f)
                m_WorldDirection = m_TargetPosition - m_Sync.SyncPosition;
            else
            {
                //m_WorldDirection = Vector3.zero;
                if (++m_Angle > 360)
                    m_Angle = 0;

                float x = m_Target.Transform.position.x + Mathf.Cos(m_Angle) * 5f;
                float z = m_Target.Transform.position.z + Mathf.Sin(m_Angle) * 5f;
                UpdateTargetPosition(new Vector3(x, 0, z));
            }
        }

        public void OnUpdate(float deltaTime)
        {
            if (!SubAsset.StartAI)
                return;
            m_AttackTimer += deltaTime;
            if (m_AttackTimer >= 1f)
            {
                m_AttackTimer = 0;
                //AddInput(EClientOperation.Attack);
            }
        }

        private void AddInput(EClientOperation key)
        {
            OperationCommandRecord kir = new OperationCommandRecord();// Pool.Get<OperationCommandRecord>();
            kir.Operate = key;
            kir.Frame = m_SyncFrame;

            m_InputRecord.Add(kir);
        }

        public void ClearInput()
        {
            //foreach (var input in m_InputRecord)
            //    Pool.Release(input);

            m_InputRecord.Clear();
        }


        private void UpdateTargetPosition(Vector3 position)
        {
            m_TargetPosition = position;
        }

        private void Confrontation(int tick)
        {

            if (m_LookTarget == null)
                m_Avatar.Avatar.AllSkeletonBones.TryGetValue("LookTarget", out m_LookTarget);

            m_LookTarget.transform.position = m_Target.Transform.position;

            if (tick % 15 == 0)
            {
                float x = m_Target.Transform.position.x + Mathf.Cos(m_Angle) * 5f;
                float z = m_Target.Transform.position.z + Mathf.Sin(m_Angle) * 5f;
                UpdateTargetPosition(new Vector3(x, 0, z));
            }


            
        }
    }
}

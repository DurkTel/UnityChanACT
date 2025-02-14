using GameMessage;
using GAS.Runtime;
using LGameFramework.GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public abstract class BaseInputAbility : GameplayAbility, IGameplaySyncUpdate
    {
        protected List<OperationCommandRecord> m_InputRecord;
        public List<OperationCommandRecord> InputRecord { get { return m_InputRecord; } }

        protected Vector3 m_WorldDirection;
        public Vector3 WorldDirection { get { return m_WorldDirection; } }

        protected int m_SyncFrame;
        public override void OnInit(GameplayAbilityAsset abilityAsset, IAbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_InputRecord = new List<OperationCommandRecord>();

        }

        public void OnSyncUpdate(int tick)
        {
            m_SyncFrame = tick;
        }

        public virtual void AddInput(EClientOperation key, EOperationType type = EOperationType.Down)
        {
            OperationCommandRecord kir = new OperationCommandRecord();// Pool.Get<OperationCommandRecord>();
            kir.Operate = key;
            kir.Frame = m_SyncFrame;
            kir.Type = type;

            m_InputRecord.Add(kir);
        }

        public void ClearInput()
        {
            //foreach (var input in m_InputRecord)
            //    Pool.Release(input);

            m_InputRecord.Clear();
        }

        public virtual void UpdateDirection(Vector3 direction)
        {
            m_WorldDirection = direction;
        }
    }
}

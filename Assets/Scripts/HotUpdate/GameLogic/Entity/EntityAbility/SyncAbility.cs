using GameMessage;
using GAS.Runtime;
using Google.Protobuf.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class SyncAbility : GameplayAbility, IGameplaySyncUpdate
    {
        //[AbilityInject("")]
        private ActionAbility m_ActionAbility;

        private int m_SyncFrame;

        private Vector3 m_WorldDirection;
        public Vector3 WorldDirection { get { return m_WorldDirection; } }

        private Vector3 m_SyncPosition;
        public Vector3 SyncPosition { get { return m_SyncPosition; } }

        private Quaternion m_SyncRotation;
        public Quaternion SyncRotation { get { return m_SyncRotation; } }

        private Vector3 m_TargetPosition;
        public Vector3 TargetPosition { get { return m_TargetPosition; } }

        private bool m_IsAutoFindPath;

        private float m_FindPathProgress;

        private Queue<OperationCommandRecord> m_CommandRecord;

        private Vector3 m_PredictionDirection;

        public override void OnInit(GameplayAbilityAsset abilityAsset, IAbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_CommandRecord = new Queue<OperationCommandRecord>();
            m_SyncRotation = Quaternion.identity;
            m_ActionAbility = asc.Abilitys.GetAbility<ActionAbility>();
            m_ActionAbility.onActionChange.AddListener(OnActionChange);
        }

        public override void Dispose()
        {
            base.Dispose();
            m_ActionAbility = null;
            m_ActionAbility.onActionChange.RemoveListener(OnActionChange);
        }

        public void OnSyncUpdate(int tick)
        {
            m_SyncFrame = tick;

            //更新逻辑帧位置
            SyncAction();
            SyncFindPath();
            //Debug.Log($"更新逻辑帧位置{m_SyncPosition}");
            ClearRecord();
        }

        private void ClearRecord()
        {
            while (m_CommandRecord.Count > 0)
            { 
                var record = m_CommandRecord.Peek();
                if (m_SyncFrame - record.Frame >= 10)
                    m_CommandRecord.Dequeue();
                else
                    break;
            }

        }

        private void SyncAction()
        {
            if (m_IsAutoFindPath || m_ActionAbility == null || m_ActionAbility.IsTickFreeze)
                return;
            if (m_ASC.Tags.HasNoneTags(GameplayTagsLib.Event_Locomotion_BanRotate))
            {
                if (m_ActionAbility.GetDeltaRotation(out var deltaRotation))
                {
                    //看Animator.deltaRotation会忽略xz轴的旋转（数值为0） 尝试了一下好像可以^^_
                    deltaRotation.x = 0;
                    deltaRotation.z = 0;
                    //Debug.Log(deltaRotation.eulerAngles);
                    m_SyncRotation *= deltaRotation;
                }
                else if (m_WorldDirection != Vector3.zero)
                    m_SyncRotation = Quaternion.LookRotation(m_WorldDirection);
            }

            if (m_ActionAbility.GetDeltaPosition(out var deltaPosition))
            {
                if (m_ActionAbility.TryGetRootMotionData(m_ActionAbility.CurrentTick, out var rootData))
                {
                    var rootR = rootData.rootRotation;
                    rootR.x = 0;
                    rootR.z = 0;
                    deltaPosition = rootR * deltaPosition;
                }
                m_SyncPosition += m_SyncRotation * deltaPosition;
            }
        }

        private void SyncFindPath()
        {
            if (!m_IsAutoFindPath)
                return;

            m_FindPathProgress += BattlefieldLogic.c_SyncTime;
            m_SyncPosition = Vector3.Lerp(m_SyncPosition, m_TargetPosition, m_FindPathProgress);
            if (m_FindPathProgress >= 1)
                m_IsAutoFindPath = false;
        }

        public void SyncPositionImmediately(Vector3 position)
        {
            m_SyncPosition = position;
        }

        public void SyncRotationImmediately(Quaternion rotation)
        {
            m_SyncRotation = rotation;
        }

        public bool ContainsAction(ActionCommand command)
        {
            
            for (int i = 0; i < command.operationSequence.Count; i++)
            {
                bool exist = false;
                var operate = command.operationSequence[i];
                //检测多少帧之前的输入
                int lastFrame = m_SyncFrame - Mathf.Max(operate.validInFrame, 1);
                foreach (var record in m_CommandRecord)
                {
                    if (record.Frame >= lastFrame && record.Operate == operate.operation && record.Type == operate.type)
                    {
                        exist = true;
                        break;
                    }
                }

                if (exist)
                    continue;

                return false;
            }


            return true;
        }

        public void AddCommand(RepeatedField<OperationCommandRecord> records)
        {
            if (records == null || records.Count <= 0)
                return;

            for (int i = 0; i < records.Count; i++)
                m_CommandRecord.Enqueue(records[i]);

        }

        public void AddDirection(CommonVector3 direction, bool prediction = false)
        {
            bool hasInput = false;
            if (prediction)
            {
                m_PredictionDirection = direction != null ? new Vector3(direction.X, 0, direction.Z) : Vector3.zero;
                m_PredictionDirection.Normalize();
                hasInput = m_PredictionDirection != Vector3.zero;
            }
            else
            {
                m_WorldDirection = direction != null ? new Vector3(direction.X, 0, direction.Z) : Vector3.zero;
                m_WorldDirection.Normalize();
                hasInput = m_WorldDirection != Vector3.zero;
            }

            if (hasInput)
                m_IsAutoFindPath = false;
            //Debug.Log($"更新方向{m_WorldDirection} 当前帧帧号：{m_SyncFrame + 1}");

        }

        public void SetTargetPosition(Vector3 targetPosition)
        {
            m_FindPathProgress = 0f;
            m_IsAutoFindPath = true;
            m_TargetPosition = targetPosition;
        }

        private void OnActionChange(string actionId)
        {
            m_IsAutoFindPath = false;
        }
    }
}

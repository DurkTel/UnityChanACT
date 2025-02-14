using Actioner.Runtime;
using GAS.Runtime;
using LGameFramework.GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class LocomotionAbility : GameplayAbility, IGameplayUpdate
    {
        [AbilityInject("")]
        private SyncAbility m_SyncAbility;

        public LocomotionAbilityAsset Asset { get { return AbilityAsset as LocomotionAbilityAsset; } }

        public void OnUpdate(float deltaTime)
        {
            //插值每帧更新位置
            DirectionRotate(deltaTime);
            DirectionMove(deltaTime);
        }

        /// <summary>
        /// 方向旋转
        /// </summary>
        /// <param name="direction"></param>
        /// <param name="deltaTtime"></param>
        private void DirectionRotate(float deltaTtime)
        {
            if (m_SyncAbility.SyncRotation.eulerAngles == Vector3.zero)
                return;

            m_ASC.Transform.rotation = Quaternion.Slerp(m_ASC.Transform.rotation, m_SyncAbility.SyncRotation, deltaTtime / 0.066f);
        }

        /// <summary>
        /// 方向位移
        /// </summary>
        /// <param name="moveSpeed"></param>
        /// <param name="deltaTtime"></param>
        private void DirectionMove(float deltaTtime)
        {
            //float targetAngle = CalculateTargetAngle();
            //if (Mathf.Abs(targetAngle) > 90f)
            //    return;

            m_ASC.Transform.position = Vector3.Lerp(m_ASC.Transform.position, m_SyncAbility.SyncPosition, deltaTtime / 0.066f);
        }


    }
}

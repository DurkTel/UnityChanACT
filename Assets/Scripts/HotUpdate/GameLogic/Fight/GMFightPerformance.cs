using LGameFramework.GameCore;
using LGameFramework.GameLogic.GUI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// 战斗表现
    /// </summary>
    public class GMFightPerformance
    {

        /// <summary>
        /// 当打击盒检测到碰撞
        /// </summary>
        /// <param name="attackId">战斗id</param>
        /// <param name="collisionId">碰撞到的碰撞盒id</param>
        public static void OnAttackHit(int attackId, int collisionId)
        {
            if (FightUtility.TryGetAttackInfo(attackId, out AttackInfo info))
            {
                var coll = PhysicUtility.GetCollision(collisionId) as OBBCollision;

                if (info.HitInfo.IsHit(coll.EntityId)) //已经打中过了
                    return;

                ActionBoxType boxType = (ActionBoxType)coll.CollisionType;
                switch (boxType)
                {
                    case ActionBoxType.Affected: //打中了
                        OnSourcePerformance(info, coll.EntityId, boxType);
                        OnTargetPerformance(info, coll.EntityId, boxType);
                        break;
                    case ActionBoxType.Dodge: //没打中被闪了
                        OnTargetPerformance(info, coll.EntityId, boxType);
                        break;
                    case ActionBoxType.Defense: //格挡了
                        OnSourcePerformance(info, coll.EntityId, boxType);
                        OnTargetPerformance(info, coll.EntityId, boxType);
                        break;
                }

                Debug.Log($"战斗id{info.AttackId} 发起者{info.SourceEntity} 受击者{coll.EntityId} 动作{info.ActionId} 碰撞类型{boxType} 击中次数{info.HitInfo.GetHitCount(coll.EntityId)}");
            }
        }

        /// <summary>
        /// 攻击发起者击中表现
        /// </summary>
        /// <param name="info"></param>
        /// <param name="targetEntity"></param>
        /// <param name="type"></param>
        public static void OnSourcePerformance(AttackInfo info, int targetEntity, ActionBoxType type)
        {
            info.HitInfo.RecordHit(targetEntity);
            if (EntityUtility.TryGetEntity(info.AttackEntity, out var attack))
            {

                if (attack.Abilitys.TryGetAbility<ActionAbility>(out var action))
                {
                    action.TickFreeze = 1;
                }

                if (attack.Abilitys.TryGetAbility<HandOffAbility>(out var handOff)) //如果是脱手技能打中
                {
                    //if (EntityUtility.TryGetEntity(targetEntity, out var target))
                    {
                        string endEffect = handOff.HandOffId + "_end.prefab";
                        var hitPosition = attack.Transform.position;
                        //if (AssetUtility.Contains(endEffect))
                        {
                            //GameObjectPool.GetEffect(endEffect, hitPosition, Quaternion.identity, 3);

                        }
                    }

                    EntityUtility.ExitEntity(info.AttackEntity);
                }

            }
        }

        /// <summary>
        /// 受击者被击表现
        /// </summary>
        /// <param name="info"></param>
        /// <param name="targetEntity"></param>
        /// <param name="type"></param>
        public static void OnTargetPerformance(AttackInfo info, int targetEntity, ActionBoxType type)
        {
            if (EntityUtility.TryGetEntity(targetEntity, out var target))
            {
                ActionAbility targetAction = target.Abilitys.GetAbility<ActionAbility>();

                if (type == ActionBoxType.Affected)
                {
                    if (targetAction != null)
                    {
                        //string dir = "Front";
                        //int num = Random.Range(1, 3);

                        //if (EntityUtility.TryGetEntity(info.SourceEntity, out var source))
                        //{
                        //    float forward = Vector3.Dot(target.Transform.forward, source.Transform.forward);
                        //    float right = Vector3.Cross(target.Transform.right, target.Transform.forward).y;

                        //    if (Mathf.Abs(forward) > Mathf.Abs(right))
                        //        dir = forward > 0 ? "Front" : "Back";
                        //    else
                        //        dir = forward > 0 ? "Right" : "Left";
                        //}

                        //targetAction.PlayAction($"{targetAction.SubAsset.actionManifestName}_Hurt{dir}{num}");
                        targetAction.PlayAction($"{targetAction.SubAsset.actionManifestName}_Hurt");
                    }
                }
                else if (type == ActionBoxType.Dodge)
                {
                    //GameObjectPool.GetEffect("screen_blur.prefab", target.Transform.position, target.Transform.rotation, 1.5f);
                    if (target.Abilitys.TryGetAbility<AvatarAbility>(out var avatar))
                    {
                        if (avatar.Avatar.AllSkeletonBones.TryGetValue("Character1_Head", out Transform headTra))
                        {
                            //GameObjectPool.GetEffect("dodge_effect.prefab", headTra.transform.position, Quaternion.identity, 1.5f);

                        }
                    }
                }
                else if (type == ActionBoxType.Defense)
                {
                    if (targetAction != null)
                    {
                        targetAction.PlayAction($"{targetAction.SubAsset.actionManifestName}_Guard_Accept");
                    }
                }
            }
        }

    }
}

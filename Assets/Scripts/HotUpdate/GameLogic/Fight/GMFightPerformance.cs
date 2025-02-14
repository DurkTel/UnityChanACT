using LGameFramework.GameCore;
using LGameFramework.GameLogic.GUI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ս������
    /// </summary>
    public class GMFightPerformance
    {

        /// <summary>
        /// ������м�⵽��ײ
        /// </summary>
        /// <param name="attackId">ս��id</param>
        /// <param name="collisionId">��ײ������ײ��id</param>
        public static void OnAttackHit(int attackId, int collisionId)
        {
            if (FightUtility.TryGetAttackInfo(attackId, out AttackInfo info))
            {
                var coll = PhysicUtility.GetCollision(collisionId) as OBBCollision;

                if (info.HitInfo.IsHit(coll.EntityId)) //�Ѿ����й���
                    return;

                ActionBoxType boxType = (ActionBoxType)coll.CollisionType;
                switch (boxType)
                {
                    case ActionBoxType.Affected: //������
                        OnSourcePerformance(info, coll.EntityId, boxType);
                        OnTargetPerformance(info, coll.EntityId, boxType);
                        break;
                    case ActionBoxType.Dodge: //û���б�����
                        OnTargetPerformance(info, coll.EntityId, boxType);
                        break;
                    case ActionBoxType.Defense: //����
                        OnSourcePerformance(info, coll.EntityId, boxType);
                        OnTargetPerformance(info, coll.EntityId, boxType);
                        break;
                }

                Debug.Log($"ս��id{info.AttackId} ������{info.SourceEntity} �ܻ���{coll.EntityId} ����{info.ActionId} ��ײ����{boxType} ���д���{info.HitInfo.GetHitCount(coll.EntityId)}");
            }
        }

        /// <summary>
        /// ���������߻��б���
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

                if (attack.Abilitys.TryGetAbility<HandOffAbility>(out var handOff)) //��������ּ��ܴ���
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
        /// �ܻ��߱�������
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

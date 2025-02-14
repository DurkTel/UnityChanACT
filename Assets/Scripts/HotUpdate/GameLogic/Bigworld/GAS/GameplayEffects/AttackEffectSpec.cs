using GAS.Runtime;
using LGameFramework.GameCore;
using LGameFramework.GameLogic.GUI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// 攻击结算逻辑
    /// </summary>
    public class AttackEffectSpec : GameplayEffect
    {
        public AttackConfigAsset SubAsset { get { return EffectAsset as AttackConfigAsset; } }

        private AttackInfo m_AttackInfo;

        private OBBCollision m_Collision;

        private ActionBoxType m_BoxType;
        public GMEntity SourceEntity { get { return Source as GMEntity; } }
        public GMEntity TargetEntity { get { return Target as GMEntity; } }
        public GMEntity AttackEntity { get { return EntityUtility.GetEntity(m_AttackInfo.AttackEntity); } }

        public override void DisApply(bool canceled)
        {

        }

        public override void OnApply(params object[] paramArgs)
        {

            m_AttackInfo = paramArgs[0] as AttackInfo;
            if (m_AttackInfo == null)
                return;

            m_Collision = paramArgs[1] as OBBCollision;
            if (m_Collision == null)
                return;

            Target = EntityUtility.GetEntity(m_Collision.EntityId);

            if (m_AttackInfo.HitInfo.IsHit(Target.Id)) //已经打中过了
                return;

            m_BoxType = (ActionBoxType)m_Collision.CollisionType;
            switch (m_BoxType)
            {
                case ActionBoxType.Affected: //打中了
                    m_AttackInfo.HitInfo.RecordHit(Target.Id);
                    OnHitAffected();
                    break;
                case ActionBoxType.Dodge: //没打中被闪了
                    OnHitDodge();
                    break;
                case ActionBoxType.Defense: //格挡了
                    m_AttackInfo.HitInfo.RecordHit(Target.Id);
                    OnHitDefense();
                    break;
                case ActionBoxType.Hit: //拼刀了
                    m_AttackInfo.HitInfo.RecordHit(Target.Id);
                    OnHitStiff();
                    break;
            }

            //Debug.Log($"战斗id{m_AttackInfo.AttackId} 发起者{m_AttackInfo.SourceEntity} 受击者{Target.Id} 动作{m_AttackInfo.ActionId} 碰撞类型{m_BoxType} 击中次数{m_AttackInfo.HitInfo.GetHitCount(m_Collision.EntityId)}");
        }

        private void OnHitAffected()
        {
            //玩家的攻击 震屏
            if (AttackEntity.Tags.HasTag(GameplayTagsLib.Camp_Local) && !SubAsset.cameraShakeParam.Equals(default))
                Target.Cues.TriggerCue<CameraShakeCueSpec, CameraShakeCueSpec.Parameter>(SubAsset.cameraShakeParam);

            //获取双方的动作组件
            if (!AttackEntity.Abilitys.TryGetAbility<ActionAbility>(out var attackAction) || !Target.Abilitys.TryGetAbility<ActionAbility>(out var targetAction))
                return;

            //受击动画
            SwitchAction(targetAction, "Hurt");

            //卡帧
            attackAction.SetTickFreeze(SubAsset.attackParm.sourceTickFreeze);
            targetAction.SetTickFreeze(SubAsset.attackParm.targetTickFreeze, 2);

            //获取双方的同步组件
            if (!Source.Abilitys.TryGetAbility<SyncAbility>(out var sourceSync) || !Target.Abilitys.TryGetAbility<SyncAbility>(out var targetSync))
                return;

            //被击者面向攻击
            Vector3 toTarget = sourceSync.SyncPosition - targetSync.SyncPosition;
            targetSync.SyncRotationImmediately(Quaternion.LookRotation(toTarget));

            //受击特效
            if (!string.IsNullOrEmpty(SubAsset.attackParm.hitEffectPrefab))
            {
                Target.Cues.TriggerCue<ParticleCueSpec, ParticleCueSpec.Parameter>(new ParticleCueSpec.Parameter()
                {
                    prefabName = SubAsset.attackParm.hitEffectPrefab,
                    position = Target.Transform.position + Vector3.up * 0.7f,
                    rotation = Quaternion.identity,
                    lifeTime = 1.5f,
                    scale = Vector3.one
                });
            }

            //受击音效
            Target.Cues.TriggerCue<AudioCueSpec, AudioCueSpec.Parameter>(SubAsset.audioParam);

            if (AttackEntity.Abilitys.TryGetAbility<HandOffAbility>(out var handOff)) //如果是脱手技能打中
                EntityUtility.ExitEntity(m_AttackInfo.AttackEntity);

            OnApplyMMC();
        }

        private void OnHitDodge()
        {
            if (Target.Abilitys.TryGetAbility<AvatarAbility>(out var avatar))
            {
                if (Target.Tags.HasTag(GameplayTagsLib.Camp_Local))
                {
                    var camera = GameFrameworkEntry.GetModule<GMOrbitCamera>();
                    Target.Cues.TriggerCue<ParticleCueSpec, ParticleCueSpec.Parameter>(new ParticleCueSpec.Parameter()
                    {
                        prefabName = "screen_blur.prefab",
                        position = camera.CameraTran.position + camera.CameraTran.forward * 2f,
                        rotation = camera.CameraTran.rotation,
                        lifeTime = 1.5f,
                        scale = Vector3.one
                    });
                }

                //极限闪避加个伤害buff
                var dodgeBuff = AssetUtility.LoadAsset<GameplayEffectAsset>("DodgeBuff.asset");
                Target.Effects.TryAddEffect<GameplayEffect>(dodgeBuff, out var effect);
                Target.Cues.TriggerCue<ParticleCueSpec, ParticleCueSpec.Parameter>(new ParticleCueSpec.Parameter()
                {
                    prefabName = "Buff.prefab",
                    lifeTime = dodgeBuff.Duration,
                    follow = Target.Transform,
                    scale = Vector3.one * 0.5f,
                });

                if (avatar.Avatar.AllSkeletonBones.TryGetValue("Character1_Head", out Transform headTra))
                {
                    UIUtility.OpenView<DodgeEffectView>(new DodgeEffectView.DodgeEffectViewData() { TargetTran = headTra.transform});
                }

                Target.Cues.TriggerCue<AudioCueSpec, AudioCueSpec.Parameter>(new AudioCueSpec.Parameter() { audioGroupName = "HurtAudio", audioClip = "03_Claw_03.wav" });

            }
        }

        private void OnHitDefense()
        {
            //获取双方的动作组件
            if (!AttackEntity.Abilitys.TryGetAbility<ActionAbility>(out var attackAction) || !Target.Abilitys.TryGetAbility<ActionAbility>(out var targetAction))
                return;

            //完美格挡
            bool isPerfect = targetAction.CurrentAction.ActionTag.ToGameplayTag() == GameplayTagsLib.Action_PerfectGuard;

            //玩家的攻击 震屏
            if (AttackEntity.Tags.HasTag(GameplayTagsLib.Camp_Local) && !SubAsset.cameraShakeParam.Equals(default))
                Target.Cues.TriggerCue<CameraShakeCueSpec, CameraShakeCueSpec.Parameter>(SubAsset.cameraShakeParam);

            //格挡成功动画
            SwitchAction(targetAction, "Guard_Accept");

            if (isPerfect) 
            {
                //攻击方被弹刀
                attackAction.PlayAction($"{attackAction.SubAsset.actionManifestName}_StiffHurt");

                var camera = GameFrameworkEntry.GetModule<GMOrbitCamera>();
                //色散特效
                Target.Cues.TriggerCue<ParticleCueSpec, ParticleCueSpec.Parameter>(new ParticleCueSpec.Parameter()
                {
                    prefabName = "screen_dispersion.prefab",
                    position = camera.CameraTran.position + camera.CameraTran.rotation * Vector3.forward * 2f,
                    rotation = camera.CameraTran.rotation,
                    lifeTime = 1.5f,
                    scale = Vector3.one
                });
            }

            //卡帧 延迟是为了等动作切换
            attackAction.SetTickFreeze(SubAsset.attackParm.sourceTickFreeze * (isPerfect ? 3 : 1), isPerfect ? 2 : 0);//被完美格挡硬直惩罚
            if (!isPerfect)
                targetAction.SetTickFreeze(SubAsset.attackParm.targetTickFreeze, 2);

            //格挡音效
            Target.Cues.TriggerCue<AudioCueSpec, AudioCueSpec.Parameter>(new AudioCueSpec.Parameter() { audioClip = "swd_eff_01.ogg", audioGroupName = "HurtAudio" });
        }

        private void OnHitStiff()
        {
            //玩家拼刀 震屏
            if (AttackEntity.Tags.HasTag(GameplayTagsLib.Camp_Local) || Source.Tags.HasTag(GameplayTagsLib.Camp_Local))
            {
                Target.Cues.TriggerCue<CameraShakeCueSpec, CameraShakeCueSpec.Parameter>(new CameraShakeCueSpec.Parameter()
                {
                    shakeMode = GMCameraShake.ShakeMode.Forward,
                    period = 1f,
                    shakeTime = 0.15f,
                    minWave = 1f,
                    maxWave = 1f,
                });
            }

            //获取双方的动作组件
            if (!AttackEntity.Abilitys.TryGetAbility<ActionAbility>(out var attackAction) || !Target.Abilitys.TryGetAbility<ActionAbility>(out var targetAction))
                return;

            if (!FightUtility.TryGetAttackInfo(targetAction.CurrentActionUID, out var attackInfo) || attackInfo.ConfigAsset == null)
                return;

            //优先级相同 一起被反弹
            if (SubAsset.attackParm.priority == attackInfo.ConfigAsset.attackParm.priority)
            {
                SwitchAction(attackAction, "StiffHurt");
                SwitchAction(targetAction, "StiffHurt");

                attackAction.SetTickFreeze(2, 2);
                targetAction.SetTickFreeze(2, 2);
            }
            else
            {
                //不同的话 优先级低的被反弹
                var stiffAction = SubAsset.attackParm.priority > attackInfo.ConfigAsset.attackParm.priority ? targetAction : attackAction;
                SwitchAction(stiffAction, "StiffHurt");
                stiffAction.SetTickFreeze(2, 2);
            }

            //格挡音效
            Target.Cues.TriggerCue<AudioCueSpec, AudioCueSpec.Parameter>(new AudioCueSpec.Parameter() { audioClip = "swd_eff_01.ogg", audioGroupName = "HurtAudio" });

            //特效
            Target.Cues.TriggerCue<ParticleCueSpec, ParticleCueSpec.Parameter>(new ParticleCueSpec.Parameter()
            {
                prefabName = "Hit 2.prefab",
                position = AttackEntity.Transform.position +  Vector3.up * 0.7f + AttackEntity.Transform.forward * 0.5f,
                rotation = Quaternion.identity,
                lifeTime = 1.5f,
                scale = Vector3.one * 2f
            });

            var camera = GameFrameworkEntry.GetModule<GMOrbitCamera>();
            //色散特效
            Target.Cues.TriggerCue<ParticleCueSpec, ParticleCueSpec.Parameter>(new ParticleCueSpec.Parameter()
            {
                prefabName = "screen_dispersion.prefab",
                position = camera.CameraTran.position + camera.CameraTran.forward * 2f,
                rotation = camera.CameraTran.rotation,
                lifeTime = 1.5f,
                scale = Vector3.one
            });
        }

        private void SwitchAction(ActionAbility action, string actionId)
        {
            var actionName = $"{action.SubAsset.actionManifestName}_{actionId}";
            action.PreorderAction(new ActionChangeInfo() 
            { 
                BeCancelActionID = action.CurrentAction.ActionID,
                CancelActionID = actionName,
                TransitionSecond = 0f,
                Priority = 999
            }, ActionChangeType.Other);

        }

        #region 数值相关
        public override void OnApplyMMC()
        {
            //添加变量到计算公式里

            //攻击招式倍率
            m_AttributeSnapshot["AttackMagnification"] = SubAsset.attackParm.attackMagnification / 10000f;

            //暴击伤害
            Random.InitState(Time.frameCount);
            var fightAttr = Source.Attributes.GetAttributeSet<GameplayAttributeSetLib.Fight>();
            bool isCriticalHit = Random.Range(0f, 1f) <= fightAttr.CriticalHitRate.CurrentValue / 10000f;
            m_AttributeSnapshot["CriticalDamage"] = isCriticalHit ? fightAttr.CriticalHitPow.CurrentValue / 10000f : 0;

            //敌人是否易伤状态
            m_AttributeSnapshot["DizzyDamage"] = 1f;

            base.OnApplyMMC();
        }
        #endregion
    }
}

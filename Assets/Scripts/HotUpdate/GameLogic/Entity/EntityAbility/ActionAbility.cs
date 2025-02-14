using GAS.Runtime;
using LGameFramework.GameBase;
using LGameFramework.GameCore;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameLogic
{
    public class ActionAbility : GameplayAbility, IActionSystemComponent, IGameplaySyncUpdate, IGameplayUpdate
    {
        public static GameUid s_UID = new GameUid();
        public int Id { get { return m_ASC.Id; } }
        public ActionAbilityAsset SubAsset { get { return m_AbilityAsset as ActionAbilityAsset; } }
        public GameObject GameObject { get { return m_ASC.GameObject; } }
        public Transform Transform { get { return m_ASC.Transform; } }

        private int m_CurrentTick;
        public int CurrentTick { get { return m_CurrentTick; } }

        private ActionChangeInfo m_PreviousChangeInfo;
        public ActionChangeInfo PreviousChangeInfo { get { return m_PreviousChangeInfo; } }

        protected ActionInfo m_CurrentAction;
        public ActionInfo CurrentAction { get { return m_CurrentAction; } }

        protected int m_CurrentActionUID;
        public int CurrentActionUID { get { return m_CurrentActionUID; } }

        protected List<ActionInfo> m_Actions;
        public List<ActionInfo> Actions { get { return m_Actions; } }

        protected int m_DelayTickFreeze, m_PreTickFreeze;

        protected int m_TickFreeze = -1;
        public int TickFreeze 
        { 
            get { return m_TickFreeze; } 
            set 
            {
                bool preFreeze = IsTickFreeze;
                m_TickFreeze = value;
                if (preFreeze != IsTickFreeze)
                    m_ASC.Tags.UpdateDynamicTags(this, IsTickFreeze, GameplayTagsLib.Event_Fight_TickFreeze);
            } 
        }
        public bool IsTickFreeze { get { return m_TickFreeze >= 0;} }

        private float m_TotalTime, m_LastTotalTime;

        protected List<ActionTrackSpec> m_TrackSpecs;

        private List<ActionChangeInfo> m_PreorderActions;

        public UnityEvent<string> onActionChange;

        public override void OnInit(GameplayAbilityAsset abilityAsset, IAbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            onActionChange = new UnityEvent<string>();
            m_TrackSpecs = new List<ActionTrackSpec>();
            m_Actions = new List<ActionInfo>();
            m_PreorderActions = new List<ActionChangeInfo>();

            if (SubAsset != null)
            {
                ActionInfoManifest.Get(SubAsset.actionManifestName, m_Actions);
                //PreloadAnimationCache.Preload(m_Actions);
            }
            //Debug.Log("加载动作清单结束" + m_Actions.Count);
            m_ASC.Tags.AddTagsChangeEvent(GameplayTagsLib.Ability_Avatar_AvatarComplete, OnTagsChange);
        }

        public override void Dispose()
        {
            m_ASC.Tags.RemoveTagsChangeEvent(GameplayTagsLib.Ability_Avatar_AvatarComplete, OnTagsChange);
            base.Dispose();

            foreach (var action in m_TrackSpecs)
                action.Dispose();

            m_TrackSpecs.Clear();
            m_TrackSpecs = null;

            m_Actions.Clear();
            m_Actions = null;

            m_PreorderActions.Clear();
            m_PreorderActions = null;

            m_CurrentAction = null;

        }
        private void OnTagsChange(bool value)
        {
            if (value)
            {
                PlayAction(m_Actions[0].ActionID);
            }
        }

        public void ResetAction()
        {
            foreach (var track in m_TrackSpecs)
                track.TrackIsEnd = false;

            m_CurrentTick = 0;
        }


        public void OnUpdate(float deltaTime)
        {
            m_LastTotalTime = m_TotalTime;
            m_TotalTime += deltaTime;

            if (m_PreorderActions != null && m_PreorderActions.Count > 0)
            {
                //选出优先级最高的动作来播放
                m_PreorderActions.Sort((p1, p2) => p1.Priority > p2.Priority ? -1 : 1);

                var preorderInfo = m_PreorderActions[0];

                //记录变化的信息
                m_PreviousChangeInfo = preorderInfo;

                PlayAction(preorderInfo.CancelActionID);

                m_PreorderActions.Clear();
            }

            if (BattlefieldLogic.s_EnablePrediction)
            { 
                
            }
        }

        public virtual void OnSyncUpdate(int tick)
        {
            if (OnTick(m_TotalTime - m_LastTotalTime))
                OnTrackEnd();

        }

        public virtual void OnTrackEnd()
        {
            if (m_PreorderActions.Count <= 0 && !string.IsNullOrEmpty(m_CurrentAction.AutoNextActionID))
            {
                PreorderAction(new ActionChangeInfo()
                {
                    BeCancelActionID = m_CurrentAction.ActionID,
                    CancelActionID = m_CurrentAction.AutoNextActionID,
                    TransitionSecond = m_CurrentAction.AutoTransitionSecond
                }, ActionChangeType.Auto);
            }
        }

        public bool OnTick(float deltaTime)
        {
            if (!IsTickFreeze) //帧冻结 会使整个动作往后延长
            {
                if (OnTickTrack(deltaTime))
                {
                    ResetAction();
                    return true;
                }

                m_CurrentTick++;
            }
            else
                TickFreeze--;

            //延迟的帧冻结 
            if (m_DelayTickFreeze > 0)
            { 
                m_DelayTickFreeze--;
                if (m_DelayTickFreeze <= 0)
                {
                    TickFreeze = m_PreTickFreeze;
                    m_DelayTickFreeze = 0;
                }
            }

            return false;
        }

        public bool GetDeltaPosition(out Vector3 deltaPosition)
        {
            deltaPosition = Vector3.zero;
            if (m_CurrentAction == null)
                return false;

            if (m_CurrentAction.RootMotionDatas == null || m_CurrentAction.RootMotionDatas.Count <= 0)
                return false;

            if (TryGetRootMotionData(m_CurrentTick, out var currentData) && currentData.enablePosition)
            {
                if (m_CurrentTick == 0)
                {
                    deltaPosition = currentData.rootPosition; 
                    return true;
                }
                else
                {
                    
                    if (TryGetRootMotionData(m_CurrentTick - 1, out var lastData))
                    {
                        deltaPosition = currentData.rootPosition - lastData.rootPosition;
                        return true;
                    }
                }
            }
            return false;
        }

        public bool GetDeltaRotation(out Quaternion deltaRotation)
        {
            deltaRotation = Quaternion.identity;
            if (m_CurrentAction == null)
                return false;

            if (m_CurrentAction.RootMotionDatas == null || m_CurrentAction.RootMotionDatas.Count <= 0)
                return false;

            if (TryGetRootMotionData(m_CurrentTick, out var currentData) && currentData.enableRotation)
            {
                if (m_CurrentTick <= 1)
                {
                    deltaRotation = currentData.rootRotation;
                    return true;
                }
                else
                {
                    if (TryGetRootMotionData(m_CurrentTick - 1, out var lastData))
                    {
                        deltaRotation = Quaternion.Inverse(lastData.rootRotation) * currentData.rootRotation;
                        return true;
                    }
                }
            }
            return false;
        }

        public bool TryGetRootMotionData(int tick, out RootMotionData data)
        {
            data = default;

            if (m_CurrentAction == null)
                return false;

            if (m_CurrentAction.RootMotionDatas == null || m_CurrentAction.RootMotionDatas.Count <= 0)
                return false;

            if (tick < 0 || tick >= m_CurrentAction.RootMotionDatas.Count)
                return false;

            data = m_CurrentAction.RootMotionDatas[tick];

            return true;
        }

        private bool OnTickTrack(float deltaTime)
        {
            if (m_TrackSpecs.Count == 0)
                return false;

            bool isAllEnd = true;
            
            foreach (var track in m_TrackSpecs)
            {
                track.OnTick(m_CurrentTick, deltaTime);
                if (track.ClipCount > 0 && !track.TrackIsEnd)
                    isAllEnd = false;
            }

            return isAllEnd;
        }

        public virtual void PlayAction(string actionId)
        {
            if (!TryGetActionById(actionId, out var info))
                return;

            StopAction();
            m_CurrentAction = info;
            //Debug.Log("切换动作：" + m_CurrentAction.ActionID + "多少帧：" + Module.Data.Battlefield.SyncFrame);

            m_CurrentActionUID = s_UID.Uid;
            foreach (var track in m_CurrentAction.ActionTracks)
            {
                var trackSpec = Pool.Get<ActionTrackSpec>();
                trackSpec.OnInit(track, this, m_CurrentActionUID);
                m_TrackSpecs.Add(trackSpec);
            }

            onActionChange.Invoke(actionId);


            //如果是攻击动作
            var gameTag = m_CurrentAction.ActionTag.ToGameplayTag();
            if (!string.IsNullOrEmpty(m_CurrentAction.ActionTag))
                m_ASC.Tags.AddDynamicTags(this, gameTag);
            if (gameTag == GameplayTagsLib.Action_Attack || gameTag == GameplayTagsLib.Action_HandOffSkill)
            {
                var attackInfo = FightUtility.GetEmptyAttack();
                attackInfo.AttackId = m_CurrentActionUID;
                attackInfo.SourceEntity = Id;
                attackInfo.AttackEntity = Id;
                attackInfo.ActionId = actionId;
                if (!string.IsNullOrEmpty(info.AttackConfig))
                    attackInfo.ConfigAsset = AssetUtility.LoadAsset<AttackConfigAsset>(info.AttackConfig);

                FightUtility.OnAttackBegin(attackInfo);
            }
        }

        public void StopAction()
        {
            if (m_TrackSpecs.Count <= 0)
                return;

            var gameTag = m_CurrentAction.ActionTag.ToGameplayTag();
            if (gameTag == GameplayTagsLib.Action_Attack)
                FightUtility.OnAttackEnd(m_CurrentActionUID);
            ResetAction();
            foreach (var track in m_TrackSpecs)
            {
                track.Dispose();
                Pool.Release(track);
            }

            m_TrackSpecs.Clear();

            if (!string.IsNullOrEmpty(m_CurrentAction.ActionTag))
                m_ASC.Tags.RemoveDynamicTags(this, gameTag);
        }

        public void PreorderAction(ActionChangeInfo changeInfo, ActionChangeType changeType)
        {
            if (TryGetActionById(changeInfo.CancelActionID, out var info))
            {
                changeInfo.Priority += info.Priority;
                m_PreorderActions.Add(changeInfo);
            }
        }

        protected bool TryGetActionById(string actionId, out ActionInfo info)
        {
            info = m_CurrentAction;
            foreach (ActionInfo action in m_Actions)
            {
                if (action.ActionID == actionId)
                {
                    info = action;
                    return true;
                }
            }

            return false;
        }

        public void SetTickFreeze(int freezeTick, int delayTick = 0)
        {
            m_DelayTickFreeze = delayTick;
            m_PreTickFreeze = freezeTick;

            //不用延迟就直接赋值
            if (delayTick <= 0)
                TickFreeze = m_PreTickFreeze;
        }
    }
}

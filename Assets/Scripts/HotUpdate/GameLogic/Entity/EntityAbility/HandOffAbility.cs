using GAS.Runtime;
using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class HandOffAbility : ActionAbility
    {
        private string m_HandOffId;
        public string HandOffId { get { return m_HandOffId; } }

        public override void OnInit(GameplayAbilityAsset abilityAsset, IAbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            ActionInfoManifest.Get("0", m_Actions);
        }

        public override void OnActivation(params object[] paramsArgs)
        {
            base.OnActivation(paramsArgs);

            m_HandOffId = (string)paramsArgs[0];
            int attackID = (int)paramsArgs[1];
            m_CurrentActionUID = attackID;
            PlayAction(m_HandOffId);
        }

        public override void PlayAction(string actionId)
        {
            if (!TryGetActionById(actionId, out var info))
                return;

            StopAction();
            m_CurrentAction = info;
            //Debug.Log("切换动作：" + m_CurrentAction.ActionID + "多少帧：" + Module.Data.Battlefield.SyncFrame);

            foreach (var track in m_CurrentAction.ActionTracks)
            {
                var trackSpec = Pool.Get<ActionTrackSpec>();
                trackSpec.OnInit(track, this, m_CurrentActionUID);
                m_TrackSpecs.Add(trackSpec);
            }

            if (FightUtility.TryGetAttackInfo(m_CurrentActionUID, out var attackInfo))
            {
                attackInfo.AttackEntity = Id;
            }
        }

        public override void OnTrackEnd()
        {
            //base.OnTrackEnd();
            EntityUtility.ExitEntity(Id);
            FightUtility.OnAttackEnd(m_CurrentActionUID);
        }
    }
}

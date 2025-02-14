using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BehaviorDesigner.Runtime;
using LGameFramework.GameCore;

namespace LGameFramework.GameLogic
{
    public class BehaviorAbility : GameplayAbility
    {
        public BehaviorAbilityAsset SubAsset { get { return AbilityAsset as BehaviorAbilityAsset; } }

        [AbilityInject("")]
        private ActionAbility m_ActionAbility;

        private BehaviorTree m_BehaviorTree;

        private SharedInt m_AttackStep = new SharedInt();

        private SharedInt m_PrepareAttackId = new SharedInt();

        public override void OnInit(GameplayAbilityAsset abilityAsset, IAbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);

            m_BehaviorTree = asc.GameObject.TryAddComponent<BehaviorTree>();
            m_BehaviorTree.EnitityId = asc.Id;
            m_BehaviorTree.StartWhenEnabled = false;

            m_BehaviorTree.ExternalBehavior = SubAsset.ExternalBehaviorTree;

            TimerUtility.AddTimer(() =>
            {
                Debug.Log("AIÆô¶¯");
                m_ASC.Abilitys.TryActivateAbility(SubAsset.UID);
            }, 0, SubAsset.AIStartTime);


            m_ActionAbility.onActionChange.AddListener(OnActionChange);

            m_BehaviorTree.RegisterEvent<AttackInfo>(BehaviorTree.c_Event_PrepareAttack, OnPrepareAttack);
        }

        public override void OnActivation(params object[] paramsArgs)
        {
            base.OnActivation(paramsArgs);

            m_BehaviorTree.EnableBehavior();
        }

        public override void OnInactivation()
        {
            base.OnInactivation();
            m_BehaviorTree.DisableBehavior();
        }

        public override void Dispose()
        {
            base.Dispose();
            m_ActionAbility.onActionChange.RemoveListener(OnActionChange);
            m_ActionAbility = null;

            m_BehaviorTree.UnregisterEvent<AttackInfo>(BehaviorTree.c_Event_PrepareAttack, OnPrepareAttack);
            m_BehaviorTree = null;
        }

        private void OnPrepareAttack(AttackInfo info)
        {
            m_PrepareAttackId.Value = info.AttackId;
            m_BehaviorTree.SetVariable(BehaviorVariable.c_PrepareAttack, m_PrepareAttackId);
        }

        private void OnActionChange(string actionId)
        {
            if (m_ActionAbility.CurrentAction.ActionTag.ToGameplayTag() != GameplayTagsLib.Action_Attack)
            {
                //m_AttackStep.Value = 0;
                //m_BehaviorTree.SetVariable(BehaviorVariable.c_AttackStep, m_AttackStep);
            }
        }
    }
}

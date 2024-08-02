using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class ActionAbility : GameplayAbility, IGameplayUpdate
    {
        private ActionAbilityAsset m_ActionAsset;

        private TimeLineAbility m_CurrentAction;
        public TimeLineAbility CurrentAction { get { return m_CurrentAction; } }

        public override void OnInit(GameplayAbilityAsset abilityAsset, AbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_ActionAsset = abilityAsset as ActionAbilityAsset;
            foreach (var item in m_ActionAsset.Actions)
            {
                m_ASC.Abilitys.AddAbility(item);
            }
        }

        public override void OnActivation(params object[] paramsArgs)
        {
            if (paramsArgs.Length <= 0)
                return;

            string actionName = paramsArgs[0] as string;
            PlayAction(actionName);

            base.OnActivation(paramsArgs);
        }

        public void OnUpdate(float deltaTime)
        {
            if (m_CurrentAction.IsActive)
            {
                m_CurrentAction.OnUpdate(deltaTime);
                if (m_CurrentAction.TrackIsEnd)
                    PlayAction(m_ActionAsset.DefaultAction.UID);
            }
        }

        private void PlayAction(string actionName)
        {
            if (!m_ASC.Abilitys.TryGetAbility(actionName, out var ability) || ability is not TimeLineAbility)
                return;

            if (m_CurrentAction != null && m_CurrentAction.AbilityAsset.UID != actionName)
                m_ASC.Abilitys.TryInActivateAbility(m_CurrentAction.AbilityAsset.UID);

            m_CurrentAction = ability as TimeLineAbility;

            m_CurrentAction.Reset();
            m_ASC.Abilitys.TryActivateAbility(actionName);
        }
    }
}

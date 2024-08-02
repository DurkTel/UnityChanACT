using Actioner.Runtime;
using GAS.Runtime;
using UnityEngine;

namespace UnityChanAct
{
    public class DodgeAbility : GameplayAbility, IGameplayUpdate
    {

        private float m_DodgeTime;

        private float m_DodgeFadeTime;

        private LocomotionController m_Controller;

        public override void OnInit(GameplayAbilityAsset abilityAsset, AbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_Controller = asc.GetComponent<LocomotionController>();
        }

        public override void OnActivation(params object[] paramsArgs)
        {
            base.OnActivation();
            var isCommandMove = m_ASC.Tags.HasTag(GameplayTagsLib.Command_Move);
            if (isCommandMove )
                m_ASC.transform.rotation = Quaternion.LookRotation(m_Controller.WorldMoveDirection);

            var index = isCommandMove ? 1 : 0;
            var cue = AnimationCue.Trigger<AnimationBudleCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.B_Dodge, index = index });
            m_DodgeTime = (float)(cue.Action.Length / cue.Action.Speed);
            m_DodgeFadeTime = m_DodgeTime - m_DodgeTime * 0.55f;
            m_ASC.Tags.AddDynamicTags(this, GameplayTagsLib.Command_BanCommand_BanMoveCommand);

        }

        public override void OnInactivation()
        {
            base.OnInactivation();

            if (!m_ASC.Tags.HasTag(GameplayTagsLib.Command_Move))
                m_ASC.Abilitys.TryInActivateAbility<SprintAbility>();
        }

        public void OnUpdate(float deltaTime)
        {
            if (m_DodgeTime > 0)
            {
                m_DodgeTime -= deltaTime;

                if (m_DodgeTime <= 0)
                {
                    
                    m_ASC.Abilitys.TryInActivateAbility<DodgeAbility>();
                }
                else if (m_DodgeFadeTime > 0 && m_DodgeTime <= m_DodgeFadeTime)
                {
                    m_DodgeFadeTime = -1;

                    m_ASC.Tags.RemoveDynamicTags(this, GameplayTagsLib.Event_Locomotion_Dodge);
                    m_ASC.Tags.RemoveDynamicTags(this, GameplayTagsLib.Command_BanCommand_BanMoveCommand);

                    if (m_ASC.Tags.HasTag(GameplayTagsLib.Command_Move))
                        m_ASC.Abilitys.TryActivateAbility<SprintAbility>();
                }
            }
        }
    }
}

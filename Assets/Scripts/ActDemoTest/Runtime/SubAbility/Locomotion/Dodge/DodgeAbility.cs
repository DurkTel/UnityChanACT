using Actioner.Runtime;
using GAS.Runtime;
using UnityEngine;

namespace UnityChanAct
{
    public class DodgeAbility : GameplayAbility, IGameplayUpdate, IGameplayAnimationUpdate
    {

        private float m_DodgeTime;

        private float m_DodgeFadeTime;

        private ActionerController m_Actioner;

        private Transform m_Transform;

        private CharacterController m_Controller;

        public override void OnInit(GameplayAbilityAsset abilityAsset, AbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_Actioner = asc.GetComponent<ActionerController>();
            m_Controller = asc.GetComponent<CharacterController>();
            m_Transform = asc.transform;
        }

        public override void OnActivation()
        {
            base.OnActivation();
            var index = m_ASC.Tags.HasTag(GameplayTagsLib.Event_Locomotion_IsMoveing) ? 1 : 0;
            var cue = AnimationCue.Trigger<AnimationBudleCue>(m_ASC, new AnimationCueArg() { name = "Dodge", index = index });
            m_DodgeTime = (float)(cue.Action.Length / cue.Action.Speed);
            m_DodgeFadeTime = m_DodgeTime - m_DodgeTime * 0.55f;
        }

        public void OnAnimationUpdate()
        {
            //m_Transform.rotation *= m_Actioner.DeltaRotation;
            //m_Controller.Move(m_Actioner.DeltaPosition);

        }

        public override void OnInactivation()
        {
            base.OnInactivation();
            //AnimationCue.Trigger<AnimationActionCue>(m_ASC, new AnimationCueArg() { name = "Run_Front" });
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

                    if (m_ASC.Tags.HasTag(GameplayTagsLib.Event_Locomotion_IsMoveing))
                        m_ASC.Abilitys.TryActivateAbility<SprintAbility>();

                    m_ASC.Tags.RemoveDynamicTags(this, GameplayTagsLib.Event_Locomotion_Dodge);

                }
            }
        }
    }
}

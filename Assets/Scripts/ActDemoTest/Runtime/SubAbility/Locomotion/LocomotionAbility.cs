using UnityChanAct;
using Actioner.Runtime;
using UnityEngine;

namespace GAS.Runtime
{
    public class LocomotionAbility : GameplayAbility
    {
        private LocomotionAbilityAsset m_LocomotionAsset;

        private GameplayAttributeSetLib.Locomotion m_LocomotionAttribute;

        private LocomotionController m_LocomotionController;

        public override void OnInit(GameplayAbilityAsset abilityAsset, AbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_LocomotionController = asc.GetComponent<LocomotionController>();
            m_LocomotionAsset = abilityAsset as LocomotionAbilityAsset;
            m_ASC.Attributes.TryGetAttributeSet(out m_LocomotionAttribute);

            m_LocomotionController.tiltAngle = m_LocomotionAsset.TiltAngle;
            m_LocomotionController.tiltSpeed = m_LocomotionAsset.TiltSpeed;
            m_LocomotionController.rotateSpeed = m_LocomotionAsset.RotateSpeed;
            m_LocomotionController.startRotateTime = m_LocomotionAsset.StartRotateTime;
            m_LocomotionController.rootMotionMove = true;

            m_LocomotionController.OnMoveing += OnMoveing;
            m_LocomotionController.OnMoveReturnStart += OnMoveReturnStart;
            m_LocomotionController.OnMoveReturnTransition = OnMoveReturnTransition;
            m_LocomotionController.OnMoveReturnEnd += OnMoveReturnEnd;
        }

        public override void OnActivation()
        {
            base.OnActivation();
            AnimationCue.Trigger<AnimationActionCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.A_Idle });
        }

        private void OnMoveing(bool isMoveing)
        {
            if (isMoveing)
            {
                if (m_LocomotionController.IsMoveing)
                {
                    //AnimationCue.Trigger<AnimationQueueCue>(m_ASC, new AnimationCueArg() { queueNames = new string[] { PlayerAction.A_RunStart, PlayerAction.A_RunFront }, layer = 0, duration = ActionerPlayable.s_DefaultFadeSpeed });
                    AnimationCue.Trigger<AnimationActionCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.A_RunFront, duration = ActionerPlayable.s_DefaultFadeSpeed });
                }
            }
            else
            {
                if (m_ASC.Tags.HasTag(GameplayTagsLib.Event_Locomotion_Dodge))
                    return;

                var actionName = m_ASC.Tags.HasTag(GameplayTagsLib.Event_Locomotion_Sprint) ? PlayerAction.A_SprintEnd : PlayerAction.A_RunEnd;
                AnimationCue.Trigger<AnimationActionCue>(m_ASC, new AnimationCueArg() { name = actionName, duration = ActionerPlayable.s_DefaultFadeSpeed });

                m_ASC.Abilitys.TryInActivateAbility<SprintAbility>();
            }
        }

        private float OnMoveReturnStart()
        {
            var cue = AnimationCue.Trigger<AnimationActionCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.A_RunReturn, duration = ActionerPlayable.s_DefaultFadeSpeed });
            return cue.Action.Length;
        }

        private void OnMoveReturnTransition(float fadeTime)
        {
            AnimationCue.Trigger<AnimationActionCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.A_RunFront, duration = fadeTime });
        }

        private void OnMoveReturnEnd()
        {
            //if (!m_LocomotionController.IsMoveing)
            //    m_ASC.Tags.RemoveDynamicTags(this, GameplayTagsLib.Event_Locomotion_IsMoveing);

            //m_ASC.Tags.RemoveDynamicTags(this, GameplayTagsLib.Ability_Locomotion_SharpTurn);
        }
    }
}

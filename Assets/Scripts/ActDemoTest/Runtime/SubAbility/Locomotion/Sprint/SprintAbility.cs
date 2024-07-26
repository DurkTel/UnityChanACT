using Actioner.Runtime;
using GAS.Runtime;
using UnityEngine;

namespace UnityChanAct
{
    public class SprintAbility : GameplayAbility
    {
        public override void OnActivation()
        {
            base.OnActivation();
            AnimationCue.Trigger<AnimationActionCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.A_SprintFront, duration = ActionerPlayable.s_DefaultFadeSpeed });
        }

        public override void OnInactivation()
        {
            base.OnInactivation();
            //if (m_ASC.Tags.HasNoneTags(GameplayTagsLib.Event_Locomotion_IsMoveing))
            //    AnimationCue.Trigger<AnimationActionCue>(m_ASC, new AnimationCueArg() { name = "Run_Front", duration = ActionerPlayable.s_DefaultFadeSpeed });
        }
    }
}

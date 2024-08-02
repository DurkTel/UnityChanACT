using Actioner.Runtime;
using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class GuardAbility : GameplayAbility
    {
        public override void OnActivation(params object[] paramsArgs)
        {
            base.OnActivation(paramsArgs);
            var cue = AnimationCue.Trigger<AnimationBudleCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.B_Guard, index = 0, duration = ActionerPlayable.s_DefaultFadeSpeed });
            cue.Action.EventSequence.ExitEvent += () =>
            {
                var cue = AnimationCue.Trigger<AnimationBudleCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.B_Guard, index = 1, duration = 0 });
            };

        }

        public override void OnInactivation()
        {
            base.OnInactivation();
            AnimationCue.Trigger<AnimationBudleCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.B_Guard, index = 2, duration = 0 });

        }
    }
}

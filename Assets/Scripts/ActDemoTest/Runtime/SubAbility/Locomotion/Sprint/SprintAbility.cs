using Actioner.Runtime;
using GAS.Runtime;
using System;
using UnityEngine;

namespace UnityChanAct
{
    public class SprintAbility : GameplayAbility
    {
        public override void OnActivation(params object[] paramsArgs)
        {
            base.OnActivation();
            float duration = paramsArgs.Length > 0 && paramsArgs[0] is float ? (float)paramsArgs[0] : ActionerPlayable.s_DefaultFadeSpeed;

            AnimationCue.Trigger<AnimationBudleCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.B_Move, index = 1, duration = duration });

        }

        public override void OnInactivation()
        {
            base.OnInactivation();
            //if (m_ASC.Tags.HasNoneTags(GameplayTagsLib.Event_Locomotion_IsMoveing))
            //    AnimationCue.Trigger<AnimationActionCue>(m_ASC, new AnimationCueArg() { name = "Run_Front", duration = ActionerPlayable.s_DefaultFadeSpeed });
        }
    }
}

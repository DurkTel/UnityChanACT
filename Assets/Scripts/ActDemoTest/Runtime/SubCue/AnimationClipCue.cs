using Actioner.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class AnimationClipCue : AnimationCue
    {
        protected override ActionerAction PlayAction(AnimationCueArg arg)
        {
            var action = m_ActionerController.CrossFade(arg.clip, arg.duration, arg.layer);

            if (!arg.actionEvent.IsEmptyOrNull())
                action.EventSequence.AddEvent(arg.actionEvent);

            if (arg.enterEvent != null)
                action.EventSequence.EnterEvent += arg.enterEvent;

            if (arg.exitEvent != null)
                action.EventSequence.ExitEvent += arg.exitEvent;

            return action;
        }
    }
}

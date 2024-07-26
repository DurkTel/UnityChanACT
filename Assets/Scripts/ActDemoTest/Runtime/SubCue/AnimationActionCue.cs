using UnityChanAct;
using Actioner.Runtime;

namespace GAS.Runtime
{
    public class AnimationActionCue : AnimationCue
    {
        protected override ActionerAction PlayAction(AnimationCueArg arg)
        {
            var action = m_ActionerController.PlayAction(arg.name, arg.duration);

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

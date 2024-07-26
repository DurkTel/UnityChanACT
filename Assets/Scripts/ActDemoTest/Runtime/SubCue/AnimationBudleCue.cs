using Actioner.Runtime;

namespace UnityChanAct
{
    public class AnimationBudleCue : AnimationCue
    {
        protected override ActionerAction PlayAction(AnimationCueArg arg)
        {
            var action = m_ActionerController.PlayActionFromBudle(arg.name, arg.index, arg.duration);

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

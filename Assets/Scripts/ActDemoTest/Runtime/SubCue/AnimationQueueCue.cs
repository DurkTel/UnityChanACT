using Actioner.Runtime;

namespace UnityChanAct
{
    public class AnimationQueueCue : AnimationCue
    {
        protected override ActionerAction PlayAction(AnimationCueArg arg)
        {
            m_ActionerController.PlayQueue(arg.layer, arg.duration, arg.queueNames);
            return null;
        }
    }
}

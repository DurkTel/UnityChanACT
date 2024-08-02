using Actioner.Runtime;
using GAS.Runtime;
using UnityEngine;
using UnityEngine.Events;

namespace UnityChanAct
{
    public abstract class AnimationCue : GameplayCueInstant
    {
        /// <summary>
        /// 动画控制器
        /// </summary>
        protected ActionerController m_ActionerController;

        /// <summary>
        /// 当前播放的动画
        /// </summary>
        protected ActionerAction m_CurrentAction;

        /// <summary>
        /// 动画结束时间
        /// </summary>
        protected float m_AnimationEndTimeStamp;

        private ActionerAction m_Action;
        public ActionerAction Action { get { return m_Action; } }

        public override void OnInit(AbilitySystemComponent asc)
        {
            base.OnInit(asc);
            m_ActionerController = asc.GetComponent<ActionerController>();
        }
        public override void Dispose()
        {
            m_ActionerController = null;
        }

        public override void Trigger<V>(V arg)
        {
            if (arg is AnimationCueArg actionArg)
                m_Action = PlayAction(actionArg);
        }

        protected abstract ActionerAction PlayAction(AnimationCueArg arg);

        public static T Trigger<T>(AbilitySystemComponent asc, AnimationCueArg arg) where T : GameplayCue, new()
        { 
            return asc.Cues.TriggerCue<T, AnimationCueArg>(arg);
        }
    }

    [System.Serializable]
    public struct AnimationCueArg
    {
        public int layer;
        public int index;
        public string name;
        public float duration;
        public bool rootMotion;
        public AnimationClip clip;
        public string[] queueNames;
        public ActionerEvent actionEvent;
        public UnityAction enterEvent;
        public UnityAction exitEvent;
    }
}

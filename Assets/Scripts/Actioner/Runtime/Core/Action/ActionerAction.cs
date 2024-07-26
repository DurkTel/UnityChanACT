using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    /// <summary>
    /// 行为节点
    /// </summary>
    public class ActionerAction : ActionerNode
    {
        private ActionData m_ActionData;

        private AnimationClip m_Clip;
        /// <summary>
        /// 行为动画
        /// </summary>
        public AnimationClip Clip 
        { 
            get 
            { 
                return m_Clip; 
            } 
            set
            {
                if (m_Clip == null || !m_Clip.Equals(value))
                {
                    m_Clip = value;
                    DestroyPlayable();
                    CreatePlayable();
                }
            }
        }

        private bool m_IsPlaying;
        /// <summary>
        /// 是否正在播放
        /// </summary>
        public bool IsPlaying
        {
            get
            {
                return m_IsPlaying;
            }
            set
            {
                if (!Playable.IsValid())
                    return;

                if (m_IsPlaying == value) 
                    return;
                m_IsPlaying = value;

                if (m_IsPlaying)
                    Playable.Play();
                else
                    Playable.Pause();
            }
        }

        /// <summary>
        /// 应用IK
        /// </summary>
        public bool ApplyIK
        {
            get { return m_Playable.IsValid() && ((AnimationClipPlayable)m_Playable).GetApplyPlayableIK(); }
            set
            {
                ((AnimationClipPlayable)m_Playable).SetApplyPlayableIK(value);
                Controller.IKCount += (value ? 1 : -1);
            }
        }

        private bool m_ApplyFootIK;
        /// <summary>
        /// 应用足部IK
        /// </summary>
        public bool ApplyFootIK
        {
            get { return m_ApplyFootIK; }
            set
            {
                m_ApplyFootIK = value;
                Controller.FootIKCount += (value ? 1 : -1);
            }
        }

        private bool m_ApplyRootMotion;
        /// <summary>
        /// 应用根运动
        /// </summary>
        public bool ApplyRootMotion
        {
            get { return m_ApplyRootMotion; }
            set
            {
                if (m_ApplyRootMotion == value) return;
                m_ApplyRootMotion = value;
                Controller.RootMotionCount += (value ? 1 : -1);
            }
        }

        private EventSequence m_EventSequence;
        /// <summary>
        /// 事件序列
        /// </summary>
        public EventSequence EventSequence
        {
            get { return m_EventSequence; }
        }

        /// <summary>
        /// 动画长度
        /// </summary>
        public float Length { get { return m_Clip.length; } }

        /// <summary>
        /// 动画时间
        /// </summary>
        public double Time 
        { 
            get { return Playable.IsValid() ? Playable.GetTime() : 0; } 
            set 
            {
                if (Playable.IsValid())
                {
                    Playable.SetTime(value);
                    Playable.SetTime(value);
                }
            } 
        }   

        /// <summary>
        /// 动画进度
        /// </summary>
        public float NormalizedTime { get { return (float)Time / Length; } }

        /// <summary>
        /// 是否循环
        /// </summary>
        public bool IsLooping { get { return m_Clip != null && m_Clip.isLooping; } }

        public override void OnInit(ActionerPlayable controller, IPlayableNode parent, object clip)
        {
            m_Clip = clip as AnimationClip;
            base.OnInit(controller, parent);
            m_EventSequence = new EventSequence(this);
            m_EventSequence.OnInitClipAllEvent(m_Clip);
        }

        public override IPlayableNode GetChild(int index)
        {
            return null;
        }

        protected override void CreatePlayable(out Playable playable)
        {
            var clipPlayable = AnimationClipPlayable.Create(Root.Graph, m_Clip);
            clipPlayable.SetApplyPlayableIK(false);
            clipPlayable.SetApplyFootIK(false);
            playable = clipPlayable;
        }

        public override void Update(UpdateStep step, float deltaTime)
        {
            base.Update(step, deltaTime);

            switch (step)
            {
                case UpdateStep.Progress:
                    m_EventSequence.UpdateEvent(NormalizedTime);
                    break;
            }
        }

        public override void OnNodeEnter()
        {
            base.OnNodeEnter();
            IsPlaying = true;
            //InitActionData();

            if (m_EventSequence != null)
            {
                m_EventSequence.Reset();
                m_EventSequence.ExitEvent += OnActionComplete;
            }
        }

        public override void OnNodeExit()
        {
            base.OnNodeExit();
            IsPlaying = false;
            Time = 0f;
            m_EventSequence.ExitEvent -= OnActionComplete;
            m_EventSequence.ExitEvent = null;

            if (ApplyFootIK)
                ApplyFootIK = false;

            if (ApplyRootMotion)
                ApplyRootMotion = false;

        }

        public void SetData(ActionData data)
        { 
            m_ActionData = data;
            InitActionData();
        }

        private void OnActionComplete()
        {
            m_EventSequence.ExitEvent = null;

            //通知父节点自己完成
            if (Parent is ActionerLayer layer)
                layer.OnActionComplete(this);

        }

        private void InitActionData()
        {
            if (m_ActionData == null) 
                return;
            Speed = m_ActionData.speed;
            
            if (m_ActionData.footIK)
                ApplyFootIK = true;

            if (m_ActionData.rootMotion)
                ApplyRootMotion = true;
        }

        public override void Dispose()
        {
            Root.ActionMap.Remove(Clip);
            (Parent as ActionerLayer).AllActions.Remove(this);
            m_ActionData = null;

            m_EventSequence.Clear();
            m_EventSequence = null;

            base.Dispose();
        }
    }
}

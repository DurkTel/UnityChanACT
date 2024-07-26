using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    /// <summary>
    /// ��Ϊ�ڵ�
    /// </summary>
    public class ActionerAction : ActionerNode
    {
        private ActionData m_ActionData;

        private AnimationClip m_Clip;
        /// <summary>
        /// ��Ϊ����
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
        /// �Ƿ����ڲ���
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
        /// Ӧ��IK
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
        /// Ӧ���㲿IK
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
        /// Ӧ�ø��˶�
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
        /// �¼�����
        /// </summary>
        public EventSequence EventSequence
        {
            get { return m_EventSequence; }
        }

        /// <summary>
        /// ��������
        /// </summary>
        public float Length { get { return m_Clip.length; } }

        /// <summary>
        /// ����ʱ��
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
        /// ��������
        /// </summary>
        public float NormalizedTime { get { return (float)Time / Length; } }

        /// <summary>
        /// �Ƿ�ѭ��
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

            //֪ͨ���ڵ��Լ����
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

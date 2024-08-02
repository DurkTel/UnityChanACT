using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    /// <summary>
    /// �������
    /// </summary>
    public class ActionerLayer : ActionerNode, IActionAddable
    {
        /// <summary>
        /// �㼶���ģʽ
        /// </summary>
        public enum AnimeLayerBlendingMode
        {
            /// <summary>
            /// ����
            /// </summary>
            Override,
            /// <summary>
            /// ����
            /// </summary>
            Additive
        }

        public AnimationLayerMixerPlayable LayerMixerPlayable
        {
            get { return (AnimationLayerMixerPlayable)Parent.Playable; }
        }

        private AnimeLayerBlendingMode m_BlendingMode;
        public AnimeLayerBlendingMode BlendingMode
        {
            get { return m_BlendingMode; }
            set
            {
                if (Index == 0)
                {
                    Debug.LogWarning("BaseLayer�޷��޸�BlendingMode");
                    return;
                }

                if (m_BlendingMode == value)
                    return;

                m_BlendingMode = value;
                LayerMixerPlayable.SetLayerAdditive((uint)Index, m_BlendingMode == AnimeLayerBlendingMode.Additive);
            }
        }

        private AvatarMask m_AvatarMask;
        public AvatarMask AvatarMask
        {
            get {  return m_AvatarMask; }
            set
            {
                if (m_AvatarMask == value)
                    return;
                m_AvatarMask = value;
                LayerMixerPlayable.SetLayerMaskFromAvatarMask((uint)Index, m_AvatarMask == null ? ActionerPlayable.s_EmptyMask : m_AvatarMask);
            }
        }

        public override float Weight 
        { 
            get { return base.Weight; } 
            set 
            {
                if (Index == 0)
                    return;
                base.Weight = value;
            } 
        }

        public override float TagetWeight 
        {
            get { return base.TagetWeight; }
            set
            {
                if (Index == 0)
                    return;
                base.TagetWeight = value;
            }
        }

        public override int ChildCount { get { return m_AllActions.Count; } }

        public override bool IsAutoDisConnect { get { return Index != 0; } } //�����㲻�Ͽ�

        public override bool IsCanDestroy { get { return Index != 0; } set { } }

        private List<ActionerNode> m_AllActions;
        /// <summary>
        /// �������е�Action
        /// </summary>
        public List<ActionerNode> AllActions { get { return m_AllActions; } }

        private ActionerNode m_CurrentAction;
        /// <summary>
        /// ��ǰ�����е���Ϊ
        /// </summary>
        public ActionerNode CurrentAction { get { return m_CurrentAction; } }

        private ActionerNode m_DefaultAction;
        /// <summary>
        /// Ĭ�ϵ�Action
        /// </summary>
        public ActionerNode DefaultAction { get { return m_DefaultAction; } set { m_DefaultAction = value; } }

        private PreActionData m_PreAction;
        /// <summary>
        /// ׼�����ŵ���Ϊ
        /// </summary>
        public PreActionData PreAction { get { return m_PreAction; } set {m_PreAction = value; } }
        /// <summary>
        /// �ȴ����ŵ���Ϊ�б�
        /// </summary>
        private PreActionData[] m_PreActionQueue;
        /// <summary>
        /// ������һ��Ҫ���ŵ��±�
        /// </summary>
        private int m_PreNextIndex = -1;

        public override void OnInit(ActionerPlayable controller, IPlayableNode parent, object param = null)
        {
            m_AllActions = new List<ActionerNode>();
            base.OnInit(controller, parent);
            //BaseLayerĬ��Ȩ��Ϊ1
            if (Index == 0 && Weight == 0f)
            {
                m_Weight = 1f;
                Parent.Playable.SetInputWeight(Index, m_Weight);
            }
        }

        protected override void CreatePlayable(out Playable playable)
        {
            playable = AnimationMixerPlayable.Create(Root.Graph);
        }

        public override IPlayableNode GetChild(int index)
        {
            return m_AllActions[index];
        }

        public override void OnNodeExit()
        {
            base.OnNodeExit();
            for (int i = m_AllActions.Count - 1; i >= 0; i--)
                m_AllActions[i].Weight = 0f;
        }

        protected override void UpdatePrePlay()
        {
            base.UpdatePrePlay();
            if (!PreAction.Equals(default(PreActionData)))
            {
                SwitchActiveAction(PreAction.action, PreAction.durtion);
                PreAction = default;
                this.CancelUpdate(UpdateStep.PrePlay);
            }
        }

        /// <summary>
        /// ���ò��е���Ϊ�˳�ʱ
        /// �ߵ�����ص�����һ���������Ž���
        /// </summary>
        public void OnActionComplete(ActionerAction action)
        {

            //������������ʲô
            if (m_PreActionQueue != null && m_PreNextIndex > 0)
            {
                var previousAction = m_PreActionQueue[m_PreNextIndex - 1];
                if (previousAction.action == action)
                {
                    //��һ���±곬�� ���в���
                    if (m_PreNextIndex >= m_PreActionQueue.Length)
                    {
                        m_PreNextIndex = -1;
                        m_PreActionQueue = null;
                    }
                    else
                    {
                        PreAction = m_PreActionQueue[m_PreNextIndex++];
                        this.RequireUpdate(UpdateStep.PrePlay);
                        //SwitchActiveAction(m_PreAction.action, m_PreAction.durtion);
                        return;
                    }
                }
            }

            //��ѭ�� ����
            if (!action.IsLooping)
            {

                //if (m_CurrentAction == action && m_DefaultAction != null && PreAction.Equals(default(PreActionData))) //�ǵ�ǰ���ڲ���Ҫ������ �г�Ĭ�ϵ�
                //{
                //    PreAction = new PreActionData() { action = m_DefaultAction, durtion = ActionerPlayable.s_DefaultFadeSpeed };
                //    this.RequireUpdate(UpdateStep.PrePlay);

                //    //SwitchActiveAction(m_DefaultAction, ActionerPlayable.s_DefaultFadeSpeed);
                //}
                //else
                {
                    //�ò�ֻ����һ���ڵ� ����ò�
                    if (this.GetValidChildCount() == 1)
                        CrossFade(0f, ActionerPlayable.s_DefaultFadeSpeed);
                    else
                        //��ֹһ���ڵ� ֻ������Ϊ
                        action.CrossFade(0f, ActionerPlayable.s_DefaultFadeSpeed);
                }
            }

        }

        /// <summary>
        /// �л���ǰ�������Ϊ
        /// </summary>
        /// <param name="node"></param>
        /// <param name="duration"></param>
        private void SwitchActiveAction(ActionerNode node, float duration)
        {
            m_CurrentAction = node;

            m_DefaultAction ??= node;
            m_DefaultAction.IsCanDestroy = false;

            //�����ǰ�㼶Ȩ��Ϊ0 �ĳ�1
            if (Weight != 1)
                CrossFade(1f, duration);

            m_CurrentAction.CrossFade(1f, duration);

            foreach (var item in m_AllActions)
            {
                if (m_CurrentAction == item || (!item.IsConnected && item.Weight == 0f))
                    continue;

                item.CrossFade(0f, duration);
            }
        }

        /// <summary>
        /// ������Ϊ �ڲ�����
        /// </summary>
        /// <param name="clip"></param>
        /// <param name="duration"></param>
        /// <returns></returns>
        private ActionerAction InternalPlay(AnimationClip clip, float duration, float timeOffset = 0f)
        {
            if (m_CurrentAction != null && m_CurrentAction is ActionerAction action && ReferenceEquals(action.Clip, clip))
            {
                action.Time = action.Length * timeOffset;
                PreAction = new PreActionData() { action = action, durtion = duration };
                this.RequireUpdate(UpdateStep.PrePlay);
                //SwitchActiveAction(action, duration);

                return action;
            }

            if (!this.TryAddState(clip, out action))
                m_AllActions.Add(action);
            action.Time = action.Length * timeOffset;
            action.IsCanDestroy = true;
            PreAction = new PreActionData() { action = action, durtion = duration };
            this.RequireUpdate(UpdateStep.PrePlay);
            //SwitchActiveAction(action, duration);

            return action;
        }

        /// <summary>
        /// ������Ϊ
        /// </summary>
        /// <param name="clip">����Ƭ��</param>
        /// <returns>��Ϊ</returns>
        public ActionerAction Play(AnimationClip clip, float timeOffset = 0f)
        {
            m_PreNextIndex = -1;
            m_PreActionQueue = null;
            return InternalPlay(clip, 0f, timeOffset);
        }

        /// <summary>
        /// ���ɲ�����Ϊ
        /// </summary>
        /// <param name="clip">����Ƭ��</param>
        /// <param name="duration"></param>
        /// <returns>��Ϊ</returns>
        public ActionerAction CrossFade(AnimationClip clip, float duration, float timeOffset = 0f)
        {
            m_PreNextIndex = -1;
            m_PreActionQueue = null;
            return InternalPlay(clip, duration, timeOffset);
        }

        /// <summary>
        /// ���Ż����
        /// </summary>
        /// <param name="blendType"></param>
        /// <param name="motions"></param>
        /// <returns></returns>
        public ActionerBlendTree BlendPlay(ActionBlend blendData)
        {
            m_PreNextIndex = -1;
            m_PreActionQueue = null;
            ActionerBlendTree blend = null;

            if (m_AllActions.Count > 0)
            { 
                foreach (var action in m_AllActions)
                {
                    if (action is ActionerBlendTree newBlend && newBlend.BlendTreeData == blendData)
                    {
                        PreAction = new PreActionData() { action = newBlend, durtion = 0 };
                        this.RequireUpdate(UpdateStep.PrePlay);
                        return newBlend;
                    }
                }
            }

            switch (blendData.blendType)
            {
                case BlendTreeType.Blend1D:
                    blend = new ActionerBlendTree1D();
                    break;
                case BlendTreeType.Blend2DCartesian:
                    blend = new ActionerBlendTree2D();
                    break;
                case BlendTreeType.Blend2DDirectional:
                    blend = new ActionerBlendTree2D();
                    break;
            }

            blend.OnInit(Root, this, blendData);
            m_AllActions.Add(blend);
            PreAction = new PreActionData() { action = blend, durtion = 0 };
            //this.RequireUpdate(UpdateStep.PrePlay);
            SwitchActiveAction(blend, 0f);

            return blend;
        }

        /// <summary>
        /// ���в���
        /// </summary>
        /// <param name="duration">����</param>
        /// <param name="clips"></param>
        public void PlayQueue(float duration, params AnimationClip[] clips)
        {
            m_PreActionQueue = new PreActionData[clips.Length];
            for (int i = 0; i < clips.Length; i++)
            {
                if (!this.TryAddState(clips[i], out var action))
                    m_AllActions.Add(action);

                action.Time = 0f;
                m_PreActionQueue[i] = new PreActionData() { action = action, durtion = i == 0 ? duration : 0 };
            }

            m_PreNextIndex = 0;
            m_PreAction = m_PreActionQueue[m_PreNextIndex++];
            this.RequireUpdate(UpdateStep.PrePlay);

            //InternalPlay(clips[0], firstDuration);
        }

        public override void Dispose()
        {
            m_AvatarMask = null;
            m_CurrentAction = null;
            m_DefaultAction = null;
            m_AllActions.Clear();
            m_AllActions = null;
            (Parent as ActionerLayerMixer).TryRemoveLayer(Index);
            base.Dispose();
        }
    }

    public struct PreActionData
    {
        public ActionerNode action;

        public float durtion;
    }
}

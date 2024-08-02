using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    /// <summary>
    /// 动画混合
    /// </summary>
    public class ActionerLayer : ActionerNode, IActionAddable
    {
        /// <summary>
        /// 层级混合模式
        /// </summary>
        public enum AnimeLayerBlendingMode
        {
            /// <summary>
            /// 覆盖
            /// </summary>
            Override,
            /// <summary>
            /// 叠加
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
                    Debug.LogWarning("BaseLayer无法修改BlendingMode");
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

        public override bool IsAutoDisConnect { get { return Index != 0; } } //基础层不断开

        public override bool IsCanDestroy { get { return Index != 0; } set { } }

        private List<ActionerNode> m_AllActions;
        /// <summary>
        /// 当层所有的Action
        /// </summary>
        public List<ActionerNode> AllActions { get { return m_AllActions; } }

        private ActionerNode m_CurrentAction;
        /// <summary>
        /// 当前播放中的行为
        /// </summary>
        public ActionerNode CurrentAction { get { return m_CurrentAction; } }

        private ActionerNode m_DefaultAction;
        /// <summary>
        /// 默认的Action
        /// </summary>
        public ActionerNode DefaultAction { get { return m_DefaultAction; } set { m_DefaultAction = value; } }

        private PreActionData m_PreAction;
        /// <summary>
        /// 准备播放的行为
        /// </summary>
        public PreActionData PreAction { get { return m_PreAction; } set {m_PreAction = value; } }
        /// <summary>
        /// 等待播放的行为列表
        /// </summary>
        private PreActionData[] m_PreActionQueue;
        /// <summary>
        /// 队列下一个要播放的下标
        /// </summary>
        private int m_PreNextIndex = -1;

        public override void OnInit(ActionerPlayable controller, IPlayableNode parent, object param = null)
        {
            m_AllActions = new List<ActionerNode>();
            base.OnInit(controller, parent);
            //BaseLayer默认权重为1
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
        /// 当该层中的行为退出时
        /// 走到这个回调代表一个动画播放结束
        /// </summary>
        public void OnActionComplete(ActionerAction action)
        {

            //评估接下来播什么
            if (m_PreActionQueue != null && m_PreNextIndex > 0)
            {
                var previousAction = m_PreActionQueue[m_PreNextIndex - 1];
                if (previousAction.action == action)
                {
                    //下一个下标超过 队列播完
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

            //非循环 清理
            if (!action.IsLooping)
            {

                //if (m_CurrentAction == action && m_DefaultAction != null && PreAction.Equals(default(PreActionData))) //是当前正在播的要销毁了 切成默认的
                //{
                //    PreAction = new PreActionData() { action = m_DefaultAction, durtion = ActionerPlayable.s_DefaultFadeSpeed };
                //    this.RequireUpdate(UpdateStep.PrePlay);

                //    //SwitchActiveAction(m_DefaultAction, ActionerPlayable.s_DefaultFadeSpeed);
                //}
                //else
                {
                    //该层只有这一个节点 清理该层
                    if (this.GetValidChildCount() == 1)
                        CrossFade(0f, ActionerPlayable.s_DefaultFadeSpeed);
                    else
                        //不止一个节点 只清理行为
                        action.CrossFade(0f, ActionerPlayable.s_DefaultFadeSpeed);
                }
            }

        }

        /// <summary>
        /// 切换当前激活的行为
        /// </summary>
        /// <param name="node"></param>
        /// <param name="duration"></param>
        private void SwitchActiveAction(ActionerNode node, float duration)
        {
            m_CurrentAction = node;

            m_DefaultAction ??= node;
            m_DefaultAction.IsCanDestroy = false;

            //如果当前层级权重为0 改成1
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
        /// 播放行为 内部调用
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
        /// 播放行为
        /// </summary>
        /// <param name="clip">动画片段</param>
        /// <returns>行为</returns>
        public ActionerAction Play(AnimationClip clip, float timeOffset = 0f)
        {
            m_PreNextIndex = -1;
            m_PreActionQueue = null;
            return InternalPlay(clip, 0f, timeOffset);
        }

        /// <summary>
        /// 过渡播放行为
        /// </summary>
        /// <param name="clip">动画片段</param>
        /// <param name="duration"></param>
        /// <returns>行为</returns>
        public ActionerAction CrossFade(AnimationClip clip, float duration, float timeOffset = 0f)
        {
            m_PreNextIndex = -1;
            m_PreActionQueue = null;
            return InternalPlay(clip, duration, timeOffset);
        }

        /// <summary>
        /// 播放混合树
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
        /// 队列播放
        /// </summary>
        /// <param name="duration">过渡</param>
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

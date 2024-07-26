using System;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    public enum BlendTreeType
    {
        /// <summary>
        /// 1D���
        /// </summary>
        Blend1D,
        /// <summary>
        /// 2D�ѿ���������
        /// </summary>
        Blend2DCartesian,
        /// <summary>
        /// 2D��������
        /// </summary>
        Blend2DDirectional
    }

    /// <summary>
    /// ����˶���Ϣ
    /// </summary>
    [System.Serializable]
    public struct BlendMotion : IComparable<BlendMotion>
    {
        /// <summary>
        /// ��ϵ���Ϊ
        /// </summary>
        public ActionData action;

        /// <summary>
        /// �����ֵ
        /// </summary>
        public float thresholdX;

        /// <summary>
        /// �����ֵ
        /// </summary>
        public float thresholdY;

        public readonly int CompareTo(BlendMotion other)
        {
            if (thresholdX == other.thresholdX) return 0;

            return thresholdX - other.thresholdX > 0 ? 1 : -1;
        }
    }

    /// <summary>
    /// ������ڵ�
    /// </summary>
    public abstract class ActionerBlendTree : ActionerNode, IActionAddable
    {
        public BlendMotion[] Motions
        {
            get { return m_BlendTreeData.motions; }
        }

        public BlendTreeType m_BlendTreeType
        {
            get { return m_BlendTreeData.blendType; }
        }

        protected ActionerNode[] m_BlendAction;

        protected ActionBlend m_BlendTreeData;

        public ActionBlend BlendTreeData { get { return m_BlendTreeData; } }

        protected ActionerController m_Controller;

        protected bool m_ApplyAnimatorIK;

        /// <summary>
        /// Ӧ��Ik
        /// </summary>
        public bool ApplyAnimatorIK
        {
            get
            {
                return m_ApplyAnimatorIK;
            }
            set
            {
                foreach (var node in m_BlendAction)
                {
                    if (node is ActionerAction action)
                        action.ApplyIK = value;
                }
            }
        }

        public override int ChildCount { get { return m_BlendAction.Length; } }

        public override bool IsAutoDisConnect { get { return false; } } 

        public void OnInit(ActionerPlayable playable, IPlayableNode parent, ActionBlend blendData)
        {
            m_Controller = playable.Controller;
            m_BlendTreeData = blendData;
            m_BlendAction = new ActionerNode[Motions.Length];
            base.OnInit(playable, parent);
        }

        public override IPlayableNode GetChild(int index)
        {
            return m_BlendAction[index];
        }

        protected override void CreatePlayable(out Playable playable)
        {
            playable = AnimationMixerPlayable.Create(Root.Graph);
            for (int i = 0; i < Motions.Length; i++)
            {
                this.TryAddState(Motions[i].action.motion, out var action);
                action.IsCanDestroy = false;
                action.Weight = 1f;
                action.IsAutoDisConnect = false;    
                action.SetData(Motions[i].action);
                m_BlendAction[i] = action;
            }
            UpdateBlendWeight();
        }

        public override void OnNodeEnter()
        {
            base.OnNodeEnter();
            this.RequireUpdate(UpdateStep.Progress);
        }

        public override void OnNodeExit()
        {
            base.OnNodeExit();
            this.CancelUpdate(UpdateStep.Progress);
        }

        public override void Update(UpdateStep step, float deltaTime)
        {
            base.Update(step, deltaTime);

            switch (step)
            {
                case UpdateStep.Progress:
                    UpdateBlendValue();
                    UpdateBlendWeight();
                    break;
            }
        }

        protected abstract void UpdateBlendValue();

        protected abstract void UpdateBlendWeight();

    }

}

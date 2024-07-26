
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{

    /// <summary>
    /// 修改工作流的委托
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="data"></param>
    public delegate void ModifyJobAction<T>(ref T data);

    public partial class ActionerPlayable : PlayableBehaviour, IPlayableNode, IDisposable
    {
        /// <summary>
        /// 用于使用实例模板来克隆创建 避免gc
        /// </summary>
        internal static readonly ActionerPlayable s_Template = new ActionerPlayable();

        /// <summary>
        /// 空的Avatar遮罩
        /// </summary>
        internal static readonly AvatarMask s_EmptyMask = new AvatarMask();

        /// <summary>
        /// 默认过渡速度
        /// </summary>
        public static float s_DefaultFadeSpeed = 0.25f;

        /// <summary>
        /// 默认销毁等待时间
        /// </summary>
        public const float c_DefaultDestroyTime = 10f;

        private ActionerController m_Controller;

        /// <summary>
        /// 控制器
        /// </summary>
        public ActionerController Controller { get { return m_Controller; } }

        private PlayableGraph m_Graph;
        /// <summary>
        /// 整个playable的图
        /// </summary>
        public PlayableGraph Graph { get { return m_Graph; } }

        /// <summary>
        /// 此根节点 父节点为空
        /// </summary>
        public IPlayableNode Parent { get { return null; } }

        protected Playable m_Playable;
        /// <summary>
        /// 这个节点的可自定义的运行时对象
        /// </summary>
        public Playable Playable { get { return m_Playable; } }

        /// <summary>
        /// 动画机
        /// </summary>
        public Animator Animator { get { return Controller.Animator; } }

        /// <summary>
        /// 根节点权重恒等于1
        /// </summary>
        public float Weight { get { return 1; } }

        /// <summary>
        /// 此速度的修改会影响全部节点
        /// </summary>
        public double Speed { get { return m_Playable.GetSpeed(); } set { m_Playable.SetSpeed(value); } }

        /// <summary>
        /// 倒放 1为正放 -1为倒放
        /// </summary>
        public int Reverse { get { return Speed > 0 ? 1 : -1; } }

        /// <summary>
        /// 下标
        /// </summary>
        public int Index { get { return 0; } }

        /// <summary>
        /// 子节点数量
        /// </summary>
        public int ChildCount => 0;

        public ActionerPlayable Root => this;

        private ActionerLayerMixer m_LayerMixer;
        public ActionerLayerMixer LayerMixer { get { return m_LayerMixer; } }

        private Dictionary<AnimationClip, ActionerAction> m_ActionMap;
        public Dictionary<AnimationClip, ActionerAction> ActionMap { get { return m_ActionMap; } }

        private List<IPlayableNode> m_PreDestroyList;

        private ActionerProperty m_ActionerProperty;
        public ActionerProperty ActionerProperty { get { return m_ActionerProperty; } }

        public bool IsConnected { get { return false; } set { } }

        public float DestroyTime { get; set; }
        public bool IsCanDestroy { get { return false; } set { } }

        private List<AnimationScriptPlayable> m_ActionJobs;

        private HashSet<IDisposable> m_Disposables;

        internal Dictionary<UpdateStep, IndexedSet<IUpdateNode>> UpdatablesDic;

        internal Dictionary<UpdateStep, IndexedSet<IUpdateNode>> CancelUpdatablesDic;

        private IndexedSet<IUpdateNode> m_TempSet, m_TempCancel;

        public override void OnPlayableCreate(Playable playable)
        {
            base.OnPlayableCreate(playable);
            UpdatablesDic = new Dictionary<UpdateStep, IndexedSet<IUpdateNode>>();
            CancelUpdatablesDic = new Dictionary<UpdateStep, IndexedSet<IUpdateNode>>();

            m_Graph = playable.GetGraph();
            m_Playable = playable;
            m_ActionMap = new Dictionary<AnimationClip, ActionerAction>();
            m_PreDestroyList = new List<IPlayableNode>();
            m_LayerMixer = this.InsertNode<ActionerLayerMixer>(this);
        }

        public override void PrepareFrame(Playable playable, FrameData info)
        {
            UpdateStep step = UpdateStep.UpdateEnd;
            for (int i = (int)UpdateStep.PrePlay; i < (int)UpdateStep.UpdateEnd; i++)
            {
                step = (UpdateStep)i;
                if (CancelUpdatablesDic.TryGetValue(step, out m_TempCancel) && m_TempCancel.Count > 0)
                {
                    if (UpdatablesDic.TryGetValue(step, out m_TempSet))
                    {
                        foreach (var node in m_TempCancel)
                            m_TempSet.Remove(node);
                    }

                    m_TempCancel.Clear();
                    m_TempCancel = null;

                    if (m_TempSet == null || m_TempSet.Count <= 0) //应用取消后如果是空的
                        continue;
                }

                if (m_TempSet == null && !UpdatablesDic.TryGetValue(step, out m_TempSet))
                    continue;

                for (int j = 0; j < m_TempSet.Count; j++)
                    m_TempSet[j].Update(step, info.deltaTime * info.effectiveParentSpeed);

                m_TempSet = null;

            }


            if (m_PreDestroyList.Count > 0)
            {
                for (int i = m_PreDestroyList.Count - 1; i >= 0; i--)
                {
                    if (Time.time >= m_PreDestroyList[i].DestroyTime)
                    {
                        m_PreDestroyList[i].Dispose();
                        m_PreDestroyList.RemoveAt(i);
                    }
                }
            }
        }

        /// <summary>
        /// 获取子节点
        /// </summary>
        /// <param name="index">下标</param>
        /// <returns>子节点</returns>
        public IPlayableNode GetChild(int index)
        {
            return m_LayerMixer.GetChild(index);
        }

        /// <summary>
        /// 新建输出
        /// </summary>
        /// <param name="animator"></param>
        internal void OnCreateOutput(ActionerController controller)
        {
            m_Graph.GetOutput(0);
            m_Controller = controller;
            controller.Animator.fireEvents = false;
            AnimationPlayableUtilities.Play(controller.Animator, m_Playable, m_Graph);
            m_ActionerProperty = new ActionerProperty(this, 10);
        }

        /// <summary>
        /// 插入一个动画工作流
        /// </summary>
        /// <typeparam name="T">工作类型</typeparam>
        /// <param name="data"></param>
        /// <returns></returns>
        public AnimationScriptPlayable InsertOutputJob<T>(T data) where T : struct, IAnimationJob
        {
            m_ActionJobs ??= new List<AnimationScriptPlayable>();
            var playable = AnimationScriptPlayable.Create(m_Graph, data, 1);
            var output = m_Graph.GetOutput(0);
            m_Graph.Connect(output.GetSourcePlayable(), 0, playable, 0);
            playable.SetInputWeight(0, 1);
            output.SetSourcePlayable(playable);
            m_ActionJobs.Add(playable);
            return playable;
        }

        /// <summary>
        /// 修改工作流的数据
        /// </summary>
        /// <typeparam name="T">工作类型</typeparam>
        /// <param name="index">下标</param>
        /// <param name="modifyFunc"></param>
        public void UpdateJobData<T>(int index, ModifyJobAction<T> modifyFunc) where T : struct, IAnimationJob
        {
            if (index >= m_ActionJobs.Count || index < 0)
                return;

            var scriptPlayable = m_ActionJobs[index];
            if (scriptPlayable.GetType() != typeof(T))
                return;

            var job = scriptPlayable.GetJobData<T>();
            modifyFunc(ref job);
            m_ActionJobs[index].SetJobData(job);
        }

        /// <summary>
        /// 尝试添加一同销毁的obj
        /// </summary>
        /// <param name="disposable"></param>
        /// <returns></returns>
        public bool TryAddDispose(IDisposable disposable)
        {
            m_Disposables ??= new HashSet<IDisposable>();
            if (!m_Disposables.Contains(disposable))
            { 
                m_Disposables.Add(disposable);
                return true;
            }

            return false;
        }

        public void AddPreDestroy(IPlayableNode node)
        {
            node.DestroyTime = c_DefaultDestroyTime + Time.time;
            m_PreDestroyList.Add(node);
        }

        public void RemovePreDestroy(IPlayableNode node)
        {
            if (m_PreDestroyList.Contains(node))
                m_PreDestroyList.Remove(node);
        }

        public void Dispose()
        {
            if (m_Disposables != null)
            {
                foreach (var item in m_Disposables)
                {
                    item.Dispose();
                }

                m_Disposables.Clear();
                m_Disposables = null;
            }
        }

    }
}

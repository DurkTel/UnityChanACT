
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{

    /// <summary>
    /// �޸Ĺ�������ί��
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="data"></param>
    public delegate void ModifyJobAction<T>(ref T data);

    public partial class ActionerPlayable : PlayableBehaviour, IPlayableNode, IDisposable
    {
        /// <summary>
        /// ����ʹ��ʵ��ģ������¡���� ����gc
        /// </summary>
        internal static readonly ActionerPlayable s_Template = new ActionerPlayable();

        /// <summary>
        /// �յ�Avatar����
        /// </summary>
        internal static readonly AvatarMask s_EmptyMask = new AvatarMask();

        /// <summary>
        /// Ĭ�Ϲ����ٶ�
        /// </summary>
        public static float s_DefaultFadeSpeed = 0.25f;

        /// <summary>
        /// Ĭ�����ٵȴ�ʱ��
        /// </summary>
        public const float c_DefaultDestroyTime = 10f;

        private ActionerController m_Controller;

        /// <summary>
        /// ������
        /// </summary>
        public ActionerController Controller { get { return m_Controller; } }

        private PlayableGraph m_Graph;
        /// <summary>
        /// ����playable��ͼ
        /// </summary>
        public PlayableGraph Graph { get { return m_Graph; } }

        /// <summary>
        /// �˸��ڵ� ���ڵ�Ϊ��
        /// </summary>
        public IPlayableNode Parent { get { return null; } }

        protected Playable m_Playable;
        /// <summary>
        /// ����ڵ�Ŀ��Զ��������ʱ����
        /// </summary>
        public Playable Playable { get { return m_Playable; } }

        /// <summary>
        /// ������
        /// </summary>
        public Animator Animator { get { return Controller.Animator; } }

        /// <summary>
        /// ���ڵ�Ȩ�غ����1
        /// </summary>
        public float Weight { get { return 1; } }

        /// <summary>
        /// ���ٶȵ��޸Ļ�Ӱ��ȫ���ڵ�
        /// </summary>
        public double Speed { get { return m_Playable.GetSpeed(); } set { m_Playable.SetSpeed(value); } }

        /// <summary>
        /// ���� 1Ϊ���� -1Ϊ����
        /// </summary>
        public int Reverse { get { return Speed > 0 ? 1 : -1; } }

        /// <summary>
        /// �±�
        /// </summary>
        public int Index { get { return 0; } }

        /// <summary>
        /// �ӽڵ�����
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

                    if (m_TempSet == null || m_TempSet.Count <= 0) //Ӧ��ȡ��������ǿյ�
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
        /// ��ȡ�ӽڵ�
        /// </summary>
        /// <param name="index">�±�</param>
        /// <returns>�ӽڵ�</returns>
        public IPlayableNode GetChild(int index)
        {
            return m_LayerMixer.GetChild(index);
        }

        /// <summary>
        /// �½����
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
        /// ����һ������������
        /// </summary>
        /// <typeparam name="T">��������</typeparam>
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
        /// �޸Ĺ�����������
        /// </summary>
        /// <typeparam name="T">��������</typeparam>
        /// <param name="index">�±�</param>
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
        /// �������һͬ���ٵ�obj
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

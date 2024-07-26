using UnityEngine;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    /// <summary>
    /// Playable节点
    /// </summary>
    public abstract class ActionerNode : IPlayableNode, IUpdateNode
    {

        #region Property
        public float DestroyTime { get; set; }

        /// <summary>
        /// 控制器
        /// </summary>
        public ActionerController Controller { get { return Root.Controller; } }

        private ActionerPlayable m_Root;
        /// <summary>
        /// 主playable
        /// </summary>
        public ActionerPlayable Root { get { return m_Root; } }

        protected Playable m_Playable;
        /// <summary>
        /// 当前playable
        /// </summary>
        public Playable Playable { get { return m_Playable; } }

        protected float m_Weight = 0f;  
        /// <summary>
        /// 当前节点权重 设置后会在下一帧刷新当前权重
        /// </summary>
        public virtual float Weight 
        { 
            get 
            { 
                return m_Weight; 
            } 
            set 
            {
                if (m_Weight == value) return;
                if (value > m_Weight)
                    OnNodeEnter();

                m_LastWeight = m_Weight;
                m_Weight = value;
                m_TagerWeight = value;
                m_WeightDirty = true;
                m_FadeDirty = false;
                this.RequireUpdate(UpdateStep.Weight);
            } 
        }

        private float m_TagerWeight;
        /// <summary>
        /// 节点目标权重 设置后会在下一帧刷新 有过渡效果
        /// </summary>
        public virtual float TagetWeight 
        { 
            get { return m_TagerWeight; }
            set
            {
                if (m_TagerWeight == value) return;
                if (value > m_Weight)
                    OnNodeEnter();

                m_LastWeight = m_Weight;
                m_TagerWeight = value;
                m_FadeDirty = true;
                m_WeightDirty = true;
                this.RequireUpdate(UpdateStep.Weight);
            }
        }
        
        protected bool m_IsConnected;
        /// <summary>
        /// 当前节点是否连接在图上
        /// </summary>
        public bool IsConnected { get { return m_IsConnected; } set { m_IsConnected = value; } }

        private bool m_IsAutoDisConnect = true;
        /// <summary>
        /// 该节点权重为0时是否自动断开
        /// </summary>
        public virtual bool IsAutoDisConnect { get { return m_IsAutoDisConnect; } set { m_IsAutoDisConnect = value; } }

        /// <summary>
        /// 节点的速度
        /// </summary>
        public virtual double Speed { get { return m_Playable.GetSpeed(); } set { m_Playable.SetSpeed(value); } }

        /// <summary>
        /// 倒放 根节点会影响自己
        /// </summary>
        public int Reverse 
        { 
            get 
            {
                if (m_Parent.Reverse == -1) return -1;
                return Speed > 0 ? 1 : -1; 
            } 
        }

        /// <summary>
        /// 是否有效的节点
        /// </summary>
        public bool IsValid { get { return m_Playable.IsValid(); } }

        private int m_Index = int.MinValue;
        /// <summary>
        /// 该节点在父节点中的接口下标
        /// </summary>
        public int Index 
        { 
            get 
            {
                if (m_Index == int.MinValue)
                    m_Index = Parent.TryGetValidInput();

                return m_Index; 
            } 
        }

        /// <summary>
        /// 该节点的子节点数
        /// </summary>
        public virtual int ChildCount { get { return Playable.GetInputCount(); } }

        private IPlayableNode m_Parent;
        /// <summary>
        /// 父节点
        /// </summary>
        public virtual IPlayableNode Parent { get { return m_Parent; } }

        /// <summary>
        /// 是否可销毁
        /// </summary>
        public virtual bool IsCanDestroy { get; set; }
        #endregion

        #region Field
        /// <summary>
        /// 脏标记
        /// </summary>
        protected bool m_FadeDirty, m_WeightDirty;

        /// <summary>
        /// 过渡速度
        /// </summary>
        protected float m_FadeSpeed;

        /// <summary>
        /// 上一帧的权重
        /// </summary>
        private float m_LastWeight = 0f;

        #endregion

        #region Life

        public virtual void OnInit(ActionerPlayable controller, IPlayableNode parent, object param = null)
        {
            m_FadeDirty = false;
            m_WeightDirty = false;
            m_IsConnected = false;
            m_Parent = parent;
            m_Root = controller;
            CreatePlayable();
        }
        public abstract IPlayableNode GetChild(int index);

        /// <summary>
        /// 创建Playable
        /// </summary>
        /// <exception cref="System.Exception"></exception>
        protected virtual void CreatePlayable()
        {

            CreatePlayable(out m_Playable);

            if (!IsValid)
                throw new System.Exception($"{nameof(Playable)}" + this + "无法创建派生的Playabe");
            
            m_Playable.SetSpeed(Speed);
            this.ConnectToParent();
        }

        /// <summary>
        /// 根据派生类创建Playable
        /// </summary>
        /// <param name="playable"></param>
        protected abstract void CreatePlayable(out Playable playable);

        /// <summary>
        /// 销毁Playable
        /// </summary>
        public virtual void DestroyPlayable()
        {
            m_Root.Graph.DestroyPlayable(m_Playable);
        }

        /// <summary>
        /// 进入该节点 
        /// Weight变的不为0时
        /// </summary>
        public virtual void OnNodeEnter()
        {
            this.ConnectToParent();
        }

        /// <summary>
        /// 离开该节点 
        /// Weight变为0时
        /// </summary>
        public virtual void OnNodeExit()
        {
            if (IsAutoDisConnect)
                DisConnectToParent();
        }

        /// <summary>
        /// Fade结束回调
        /// 权重0->1 达到1时
        /// </summary>
        public virtual void OnFadeEnd()
        { 
            
        }

        /// <summary>
        /// Fade开始回调
        /// 权重1->0 刚开始1时
        /// </summary>
        public virtual void OnFadeStart()
        { 
            
        }

        /// <summary>
        /// 断开与父节点的连接
        /// </summary>
        public void DisConnectToParent()
        {

            if (Parent == null)
                return;
            this.CancelAllUpdate();
            IsConnected = false;
            Parent.Playable.DisconnectInput(Index);
            if (IsCanDestroy)
                Root.AddPreDestroy(this);
            m_Index = int.MinValue;
        }

        #endregion


        #region Update

        /// <summary>
        /// 调用时根据需要调用的步骤 调用对应的方法
        /// </summary>
        /// <param name="step">更新步骤</param>
        /// <param name="deltaTime">时间间隔</param>
        public virtual void Update(UpdateStep step, float deltaTime)
        {
            if (!IsValid)
            {
                this.CancelUpdate(UpdateStep.Weight);
                return;
            }

            switch (step)
            {
                case UpdateStep.PrePlay:
                    UpdatePrePlay();
                    break;
                case UpdateStep.Weight:
                    UpdateCrossFade(deltaTime);
                    UpdateWeight();
                    break;
            }

        }

        /// <summary>
        /// 播放前回调
        /// </summary>
        protected virtual void UpdatePrePlay()
        { 
            
        }

        /// <summary>
        /// 淡入淡出
        /// 过渡时的回调<seealso cref="OnNodeEnter"/> —> <seealso cref="OnFadeEnd"/> —> <seealso cref="OnFadeStart"/> —> <seealso cref="OnNodeExit"/>
        /// </summary>
        /// <param name="targetWeight">目标权重</param>
        /// <param name="duration">所需时间</param>
        public virtual void CrossFade(float targetWeight, float duration)
        {
            if (duration <= 0f || Mathf.Abs(targetWeight - Weight) < 0.1f)
            {
                Weight = targetWeight;
                return;
            }

            if (!Mathf.Approximately(Weight, TagetWeight) && Mathf.Approximately(targetWeight, 0f))
                OnFadeStart();

            TagetWeight = targetWeight;
            m_FadeSpeed = (TagetWeight - Weight) / duration;
        }

        /// <summary>
        /// 淡入淡出更新
        /// </summary>
        /// <param name="deltaTime"></param>
        private void UpdateCrossFade(float deltaTime)
        {
            if (!m_FadeDirty)
            {
                this.CancelUpdate(UpdateStep.Weight);
                return;
            }

            if (m_Weight == TagetWeight)
            {
                m_FadeDirty = false;
                this.CancelUpdate(UpdateStep.Weight);
                return;
            }

            m_LastWeight = m_Weight;    
            m_Weight += m_FadeSpeed * deltaTime;
            m_WeightDirty = true;
        }

        /// <summary>
        /// 更新权重
        /// </summary>
        private void UpdateWeight()
        {
            if (Parent == null || !m_WeightDirty)
                return;

            m_Weight = Mathf.Clamp01(m_Weight);
            m_WeightDirty = false;

            Parent.Playable.SetInputWeight(Index, m_Weight);

            if (!Mathf.Approximately(m_LastWeight, 0) && Mathf.Approximately(m_Weight, 0))
                OnNodeExit();
            else if (!Mathf.Approximately(m_LastWeight, 1) && Mathf.Approximately(m_Weight, 1))
                OnFadeEnd();
        }

        public virtual void Dispose()
        {
            this.CancelAllUpdate();
            m_FadeDirty = false;
            m_WeightDirty = false;
            m_IsConnected = false;
            m_Parent = null;
            m_Root = null;
            m_Weight = 0f;
            m_TagerWeight = 0f;

            if (m_Playable.IsValid())
                m_Playable.Destroy();
        }

        #endregion
    }
}

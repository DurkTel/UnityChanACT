using UnityEngine;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    /// <summary>
    /// Playable�ڵ�
    /// </summary>
    public abstract class ActionerNode : IPlayableNode, IUpdateNode
    {

        #region Property
        public float DestroyTime { get; set; }

        /// <summary>
        /// ������
        /// </summary>
        public ActionerController Controller { get { return Root.Controller; } }

        private ActionerPlayable m_Root;
        /// <summary>
        /// ��playable
        /// </summary>
        public ActionerPlayable Root { get { return m_Root; } }

        protected Playable m_Playable;
        /// <summary>
        /// ��ǰplayable
        /// </summary>
        public Playable Playable { get { return m_Playable; } }

        protected float m_Weight = 0f;  
        /// <summary>
        /// ��ǰ�ڵ�Ȩ�� ���ú������һ֡ˢ�µ�ǰȨ��
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
        /// �ڵ�Ŀ��Ȩ�� ���ú������һ֡ˢ�� �й���Ч��
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
        /// ��ǰ�ڵ��Ƿ�������ͼ��
        /// </summary>
        public bool IsConnected { get { return m_IsConnected; } set { m_IsConnected = value; } }

        private bool m_IsAutoDisConnect = true;
        /// <summary>
        /// �ýڵ�Ȩ��Ϊ0ʱ�Ƿ��Զ��Ͽ�
        /// </summary>
        public virtual bool IsAutoDisConnect { get { return m_IsAutoDisConnect; } set { m_IsAutoDisConnect = value; } }

        /// <summary>
        /// �ڵ���ٶ�
        /// </summary>
        public virtual double Speed { get { return m_Playable.GetSpeed(); } set { m_Playable.SetSpeed(value); } }

        /// <summary>
        /// ���� ���ڵ��Ӱ���Լ�
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
        /// �Ƿ���Ч�Ľڵ�
        /// </summary>
        public bool IsValid { get { return m_Playable.IsValid(); } }

        private int m_Index = int.MinValue;
        /// <summary>
        /// �ýڵ��ڸ��ڵ��еĽӿ��±�
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
        /// �ýڵ���ӽڵ���
        /// </summary>
        public virtual int ChildCount { get { return Playable.GetInputCount(); } }

        private IPlayableNode m_Parent;
        /// <summary>
        /// ���ڵ�
        /// </summary>
        public virtual IPlayableNode Parent { get { return m_Parent; } }

        /// <summary>
        /// �Ƿ������
        /// </summary>
        public virtual bool IsCanDestroy { get; set; }
        #endregion

        #region Field
        /// <summary>
        /// ����
        /// </summary>
        protected bool m_FadeDirty, m_WeightDirty;

        /// <summary>
        /// �����ٶ�
        /// </summary>
        protected float m_FadeSpeed;

        /// <summary>
        /// ��һ֡��Ȩ��
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
        /// ����Playable
        /// </summary>
        /// <exception cref="System.Exception"></exception>
        protected virtual void CreatePlayable()
        {

            CreatePlayable(out m_Playable);

            if (!IsValid)
                throw new System.Exception($"{nameof(Playable)}" + this + "�޷�����������Playabe");
            
            m_Playable.SetSpeed(Speed);
            this.ConnectToParent();
        }

        /// <summary>
        /// ���������ഴ��Playable
        /// </summary>
        /// <param name="playable"></param>
        protected abstract void CreatePlayable(out Playable playable);

        /// <summary>
        /// ����Playable
        /// </summary>
        public virtual void DestroyPlayable()
        {
            m_Root.Graph.DestroyPlayable(m_Playable);
        }

        /// <summary>
        /// ����ýڵ� 
        /// Weight��Ĳ�Ϊ0ʱ
        /// </summary>
        public virtual void OnNodeEnter()
        {
            this.ConnectToParent();
        }

        /// <summary>
        /// �뿪�ýڵ� 
        /// Weight��Ϊ0ʱ
        /// </summary>
        public virtual void OnNodeExit()
        {
            if (IsAutoDisConnect)
                DisConnectToParent();
        }

        /// <summary>
        /// Fade�����ص�
        /// Ȩ��0->1 �ﵽ1ʱ
        /// </summary>
        public virtual void OnFadeEnd()
        { 
            
        }

        /// <summary>
        /// Fade��ʼ�ص�
        /// Ȩ��1->0 �տ�ʼ1ʱ
        /// </summary>
        public virtual void OnFadeStart()
        { 
            
        }

        /// <summary>
        /// �Ͽ��븸�ڵ������
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
        /// ����ʱ������Ҫ���õĲ��� ���ö�Ӧ�ķ���
        /// </summary>
        /// <param name="step">���²���</param>
        /// <param name="deltaTime">ʱ����</param>
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
        /// ����ǰ�ص�
        /// </summary>
        protected virtual void UpdatePrePlay()
        { 
            
        }

        /// <summary>
        /// ���뵭��
        /// ����ʱ�Ļص�<seealso cref="OnNodeEnter"/> ��> <seealso cref="OnFadeEnd"/> ��> <seealso cref="OnFadeStart"/> ��> <seealso cref="OnNodeExit"/>
        /// </summary>
        /// <param name="targetWeight">Ŀ��Ȩ��</param>
        /// <param name="duration">����ʱ��</param>
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
        /// ���뵭������
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
        /// ����Ȩ��
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

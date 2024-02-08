using LGameFramework.GameBase;
using LGameFramework.GameCore.Asset;
using LGameFramework.GameCore.Avatar;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// 实体动画组件
    /// </summary>
    public class AnimationComponent : AbstractComponent, IUpdateComponent
    {
        #region 动画机参数
        public static readonly int Compensation_Custom_Hash = Animator.StringToHash("Compensation_Custom");
        public static readonly int Compensation_Front_Hash = Animator.StringToHash("Compensation_Front");
        public static readonly int Compensation_Up_Hash = Animator.StringToHash("Compensation_Up");
        public static readonly int Compensation_Right_Hash = Animator.StringToHash("Compensation_Right");

        public static readonly int Float_State_Hash = Animator.StringToHash("Float_State");
        public static readonly int Float_Horizontal_Hash = Animator.StringToHash("Float_Horizontal");
        public static readonly int Float_Vertical_Hash = Animator.StringToHash("Float_Vertical");
        public static readonly int Float_Move_Velocity_Hash = Animator.StringToHash("Float_Move_Velocity");
        public static readonly int Float_Move_AngularVelocity_Hash = Animator.StringToHash("Float_Move_AngularVelocity");
        public static readonly int Float_Jump_Rise_Hash = Animator.StringToHash("Float_Jump_Rise");
        public static readonly int Bool_Move_Input_Hash = Animator.StringToHash("Bool_Move_Input");
        public static readonly int Bool_Fight_Mode_Hash = Animator.StringToHash("Bool_Fight_Mode");
        public static readonly int Bool_Jump_Gound_Hash = Animator.StringToHash("Bool_Jump_Gound");
        public static readonly int Trigger_Fight_Enter_Hash = Animator.StringToHash("Trigger_Fight_Enter");
        public static readonly int Trigger_Fight_Attack_Hash = Animator.StringToHash("Trigger_Fight_Attack");

        public int AnimatorLayer_Base_Index;
        public int AnimatorLayer_FullBody_Index;
        public int AnimatorLayer_UpperBody_Index;
        #endregion

        private Animator m_Animator;
        public Animator Animator { get { return m_Animator; } }

        private Dictionary<string, UnityAction<int, AnimationComponent>> m_NeedRegisterFrameEvent;

        private AnimatorStateInfo[] m_AllStateInfo;

        private EntityIK m_EntityIK;

        public int AnimatorLayerCount { get { return m_AllStateInfo == null ? 0 : m_AllStateInfo.Length; } }

        private string m_AnimatorControllerName;
        public string AnimatorControllerName 
        { 
            get 
            { 
                return m_AnimatorControllerName; 
            } 
            set
            {
                if (m_AnimatorControllerName == value) return;
                m_AnimatorControllerName = value;
                OnUpdateAnimatorController();
            }
        }

        public override void OnInit(int entity, Dictionary<EEntityAttribute, IProperty> attribute)
        {
            base.OnInit(entity, attribute);
            m_AnimatorControllerName = "skin_AnimatorController";
        }


        public void Update(float deltaTime, float unscaledTime)
        {
            if (m_Animator == null || m_AllStateInfo == null) return;
            

            OnUpdateParameter(deltaTime);

        }


        private void OnUpdateAnimatorController()
        {
            if (m_Animator == null) return;

            AssetUtility.LoadAssetAsync<AnimatorOverrideController>(m_AnimatorControllerName, OnAnimatorControllerComplete);
        }

        /// <summary>
        /// 动画机加载完成
        /// </summary>
        /// <param name="loader"></param>
        private void OnAnimatorControllerComplete(Loader loader)
        {
            //初始化动画机
            m_Animator.runtimeAnimatorController = loader.GetRawObject<AnimatorOverrideController>();
            m_Animator.cullingMode = AnimatorCullingMode.AlwaysAnimate;
            m_Animator.updateMode = AnimatorUpdateMode.AnimatePhysics;

            m_EntityIK = m_Animator.gameObject.AddComponent<EntityIK>();
            m_EntityIK.OnInit(Entity, this);
            m_EntityIK.RegisterClipsEvent();

            AnimatorLayer_Base_Index = m_Animator.GetLayerIndex("Base Layer");
            AnimatorLayer_FullBody_Index = m_Animator.GetLayerIndex("Full Body");
            AnimatorLayer_UpperBody_Index = m_Animator.GetLayerIndex("Upper Body");

            //初始化动画数据
            m_AllStateInfo = new AnimatorStateInfo[m_Animator.layerCount];

        }

        /// <summary>
        /// 更新动画机参数
        /// </summary>
        public void OnUpdateParameter(float deltaTime)
        {
            if (m_Animator == null) return;

            //Vector3 localMoveDirection = GetEntityData<Vector3>(EntityAttribute.c_LocalMoveDirection);

            //m_Animator.SetFloat(Float_State_Hash, (float)EntityUtility.GetEntityState(Entity));
            //m_Animator.SetFloat(Float_Move_Velocity_Hash, localMoveDirection.normalized.magnitude * GetEntityData<float>(EntityAttribute.c_MoveType), 0.2f, deltaTime);
            //m_Animator.SetFloat(Float_Move_AngularVelocity_Hash, GetEntityData<float>(EntityAttribute.c_AngularVelocity), 0.2f, deltaTime);
            //m_Animator.SetFloat(Float_Jump_Rise_Hash, GetEntityData<float>(EntityAttribute.c_RisingSpeed));
            //m_Animator.SetFloat(Float_Horizontal_Hash, GetEntityData<float>(EntityAttribute.c_MoveHorizontal), 0.2f, deltaTime);
            //m_Animator.SetFloat(Float_Vertical_Hash, GetEntityData<float>(EntityAttribute.c_MoveVertical), 0.2f, deltaTime);
            //m_Animator.SetBool(Bool_Move_Input_Hash, localMoveDirection.sqrMagnitude > 0f);
            //m_Animator.SetBool(Bool_Jump_Gound_Hash, GetEntityData<bool>(EntityAttribute.c_IsGrounded));


            //m_Animator.speed = GetEntityData<float>(EntityAttribute.c_SpeedScale);

        }

        /// <summary>
        /// 响应动画帧事件
        /// </summary>
        /// <param name="arg"></param>
        private void OnResponseFrameEvent(AnimatorStateInfo stateInfo, string flagName)
        {
            if (m_NeedRegisterFrameEvent == null) return;
            if (m_NeedRegisterFrameEvent.TryGetValue(flagName, out var frameEvent))
                frameEvent.Invoke(Entity, this);
        }

        /// <summary>
        /// 响应播放动画
        /// </summary>
        /// <param name="arg"></param>
        private void OnResponseAnimatiorOperation(CommonEventArg arg)
        { 
            if (m_Animator == null) return;
            switch (arg.GetData<AnimatiorOperation>(0))
            {
                case AnimatiorOperation.Play:
                    m_Animator.CrossFade(arg.GetData<string>(1), 0.15f, arg.GetData<int>(2), 0f);
                    break;
                case AnimatiorOperation.SetInteger:
                    m_Animator.SetInteger(arg.GetData<int>(1), arg.GetData<int>(2));
                    break;
                case AnimatiorOperation.SetFloat:
                    m_Animator.SetFloat(arg.GetData<int>(1), arg.GetData<float>(2));
                    break;
                case AnimatiorOperation.SetBool:
                    m_Animator.SetBool(arg.GetData<int>(1), arg.GetData<bool>(2));
                    break;
                case AnimatiorOperation.SetTrigger:
                    m_Animator.SetTrigger(arg.GetData<int>(1));
                    break;
            }
        }

        /// <summary>
        /// 响应注视
        /// </summary>
        /// <param name="arg"></param>
        private void OnResponseLookAt(CommonEventArg arg)
        {
            if (m_EntityIK == null) return;

            m_EntityIK.LookAt = arg.GetData<Transform>(0);
            m_EntityIK.LookAtWeight = arg.GetData<float>(1);
        }

        public void OnAnimatorMove()
        {

        }

        public void OnAnimatorIK(int layerIndex)
        {
            
        }

        public enum AnimatiorOperation
        {
            Play,
            SetInteger,
            SetFloat,
            SetBool,
            SetTrigger
        }
    }
}

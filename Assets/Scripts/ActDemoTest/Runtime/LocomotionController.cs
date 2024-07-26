using Actioner.Runtime;
using System;
using UnityEngine;
using UnityEngine.Events;

namespace UnityChanAct
{
    public class LocomotionController : MonoBehaviour
    {
        private Vector3 m_WorldMoveDirection, m_PreviousWorldMoveDirection, m_DirectionLerp;

        private Transform m_Transform, m_RootBone;

        private CharacterController m_Controller;

        private ActionerController m_Actioner;

        private Quaternion m_CurveRotationStart, m_CurveRotationTarget;

        private float m_CurveElapsedTime, m_CurveTargetTime;

        private float m_ReturnTime, m_ReturnFadeTime;

        private bool m_EnableLocomotion, m_EnableMove, m_EnableRotate;

        private bool m_IsMoveing;

        public UnityAction<bool> OnMoveing, OnEnableLocomotion;

        public UnityAction OnMoveReturnEnd;

        public UnityAction<float> OnMoveReturnTransition;

        public Func<float> OnMoveReturnStart = delegate { return 0f; };
        public bool StartMoveRotating { get { return m_CurveElapsedTime > 0; } }
        public bool IsReturnning { get { return m_ReturnTime > 0; } }
        public bool IsMoveCommand { get { return m_WorldMoveDirection.sqrMagnitude > 0; } }
        public bool IsMoveing { get { return m_IsMoveing; } }
        public bool EnableLocomotion 
        { 
            get { return m_EnableLocomotion; } 
            set 
            {
                if (m_EnableLocomotion == value)
                    return;
                m_EnableLocomotion = value;

                if (m_EnableLocomotion)
                    m_WorldMoveDirection = Vector3.zero;
                else
                {
                    m_IsMoveing = false;
                    ResetMoveTilt();
                }

                OnEnableLocomotion?.Invoke(m_EnableLocomotion);
            } 
        }
        public bool EnableMove
        {
            get { return m_EnableMove; }
            set
            {
                if (m_EnableMove == value)
                    return;
                m_EnableMove = value;
            }
        }
        public bool EnableRotate
        {
            get { return m_EnableRotate; }
            set
            {
                if (m_EnableRotate == value)
                    return;
                m_EnableRotate = value;

            }
        }

        public bool rootMotionMove, rootMotionRotate;

        public float moveSpeed, rotateSpeed;

        public float tiltAngle, tiltSpeed;

        public float startRotateTime;

        private void Start()
        {
            m_Transform = transform;
            m_RootBone = m_Transform.GetChild(0);
            m_Controller = GetComponent<CharacterController>();
            m_Actioner = GetComponent<ActionerController>();
            m_EnableMove = m_EnableRotate = m_EnableLocomotion = true;
        }

        private void Update()
        {
            if (!EnableLocomotion)
                return;

            var deltaTime = Time.deltaTime;
            m_DirectionLerp = Vector3.Lerp(m_DirectionLerp, m_WorldMoveDirection, 10f * deltaTime);

            MoveReturn(deltaTime);
            MoveRotationCorrect(deltaTime);
            MoveTiltCorrect(deltaTime);

            DirectionRotate(deltaTime);
            DirectionMove(deltaTime);
        }

        private void OnAnimatorMove()
        {
            if (!EnableLocomotion)
                return;

            AniatmionMove();
            AniatmionRotate();
        }

        private void RequestMoveStart()
        {
            m_CurveRotationStart = m_Transform.rotation;
            m_CurveRotationTarget = Quaternion.LookRotation(m_WorldMoveDirection);
            m_CurveTargetTime = Mathf.Max(Quaternion.Angle(m_CurveRotationStart, m_CurveRotationTarget) / 180f * startRotateTime, 0.01f);
            m_CurveElapsedTime = m_CurveTargetTime;
            m_IsMoveing = true;
        }

        private void RequestEndMove()
        {
            m_IsMoveing = false;
            OnMoveing?.Invoke(false);
        }

        private void MoveReturn(float deltaTime)
        {
            if (IsReturnning)
            {
                m_ReturnTime -= deltaTime;

                if (!IsReturnning)
                {
                    OnMoveReturnEnd?.Invoke();
                }
                else if (m_ReturnFadeTime > 0 && m_ReturnTime <= m_ReturnFadeTime)
                {
                    if (IsMoveing)
                        OnMoveReturnTransition?.Invoke(m_ReturnFadeTime);
                    m_ReturnFadeTime = 0;
                }

                return;
            }

            float targetAngle = CalculateTargetAngle();
            
            if (targetAngle >= 160f && targetAngle <= 180f && IsMoveing && m_Actioner.Velocity.sqrMagnitude >= 3f)
            {
                m_CurveElapsedTime = 0;
                m_ReturnTime = OnMoveReturnStart.Invoke();
                m_ReturnFadeTime = m_ReturnTime - (float)(m_ReturnTime * 0.75f / 1.3f);
            }
        }

        /// <summary>
        /// 更新移动方向
        /// </summary>
        public void UpdateMoveDirection(Vector3 direction)
        {
            if (!EnableLocomotion)
                return;

            m_PreviousWorldMoveDirection = m_WorldMoveDirection;
            m_WorldMoveDirection = direction;
            m_WorldMoveDirection.y = 0f;
            m_WorldMoveDirection.Normalize();

            if (IsMoveCommand && !IsMoveing)
                RequestMoveStart();
            else if (!IsMoveCommand && IsMoveing)
                RequestEndMove();
        }

        /// <summary>
        /// 动画位移
        /// </summary>
        /// <param name="direction"></param>
        private void AniatmionMove()
        {
            if (rootMotionMove && EnableMove)
                m_Controller.Move(m_Actioner.DeltaPosition);
        }

        /// <summary>
        /// 方向位移
        /// </summary>
        /// <param name="moveSpeed"></param>
        /// <param name="deltaTtime"></param>
        private void DirectionMove(float deltaTtime)
        {
            if (!rootMotionMove && EnableMove)
                m_Controller.Move(m_DirectionLerp * moveSpeed * deltaTtime);
        }

        /// <summary>
        /// 动画旋转
        /// </summary>
        private void AniatmionRotate()
        {
            if (rootMotionRotate && EnableRotate)
                m_Transform.rotation *= m_Actioner.DeltaRotation;
        }

        /// <summary>
        /// 方向旋转
        /// </summary>
        /// <param name="direction"></param>
        /// <param name="deltaTtime"></param>
        private void DirectionRotate(float deltaTtime)
        {
            if (IsReturnning || StartMoveRotating || !IsMoveing || rootMotionRotate || !EnableRotate)
                return;

            if (m_DirectionLerp.sqrMagnitude == 0)
                return;
            m_Transform.rotation = Quaternion.Lerp(m_Transform.rotation, Quaternion.LookRotation(m_DirectionLerp), rotateSpeed * deltaTtime);
        }

        /// <summary>
        /// 移动旋转方向矫正
        /// </summary>
        /// <param name="deltaTime"></param>
        private void MoveRotationCorrect(float deltaTime)
        {
            if (!StartMoveRotating)
                return;

            m_CurveElapsedTime -= deltaTime;

            m_Transform.rotation = Quaternion.Lerp(m_CurveRotationStart, m_CurveRotationTarget, (m_CurveTargetTime - m_CurveElapsedTime) / m_CurveTargetTime);

            if (!StartMoveRotating)
            {
                m_Transform.rotation = m_CurveRotationTarget;
                OnMoveing?.Invoke(true);
            }
        }

        /// <summary>
        /// 计算与当前方向和期望方向的夹角
        /// </summary>
        /// <returns></returns>
        private float CalculateTargetAngle()
        {
            if (m_WorldMoveDirection == Vector3.zero)
                return 0;
            var targetRotation = Quaternion.LookRotation(m_WorldMoveDirection);
            var angle = Quaternion.Angle(m_Transform.rotation, targetRotation);
            return angle;
        }

        /// <summary>
        /// 更新角速度
        /// </summary>
        private float CalculateAngularVelocity(float deltaTime)
        {
            Vector3 localDir = m_Transform.InverseTransformDirection(m_WorldMoveDirection);
            //计算目标角度与当前角度的夹角弧度
            float rad1 = Mathf.Atan2(localDir.x, localDir.z);

            Vector3 localForward = m_Transform.InverseTransformDirection(m_Transform.forward);
            float rad2 = Mathf.Atan2(localForward.x, localForward.z);

            float velocity = rad1 - rad2;
            return velocity / deltaTime;
        }

        /// <summary>
        /// 人物旋转倾斜
        /// </summary>
        /// <param name="deltaTime"></param>
        private void MoveTiltCorrect(float deltaTime)
        {
            if (StartMoveRotating || IsReturnning)
                return;
            var euler = m_RootBone.rotation.eulerAngles;
            float angularVelocity = Mathf.Clamp(CalculateAngularVelocity(deltaTime), -tiltAngle, tiltAngle);

            euler.z = Mathf.LerpAngle(euler.z, -angularVelocity, tiltSpeed * deltaTime);
            Quaternion newRotation = Quaternion.Euler(euler);
            m_RootBone.rotation = newRotation;
        }

        /// <summary>
        /// 重置旋转倾斜
        /// </summary>
        private void ResetMoveTilt()
        { 
            var euler = m_RootBone.rotation.eulerAngles;
            euler.z = 0f;
            Quaternion newRotation = Quaternion.Euler(euler);
            m_RootBone.rotation = newRotation;
        }
    }
}

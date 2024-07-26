using UnityEngine;

namespace Actioner.Runtime
{
    public partial class ActionerRootMotion : MonoBehaviour
    {
        public enum MotionMode
        {
            CharacterController,
            Rigidbody,
            Transform
        }

        [SerializeField]
        private MotionMode m_MotionMode;

        /// <summary>
        /// 绑定的动作演员
        /// </summary>
        public ActionerPlayable actioner;

        /// <summary>
        /// 绑定的动画机
        /// </summary>
        public Animator BindingAnimator
        {
            get { return actioner.Animator; }
        }

        private bool m_ApplyCompensation = false;
        /// <summary>
        /// 应用动画补偿
        /// </summary>
        public bool ApplyCompensation
        {
            get { return m_ApplyCompensation; }
            set
            {
                if (m_ApplyCompensation == value) return;
                m_ApplyCompensation = value;
            }
        }

        private CharacterController m_Controller;

        private Rigidbody m_Rigidbody;

        private Transform m_Transform;

        private void Start()
        {
            m_Transform = BindingAnimator.transform;
            m_MotionMode = MotionMode.Transform;

            if (TryGetComponent<CharacterController>(out var controller))
            {
                m_MotionMode = MotionMode.CharacterController;
                m_Controller = controller;
            }
            else if (TryGetComponent<Rigidbody>(out var rigidbody))
            {
                m_MotionMode = MotionMode.Rigidbody;
                m_Rigidbody = rigidbody;
            }
        }

        protected void OnAnimatorMove()
        {
            if (BindingAnimator == null || m_Transform == null)
                return;

            float x = actioner.Controller.GetCurve("CompensationRight");
            float z = actioner.Controller.GetCurve("CompensationFront");
            float y = actioner.Controller.GetCurve("CompensationUp");

            var deltaPos = BindingAnimator.deltaPosition + m_Transform.forward * z + m_Transform.right * x + m_Transform.up * y;

            switch (m_MotionMode)
            {
                case MotionMode.CharacterController:
                    if (m_Controller == null) return;
                    m_Controller.Move(deltaPos);
                    m_Controller.transform.rotation *= BindingAnimator.deltaRotation;
                    break;
                case MotionMode.Rigidbody:
                    if (m_Rigidbody == null) return;
                    m_Rigidbody.MovePosition(m_Rigidbody.position + deltaPos);
                    m_Rigidbody.MoveRotation(m_Rigidbody.rotation * BindingAnimator.deltaRotation);
                    break;
                default:
                    m_Transform.position += deltaPos;
                    m_Transform.rotation *= BindingAnimator.deltaRotation;
                    break;
            }
        }

        private void OnDisable()
        {
            ApplyCompensation = false;
        }
    }

}

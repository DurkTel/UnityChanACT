using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

namespace LGameFramework.GameLogic
{
    public class AimTargetConstraints : MonoBehaviour
    {
        [SerializeField]
        private Transform m_Root;
        public Transform Root { get { return m_Root; } }

        [SerializeField]
        private AimConstraint m_Constraint;
        public AimConstraint Constraint { get { return m_Constraint; } }

        [SerializeField]
        private Transform m_Target;
        public Transform Target { get { return m_Target; } set { m_Target = value; } }

        [SerializeField]
        private float m_Speed;

        [SerializeField, Range(0f, 360f)]
        private float m_MaxAngle;

        private bool m_EnableAim;
        public bool EnableAim 
        { 
            get {  return m_EnableAim; } 
            set 
            {
                m_EnableAim = value;
                m_Constraint.weight = m_EnableAim ? 1f : 0f;
                m_Constraint.enabled = m_EnableAim;
            } 
        }

        private void Start()
        {
            m_Constraint ??= GetComponent<AimConstraint>();
        }

        private void Update()
        {
            if (!EnableAim || m_Target == null)
                return;

            transform.position = m_Target.position;
            float curAngle = Vector3.Angle(m_Root.transform.forward, m_Target.position - m_Root.transform.position);
            m_Constraint.weight = Mathf.Lerp(m_Constraint.weight, 1 - (curAngle / m_MaxAngle), Time.deltaTime * m_Speed);
        }
    }
}

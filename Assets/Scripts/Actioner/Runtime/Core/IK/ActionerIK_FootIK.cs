using UnityEngine;

namespace Actioner.Runtime
{
    public sealed partial class ActionerIK : MonoBehaviour
    {
        private Transform m_LeftFoot, m_RightFoot;

        private bool m_ApplyFootIK = false;
        /// <summary>
        /// 应用足部贴地Ik
        /// </summary>
        public bool ApplyFootIK 
        { 
            get { return m_ApplyFootIK; } 
            set 
            {
                if (m_ApplyFootIK == value) return;
                m_ApplyFootIK = value;
                Stiffness = m_ApplyFootIK ? 1f : 0f;
                actioner.Controller.SetCurve("LeftFootIK");
                actioner.Controller.SetCurve("RightFootIK");
            } 
        }

        private void UpdateFootIK(Transform footTransform, AvatarIKHandle goal, float weight, float footBottomHeight)
        {
            if (weight == 0 || footTransform == null)
                return;

            var ikGoal = goal == AvatarIKHandle.LeftFoot ? AvatarIKGoal.LeftFoot : AvatarIKGoal.RightFoot;

            SetLimbIKWeight(ikGoal, weight, weight, weight);

            var animator = BindingAnimator;
            // Get the local up direction of the foot.
            var rotation = animator.GetIKRotation(ikGoal);
            var localUp = rotation * Vector3.up;

            var position = footTransform.position;
            position += localUp * 0.5f;

            var distance = 0.5f - -0.2f;

            var transform = GetIKHandle(goal);

            if (Physics.Raycast(position, -localUp, out var hit, distance))
            {
                // Use the hit point as the desired position.
                position = hit.point;
                position += localUp * footBottomHeight;

                // Use the hit normal to calculate the desired rotation.
                var rotAxis = Vector3.Cross(localUp, hit.normal);
                var angle = Vector3.Angle(localUp, hit.normal);
                rotation = Quaternion.AngleAxis(angle, rotAxis) * rotation;

                transform.SetPositionAndRotation(position, rotation);

            }
            else// Otherwise simply stretch the leg out to the end of the ray.
            {
                position += localUp * (footBottomHeight - distance);
                transform.position = position;

            }
        }
    }
}

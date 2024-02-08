using LGameFramework.GameBase;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// ��Ҫ���㶯��IK
    /// </summary>
    public class EntityIK : MonoBehaviour
    {
        private int m_Entity;
        public int Entity { get { return m_Entity; } }

        private AnimationComponent m_Component;
        public AnimationComponent Component { get { return m_Component; } }

        private Animator m_Animator;
        public Animator Animator { get { return m_Animator; } }

        private Transform m_LookAt;
        public Transform LookAt { get { return m_LookAt; } set { m_LookAt = value; } }

        private float m_LookAtWeight;
        public float LookAtWeight
        {
            get { return m_LookAtWeight; }
            set
            {
                if (m_LookAtWeight == value || m_Animator == null)
                    return;

                m_LookAtWeight = value;
            }
        }
        /// <summary>
        /// ��ʼ�Ų�IK
        /// </summary>
        public bool enableFootIK;
        /// <summary>
        /// Ȩ����������
        /// </summary>
        private const string c_LeftFootAnimCurveName = "Curve_LeftFoot";
        /// <summary>
        /// Ȩ����������
        /// </summary>
        private const string c_RightFootAnimCurveName = "Curve_RightFoot";
        /// <summary>
        /// �ӵ������ϵ�cast����
        /// </summary>
        private const float c_HeightFromGroundRaycast = 0.5f;
        /// <summary>
        /// ����cast ����
        /// </summary>
        private const float c_RaycastDownDistance = 0.8f;
        /// <summary>
        /// �ŵ����
        /// </summary>
        private Transform m_LfootPosition, m_RfootPosition;
        /// <summary>
        /// �ŵ�λ��
        /// </summary>
        private Vector3 m_RightFootPosition, m_LeftFootPosition;
        /// <summary>
        /// �ŵ�ikλ��
        /// </summary>
        private Vector3 m_RightFootIkPosition, m_LeftFootIkPosition;
        /// <summary>
        /// �ŵ�ik��ת
        /// </summary>
        private Quaternion m_LeftFootIkRotation, m_RightFootIkRotation;
        /// <summary>
        /// ��֡��Ϣ������lerp����
        /// </summary>
        private float m_LastRightFootPositionY, m_LastLeftFootPositionY, m_LastLookAtWeight;

        public void OnInit(int entity, AnimationComponent component)
        {
            m_Entity = entity;
            m_Component = component;
            m_Animator = component.Animator;
            enableFootIK = m_Animator.isHuman;

            if (enableFootIK)
            {
                //var bone = EntityUtility.GetEntityData<Dictionary<HumanBodyBones, Transform>>(entity, EntityAttribute.c_HumanBodyBones);
                //m_LfootPosition = bone[HumanBodyBones.LeftFoot];
                //m_RfootPosition = bone[HumanBodyBones.RightFoot];
            }
        }


        private void FixedUpdate()
        {
            if (m_LfootPosition == null || m_RfootPosition == null || !enableFootIK) return;

            GetFootPosition();
            //IK ����
            FootPositionSolver(m_LeftFootPosition, ref m_LeftFootIkPosition, ref m_LeftFootIkRotation, 0);
            FootPositionSolver(m_RightFootPosition, ref m_RightFootIkPosition, ref m_RightFootIkRotation, 0);
        }

        private void OnAnimatorMove()
        {
            m_Component.OnAnimatorMove();

        }

        private void OnAnimatorIK(int layerIndex)
        {
            m_Component.OnAnimatorIK(layerIndex);

            UpdateHeadIK();

            if (!enableFootIK) return;
            UpdatePelvisHeight();

            float rcurve = m_Animator.GetFloat(c_RightFootAnimCurveName);
            m_Animator.SetIKPositionWeight(AvatarIKGoal.RightFoot, rcurve); //����pos Ȩ��
            m_Animator.SetIKRotationWeight(AvatarIKGoal.RightFoot, rcurve); //���� rot Ȩ��
            UpdateFootIK(AvatarIKGoal.RightFoot, m_RightFootIkPosition, m_RightFootIkRotation, ref m_LastRightFootPositionY); //����ik goal����

            float lcurve = m_Animator.GetFloat(c_LeftFootAnimCurveName);
            m_Animator.SetIKPositionWeight(AvatarIKGoal.LeftFoot, lcurve);
            m_Animator.SetIKRotationWeight(AvatarIKGoal.LeftFoot, lcurve);
            UpdateFootIK(AvatarIKGoal.LeftFoot, m_LeftFootIkPosition, m_LeftFootIkRotation, ref m_LastLeftFootPositionY);
        }

        #region HeadIK

        /// <summary>
        /// ͷ��IK
        /// </summary>
        private void UpdateHeadIK()
        {
            if (m_LookAt == null || m_Animator == null) return;

            m_Animator.SetLookAtPosition(m_LookAt.position);

            var weight = Mathf.Lerp(m_LastLookAtWeight, m_LookAtWeight, 0.2f);
            m_Animator.SetLookAtWeight(weight, 0f, 1f, 0f, 0.9f);

            m_LastLookAtWeight = weight;
        }
        #endregion

        #region FootIK

        /// <summary>
        /// ��ȡ�Ų�λ��
        /// </summary>
        private void GetFootPosition()
        {
            m_RightFootPosition = m_RfootPosition.position;
            m_RightFootPosition.y = m_Component.Transform.position.y + c_HeightFromGroundRaycast;

            m_LeftFootPosition = m_LfootPosition.position;
            m_LeftFootPosition.y = m_Component.Transform.position.y + c_HeightFromGroundRaycast;
        }

        /// <summary>
        /// �Ų�IKλ�ý���
        /// </summary>
        /// <param name="fromSkePosition">avatar����λ��</param>
        /// <param name="feetIkPosition">�Ų�ikλ��</param>
        /// <param name="feetIkRotation">�Ų�ik��ת</param>
        /// <param name="angleOffset"></param>
        private void FootPositionSolver(Vector3 fromSkePosition, ref Vector3 feetIkPosition, ref Quaternion feetIkRotation, float angleOffset)
        {
            bool ignore = false; //EntityUtility.GetEntityData<bool>(m_Entity, EntityAttribute.c_IsJumping) || EntityUtility.GetEntityData<bool>(m_Entity, EntityAttribute.c_IsFalling);

            if (!ignore && Physics.Raycast(fromSkePosition, Vector3.down, out var feetOutHit, c_HeightFromGroundRaycast + c_RaycastDownDistance))
            {
                //����x,zֵ��
                feetIkPosition = fromSkePosition;

                //hit pos �� Y ��ֵ
                feetIkPosition.y = feetOutHit.point.y;

                //���㷨��ƫ��
                feetIkRotation = Quaternion.FromToRotation(Vector3.up, feetOutHit.normal) * m_Component.Transform.rotation;
                feetIkRotation = Quaternion.AngleAxis(angleOffset, Vector3.up) * feetIkRotation; //��������ƫ��

                return;
            }

            //û��hit������
            feetIkPosition = Vector3.zero;
        }

        /// <summary>
        /// �����̹�λ�� ��֤IK �ܴﵽ���������ҽŸ߶Ȳ����֣�
        /// </summary>
        private void UpdatePelvisHeight()
        {
            if (m_RightFootIkPosition == Vector3.zero || m_LeftFootIkPosition == Vector3.zero)
                return;


            float lOffsetPosition = m_LeftFootIkPosition.y - m_Component.Transform.position.y; //���ik pos�뵱ǰtransform�ĸ߶Ȳ�
            float rOffsetPosition = m_RightFootIkPosition.y - m_Component.Transform.position.y; //�ҽ�ik pos �뵱ǰtransform�ĸ߶Ȳ�

            //ѡ���Сֵ������vector3.upΪ���������£�
            //�������ֵ��������ƫ�ƾ����С�ġ�
            //����Ǹ�ֵ��������ƫ�ƾ���ϴ�ġ�
            float totalOffset = (lOffsetPosition < rOffsetPosition) ? lOffsetPosition : rOffsetPosition;

            Vector3 newPelvisPosition = m_Animator.bodyPosition + Vector3.up * totalOffset; //�µĹ���λ�ü��㣺 ԭλ��+ up���� * offset��
            newPelvisPosition.y = Mathf.Lerp(m_Animator.bodyPosition.y, newPelvisPosition.y, 0.28f); //��ֵ����
            m_Animator.bodyPosition = newPelvisPosition; //��ֵ
        }

        private void UpdateFootIK(AvatarIKGoal foot, Vector3 positionIkHolder, Quaternion rotationIkHolder, ref float lastFootPositionY)
        {
            Vector3 targetIkPosition = m_Animator.GetIKPosition(foot); //��ȡanimator IK Goal �� ԭ�� pos

            if (positionIkHolder != Vector3.zero) //����µ�IK pos ��Ϊ 0 
            {
                targetIkPosition = m_Component.Transform.InverseTransformPoint(targetIkPosition); //��ԭ����ik goal ��posת������������ϵ
                positionIkHolder = m_Component.Transform.InverseTransformPoint(positionIkHolder); //�����ڵ�ik goal ��posת����������ϵ

                float yVar = Mathf.Lerp(lastFootPositionY, positionIkHolder.y, 0.5f); //���в�ֵ
                targetIkPosition.y += yVar;
                lastFootPositionY = yVar;

                targetIkPosition = m_Component.Transform.TransformPoint(targetIkPosition); //���µ�ik goal posת����������ϵ

                m_Animator.SetIKRotation(foot, rotationIkHolder); //��ת����
            }
            m_Animator.SetIKPosition(foot, targetIkPosition); //λ�ø���
        }


        #endregion

        #region �����¼�

        /// <summary>
        /// ע�ᶯ��֡�¼�
        /// </summary>
        public void RegisterClipsEvent()
        {
            if (m_Animator == null)
                return;

            AnimatorOverrideController oc = m_Animator.runtimeAnimatorController as AnimatorOverrideController;
            if (oc == null)
                return;

            var allClips = ListPool<KeyValuePair<AnimationClip, AnimationClip>>.Get();
            oc.GetOverrides(allClips);

            AnimationClip clip = null;

            //foreach (var eventPair in ComponentHandle.ClipEventRegister)
            //{
            //    foreach (var clipPair in allClips)
            //    {
            //        if (clipPair.Key.name == eventPair.Key)
            //        {
            //            clip = clipPair.Value;
            //            break;
            //        }
            //    }
            //    if (clip == null) continue;

            //    var evt = new AnimationEvent();
            //    evt.time = clip.length * eventPair.Value.Item1;
            //    evt.functionName = "OnClipEventMessage";
            //    evt.stringParameter = eventPair.Key;
            //    evt.messageOptions = SendMessageOptions.DontRequireReceiver;
            //    clip.AddEvent(evt);
            //}

            ListPool<KeyValuePair<AnimationClip, AnimationClip>>.Release(allClips);

        }

        /// <summary>
        /// ����֡�¼��ص�
        /// </summary>
        public void OnClipEventMessage(string arg)
        {
            //if (ComponentHandle.ClipEventRegister.TryGetValue(arg, out var eventInfo))
            //    eventInfo.Item2(m_Entity);
        }

        #endregion
    }
}

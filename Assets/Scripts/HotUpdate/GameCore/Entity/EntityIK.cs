using LGameFramework.GameBase;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// 主要计算动画IK
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
        /// 开始脚部IK
        /// </summary>
        public bool enableFootIK;
        /// <summary>
        /// 权重曲线名称
        /// </summary>
        private const string c_LeftFootAnimCurveName = "Curve_LeftFoot";
        /// <summary>
        /// 权重曲线名称
        /// </summary>
        private const string c_RightFootAnimCurveName = "Curve_RightFoot";
        /// <summary>
        /// 从地面向上的cast距离
        /// </summary>
        private const float c_HeightFromGroundRaycast = 0.5f;
        /// <summary>
        /// 向下cast 距离
        /// </summary>
        private const float c_RaycastDownDistance = 0.8f;
        /// <summary>
        /// 脚的组件
        /// </summary>
        private Transform m_LfootPosition, m_RfootPosition;
        /// <summary>
        /// 脚的位置
        /// </summary>
        private Vector3 m_RightFootPosition, m_LeftFootPosition;
        /// <summary>
        /// 脚的ik位置
        /// </summary>
        private Vector3 m_RightFootIkPosition, m_LeftFootIkPosition;
        /// <summary>
        /// 脚的ik旋转
        /// </summary>
        private Quaternion m_LeftFootIkRotation, m_RightFootIkRotation;
        /// <summary>
        /// 上帧信息，用于lerp动画
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
            //IK 解算
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
            m_Animator.SetIKPositionWeight(AvatarIKGoal.RightFoot, rcurve); //设置pos 权重
            m_Animator.SetIKRotationWeight(AvatarIKGoal.RightFoot, rcurve); //设置 rot 权重
            UpdateFootIK(AvatarIKGoal.RightFoot, m_RightFootIkPosition, m_RightFootIkRotation, ref m_LastRightFootPositionY); //设置ik goal坐标

            float lcurve = m_Animator.GetFloat(c_LeftFootAnimCurveName);
            m_Animator.SetIKPositionWeight(AvatarIKGoal.LeftFoot, lcurve);
            m_Animator.SetIKRotationWeight(AvatarIKGoal.LeftFoot, lcurve);
            UpdateFootIK(AvatarIKGoal.LeftFoot, m_LeftFootIkPosition, m_LeftFootIkRotation, ref m_LastLeftFootPositionY);
        }

        #region HeadIK

        /// <summary>
        /// 头部IK
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
        /// 获取脚部位置
        /// </summary>
        private void GetFootPosition()
        {
            m_RightFootPosition = m_RfootPosition.position;
            m_RightFootPosition.y = m_Component.Transform.position.y + c_HeightFromGroundRaycast;

            m_LeftFootPosition = m_LfootPosition.position;
            m_LeftFootPosition.y = m_Component.Transform.position.y + c_HeightFromGroundRaycast;
        }

        /// <summary>
        /// 脚部IK位置解算
        /// </summary>
        /// <param name="fromSkePosition">avatar骨骼位置</param>
        /// <param name="feetIkPosition">脚部ik位置</param>
        /// <param name="feetIkRotation">脚部ik旋转</param>
        /// <param name="angleOffset"></param>
        private void FootPositionSolver(Vector3 fromSkePosition, ref Vector3 feetIkPosition, ref Quaternion feetIkRotation, float angleOffset)
        {
            bool ignore = false; //EntityUtility.GetEntityData<bool>(m_Entity, EntityAttribute.c_IsJumping) || EntityUtility.GetEntityData<bool>(m_Entity, EntityAttribute.c_IsFalling);

            if (!ignore && Physics.Raycast(fromSkePosition, Vector3.down, out var feetOutHit, c_HeightFromGroundRaycast + c_RaycastDownDistance))
            {
                //保存x,z值。
                feetIkPosition = fromSkePosition;

                //hit pos 的 Y 赋值
                feetIkPosition.y = feetOutHit.point.y;

                //计算法向偏移
                feetIkRotation = Quaternion.FromToRotation(Vector3.up, feetOutHit.normal) * m_Component.Transform.rotation;
                feetIkRotation = Quaternion.AngleAxis(angleOffset, Vector3.up) * feetIkRotation; //计算额外的偏移

                return;
            }

            //没有hit，归零
            feetIkPosition = Vector3.zero;
        }

        /// <summary>
        /// 调整盘骨位置 保证IK 能达到（比如左右脚高度差那种）
        /// </summary>
        private void UpdatePelvisHeight()
        {
            if (m_RightFootIkPosition == Vector3.zero || m_LeftFootIkPosition == Vector3.zero)
                return;


            float lOffsetPosition = m_LeftFootIkPosition.y - m_Component.Transform.position.y; //左脚ik pos与当前transform的高度差
            float rOffsetPosition = m_RightFootIkPosition.y - m_Component.Transform.position.y; //右脚ik pos 与当前transform的高度差

            //选择较小值（在以vector3.up为正轴的情况下）
            //如果是正值，则向上偏移距离较小的。
            //如果是负值，则向下偏移距离较大的。
            float totalOffset = (lOffsetPosition < rOffsetPosition) ? lOffsetPosition : rOffsetPosition;

            Vector3 newPelvisPosition = m_Animator.bodyPosition + Vector3.up * totalOffset; //新的骨盆位置计算： 原位置+ up方向 * offset。
            newPelvisPosition.y = Mathf.Lerp(m_Animator.bodyPosition.y, newPelvisPosition.y, 0.28f); //插值动画
            m_Animator.bodyPosition = newPelvisPosition; //赋值
        }

        private void UpdateFootIK(AvatarIKGoal foot, Vector3 positionIkHolder, Quaternion rotationIkHolder, ref float lastFootPositionY)
        {
            Vector3 targetIkPosition = m_Animator.GetIKPosition(foot); //获取animator IK Goal 的 原本 pos

            if (positionIkHolder != Vector3.zero) //如果新的IK pos 不为 0 
            {
                targetIkPosition = m_Component.Transform.InverseTransformPoint(targetIkPosition); //把原本的ik goal 的pos转换到本地坐标系
                positionIkHolder = m_Component.Transform.InverseTransformPoint(positionIkHolder); //把现在的ik goal 的pos转到本地坐标系

                float yVar = Mathf.Lerp(lastFootPositionY, positionIkHolder.y, 0.5f); //进行插值
                targetIkPosition.y += yVar;
                lastFootPositionY = yVar;

                targetIkPosition = m_Component.Transform.TransformPoint(targetIkPosition); //把新的ik goal pos转到世界坐标系

                m_Animator.SetIKRotation(foot, rotationIkHolder); //旋转赋予
            }
            m_Animator.SetIKPosition(foot, targetIkPosition); //位置赋予
        }


        #endregion

        #region 动画事件

        /// <summary>
        /// 注册动画帧事件
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
        /// 动画帧事件回调
        /// </summary>
        public void OnClipEventMessage(string arg)
        {
            //if (ComponentHandle.ClipEventRegister.TryGetValue(arg, out var eventInfo))
            //    eventInfo.Item2(m_Entity);
        }

        #endregion
    }
}

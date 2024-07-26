using System.Collections.Generic;
using UnityEngine;

namespace Actioner.Runtime
{
    public class ActionerController : MonoBehaviour
    {
        public bool enableDebugLog = true;

        public ActionManifest actionManifest;

        private ActionerPlayable m_ActionPlayable;
        public ActionerPlayable ActionerPlayable
        {
            get { return m_ActionPlayable; }
        }

        private Animator m_Animator;
        public Animator Animator 
        { 
            get 
            {
                m_Animator ??= GetComponent<Animator>();
                return m_Animator; 
            } 
        }

        public Vector3 DeltaPosition
        {
            get { return m_Animator != null ? m_Animator.deltaPosition : default; }
        }

        public Quaternion DeltaRotation
        {
            get { return m_Animator != null ? m_Animator.deltaRotation : default; }
        }

        public Vector3 Velocity
        {
            get { return m_Animator != null ? m_Animator.velocity : default; }
        }

        /// <summary>
        /// IK
        /// </summary>
        private ActionerIK m_ActionerIK;

        private int m_IKCount;
        /// <summary>
        /// 开启IK的计数
        /// </summary>
        public int IKCount
        {
            get { return m_IKCount; }
            set
            {
                int newValue = Mathf.Max(0, value);
                if (m_IKCount == newValue) return;
                m_IKCount = newValue;
                ApplyIK(m_IKCount > 0);
            }
        }

        /// <summary>
        /// 是否开启IK
        /// </summary>
        public bool IsApplyIK { get { return IKCount > 0; } }

        private int m_FootIKCount;
        /// <summary>
        /// 开启足部IK的计数
        /// </summary>
        public int FootIKCount
        {
            get { return m_FootIKCount; }
            set
            {
                int newValue = Mathf.Max(0, value);
                if (m_FootIKCount == newValue) return;
                m_FootIKCount = newValue;
                ApplyFootIK(m_FootIKCount > 0);
            }
        }

        /// <summary>
        /// 是否开启足部IK中
        /// </summary>
        public bool IsApplyFootIK { get { return FootIKCount > 0; } }

        private int m_RootMotionCount;
        /// <summary>
        /// 根运动的计数
        /// </summary>
        public int RootMotionCount
        {
            get { return m_RootMotionCount; }
            set
            {
                int newValue = Mathf.Max(0, value);
                if (m_RootMotionCount == newValue) return;
                m_RootMotionCount = newValue;
                ApplyRootMotion(m_RootMotionCount > 0);
            }
        }

        /// <summary>
        /// 是否开启根运动
        /// </summary>
        public bool IsApplyRootMotion { get { return RootMotionCount > 0; } }

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
                //动画补偿需要开启RootMotion
                if (m_ApplyCompensation && !IsApplyRootMotion)
                    RootMotionCount++;
                if (IsApplyRootMotion)
                    Animator.TryAddComponent<ActionerRootMotion>().ApplyCompensation = m_ApplyCompensation;
            }
        }

        private void Awake()
        {
            m_ActionPlayable = ActionerUtility.Create(this);
        }

        private void OnDestroy()
        {
            m_ActionPlayable.Dispose();
            if (m_ActionPlayable != null && m_ActionPlayable.Graph.IsValid())
                m_ActionPlayable.Graph.Destroy();
        }

        /// <summary>
        /// 尝试添加层
        /// </summary>
        /// <param name="layer"></param>
        /// <returns></returns>
        public ActionerLayer TryAddLayer(int layer)
        { 
            return m_ActionPlayable.LayerMixer.TryAddLayer(layer);
        }

        /// <summary>
        /// 播放动画片段
        /// </summary>
        /// <param name="clip"></param>
        /// <param name="layer"></param>
        /// <param name="timeOffset"></param>
        /// <returns></returns>
        public ActionerAction Play(AnimationClip clip, int layer = 0, float timeOffset = 0f)
        {
            return TryAddLayer(layer).Play(clip, timeOffset);
        }

        /// <summary>
        /// 渐变播放行为
        /// </summary>
        /// <param name="clip"></param>
        /// <param name="duration"></param>
        /// <param name="layer"></param>
        /// <param name="timeOffset"></param>
        /// <returns></returns>
        public ActionerAction CrossFade(AnimationClip clip, float duration, int layer = 0, float timeOffset = 0f)
        {
            return TryAddLayer(layer).CrossFade(clip, duration, timeOffset);
        }

        /// <summary>
        /// 混合树
        /// </summary>
        /// <param name="blendData"></param>
        /// <param name="layer"></param>
        /// <returns></returns>
        public ActionerBlendTree BlendPlay(ActionBlend blendData, int layer = 0)
        {
            return TryAddLayer(layer).BlendPlay(blendData);
        }

        /// <summary>
        /// 播放清单中的行为
        /// </summary>
        /// <param name="actionName">行为名称</param>
        /// <param name="duration">过渡时间</param>
        public ActionerAction PlayAction(string actionName, float duration = 0f)
        {
            var actionData = actionManifest.GetAction(actionName);
            if (actionData == null) return null;
            var action = CrossFade(actionData.motion, duration, actionData.layer, actionData.timeOffset);
            action.SetData(actionData);
            return action;
        }

        /// <summary>
        /// 从动画包中播放行为
        /// </summary>
        /// <param name="budleName">包名</param>
        /// <param name="index">播放的下标</param>
        /// <param name="duration">过渡时间</param>
        public ActionerAction PlayActionFromBudle(string budleName, int index, float duration = 0f)
        { 
            ActionBundle budle = actionManifest.GetBundle(budleName);
            if (budle == null) return null;
            AnimationClip clip = budle[index];
            if (clip == null) return null;
            var action = CrossFade(clip, duration, budle.layer, budle.timeOffset);
            action.SetData(budle);
            return action;
        }

        public void PlayBlend(string blendName, float duration = 0f)
        { 
            ActionBlend blend = actionManifest.GetBlend(blendName);
            if (blend == null) return;
            BlendPlay(blend, blend.layer);
        }

        /// <summary>
        /// 队列播放行为
        /// </summary>
        /// <param name="firstDuration"></param>
        /// <param name="clips"></param>
        public void PlayQueue(int layer, float firstDuration, params string[] clips)
        {
            List<AnimationClip> list = new List<AnimationClip>(clips.Length);
            for (int i = 0; i < clips.Length; i++)
            {
                var action = actionManifest.GetAction(clips[i]);
                if (action != null)
                    list.Add(action.motion);
            }

            TryAddLayer(layer).PlayQueue(firstDuration, list.ToArray());
        }

        /// <summary>
        /// 设置动画曲线属性
        /// </summary>
        /// <param name="property"></param>
        public void SetCurve(string property)
        {
            m_ActionPlayable.ActionerProperty.CurveProperty.Add(property);
        }

        /// <summary>
        /// 获取动画曲线属性数据
        /// </summary>
        /// <param name="property"></param>
        /// <returns></returns>
        public float GetCurve(string property)
        {
            return m_ActionPlayable.ActionerProperty.CurveProperty.GetValue(property);
        }

        /// <summary>
        /// 设置Float类型属性
        /// </summary>
        /// <param name="property"></param>
        /// <param name="value"></param>
        public void SetFloat(string property, float value)
        {
            m_ActionPlayable.ActionerProperty.FloatProperty.SetValue(property, value);
        }

        /// <summary>
        /// 获取Float类型属性
        /// </summary>
        /// <param name="property"></param>
        /// <returns></returns>
        public float GetFloat(string property)
        {
            return m_ActionPlayable.ActionerProperty.FloatProperty.GetValue(property);
        }

        /// <summary>
        /// 设置Int类型属性
        /// </summary>
        /// <param name="property"></param>
        /// <param name="value"></param>
        public void SetInt(string property, int value)
        {
            m_ActionPlayable.ActionerProperty.IntProperty.SetValue(property, value);
        }

        /// <summary>
        /// 获取Int类型属性
        /// </summary>
        /// <param name="property"></param>
        /// <returns></returns>
        public int GetInt(string property)
        {
            return m_ActionPlayable.ActionerProperty.IntProperty.GetValue(property);
        }

        /// <summary>
        /// 设置Bool类型属性
        /// </summary>
        /// <param name="property"></param>
        /// <param name="value"></param>
        public void SetBool(string property, bool value)
        {
            m_ActionPlayable.ActionerProperty.BoolProperty.SetValue(property, value);
        }

        /// <summary>
        /// 获取Bool类型属性
        /// </summary>
        /// <param name="property"></param>
        /// <returns></returns>
        public bool GetBool(string property)
        {
            return m_ActionPlayable.ActionerProperty.BoolProperty.GetValue(property);
        }

        /// <summary>
        /// 应用IK
        /// </summary>
        /// <param name="value"></param>
        private void ApplyIK(bool value)
        {
            if (value)
            {
                m_ActionerIK ??= ActionerIK.Create(Animator.transform);
                m_ActionerIK.actioner = m_ActionPlayable;
            }

        }

        /// <summary>
        /// 应用足部IK
        /// </summary>
        /// <param name="value"></param>
        private void ApplyFootIK(bool value)
        {
            IKCount += (value ? 1 : -1);

            if (m_ActionerIK)
                m_ActionerIK.ApplyFootIK = value;
        }

        /// <summary>
        /// 应用根运动
        /// </summary>
        /// <param name="value"></param>
        private void ApplyRootMotion(bool value)
        {
            //var motion = Animator.TryAddComponent<ActionerRootMotion>();
            //motion.actioner = m_ActionPlayable;
            //motion.enabled = value;
        }

    }
}

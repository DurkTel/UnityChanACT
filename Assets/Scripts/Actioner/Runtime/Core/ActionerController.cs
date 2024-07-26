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
        /// ����IK�ļ���
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
        /// �Ƿ���IK
        /// </summary>
        public bool IsApplyIK { get { return IKCount > 0; } }

        private int m_FootIKCount;
        /// <summary>
        /// �����㲿IK�ļ���
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
        /// �Ƿ����㲿IK��
        /// </summary>
        public bool IsApplyFootIK { get { return FootIKCount > 0; } }

        private int m_RootMotionCount;
        /// <summary>
        /// ���˶��ļ���
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
        /// �Ƿ������˶�
        /// </summary>
        public bool IsApplyRootMotion { get { return RootMotionCount > 0; } }

        private bool m_ApplyCompensation = false;

        /// <summary>
        /// Ӧ�ö�������
        /// </summary>
        public bool ApplyCompensation
        {
            get { return m_ApplyCompensation; }
            set
            {
                if (m_ApplyCompensation == value) return;
                m_ApplyCompensation = value;
                //����������Ҫ����RootMotion
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
        /// ������Ӳ�
        /// </summary>
        /// <param name="layer"></param>
        /// <returns></returns>
        public ActionerLayer TryAddLayer(int layer)
        { 
            return m_ActionPlayable.LayerMixer.TryAddLayer(layer);
        }

        /// <summary>
        /// ���Ŷ���Ƭ��
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
        /// ���䲥����Ϊ
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
        /// �����
        /// </summary>
        /// <param name="blendData"></param>
        /// <param name="layer"></param>
        /// <returns></returns>
        public ActionerBlendTree BlendPlay(ActionBlend blendData, int layer = 0)
        {
            return TryAddLayer(layer).BlendPlay(blendData);
        }

        /// <summary>
        /// �����嵥�е���Ϊ
        /// </summary>
        /// <param name="actionName">��Ϊ����</param>
        /// <param name="duration">����ʱ��</param>
        public ActionerAction PlayAction(string actionName, float duration = 0f)
        {
            var actionData = actionManifest.GetAction(actionName);
            if (actionData == null) return null;
            var action = CrossFade(actionData.motion, duration, actionData.layer, actionData.timeOffset);
            action.SetData(actionData);
            return action;
        }

        /// <summary>
        /// �Ӷ������в�����Ϊ
        /// </summary>
        /// <param name="budleName">����</param>
        /// <param name="index">���ŵ��±�</param>
        /// <param name="duration">����ʱ��</param>
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
        /// ���в�����Ϊ
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
        /// ���ö�����������
        /// </summary>
        /// <param name="property"></param>
        public void SetCurve(string property)
        {
            m_ActionPlayable.ActionerProperty.CurveProperty.Add(property);
        }

        /// <summary>
        /// ��ȡ����������������
        /// </summary>
        /// <param name="property"></param>
        /// <returns></returns>
        public float GetCurve(string property)
        {
            return m_ActionPlayable.ActionerProperty.CurveProperty.GetValue(property);
        }

        /// <summary>
        /// ����Float��������
        /// </summary>
        /// <param name="property"></param>
        /// <param name="value"></param>
        public void SetFloat(string property, float value)
        {
            m_ActionPlayable.ActionerProperty.FloatProperty.SetValue(property, value);
        }

        /// <summary>
        /// ��ȡFloat��������
        /// </summary>
        /// <param name="property"></param>
        /// <returns></returns>
        public float GetFloat(string property)
        {
            return m_ActionPlayable.ActionerProperty.FloatProperty.GetValue(property);
        }

        /// <summary>
        /// ����Int��������
        /// </summary>
        /// <param name="property"></param>
        /// <param name="value"></param>
        public void SetInt(string property, int value)
        {
            m_ActionPlayable.ActionerProperty.IntProperty.SetValue(property, value);
        }

        /// <summary>
        /// ��ȡInt��������
        /// </summary>
        /// <param name="property"></param>
        /// <returns></returns>
        public int GetInt(string property)
        {
            return m_ActionPlayable.ActionerProperty.IntProperty.GetValue(property);
        }

        /// <summary>
        /// ����Bool��������
        /// </summary>
        /// <param name="property"></param>
        /// <param name="value"></param>
        public void SetBool(string property, bool value)
        {
            m_ActionPlayable.ActionerProperty.BoolProperty.SetValue(property, value);
        }

        /// <summary>
        /// ��ȡBool��������
        /// </summary>
        /// <param name="property"></param>
        /// <returns></returns>
        public bool GetBool(string property)
        {
            return m_ActionPlayable.ActionerProperty.BoolProperty.GetValue(property);
        }

        /// <summary>
        /// Ӧ��IK
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
        /// Ӧ���㲿IK
        /// </summary>
        /// <param name="value"></param>
        private void ApplyFootIK(bool value)
        {
            IKCount += (value ? 1 : -1);

            if (m_ActionerIK)
                m_ActionerIK.ApplyFootIK = value;
        }

        /// <summary>
        /// Ӧ�ø��˶�
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

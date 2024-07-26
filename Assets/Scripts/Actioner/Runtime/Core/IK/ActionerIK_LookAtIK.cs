using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    [System.Serializable]
    public struct LookAtEffector
    {
        [Range(0f, 1f)]
        public float eyesWeight, headWeight, bodyWeight, clampWeight;
    }

    public sealed partial class ActionerIK : MonoBehaviour
    {

        /// <summary>
        /// 注视的物体IK点
        /// </summary>
        private Transform m_LookAtHandle;

        [SerializeField]
        private LookAtEffector m_LookAtEffector;
        /// <summary>
        /// 注视相关权重
        /// </summary>
        public LookAtEffector LookAtEffector
        {
            get { return m_LookAtEffector; }
            set
            {
                if (m_LookAtEffector.Equals(value))
                    return;
                m_LookAtEffector = value;
                if (!m_BodyIKJob.IsValid()) return;
                var job = m_BodyIKJob.GetJobData<FullBodyIKJob>();
                job.lookAtHandle.eyesWeight = m_LookAtEffector.eyesWeight;
                job.lookAtHandle.headWeight = m_LookAtEffector.headWeight;
                job.lookAtHandle.bodyWeight = m_LookAtEffector.bodyWeight;
                job.lookAtHandle.clampWeight = m_LookAtEffector.clampWeight;
                m_BodyIKJob.SetJobData(job);
            }
        }

        private Transform CreateLookAtEffectElement(ref FullBodyIKJob.LookEffectorHandle handle)
        {
            var go = ActionerUtility.CreateElement("IK LookAt Handle", m_Container);
            handle.lookAt = BindingAnimator.BindSceneTransform(go.transform);
            handle.eyesWeight = LookAtEffector.eyesWeight;
            handle.headWeight = LookAtEffector.headWeight;
            handle.bodyWeight = LookAtEffector.bodyWeight;
            handle.clampWeight = LookAtEffector.clampWeight;
            return go.transform;
        }
    }
}

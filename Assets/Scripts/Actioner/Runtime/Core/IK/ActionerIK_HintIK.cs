using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{

    [System.Serializable]
    public struct HintEffector
    {
        [Range(0f, 1f)]
        public float weight;
    }
    public sealed partial class ActionerIK : MonoBehaviour
    {

        /// <summary>
        /// 四关节的IK点
        /// </summary>
        private Transform[] m_HintHandles;

        [SerializeField]
        private HintEffector[] m_HintEffector = new HintEffector[4];
        /// <summary>
        /// 四关节相关权重
        /// </summary>
        public HintEffector[] HintEffector
        {
            get { return m_HintEffector; }
            set
            {
                FullBodyIKJob job = new FullBodyIKJob();
                if (m_BodyIKJob.IsValid())
                    job = m_BodyIKJob.GetJobData<FullBodyIKJob>();

                for (int i = 0; i < m_HintEffector.Length; i++)
                {
                    if (m_HintEffector[i].Equals(value[i]))
                        continue;
                    m_HintEffector[i] = value[i];

                    if (!m_BodyIKJob.IsValid())
                        continue;

                    FullBodyIKJob.HintEffectorHandle handle = new FullBodyIKJob.HintEffectorHandle();
                    handle.weight = m_HintEffector[i].weight;
                    handle.hint = BindingAnimator.BindSceneTransform(m_HintHandles[i]);
                    job.SetHintEffectorHandle((AvatarIKHint)i, handle);
                }
                if (m_BodyIKJob.IsValid())
                    m_BodyIKJob.SetJobData(job);
            }
        }

        private Transform CreateHintEffectElement(AvatarIKHint avatarIK, ref FullBodyIKJob.HintEffectorHandle handle)
        {
            var go = ActionerUtility.CreateElement($"IK {avatarIK} Handle", m_Container);
            int index = (int)avatarIK;
            handle.hint = BindingAnimator.BindSceneTransform(go.transform);
            handle.weight = HintEffector[index].weight;
            return go.transform;
        }

    }
}

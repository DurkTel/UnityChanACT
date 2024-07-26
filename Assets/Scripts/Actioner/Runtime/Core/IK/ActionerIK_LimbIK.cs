using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{

    [System.Serializable]
    public struct LimbEffector
    {
        [Range(0f, 1f)]
        public float positionWeight, rotationWeight, pullWeight;
    }

    public sealed partial class ActionerIK : MonoBehaviour
    {

        /// <summary>
        /// 默认参数
        /// </summary>
        private readonly static LimbEffector s_DefaultLimbParam = new LimbEffector(); //{ positionWeight = 1f, rotationWeight = 1f, pullWeight = 1f };

        /// <summary>
        /// 四肢的IK点
        /// </summary>
        private Transform[] m_LimbHandles;

        [SerializeField]
        private LimbEffector[] m_LimbEffector = new LimbEffector[4];
        /// <summary>
        /// 四肢相关权重
        /// </summary>
        public LimbEffector[] LimbEffector
        {
            get { return m_LimbEffector; }
            set
            {
                FullBodyIKJob job = new FullBodyIKJob();
                if (m_BodyIKJob.IsValid())
                    job = m_BodyIKJob.GetJobData<FullBodyIKJob>();


                for (int i = 0; i < m_LimbEffector.Length; i++)
                {
                    if (m_LimbEffector[i].Equals(value[i]))
                        continue;
                    m_LimbEffector[i] = value[i];

                    if (!m_BodyIKJob.IsValid())
                        continue;

                    FullBodyIKJob.EffectorHandle handle = new FullBodyIKJob.EffectorHandle();
                    handle.positionWeight = m_LimbEffector[i].positionWeight;
                    handle.rotationWeight = m_LimbEffector[i].rotationWeight;
                    handle.pullWeight = m_LimbEffector[i].pullWeight;
                    handle.effector = BindingAnimator.BindSceneTransform(m_LimbHandles[i]);
                    job.SetEffectorHandle((AvatarIKGoal)i, handle);
                }
                if (m_BodyIKJob.IsValid())
                    m_BodyIKJob.SetJobData(job);
            }
        }

        private Transform CreateEffectElement(AvatarIKGoal avatarIK, ref FullBodyIKJob.EffectorHandle handle)
        {
            var go = ActionerUtility.CreateElement($"IK {avatarIK} Handle", m_Container);
            int index = (int)avatarIK;
            handle.effector = BindingAnimator.BindSceneTransform(go.transform);
            LimbEffector[index] = s_DefaultLimbParam;
            handle.positionWeight = LimbEffector[index].positionWeight;
            handle.rotationWeight = LimbEffector[index].rotationWeight;
            handle.pullWeight = LimbEffector[index].pullWeight;
            return go.transform;
        }

        public void SetLimbIKWeight(AvatarIKGoal goal, float positionWeight, float rotationWeight, float pullWeight)
        {
            if (!m_BodyIKJob.IsValid()) return;
            var job = m_BodyIKJob.GetJobData<FullBodyIKJob>();
            job.SetEffectorHandle(goal, new FullBodyIKJob.EffectorHandle() { positionWeight = positionWeight, rotationWeight = rotationWeight, pullWeight = pullWeight, effector = job.GetEffectorHandle(goal).effector });
            m_BodyIKJob.SetJobData(job);
        }
    }
}

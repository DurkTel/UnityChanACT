using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    public sealed partial class ActionerIK : MonoBehaviour
    {
        /// <summary>
        /// ����IK��
        /// </summary>
        private Transform m_BodyHandles;

        private float m_Stiffness;
        /// <summary>
        /// �����ն�ϵ��������pull Weight��Ϊ0����Ч��
        /// ԽС�����ĵ�Ӱ��ԽС
        /// </summary>
        public float Stiffness
        {
            get { return m_Stiffness; }
            set
            {
                m_Stiffness = value;
                if (!m_BodyIKJob.IsValid()) return;
                var job = m_BodyIKJob.GetJobData<FullBodyIKJob>();
                job.stiffness = m_Stiffness;
                m_BodyIKJob.SetJobData(job);
            }
        }

        private Transform CreateBodyEffectElement(ref FullBodyIKJob.BodyEffectorHandle handle)
        {
            var go = ActionerUtility.CreateElement("IK Body Handle", m_Container);
            handle.body = BindingAnimator.BindSceneTransform(go.transform);
            return go.transform;
        }

        private void SetupIKLimbHandle(ref FullBodyIKJob.IKLimbHandle handle, HumanBodyBones top, HumanBodyBones middle, HumanBodyBones end)
        {
            handle.top = BindingAnimator.BindStreamTransform(BindingAnimator.GetBoneTransform(top));
            handle.middle = BindingAnimator.BindStreamTransform(BindingAnimator.GetBoneTransform(middle));
            handle.end = BindingAnimator.BindStreamTransform(BindingAnimator.GetBoneTransform(end));
        }
    }
}

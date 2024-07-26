using UnityEditor;
using UnityEngine;
using UnityEngine.Animations;

namespace Actioner.Runtime
{


    /// <summary>
    /// 所有的IK点
    /// </summary>
    public enum AvatarIKHandle
    { 
        /// <summary>
        /// 注视
        /// </summary>
        LookAt,
        /// <summary>
        /// 左脚
        /// </summary>
        LeftFoot,
        /// <summary>
        /// 右脚
        /// </summary>
        RightFoot,
        /// <summary>
        /// 左手
        /// </summary>
        LeftHand,
        /// <summary>
        /// 右手
        /// </summary>
        RightHand,
        /// <summary>
        /// 左膝盖
        /// </summary>
        LeftKnee,
        /// <summary>
        /// 右膝盖
        /// </summary>
        RightKnee,
        /// <summary>
        /// 左手肘
        /// </summary>
        LeftElbow,
        /// <summary>
        /// 右手肘
        /// </summary>
        RightElbow,
        /// <summary>
        /// 身体质心
        /// </summary>
        Body
    }

    /// <summary>
    /// 管理行为Ik
    /// </summary>
    public sealed partial class ActionerIK : MonoBehaviour
    {
        /// <summary>
        /// 同步IK位置
        /// </summary>
        public bool syncIKGoal = true;

        /// <summary>
        /// 开启debug
        /// </summary>
        public bool showGizmos = false;

        /// <summary>
        /// 绑定的动作演员
        /// </summary>
        public ActionerPlayable actioner;

        /// <summary>
        /// 绑定的动画机
        /// </summary>
        private Animator BindingAnimator
        {
            get { return actioner.Animator; }
        }

        /// <summary>
        /// 容器
        /// </summary>
        private Transform m_Container;

        /// <summary>
        /// IKJob节点
        /// </summary>
        private AnimationScriptPlayable m_BodyIKJob;

        public static ActionerIK Create(Transform transform)
        {
            var ik = transform.TryAddComponent<ActionerIK>();
            ik.m_Container = new GameObject("IK Container").transform;
            ik.m_Container.parent = transform;
            return ik;
        }

        private void Start()
        {

            m_LeftFoot = BindingAnimator.GetBoneTransform(HumanBodyBones.LeftFoot);
            m_RightFoot = BindingAnimator.GetBoneTransform(HumanBodyBones.RightFoot);

            FullBodyIKJob job = new FullBodyIKJob
            {
                stiffness = m_Stiffness
            };

            SetupIKLimbHandle(ref job.leftArm, HumanBodyBones.LeftUpperArm, HumanBodyBones.LeftLowerArm, HumanBodyBones.LeftHand);
            SetupIKLimbHandle(ref job.rightArm, HumanBodyBones.RightUpperArm, HumanBodyBones.RightLowerArm, HumanBodyBones.RightHand);
            SetupIKLimbHandle(ref job.leftLeg, HumanBodyBones.LeftUpperLeg, HumanBodyBones.LeftLowerLeg, HumanBodyBones.LeftFoot);
            SetupIKLimbHandle(ref job.rightLeg, HumanBodyBones.RightUpperLeg, HumanBodyBones.RightLowerLeg, HumanBodyBones.RightFoot);

            m_LimbHandles = new Transform[4];
            m_HintHandles = new Transform[4];

            m_LimbHandles[0] = CreateEffectElement(AvatarIKGoal.LeftFoot, ref job.leftFootEffector);
            m_LimbHandles[1] = CreateEffectElement(AvatarIKGoal.RightFoot, ref job.rightFootEffector);
            m_LimbHandles[2] = CreateEffectElement(AvatarIKGoal.LeftHand, ref job.leftHandEffector);
            m_LimbHandles[3] = CreateEffectElement(AvatarIKGoal.RightHand, ref job.rightHandEffector);

            m_HintHandles[0] = CreateHintEffectElement(AvatarIKHint.LeftKnee, ref job.leftKneeHintEffector);
            m_HintHandles[1] = CreateHintEffectElement(AvatarIKHint.RightKnee, ref job.rightKneeHintEffector);
            m_HintHandles[2] = CreateHintEffectElement(AvatarIKHint.LeftElbow, ref job.leftElbowHintEffector);
            m_HintHandles[3] = CreateHintEffectElement(AvatarIKHint.RightElbow, ref job.rightElbowHintEffector);

            m_LookAtHandle = CreateLookAtEffectElement(ref job.lookAtHandle);

            m_BodyHandles = CreateBodyEffectElement(ref job.bodyEffector);

            m_BodyIKJob = actioner.InsertOutputJob(job);

        }
       
        private void LateUpdate()
        {
            if (syncIKGoal)
            {
                SyncIKFromPose();
                syncIKGoal = false;
            }

            //锁定BodyHandles位置
            var job = m_BodyIKJob.GetJobData<FullBodyIKJob>();
            m_BodyHandles.transform.position = job.bodyPosition;
        }


        private void SyncIKFromPose()
        {
            var stream = new AnimationStream();
            if (BindingAnimator.OpenAnimationStream(ref stream))
            {
                AnimationHumanStream humanStream = stream.AsHuman();

                m_LimbHandles[0].transform.SetPositionAndRotation(humanStream.GetGoalPositionFromPose(AvatarIKGoal.LeftFoot), humanStream.GetGoalRotationFromPose(AvatarIKGoal.LeftFoot));

                m_LimbHandles[1].transform.SetPositionAndRotation(humanStream.GetGoalPositionFromPose(AvatarIKGoal.RightFoot), humanStream.GetGoalRotationFromPose(AvatarIKGoal.RightFoot));

                m_LimbHandles[2].transform.SetPositionAndRotation(humanStream.GetGoalPositionFromPose(AvatarIKGoal.LeftHand), humanStream.GetGoalRotationFromPose(AvatarIKGoal.LeftHand));

                m_LimbHandles[3].transform.SetPositionAndRotation(humanStream.GetGoalPositionFromPose(AvatarIKGoal.RightHand), humanStream.GetGoalRotationFromPose(AvatarIKGoal.RightHand));

                m_HintHandles[0].transform.position = humanStream.GetHintPosition(AvatarIKHint.LeftKnee);

                m_HintHandles[1].transform.position = humanStream.GetHintPosition(AvatarIKHint.RightKnee);

                m_HintHandles[2].transform.position = humanStream.GetHintPosition(AvatarIKHint.LeftElbow);

                m_HintHandles[3].transform.position = humanStream.GetHintPosition(AvatarIKHint.RightElbow);

                m_BodyHandles.transform.SetPositionAndRotation(humanStream.bodyPosition, humanStream.bodyRotation);

                BindingAnimator.CloseAnimationStream(ref stream);
            }
        }

        public Transform GetIKHandle(AvatarIKHandle ikHandle)
        {
            Transform handle = null;
            switch (ikHandle)
            {
                case AvatarIKHandle.LookAt:
                    handle = m_LookAtHandle;
                    break;
                case AvatarIKHandle.LeftFoot:
                    handle = m_LimbHandles[(int)AvatarIKGoal.LeftFoot];
                    break;
                case AvatarIKHandle.RightFoot:
                    handle = m_LimbHandles[(int)AvatarIKGoal.RightFoot];
                    break;
                case AvatarIKHandle.LeftHand:
                    handle = m_LimbHandles[(int)AvatarIKGoal.LeftHand];
                    break;
                case AvatarIKHandle.RightHand:
                    handle = m_LimbHandles[(int)AvatarIKGoal.RightHand];
                    break;
                case AvatarIKHandle.LeftKnee:
                    handle = m_LimbHandles[(int)AvatarIKHint.LeftKnee];
                    break;
                case AvatarIKHandle.RightKnee:
                    handle = m_LimbHandles[(int)AvatarIKHint.RightKnee];
                    break;
                case AvatarIKHandle.LeftElbow:
                    handle = m_LimbHandles[(int)AvatarIKHint.LeftElbow];
                    break;
                case AvatarIKHandle.RightElbow:
                    handle = m_LimbHandles[(int)AvatarIKHint.RightElbow];
                    break;
                case AvatarIKHandle.Body:
                    handle = m_BodyHandles;
                    break;
                default:
                    break;
            }

            return handle;
        }


        private void OnAnimatorIK(int layerIndex)
        {
            if (!ApplyFootIK)
                return;

            //OnAnimatorIK的生命周期在ProcessAnimation之后 开启FootIK后会覆盖FullBodyIKJob中的左右脚IK
            float leftFootIKWeight = actioner.Controller.GetCurve("LeftFootIK");
            float rightFootIKWeight = actioner.Controller.GetCurve("RightFootIK");
            UpdateFootIK(m_LeftFoot, AvatarIKHandle.LeftFoot, leftFootIKWeight, BindingAnimator.leftFeetBottomHeight);
            UpdateFootIK(m_RightFoot, AvatarIKHandle.RightFoot, rightFootIKWeight, BindingAnimator.rightFeetBottomHeight);
        }

        private void OnDrawGizmos()
        {
            if (!showGizmos) return;

            if (Selection.activeGameObject != null && Selection.activeGameObject.GetComponentInParent<ActionerIK>() != null)
            {
                float weight = (LookAtEffector.eyesWeight + LookAtEffector.headWeight + LookAtEffector.bodyWeight + LookAtEffector.clampWeight) / 4.0f;
                DebugHelper.DrawSphere(m_LookAtHandle.position, 0.05f, Color.Lerp(Color.red, Color.green, weight), 0, false);
                DebugHelper.DrawLabel(m_LookAtHandle.name, m_LookAtHandle.position, Color.yellow);

                for (int i = 0; i < m_LimbHandles.Length; i++)
                {
                    weight = (LimbEffector[i].positionWeight + LimbEffector[i].rotationWeight + LimbEffector[i].pullWeight) / 3.0f;
                    DebugHelper.DrawSphere(m_LimbHandles[i].position, 0.05f, Color.Lerp(Color.red, Color.green, weight), 0, false);
                    DebugHelper.DrawLabel(m_LimbHandles[i].name, m_LimbHandles[i].position, Color.yellow);
                }

                for (int i = 0; i < m_HintHandles.Length; i++)
                {
                    weight = HintEffector[i].weight;
                    DebugHelper.DrawSphere(m_HintHandles[i].position, 0.05f, Color.Lerp(Color.red, Color.green, weight), 0, false);
                    DebugHelper.DrawLabel(m_HintHandles[i].name, m_HintHandles[i].position, Color.yellow);
                }

                DebugHelper.DrawSphere(m_BodyHandles.position, 0.1f, Color.green, 0, false);

                //DebugHelper.DrawCircle(new LGameFramework.GameBase.RangeDetection.Circle(m_BodyHandles.position, 1f), Color.green);
            }

        }
    }
}

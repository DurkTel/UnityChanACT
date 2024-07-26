using Unity.Collections;
using UnityEngine;
using UnityEngine.Animations;

namespace Actioner.Runtime
{
    public struct FullBodyIKJob : IAnimationJob
    {

        #region 头部IK

        public struct LookEffectorHandle
        {
            public TransformSceneHandle lookAt;
            public float eyesWeight;
            public float headWeight;
            public float bodyWeight;
            public float clampWeight;
        }

        public LookEffectorHandle lookAtHandle;

        private void SetLookAtEffector(AnimationStream stream, ref LookEffectorHandle handle)
        {
            if (handle.lookAt.IsValid(stream))
            {
                AnimationHumanStream humanStream = stream.AsHuman();
                humanStream.SetLookAtPosition(handle.lookAt.GetPosition(stream));
                humanStream.SetLookAtEyesWeight(handle.eyesWeight);
                humanStream.SetLookAtHeadWeight(handle.headWeight);
                humanStream.SetLookAtBodyWeight(handle.bodyWeight);
                humanStream.SetLookAtClampWeight(handle.clampWeight);
            }
        }

        #endregion

        #region 四肢IK

        public struct EffectorHandle
        {
            public TransformSceneHandle effector;
            public float positionWeight;
            public float rotationWeight;
            public float pullWeight;
        }

        public EffectorHandle leftFootEffector;
        public EffectorHandle rightFootEffector;
        public EffectorHandle leftHandEffector;
        public EffectorHandle rightHandEffector;

        private void SetEffector(AnimationStream stream, AvatarIKGoal goal, ref EffectorHandle handle)
        {
            if (handle.effector.IsValid(stream))
            {
                AnimationHumanStream humanStream = stream.AsHuman();
                humanStream.SetGoalPosition(goal, handle.effector.GetPosition(stream));
                humanStream.SetGoalRotation(goal, handle.effector.GetRotation(stream));
                humanStream.SetGoalWeightPosition(goal, handle.positionWeight);
                humanStream.SetGoalWeightRotation(goal, handle.rotationWeight);
            }
        }

        public void SetEffectorHandle(AvatarIKGoal goal, EffectorHandle handle)
        {
            switch (goal)
            {
                default: break;
                case AvatarIKGoal.LeftFoot: leftFootEffector = handle; break;
                case AvatarIKGoal.RightFoot: rightFootEffector = handle; break;
                case AvatarIKGoal.LeftHand: leftHandEffector = handle; break;
                case AvatarIKGoal.RightHand: rightHandEffector = handle; break;
            }
        }

        public EffectorHandle GetEffectorHandle(AvatarIKGoal goal)
        {
            switch (goal)
            {
                default:
                case AvatarIKGoal.LeftFoot: return leftFootEffector;
                case AvatarIKGoal.RightFoot: return rightFootEffector;
                case AvatarIKGoal.LeftHand: return leftHandEffector;
                case AvatarIKGoal.RightHand: return rightHandEffector;
            }
        }

        #endregion

        #region 四关节IK

        public struct HintEffectorHandle
        {
            public TransformSceneHandle hint;
            public float weight;
        }

        public HintEffectorHandle leftKneeHintEffector;
        public HintEffectorHandle rightKneeHintEffector;
        public HintEffectorHandle leftElbowHintEffector;
        public HintEffectorHandle rightElbowHintEffector;

        public void SetHintEffectorHandle(AvatarIKHint goal, HintEffectorHandle handle)
        {
            switch (goal)
            {
                default: break;
                case AvatarIKHint.LeftKnee: leftKneeHintEffector = handle; break;
                case AvatarIKHint.RightKnee: rightKneeHintEffector = handle; break;
                case AvatarIKHint.LeftElbow: leftElbowHintEffector = handle; break;
                case AvatarIKHint.RightElbow: rightElbowHintEffector = handle; break;
            }
        }

        private void SetHintEffector(AnimationStream stream, AvatarIKHint goal, ref HintEffectorHandle handle)
        {
            if (handle.hint.IsValid(stream))
            {
                AnimationHumanStream humanStream = stream.AsHuman();
                humanStream.SetHintPosition(goal, handle.hint.GetPosition(stream));
                humanStream.SetHintWeightPosition(goal, handle.weight);
            }
        }


        #endregion

        #region 身体质心IK

        public struct BodyEffectorHandle
        {
            public TransformSceneHandle body;
        }

        public BodyEffectorHandle bodyEffector;
        public Vector3 bodyPosition;

        private void SetBodyEffector(AnimationStream stream, ref BodyEffectorHandle handle)
        {
            if (handle.body.IsValid(stream))
            {
                AnimationHumanStream humanStream = stream.AsHuman();
                humanStream.bodyRotation = handle.body.GetRotation(stream);
            }
        }

        #endregion

        #region 四肢对身体质心的影响
        public struct IKLimbHandle
        {
            public TransformStreamHandle top;
            public TransformStreamHandle middle;
            public TransformStreamHandle end;
            public float maximumExtension;
            public float limitmumExtension;
        }

        public IKLimbHandle leftArm;
        public IKLimbHandle rightArm;
        public IKLimbHandle leftLeg;
        public IKLimbHandle rightLeg;

        public float stiffness;

        private IKLimbHandle GetIKLimbHandle(AvatarIKGoal goal)
        {
            switch (goal)
            {
                default:
                case AvatarIKGoal.LeftFoot: return leftLeg;
                case AvatarIKGoal.RightFoot: return rightLeg;
                case AvatarIKGoal.LeftHand: return leftArm;
                case AvatarIKGoal.RightHand: return rightArm;
            }
        }


        private void SetMaximumExtension(AnimationStream stream, ref IKLimbHandle handle)
        {
            if (handle.maximumExtension == 0)
            {
                Vector3 top = handle.top.GetPosition(stream);
                Vector3 middle = handle.middle.GetPosition(stream);
                Vector3 end = handle.end.GetPosition(stream);

                //以脚为例
                Vector3 localMiddle = middle - top; //大腿到膝关节的距离
                Vector3 localEnd = end - middle; //膝关节到脚底的距离
                //计算关节的长度
                handle.maximumExtension = localMiddle.magnitude + localEnd.magnitude;
                handle.limitmumExtension = localMiddle.magnitude;
            }
        }

        struct LimbPart
        {
            /// <summary>
            /// 肢体相对于身体位置的局部位置
            /// </summary>
            public Vector3 localPosition;
            /// <summary>
            /// 肢体的IKHandler位置
            /// </summary>
            public Vector3 goalPosition;
            /// <summary>
            /// 肢体的IK权重
            /// </summary>
            public float goalWeight;
            /// <summary>
            /// 肢体的推拉IK权重
            /// </summary>
            public float goalPullWeight;
            /// <summary>
            /// 肢体的最大延伸，定义拉伸解算器何时开始在身体上拉伸（弹簧静止长度）
            /// </summary>
            public float maximumExtension;
            /// <summary>
            /// 肢体的最大延伸限制
            /// </summary>
            public float limitmumExtension;
            /// <summary>
            /// 肢体的刚度，在0时肢体放松，在1时肢体非常僵硬
            /// </summary>
            public float stiffness;
        }

        private void PrepareSolvePull(AnimationStream stream, NativeArray<LimbPart> limbParts)
        {
            AnimationHumanStream humanStream = stream.AsHuman();

            Vector3 bodyPosition = humanStream.bodyPosition;

            for (int goalIter = 0; goalIter < 4; goalIter++)
            {
                var effector = GetEffectorHandle((AvatarIKGoal)goalIter);
                var limbHandle = GetIKLimbHandle((AvatarIKGoal)goalIter);
                Vector3 top = limbHandle.top.GetPosition(stream);

                limbParts[goalIter] = new LimbPart
                {
                    localPosition = top - bodyPosition,
                    goalPosition = humanStream.GetGoalPosition((AvatarIKGoal)goalIter),
                    goalWeight = humanStream.GetGoalWeightPosition((AvatarIKGoal)goalIter),
                    goalPullWeight = effector.pullWeight,
                    maximumExtension = limbHandle.maximumExtension,
                    limitmumExtension = limbHandle.limitmumExtension,
                    stiffness = stiffness
                };
            }
        }

        private Vector3 SolvePull(AnimationStream stream)
        {
            AnimationHumanStream humanStream = stream.AsHuman();

            Vector3 originalBodyPosition = humanStream.bodyPosition;
            Vector3 bodyPosition = originalBodyPosition;

            NativeArray<LimbPart> limbParts = new NativeArray<LimbPart>(4, Allocator.Temp);
            PrepareSolvePull(stream, limbParts);

            Vector3 deltaPosition = Vector3.zero;
            for (int goalIter = 0; goalIter < 4; goalIter++)
            {
                var part = limbParts[goalIter];
                Vector3 top = bodyPosition + part.localPosition;
                Vector3 localForce = part.goalPosition - top;
                float restLenght = part.maximumExtension;
                float currentLenght = localForce.magnitude;

                localForce.Normalize();

                var force = Mathf.Max(part.stiffness * (currentLenght - restLenght), 0.0f);
                force = Mathf.Min(force, part.limitmumExtension);

                deltaPosition += (localForce * force * part.goalPullWeight * part.goalWeight);
            }

            bodyPosition += deltaPosition;

            limbParts.Dispose();

            return bodyPosition - originalBodyPosition;
        }


        #endregion

        private void Solve(AnimationStream stream)
        {
            AnimationHumanStream humanStream = stream.AsHuman();

            bodyPosition = humanStream.bodyPosition;
            Vector3 bodyPositionDelta = SolvePull(stream);

            bodyPosition += bodyPositionDelta;
            humanStream.bodyPosition = bodyPosition;

            humanStream.SolveIK();
        }

        public void ProcessAnimation(AnimationStream stream)
        {
            SetMaximumExtension(stream, ref leftArm);
            SetMaximumExtension(stream, ref rightArm);
            SetMaximumExtension(stream, ref leftLeg);
            SetMaximumExtension(stream, ref rightLeg);

            SetEffector(stream, AvatarIKGoal.LeftFoot, ref leftFootEffector);
            SetEffector(stream, AvatarIKGoal.RightFoot, ref rightFootEffector);
            SetEffector(stream, AvatarIKGoal.LeftHand, ref leftHandEffector);
            SetEffector(stream, AvatarIKGoal.RightHand, ref rightHandEffector);

            SetHintEffector(stream, AvatarIKHint.LeftKnee, ref leftKneeHintEffector);
            SetHintEffector(stream, AvatarIKHint.RightKnee, ref rightKneeHintEffector);
            SetHintEffector(stream, AvatarIKHint.LeftElbow, ref leftElbowHintEffector);
            SetHintEffector(stream, AvatarIKHint.RightElbow, ref rightElbowHintEffector);

            SetLookAtEffector(stream, ref lookAtHandle);

            SetBodyEffector(stream, ref bodyEffector);

            Solve(stream);
        }

        public void ProcessRootMotion(AnimationStream stream)
        {
            
        }
    }
}

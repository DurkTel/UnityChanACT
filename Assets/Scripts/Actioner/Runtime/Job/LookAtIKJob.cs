using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

namespace Actioner.Runtime
{
    /// <summary>
    /// 注视Job
    /// </summary>
    public struct LookAtIKJob : IAnimationJob
    {
        /// <summary>
        /// 要注视的目标
        /// </summary>
        public TransformSceneHandle target;

        /// <summary>
        /// 权重
        /// </summary>
        public float eyesWeight, headWeight, bodyWeight, clampWeight;

        public void ProcessAnimation(AnimationStream stream)
        {
            if (target.IsValid(stream))
            {
                AnimationHumanStream humanStream = stream.AsHuman();
                humanStream.SetLookAtPosition(target.GetPosition(stream));
                humanStream.SetLookAtEyesWeight(eyesWeight);
                humanStream.SetLookAtHeadWeight(headWeight);
                humanStream.SetLookAtBodyWeight(bodyWeight);
                humanStream.SetLookAtClampWeight(clampWeight);

                humanStream.SolveIK();
            }
        }

        public void ProcessRootMotion(AnimationStream stream)
        {
        }

    }
}

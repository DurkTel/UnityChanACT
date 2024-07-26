using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;

namespace Actioner.Runtime
{
    /// <summary>
    /// ע��Job
    /// </summary>
    public struct LookAtIKJob : IAnimationJob
    {
        /// <summary>
        /// Ҫע�ӵ�Ŀ��
        /// </summary>
        public TransformSceneHandle target;

        /// <summary>
        /// Ȩ��
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

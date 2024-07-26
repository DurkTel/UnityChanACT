using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;
using UnityEngine.Animations;

namespace Actioner.Runtime
{
    public struct BlendTreeJob : IAnimationJob
    {
        public NativeArray<TransformStreamHandle> handles;

        public NativeArray<float> boneWeights;

        public NativeArray<float> thresholds;

        public float blendValue;

        private void GetInterval(ref int left, ref int right)
        {
            float currentValue = Mathf.Clamp(blendValue, thresholds[0], thresholds[thresholds.Length - 1]);
            for (int i = thresholds.Length - 2; i >= 0; i--)
            {
                if (currentValue >= thresholds[i])
                {
                    left = i;
                    right = i + 1;
                    break;
                }
            }
        }

        public void ProcessAnimation(AnimationStream stream)
        {
            int leftIndex = 0;
            int rightIndex = 0;
            GetInterval(ref leftIndex, ref rightIndex);

            var streamA = stream.GetInputStream(leftIndex);
            var streamB = stream.GetInputStream(rightIndex);

            var numHandles = handles.Length;
            for (var i = 0; i < numHandles; ++i)
            {
                var handle = handles[i];

                var posA = handle.GetLocalPosition(streamA);
                var posB = handle.GetLocalPosition(streamB);
                handle.SetLocalPosition(stream, Vector3.Lerp(posA, posB, blendValue * boneWeights[i]));

                var rotA = handle.GetLocalRotation(streamA);
                var rotB = handle.GetLocalRotation(streamB);
                handle.SetLocalRotation(stream, Quaternion.Slerp(rotA, rotB, blendValue * boneWeights[i]));
            }
        }

        public void ProcessRootMotion(AnimationStream stream)
        {
            
        }
    }
}

using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class AnimationActionCueAsset : GameplayCueAsset
    {
        public override Type GetCueType()
        {
            return typeof(AnimationClipCue);
        }

        public override float GetDefaultLength()
        {
            return animationArg.clip == null ? 0.1f : animationArg.clip.length;
        }

        public AnimationCueArg animationArg;
    }
}

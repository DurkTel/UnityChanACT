using GAS.Runtime;
using System;
using UnityEngine;

namespace UnityChanAct
{
    public class AudioCueAsset : GameplayCueAsset
    {
        public AudioClip audioClip;

        public override Type GetCueType()
        {
            return typeof(AudioCue);   
        }

        public override float GetDefaultLength()
        {
            return audioClip == null ? 1f : audioClip.length;
        }
    }
}

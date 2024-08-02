using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class CueAbilityTrackSpec : TimeLineTrackSpec
    {
        public CueAbilityTrackSpec(AbilitySystemComponent asc, TimeLineTrack trakAsset) : base(asc, trakAsset)
        {
        }

        public override void OnEnterClip(int index, float deltaTime)
        {
            base.OnEnterClip(index, deltaTime);
            var cue = m_ClipsArray[index] as CueAbilityClip;
            cue.OnTrigger(m_ASC);
        }

        public override void OnExitClip(int index, float deltaTime)
        {
            base.OnExitClip(index, deltaTime);

        }
    }
}

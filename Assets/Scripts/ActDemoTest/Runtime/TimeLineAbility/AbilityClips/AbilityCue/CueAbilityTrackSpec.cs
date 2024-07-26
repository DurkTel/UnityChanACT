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

        public override void OnEnterClip(int index)
        {
            base.OnEnterClip(index);
            var cue = m_ClipsArray[index] as CueAbilityClip;
            m_ASC.Cues.TriggerCue(cue.gameplayCue, cue);
        }

        public override void OnExitClip(int index)
        {
            base.OnExitClip(index);

        }
    }
}

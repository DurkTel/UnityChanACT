using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class CueAbilityTrack : TimeLineTrack
    {
        public override TimeLineAbilityClip GetClip()
        {
            return new CueAbilityClip();
        }

        public override TimeLineTrackSpec GetSpec(AbilitySystemComponent asc)
        {
            return new CueAbilityTrackSpec(asc, this);
        }
    }
}

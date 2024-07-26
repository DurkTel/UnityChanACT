using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class EffectAbilityTrack : TimeLineTrack
    {
        public override Color TrackColor => new Color(0.141f, 0.333f, 0.537f, 1f);

        public override TimeLineAbilityClip GetClip()
        {
            return new EffectAbilityClip();
        }

        public override TimeLineTrackSpec GetSpec(AbilitySystemComponent asc)
        {
            return new EffectAbilityTrackSpec(asc, this);
        }
    }
}

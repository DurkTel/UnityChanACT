using System;

namespace GAS.Runtime
{
    public class CueAbilityTrack : TimeLineTrack
    {
        public override Type GetClipType()
        {
            return typeof(CueAbilityClip);
        }

        public override TimeLineTrackSpec GetSpec(AbilitySystemComponent asc)
        {
            return new CueAbilityTrackSpec(asc, this);
        }
    }
}

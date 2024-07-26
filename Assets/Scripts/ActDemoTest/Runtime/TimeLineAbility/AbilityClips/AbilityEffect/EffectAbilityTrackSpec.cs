using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class EffectAbilityTrackSpec : TimeLineTrackSpec
    {
        public EffectAbilityTrackSpec(AbilitySystemComponent asc, TimeLineTrack trakAsset) : base(asc, trakAsset)
        {
        }

        public override void OnEnterClip(int index)
        {
            base.OnEnterClip(index);
            var effect = m_ClipsArray[index] as EffectAbilityClip;
            m_ASC.Effects.TryAddEffect<GameplayEffect>(effect.gameplayEffect);
        }

        public override void OnExitClip(int index)
        {
            base.OnExitClip(index);

        }
    }
}

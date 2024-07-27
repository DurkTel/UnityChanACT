using System.Collections;
using System.Collections.Generic;
using UnityChanAct;
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
            switch (effect.gameplayEffect.Type)
            {
                case "ComboEffect":
                    m_ASC.Effects.TryAddEffect<ComboEffect>(effect.gameplayEffect, effect);
                    break;
                case "HitBoxEffect":
                    m_ASC.Effects.TryAddEffect<HitBoxEffect>(effect.gameplayEffect, effect);
                    break;
                default:
                    m_ASC.Effects.TryAddEffect<GameplayEffect>(effect.gameplayEffect, effect);
                    break;
            }
        }

        public override void OnExitClip(int index)
        {
            base.OnExitClip(index);

        }
    }
}

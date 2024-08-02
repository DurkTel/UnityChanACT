using UnityChanAct;
using UnityEngine;

namespace GAS.Runtime
{
    public class EffectAbilityTrackSpec : TimeLineTrackSpec
    {
        protected GameplayEffect m_GameplayEffect;

        public EffectAbilityTrackSpec(AbilitySystemComponent asc, TimeLineTrack trakAsset) : base(asc, trakAsset)
        {
        }

        public override void OnEnterClip(int index, float deltaTime)
        {
            base.OnEnterClip(index, deltaTime);
            var effect = m_ClipsArray[index] as EffectAbilityClip;
            switch (effect.gameplayEffect.Type)
            {
                case "ComboEffect":
                    m_ASC.Effects.TryAddEffect<ComboEffect>(effect.gameplayEffect, out m_GameplayEffect, effect);
                    break;
                case "HitBoxEffect":
                    m_ASC.Effects.TryAddEffect<HitBoxEffect>(effect.gameplayEffect, out m_GameplayEffect, effect);
                    break;
                case "AffectedEffect":
                    m_ASC.Effects.TryAddEffect<AffectedEffect>(effect.gameplayEffect, out m_GameplayEffect, effect);
                    break;
                case "SearchEffect":
                    m_ASC.Effects.TryAddEffect<SearchEffect>(effect.gameplayEffect, out m_GameplayEffect, effect);
                    break;
                default:
                    m_ASC.Effects.TryAddEffect<TimeLineEffect>(effect.gameplayEffect, out m_GameplayEffect, effect);
                    break;
            }
        }

        public override void OnUpdateClip(int index, float deltaTime)
        {
            base.OnUpdateClip(index, deltaTime);

            if (m_GameplayEffect != null)
                m_GameplayEffect.OnUpdate(deltaTime);
        }

        public override void Dispose()
        {
            base.Dispose();

            if (m_GameplayEffect != null)
            {
                m_ASC.Effects.RemoveEffect(m_GameplayEffect, false);
                m_GameplayEffect = null;
            }
        }
    }
}

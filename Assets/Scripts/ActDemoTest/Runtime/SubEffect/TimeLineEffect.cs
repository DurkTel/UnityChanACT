using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class TimeLineEffect : GameplayEffect
    {
        public override void OnUpdateTime(params object[] paramArgs)
        {
            var clip = paramArgs[0] as EffectAbilityClip;
            Duration = clip.Duration * TimeLineAbility.c_TimeFrameSec;
            base.OnUpdateTime(paramArgs);
        }
    }
}

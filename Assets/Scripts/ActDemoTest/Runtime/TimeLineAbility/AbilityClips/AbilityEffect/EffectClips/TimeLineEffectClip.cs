using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    [System.Serializable]
    public class TimeLineEffectClip : EffectAbilityClip
    {

#if UNITY_EDITOR

        protected override bool OnCustomPropertyGUI()
        {
            return false;
        }
#endif
    }
}

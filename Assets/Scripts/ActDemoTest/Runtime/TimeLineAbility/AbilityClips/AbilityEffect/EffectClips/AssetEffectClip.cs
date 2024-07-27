using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    [System.Serializable]
    public class AssetEffectClip : EffectAbilityClip
    {
        protected override bool OnCustomPropertyGUI()
        {
            return false;
        }
    }
}

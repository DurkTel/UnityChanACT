using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    [AttributeUsage(AttributeTargets.Field)]
    public class AbilityInject : Attribute
    {
        internal string abilityName;

        public AbilityInject(string abilityName)
        {
            this.abilityName = abilityName;
        }
    }
}

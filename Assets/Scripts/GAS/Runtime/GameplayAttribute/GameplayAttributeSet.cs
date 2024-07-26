using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public abstract class GameplayAttributeSet
    {
        public abstract string[] AttributeNames { get; }

        public abstract GameplayAttribute this[string name] { get; }
    }
}

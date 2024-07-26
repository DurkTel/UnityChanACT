using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public abstract class GameplayCueAsset : ScriptableObject
    {
        public abstract Type GetCueType();
        public abstract float GetDefaultLength();
        public string Name { get { return GetType().Name; } }

        public string Description;
    }
}

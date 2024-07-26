using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;
using UnityEngine.Animations;

namespace Actioner.Runtime
{
    public interface IActionerProperty
    {
        public AnimationScriptPlayable Playable { get; set; }

        public ActionerPlayable Actioner { get; set; }

        public NativeArray<PropertyStreamHandle> Property { get; set; }

    }
}

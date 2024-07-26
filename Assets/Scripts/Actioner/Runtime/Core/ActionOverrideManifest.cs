using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Actioner.Runtime
{
    [CreateAssetMenu(fileName = "ActionOverrideManifest", menuName = "Actioner/ActionOverrideManifest")]
    public class ActionOverrideManifest : ActionManifest
    {
        public ActionManifest manifest;
    }
}

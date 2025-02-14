using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Editor
{
    [FilePath("ProjectSettings/GameplayConfigureAsset.asset")]
    public class GameplayConfigureAsset : ScriptableSingleton<GameplayConfigureAsset>
    {
        [SerializeField]
        public string ScriptGenPath = "Assets/Scripts/GAS/Runtime/Gen";

        [SerializeField]
        public string AssetGenPath = "Assets/Scripts/GAS/Runtime/Config";

        public void SaveAsset()
        {
            //if (Instance == this) return;
            UpdateAsset(this);
            Save();
        }
    }
}

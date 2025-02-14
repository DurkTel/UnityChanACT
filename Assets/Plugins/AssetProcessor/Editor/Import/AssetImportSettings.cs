using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class AssetImportSettings : AssetPostprocessor
{
    private static void OnPostprocessAllAssets(string[] importedAssets, string[] deletedAssets, string[] movedAssets, string[] movedFromAssetPaths)
    {
        //if (importedAssets.Length == 1 && importedAssets[0] == "Assets/LGEditorAssetManifest.asset")
        //    return;


        //AssetManifest_Editor.RefreshEditorAssetsManifest();

    }
}

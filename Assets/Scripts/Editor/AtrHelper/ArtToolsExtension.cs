using System.IO;
using UnityEditor;
using UnityEngine;

/// <summary>
/// ����������չ
/// </summary>
public class ArtToolsExtension
{

    private readonly static string s_ExportPath = Application.dataPath + "/ArtExport";


    #region ��������λSkinMeshԤ����


    [MenuItem("GameObject/ArtTools/����SkinMeshԤ����")]
    public static void ExportSkinMesh()
    {
        string path = s_ExportPath + "/SkinMesh";

        GameObject prefab = new GameObject();

        GameObject[] allSelectObject = Selection.gameObjects;
        if (allSelectObject == null || allSelectObject.Length == 0) return;
        foreach (GameObject selectObject in allSelectObject)
        {
            InternalExport(selectObject, prefab.transform);
        }

        if (!Directory.Exists(path))
            Directory.CreateDirectory(path);

        path = path + "/SkinMeshPreafb.prefab";

        if (File.Exists(path))
            AssetDatabase.DeleteAsset(path);

        PrefabUtility.SaveAsPrefabAsset(prefab, path);

        Object.DestroyImmediate(prefab);
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();
    }

    private static void InternalExport(GameObject go, Transform parent)
    {
        if (go == null) return;
        SkinnedMeshRenderer skin = go.GetComponent<SkinnedMeshRenderer>();
        if (skin == null) return;

        GameObject newSkinObj = new GameObject(skin.name);
        newSkinObj.transform.SetParent(parent.transform);

        SkinnedMeshRenderer newSkin = newSkinObj.AddComponent<SkinnedMeshRenderer>();
        newSkin.sharedMesh = skin.sharedMesh;
        newSkin.sharedMaterials = skin.sharedMaterials;
        newSkin.localBounds = skin.localBounds;

        if (skin.rootBone != null)
        {
            GameObject rootBone = new GameObject(skin.rootBone.name);
            rootBone.transform.SetParent(newSkinObj.transform);

            foreach (Transform bone in skin.bones)
            {
                GameObject subBone = new GameObject(bone.name);
                subBone.transform.SetParent(rootBone.transform);
            }
            newSkin.rootBone = rootBone.transform;
        }

    }

    #endregion



    #region ��ȡģ�Ͷ���

    [MenuItem("Assets/ArtTools/��ȡģ�Ͷ���")]
    public static void ExtractAnimationClips()
    {
        var outputDir = s_ExportPath + "/AnimationClips";
        if (!Directory.Exists(outputDir))
            Directory.CreateDirectory(outputDir);

        GameObject[] selectedObject = Selection.gameObjects;

        foreach (GameObject obj in selectedObject)
        {
            var path1 = AssetDatabase.GetAssetPath(obj);
            Debug.Log(path1);
            var subAssets = AssetDatabase.LoadAllAssetRepresentationsAtPath(AssetDatabase.GetAssetPath(obj));
            foreach (var item in subAssets)
            {
                if (item is AnimationClip clip)
                {
                    AnimationClip newClip = new AnimationClip();
                    EditorUtility.CopySerialized(clip, newClip);
                    string path = BuildUtility.GetProjectPath(outputDir);
                    string file = string.Format("{0}/{1}.anim", path, clip.name);
                    AssetDatabase.CreateAsset(newClip, file);  
                }
            }

        }

        AssetDatabase.Refresh();
    }

    #endregion
}

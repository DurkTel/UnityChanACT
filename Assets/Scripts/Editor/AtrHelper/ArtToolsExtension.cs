using Palmmedia.ReportGenerator.Core.Parser.Analysis;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

/// <summary>
/// 美术工具扩展
/// </summary>
public class ArtToolsExtension
{

    private readonly static string s_ExportPath = Application.dataPath + "/ArtExport";


    #region 提取单部位SkinMesh预制体


    [MenuItem("GameObject/ArtTools/提取SkinMesh预制体")]
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

    #region 提取模型动画

    [MenuItem("Assets/ArtTools/提取模型动画")]
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

    #region 提取RootMotion信息
    [MenuItem("Assets/ArtTools/提取RootMotion信息")]
    public static void ExtractRootMotion()
    {
        var outputDir = s_ExportPath + "/RootMotionData";
        if (!Directory.Exists(outputDir))
            Directory.CreateDirectory(outputDir);

        Object[] selectedObject = Selection.objects;
        foreach (var item in selectedObject)
        {
            if (item is AnimationClip clip)
            {
                var bindings = AnimationUtility.GetCurveBindings(clip);
                AnimationCurve posX = null, posY = null, posZ = null;
                AnimationCurve rotX = null, rotY = null, rotZ = null, rotW = null;

                foreach (var binding in bindings)
                {
                    if (binding.propertyName == "RootT.x")
                        posX = AnimationUtility.GetEditorCurve(clip, binding);
                    if (binding.propertyName == "RootT.y")
                        posY = AnimationUtility.GetEditorCurve(clip, binding);
                    if (binding.propertyName == "RootT.z")
                        posZ = AnimationUtility.GetEditorCurve(clip, binding);
                    if (binding.propertyName == "RootQ.x")
                        rotX = AnimationUtility.GetEditorCurve(clip, binding);
                    if (binding.propertyName == "RootQ.y")
                        rotY = AnimationUtility.GetEditorCurve(clip, binding);
                    if (binding.propertyName == "RootQ.z")
                        rotZ = AnimationUtility.GetEditorCurve(clip, binding);
                    if (binding.propertyName == "RootQ.w")
                        rotW = AnimationUtility.GetEditorCurve(clip, binding);
                }

                if (posX == null || posY == null || posZ == null || rotX == null || rotY == null || rotZ == null)
                {
                    Debug.LogError("Position curves not found.");
                    return;
                }

                // 存储提取的Root Motion数据
                List<Vector3> rootPositions = new List<Vector3>();
                List<Quaternion> rootRotations = new List<Quaternion>();

                float totalTime = clip.length;
                float deltaTime = 1f / 50f;

                for (float t = 0f; t <= totalTime; t += deltaTime)
                {
                    var position = new Vector3(
                        posX.Evaluate(t),
                        posY.Evaluate(t),
                        posZ.Evaluate(t)
                    );
                    var rotation = new Quaternion(
                        rotX.Evaluate(t),
                        rotY.Evaluate(t),
                        rotZ.Evaluate(t),
                        rotW.Evaluate(t)
                    );
                    rootPositions.Add(position);
                    rootRotations.Add(rotation);
                }

                using (StreamWriter writer = new StreamWriter(outputDir + "/" + clip.name + ".txt"))
                {
                    writer.WriteLine("Time\tPosition\tRotation");
                    for (int i = 0; i < rootPositions.Count; i++)
                    {
                        writer.WriteLine($"{i}\t{rootPositions[i]}\t{rootRotations[i]}");
                    }
                }

                AssetDatabase.Refresh();
            }
        }
    }

    #endregion

    #region 刪除丟失脚本
    [MenuItem("Assets/ArtTools/刪除丟失脚本")]
    public static void CleanupSelectedPrefabs()
    {
        foreach (var s in Selection.gameObjects)
        {
            var assetPath = AssetDatabase.GetAssetPath(s);
            var go = PrefabUtility.LoadPrefabContents(assetPath);
            ClearUp(go);
            PrefabUtility.SaveAsPrefabAsset(go, assetPath);
            PrefabUtility.UnloadPrefabContents(go);
        }

        void ClearUp(GameObject go)
        {
            GameObjectUtility.RemoveMonoBehavioursWithMissingScript(go);

            for (int i = 0; i < go.transform.childCount; i++)
            {
                ClearUp(go.transform.GetChild(i).gameObject);
            }
        }
    }
    #endregion

    #region 合并AnimationClip

    [MenuItem("Assets/ArtTools/合并动画片段")]
    public static void CombineAnimationClips()
    {
        var outputDir = s_ExportPath + "/AnimationClips";
        if (!Directory.Exists(outputDir))
            Directory.CreateDirectory(outputDir);

        AnimationClip newClip = new AnimationClip();
        newClip.name = "CombinedClip";

        Object[] selectedObject = Selection.objects;

        Dictionary<EditorCurveBinding, AnimationCurve> combinedCurves = new Dictionary<EditorCurveBinding, AnimationCurve>();
        float currentTimeOffset = 0f; // 用于记录当前时间的偏移量

        Vector3 lastPositionOffset = Vector3.zero;
        Quaternion lastRotationOffset = Quaternion.identity;

        // 遍历所有的动画片段
        for (int i = 0; i < selectedObject.Length; i++)
        {
            var clip = selectedObject[i] as AnimationClip;
            if (clip == null) 
                continue;
            // 获取当前动画的所有曲线
            foreach (var binding in AnimationUtility.GetCurveBindings(clip))
            {
                AnimationCurve curve = AnimationUtility.GetEditorCurve(clip, binding);

                if (!combinedCurves.ContainsKey(binding))
                {
                    // 如果曲线还没有被处理过，创建新的曲线
                    combinedCurves[binding] = new AnimationCurve();
                }

                // 获取现有的曲线
                AnimationCurve combinedCurve = combinedCurves[binding];

                if (binding.propertyName.Contains("RootT"))
                {
                    // 处理根运动位置累加
                    Vector3 positionOffset = lastPositionOffset; // 获取上一个动画的位移偏移量
                    foreach (var key in curve.keys)
                    {
                        float newValue = key.value + (binding.propertyName == "RootT.x" ? positionOffset.x :
                                                                binding.propertyName == "RootT.y" ? positionOffset.y :
                                                                positionOffset.z);
                        Keyframe newKey = new Keyframe(key.time + currentTimeOffset, newValue, key.inTangent, key.outTangent);
                        combinedCurve.AddKey(newKey);
                    }
                }

                // 偏移当前动画的所有关键帧并添加到合并的曲线中
                foreach (var key in curve.keys)
                {
                    Keyframe newKey = new Keyframe(key.time + currentTimeOffset, key.value, key.inTangent, key.outTangent);
                    combinedCurve.AddKey(newKey);
                }

                //记录根运动
                if (binding.propertyName.Contains("RootT.x"))
                    lastPositionOffset.x = curve.keys[curve.length - 1].value;
                //else if (binding.propertyName.Contains("RootT.y"))
                //    lastPositionOffset.y = curve.keys[curve.length - 1].value;
                else if (binding.propertyName.Contains("RootT.z"))
                    lastPositionOffset.z = curve.keys[curve.length - 1].value;
                else if (binding.propertyName.Contains("RootQ.x"))
                    lastRotationOffset.x = curve.keys[curve.length - 1].value;
                else if (binding.propertyName.Contains("RootQ.y"))
                    lastRotationOffset.y = curve.keys[curve.length - 1].value;
                else if (binding.propertyName.Contains("RootQ.z"))
                    lastRotationOffset.z = curve.keys[curve.length - 1].value;
                else if (binding.propertyName.Contains("RootQ.w"))
                    lastRotationOffset.w = curve.keys[curve.length - 1].value;
            }

            // 累加时间偏移量
            currentTimeOffset += clip.length;
        }

        // 将合并的曲线设置到新的动画片段中
        foreach (var entry in combinedCurves)
        {
            newClip.SetCurve(entry.Key.path, entry.Key.type, entry.Key.propertyName, entry.Value);
        }

        string path = BuildUtility.GetProjectPath(outputDir);
        string file = string.Format("{0}/{1}.anim", path, newClip.name);
        AssetDatabase.CreateAsset(newClip, file);
        AssetDatabase.Refresh();
    }
    #endregion
}

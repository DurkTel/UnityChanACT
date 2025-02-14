using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

public class DisableDebug : MonoBehaviour
{
    AssetBundle ab;

    System.Diagnostics.Stopwatch stopwatch;

    Hash128 hash;
    void Start()
    {
        stopwatch = new System.Diagnostics.Stopwatch();

        hash = new Hash128();
    }

    private void OnDestroy()
    {
        UnloadAB();
    }

    private static string s_Path = Path.Combine(Application.streamingAssetsPath, "StandaloneWindows/002/artmodules/fonts.asset");
    private static uint s_Crc = 437049396;
    public void DOAB()
    {
        StartCoroutine("DOABFile");
    }

    public IEnumerator DOABFile()
    {
        long memoryBefore = UnityEngine.Profiling.Profiler.GetTotalAllocatedMemoryLong();
        stopwatch.Restart();
        stopwatch.Start();
        var wr = AssetBundle.LoadFromFileAsync(s_Path, s_Crc);
        yield return wr;
        ab = wr.assetBundle;
        stopwatch.Stop();
        long memoryAfter = UnityEngine.Profiling.Profiler.GetTotalAllocatedMemoryLong();
        Debug.Log($"内存占用: {memoryAfter - memoryBefore}KB  加载时间 :{stopwatch.ElapsedMilliseconds}毫秒");
    }

    public void DOAB2()
    {
        StartCoroutine("DOABWeb");  
    }

    public IEnumerator DOABWeb()
    {
        long memoryBefore = UnityEngine.Profiling.Profiler.GetTotalAllocatedMemoryLong();
        stopwatch.Restart();
        stopwatch.Start();
        var uwr = UnityWebRequestAssetBundle.GetAssetBundle(s_Path, hash, s_Crc);
        yield return uwr.SendWebRequest();
        ab = DownloadHandlerAssetBundle.GetContent(uwr);
        stopwatch.Stop();
        long memoryAfter = UnityEngine.Profiling.Profiler.GetTotalAllocatedMemoryLong();
        Debug.Log($"内存占用: {memoryAfter - memoryBefore}KB  加载时间 :{stopwatch.ElapsedMilliseconds}毫秒");
    }

    public void UnloadAB()
    {
        if (ab == null)
            return;
        ab.Unload(true);
        ab = null;
    }
}

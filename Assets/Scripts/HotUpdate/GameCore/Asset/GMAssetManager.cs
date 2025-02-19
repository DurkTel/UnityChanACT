using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using LGameFramework.GameBase;
using UnityEngine.Events;
using System.Collections;
using Cysharp.Threading.Tasks;

namespace LGameFramework.GameCore.Asset
{
    public enum AssetLoadMode
    {
        AssetBundle,
        Editor
    }
    public sealed class GMAssetManager : FrameworkModule
    {
        private static AssetLoadMode s_AssetLoadMode;
        public static AssetLoadMode AssetLoadMode { get { return s_AssetLoadMode; } }
        public override int Priority { get { return 99; } }

        /// <summary>
        /// 正在加载的资源加载器
        /// </summary>
        private GameDictionary<string, Loader> m_AssetLoaders;
        public GameDictionary<string, Loader> AssetLoaders { get { return m_AssetLoaders; } } 
        /// <summary>
        /// 正在加载的AB加载器
        /// </summary>
        private List<AssetBundleLoader> m_AssetBundleLoaders;
        public List<AssetBundleLoader> AssetBundleLoaders { get { return m_AssetBundleLoaders; } }
        /// <summary>
        /// 加载完成的列表
        /// </summary>
        private List<string> m_CompleteList;
        public List<string> CompleteList { get { return m_CompleteList; } }
        /// <summary>
        /// ab包资源清单
        /// </summary>
        private AssetManifest_Bundle m_FileManifest;
        /// <summary>
        /// 所有加载过的ab包
        /// </summary>
        private Dictionary<string, AssetBundleRecord> m_AllAB;
        public Dictionary<string, AssetBundleRecord> AllAB { get { return m_AllAB; } }
        /// <summary>
        /// 等待释放的资源
        /// </summary>
        private GameDictionary<string, float> m_WaitDestroyList;
        public GameDictionary<string, float> WaitDestroyList { get { return m_WaitDestroyList; } }
        /// <summary>
        /// 等待释放的ab包列表
        /// </summary>
        private List<string> m_WaitDestroyABList;
        public List<string> WaitDestroyABList { get { return m_WaitDestroyABList; } set { m_WaitDestroyABList = value; } }
        /// <summary>
        /// 等待释放ab包的时间
        /// </summary>
        private float m_WaitDestroyTime;
        public float WaitDestroyTime { get { return m_WaitDestroyTime; } }
        /// <summary>
        /// 文件下载器
        /// </summary>
        private AssetFileDownloadQueue m_FileDownloadQueue;

        #region 生命周期函数
        public override void OnInit()
        {
            s_AssetLoadMode = GameConfig.Instance.assetLoadMode == 0 ? AssetLoadMode.Editor : AssetLoadMode.AssetBundle;

            m_AssetLoaders = new GameDictionary<string, Loader>();
            m_CompleteList = new List<string>();
            m_AllAB = new Dictionary<string, AssetBundleRecord>(100);
            m_WaitDestroyList = new GameDictionary<string, float>(100);
            m_WaitDestroyABList = new List<string>(100);
            m_WaitDestroyTime = 10f;
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            if (m_FileDownloadQueue != null)
                m_FileDownloadQueue.Update();

            if (m_AssetBundleLoaders != null && m_AssetBundleLoaders.Count > 0)
            {
                AssetBundleLoader abLoader;
                for (int i = m_AssetBundleLoaders.Count; i > 0; i--)
                {
                    abLoader = m_AssetBundleLoaders[i];
                    abLoader.Update();
                    if (abLoader.IsDone)
                    {
                        abLoader.onComplete?.Invoke(abLoader);
                        abLoader.Dispose();
                        m_AssetBundleLoaders.RemoveAt(i);
                    }
                }
            }

            if (m_AssetLoaders.Count <= 0) return;

            Loader loader;

            //更新当前每个加载器的进度
            for (int i = 0; i < m_AssetLoaders.keyList.Count; i++)
            {
                string name = m_AssetLoaders.keyList[i];
                loader = m_AssetLoaders[name];
                loader.onProgress?.Invoke(loader.Progress);

                loader.Update();

                if (loader.IsDone)
                    m_CompleteList.Add(name);
            }


            if (m_CompleteList.Count <= 0) return;

            //加载完成 移除加载器
            foreach (string name in m_CompleteList)
            {
                if (m_AssetLoaders.TryGetValue(name, out loader))
                {
                    loader.onComplete?.Invoke(loader);
                    loader.Dispose();
                    m_AssetLoaders.Remove(name);
                }
            }

            m_CompleteList.Clear();
        }

        public override void LateUpdate(float deltaTime, float unscaleDeltaTime)
        {
            //先检测需要销毁的资源
            if (m_WaitDestroyList.Count > 0)
            {
                AssetCache.RawObjectInfo rawInfo;
                int count = m_WaitDestroyList.Count - 1;
                string name;
                for (int i = count; i >= 0; i--)
                {
                    name = m_WaitDestroyList.keyList[i];
                    if (unscaleDeltaTime - m_WaitDestroyList[name] >= m_WaitDestroyTime)
                    {
                        AssetCache.RawAssetMap.TryGetValue(name, out rawInfo);
                        //AB包模式下计算引用
                        if (AssetLoadMode == AssetLoadMode.AssetBundle)
                        {
                            //这个资源的AB引用减1
                            if (TryGetAssetBundle(rawInfo.bundleName, out AssetBundleRecord ab))
                                ab.RawReferenceCount--;
                        }

                        //销毁源对象
                        if (rawInfo.rawObject is TextAsset)
                            UnityEngine.Object.DestroyImmediate(rawInfo.rawObject);
                        if (!(rawInfo.rawObject is GameObject))
                            Resources.UnloadAsset(rawInfo.rawObject);

                        AssetCache.RemoveRawObject(rawInfo.asstName);
                        m_WaitDestroyList.Remove(name);
                    }
                }
            }

            //再检查需要销毁的AB包
            if (m_AllAB.Count <= 0) return;

            string abName;
            AssetBundleRecord record;
            foreach (var ab in m_AllAB)
            {
                abName = ab.Key;
                record = ab.Value;
                if (m_WaitDestroyABList.Contains(abName) || !record.IsLoadComplete)
                    continue;

                //依赖引用为0 且源对象引用为0 且不在加载资源中 准备开始卸载
                if (record.DpendsReferenceCount <= 0 && record.RawReferenceCount <= 0 && !record.IsAssetLoading)
                {
                    record.BeginUnloadTime = unscaleDeltaTime;
                    m_WaitDestroyABList.Add(abName);
                }
            }

            for (int i = m_WaitDestroyABList.Count - 1; i >= 0; i--)
            {
                abName = m_WaitDestroyABList[i];
                record = m_AllAB[abName];
                if (unscaleDeltaTime - record.BeginUnloadTime >= m_WaitDestroyTime)
                {
                    record.Unload(true);
                    Pool.Release(record);
                    m_WaitDestroyABList.RemoveAt(i);
                    m_AllAB.Remove(abName);

                    //减少依赖引用
                    AssetManifest_Bundle assetManifest = GetAssetManifest_Bundle();
                    string[] depends = assetManifest.GetDependsName(abName);
                    foreach (string depend in depends)
                        if (TryGetAssetBundle(depend, out record))
                            record.DpendsReferenceCount--;
                }
            }
        }
        #endregion

        #region AB包相关
        /// <summary>
        /// 获取资源清单
        /// </summary>
        /// <returns></returns>
        internal AssetManifest_Bundle GetAssetManifest_Bundle()
        {
            if (m_FileManifest == null)
            {
                m_FileManifest = ScriptableObject.CreateInstance<AssetManifest_Bundle>();
                string path = Path.Combine(GameConfig.Instance.downloadDataPath.AssetPath, GameConfig.Instance.assetManifestFileName);
                if(!File.Exists(path))
                    path = Path.Combine(GameConfig.Instance.buildingPath.AssetPath, GameConfig.Instance.assetManifestFileName);

                string allData = File.ReadAllText(path);
                if (!string.IsNullOrEmpty(allData))
                    JsonHelper.FromJsonOverwrite(allData, m_FileManifest, true);
            }

            return m_FileManifest;
        }

        /// <summary>
        /// 记录一个AB包标识
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        internal AssetBundleRecord RecordAssetBundle(string abName)
        {
            AssetBundleRecord record;
            if (!m_AllAB.TryGetValue(abName, out record))
            {
                record = Pool.Get<AssetBundleRecord>();
                record.BundleName = abName;
                m_AllAB.Add(abName, record);
            }

            return record;
        }

        /// <summary>
        /// 记录一个AB包
        /// </summary>
        /// <param name="abName">包名</param>
        /// <param name="bundle">包</param>
        internal AssetBundleRecord AddAssetBundle(string abName, AssetBundle bundle)
        {
            AssetBundleRecord record;
            if (!m_AllAB.TryGetValue(abName, out record))
                record = RecordAssetBundle(abName);

            record.AssetBundle = bundle;

            return record;
        }

        /// <summary>
        /// 移除一个AB包
        /// </summary>
        /// <param name="abName">包名</param>
        /// <returns>是否移除成功</returns>
        internal bool RemoveAssetBundle(string abName)
        {
            AssetBundleRecord bundle;
            if (m_AllAB.TryGetValue(abName, out bundle))
            {
                bundle.Unload(true);
                m_AllAB.Remove(abName);
                return true;
            }

            return false;
        }

        /// <summary>
        /// 获取一个AB包
        /// </summary>
        /// <param name="abName">包名</param>
        /// <param name="bundle">包</param>
        /// <returns>是否获取成功</returns>
        public bool TryGetAssetBundle(string abName, out AssetBundleRecord bundle)
        {
            return m_AllAB.TryGetValue(abName, out bundle);
        }

        /// <summary>
        /// 获取一个AB包
        /// </summary>
        /// <param name="abName">包名</param>
        public AssetBundleRecord GetAssetBundle(string abName)
        {
            return m_AllAB.ContainsKey(abName) ? m_AllAB[abName] : null;
        }

        /// <summary>
        /// 是否存在这个AB包
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        internal bool IsExistAssetBundle(string abName)
        {
            return m_AllAB.ContainsKey(abName);
        }

        /// <summary>
        /// 加载AB包
        /// </summary>
        /// <param name="abName">包名</param>
        /// <param name="async">是否异步</param>
        internal Loader LoadAssetBundle(string abName)
        {
            string[] depends = GetAssetManifest_Bundle().GetDependsName(abName);
        
            foreach (string depend in depends) //先加载依赖
                LoadAssetBundleInternal(depend, false, true);

            return LoadAssetBundleInternal(abName, false);
        }

        /// <summary>
        /// 异步加载AB包
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        internal Coroutine LoadAssetBundleAsync(string abName)
        {
            return StartCoroutine(LoadDependsAssetBundle(abName));
        }

        /// <summary>
        /// 异步加载依赖
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        private IEnumerator LoadDependsAssetBundle(string abName)
        {
            string[] depends = GetAssetManifest_Bundle().GetDependsName(abName);
            int length = depends.Length;
            int index = 0;
            while (index < length)
            { 
                var depend = depends[index];
                Loader loader = LoadAssetBundleInternal(depend, true, true);
                yield return loader;
                index++;
            }

            yield return LoadAssetBundleInternal(abName, true);
            GameLogger.DEBUG("加载完AB"+ abName);
        }

        /// <summary>
        /// 加载AB包
        /// </summary>
        /// <param name="abName">包名</param>
        /// <param name="async">是否异步</param>
        /// <param name="passive">是否被动</param>
        private Loader LoadAssetBundleInternal(string abName, bool async, bool passive = false)
        {
            AssetBundleRecord record;
            if (!TryGetAssetBundle(abName, out record) && !m_AssetLoaders.ContainsKey(abName))
            {
                AssetBundleLoader loader = Pool.Get<AssetBundleLoader>();
                loader.SetData(abName, async, passive);
                loader.AssetModule = this;
                loader.Update();
                m_AssetLoaders.Add(abName, loader);

            }
            else if (passive)
                record.DpendsReferenceCount++; //已经加载过了 引用计数加1

            //如果是等待销毁的 移除标识
            RemoveABWaitDestroy(abName);

            return m_AssetLoaders.GetValueOrDefault(abName, null);
        }

        #endregion

        #region 外部加载接口
        /// <summary>
        /// 异步加载
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="assetName"></param>
        /// <returns></returns>
        internal Loader LoadAssetAsync<T>(string assetName)
        {
            return LoadAssetAsync(assetName, typeof(T));
        }

        internal void LoadAssetAsync<T>(string assetName, UnityAction<Loader> callBack)
        {
            Loader loader = LoadAssetAsync(assetName, typeof(T));
            loader.onComplete += callBack;
        }

        /// <summary>
        /// 异步加载
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        internal Loader LoadAssetAsync(string assetName, Type type)
        {
            return LoadAssetInternal(assetName, type, true);
        }

        /// <summary>
        /// 同步加载
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        internal T LoadAsset<T>(string assetName) where T : UnityEngine.Object
        {
            Loader loader = LoadAssetInternal(assetName, typeof(T), false);
            loader.Update();

            if (typeof(T) == typeof(GameObject))
                return loader.GetInstantiate<T>();

            return loader.GetRawObject<T>();
        }

        private Loader LoadAssetInternal(string assetName, Type type, bool async)
        {
            Loader loader;

            RemoveWaitDestroy(assetName);
            if (!m_AssetLoaders.TryGetValue(assetName, out loader))
            {
                switch (s_AssetLoadMode)
                {
                    case AssetLoadMode.AssetBundle:
                        loader = Pool.Get<AssetLoader>();
                        loader.SetData(assetName.ToLower(), type, async);
                        break;
                    case AssetLoadMode.Editor:
                        loader = Pool.Get<AssetEditorLoader>();
                        loader.SetData(assetName, type);
                        break;
                }

                loader.AssetModule = this;
                m_AssetLoaders.Add(assetName, loader);
            }

            return loader;
        }

        /// <summary>
        /// 添加一个待下载的资源
        /// </summary>
        /// <param name="downloadURL"></param>
        /// <param name="downloadPath"></param>
        /// <returns></returns>
        internal AssetFileDownloader EnqueueDownload(string downloadURL, string downloadPath)
        {
            m_FileDownloadQueue ??= new AssetFileDownloadQueue();
            return m_FileDownloadQueue.Enqueue(downloadURL, downloadPath);
        }

        /// <summary>
        /// 移除加载器
        /// </summary>
        /// <param name="assetName"></param>
        internal void RemoveAssetLoader(string assetName)
        {
            if (m_AssetLoaders.TryGetValue(assetName, out Loader loader))
            {
                loader.Dispose();
                m_AssetLoaders.Remove(assetName);
            }
        }

        /// <summary>
        /// 移除等待销毁 
        /// </summary>
        /// <param name="abName"></param>
        internal void RemoveABWaitDestroy(string abName)
        { 
            if (m_WaitDestroyABList.Contains(abName))
                m_WaitDestroyABList.Remove(abName);
        }

        /// <summary>
        /// 移除等待销毁 
        /// </summary>
        /// <param name="name"></param>
        internal void RemoveWaitDestroy(string name)
        {
            if (m_WaitDestroyList.ContainsKey(name))
                m_WaitDestroyList.Remove(name);
        }

        /// <summary>
        /// 销毁/释放资源
        /// </summary>
        /// <param name="obj"></param>
        public void Destroy(UnityEngine.Object obj)
        {
            AssetCache.Destroy(obj);
        }
        #endregion
    }
}
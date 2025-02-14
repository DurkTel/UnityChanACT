

using System;
using System.IO;
using UnityEngine;

namespace LGameFramework.GameBase
{
    [Serializable]
    public class GameConfig
    {
        private static string s_Path = Application.streamingAssetsPath + "/GameConfig.json";

        private static GameConfig s_Instance;
        public static GameConfig Instance
        {
            get 
            {
                if (s_Instance == null)
                {
                    if (!File.Exists(s_Path))
                        return null;
                    
                    s_Instance = JsonUtility.FromJson<GameConfig>(File.ReadAllText(s_Path));
                }
                return s_Instance; 
            }
        }

        /// <summary>
        /// 游戏帧数
        /// </summary>
        public int frameRate = 60;

        /// <summary>
        /// 游戏倍速
        /// </summary>
        public float gameSpeed = 1f;

        /// <summary>
        /// 后台运行
        /// </summary>
        public bool runInBackground = true;

        /// <summary>
        /// 永不休眠
        /// </summary>
        public bool neverSleep = true;

        /// <summary>
        /// 资源加载模式
        /// </summary>
        public int assetLoadMode = 1;

        /// <summary>
        /// 首保对比文件
        /// </summary>
        public string buildingFileName = "buildingFile.json";

        /// <summary>
        /// 资源清单文件
        /// </summary>
        public string assetManifestFileName = "assetManifest.json";

        /// <summary>
        /// 版本文件
        /// </summary>
        public string versionFileName = "version.txt";

        /// <summary>
        /// 存放资源路径
        /// </summary>
        public SpecialPathStruct downloadDataPath = new SpecialPathStruct() { pathPrefix = SpecialPath.DataPath, path = "/../A_AssetBundles/" };

        /// <summary>
        /// 服务器资源地址
        /// </summary>
        public SpecialPathStruct serverDataPath = new SpecialPathStruct() { pathPrefix = SpecialPath.StreamingAssetsPath, path = "/StandaloneWindows64/" };

        /// <summary>
        /// 首包路径
        /// </summary>
        public SpecialPathStruct buildingPath = new SpecialPathStruct() { pathPrefix = SpecialPath.StreamingAssetsPath, path = "/A_AssetBundles/" };

        /// <summary>
        /// 热更DLL路径
        /// </summary>
        public SpecialPathStruct hotUpdateDllPath = new SpecialPathStruct() { pathPrefix = SpecialPath.DataPath, path = "/../A_AssetBundles/" };

        /// <summary>
        /// 热更DLL名称
        /// </summary>
        public string[] hotUpdateDll = new string[] { "Assembly-GameCore.dll", "Assembly-GameLogic.dll" };

        /// <summary>
        /// AOT泛型DLL名称
        /// </summary>
        public string[] aotGenericDll = new string[] { "Assembly-GameBase.dll", "System.dll", "System.Core.dll" };
    }

    [Serializable]
    public struct SpecialPathStruct
    {
        public SpecialPath pathPrefix;

        public string path;

        public string AssetPath
        {
            get
            {
                string prefix = "";
                switch (pathPrefix)
                {
                    case SpecialPath.DataPath:
                        prefix = Application.dataPath;
                        break;
                    case SpecialPath.StreamingAssetsPath:
                        prefix = Application.streamingAssetsPath;
                        break;
                    case SpecialPath.PersistentDataPath:
                        prefix = Application.persistentDataPath;
                        break;
                    case SpecialPath.TemporaryCachePath:
                        prefix = Application.temporaryCachePath;
                        break;
                    default:
                        break;
                }
                return prefix + path;
            }
        }
    }

    public enum SpecialPath
    {
        None,
        DataPath,
        StreamingAssetsPath,
        PersistentDataPath,
        TemporaryCachePath
    }
}

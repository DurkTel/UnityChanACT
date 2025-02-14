

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
        /// ��Ϸ֡��
        /// </summary>
        public int frameRate = 60;

        /// <summary>
        /// ��Ϸ����
        /// </summary>
        public float gameSpeed = 1f;

        /// <summary>
        /// ��̨����
        /// </summary>
        public bool runInBackground = true;

        /// <summary>
        /// ��������
        /// </summary>
        public bool neverSleep = true;

        /// <summary>
        /// ��Դ����ģʽ
        /// </summary>
        public int assetLoadMode = 1;

        /// <summary>
        /// �ױ��Ա��ļ�
        /// </summary>
        public string buildingFileName = "buildingFile.json";

        /// <summary>
        /// ��Դ�嵥�ļ�
        /// </summary>
        public string assetManifestFileName = "assetManifest.json";

        /// <summary>
        /// �汾�ļ�
        /// </summary>
        public string versionFileName = "version.txt";

        /// <summary>
        /// �����Դ·��
        /// </summary>
        public SpecialPathStruct downloadDataPath = new SpecialPathStruct() { pathPrefix = SpecialPath.DataPath, path = "/../A_AssetBundles/" };

        /// <summary>
        /// ��������Դ��ַ
        /// </summary>
        public SpecialPathStruct serverDataPath = new SpecialPathStruct() { pathPrefix = SpecialPath.StreamingAssetsPath, path = "/StandaloneWindows64/" };

        /// <summary>
        /// �װ�·��
        /// </summary>
        public SpecialPathStruct buildingPath = new SpecialPathStruct() { pathPrefix = SpecialPath.StreamingAssetsPath, path = "/A_AssetBundles/" };

        /// <summary>
        /// �ȸ�DLL·��
        /// </summary>
        public SpecialPathStruct hotUpdateDllPath = new SpecialPathStruct() { pathPrefix = SpecialPath.DataPath, path = "/../A_AssetBundles/" };

        /// <summary>
        /// �ȸ�DLL����
        /// </summary>
        public string[] hotUpdateDll = new string[] { "Assembly-GameCore.dll", "Assembly-GameLogic.dll" };

        /// <summary>
        /// AOT����DLL����
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

using LGameFramework.GameBase;
using LGameFramework.GameCore.Asset;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// 游戏实例化物体的对象池
    /// </summary>
    public class GameObjectPool : MonoBehaviour
    {
        public struct GameObjectReleaseInfo
        {
            public GameObject GameObject;

            public float ReleaseTime;

            public GameObjectReleaseInfo(GameObject go, float releaseTime)
            { 
                GameObject = go;
                ReleaseTime = releaseTime;
            }
        }

        public struct GameObjectLifeInfo
        {
            public GameObject GameObject;

            public string AssetName;

            public float LifeTime;

            public GameObjectLifeInfo(GameObject go, string name, float lifeTime)
            {
                GameObject = go;
                AssetName = name;
                LifeTime = lifeTime;
            }
        }

        private static Dictionary<string, Queue<GameObjectReleaseInfo>> m_PoolMap = new Dictionary<string, Queue<GameObjectReleaseInfo>>();

        private static List<GameObjectLifeInfo> m_LifeList = new List<GameObjectLifeInfo>();

        private static Vector3 m_ReleasePos = new Vector3(9999, 9999, 9999);

        private static Transform m_Transform;

        private List<string> m_ReleaseKeyList = new List<string>();

        private int m_FrameCount;

        private readonly float m_LifeDuration = 10f;

        public static void OnInit()
        {
            GameObject pool = new GameObject("GameObjectPool");
            pool.AddComponent<GameObjectPool>();
            m_Transform = pool.transform;
            DontDestroyOnLoad(pool);
        }

        public static void GetAsset(string assetName, UnityAction<GameObject> callBack)
        {
            if (m_PoolMap.TryGetValue(assetName, out Queue<GameObjectReleaseInfo> queue) && queue.Count > 0)
            {
                GameObjectReleaseInfo info = queue.Dequeue();
                if (queue.Count < 1)
                {
                    QueuePool<GameObjectReleaseInfo>.Release(m_PoolMap[assetName]);
                    m_PoolMap.Remove(assetName);
                }
                info.GameObject.SetActive(true);
                callBack?.Invoke(info.GameObject);
            }
            else
            {
                Loader loader = AssetUtility.LoadAssetAsync<GameObject>(assetName);
                loader.onComplete += (p) =>
                {
                    GameObject go = p.GetInstantiate<GameObject>();
                    callBack?.Invoke(go);
                };
            }
        }

        public static GameObject GetGameObject(string assetName)
        {
            if (m_PoolMap.TryGetValue(assetName, out Queue<GameObjectReleaseInfo> queue) && queue.Count > 0)
            {
                GameObjectReleaseInfo info = queue.Dequeue();
                if (queue.Count < 1)
                {
                    QueuePool<GameObjectReleaseInfo>.Release(m_PoolMap[assetName]);
                    m_PoolMap.Remove(assetName);
                }

                info.GameObject.SetActive(true);
                return info.GameObject;
            }
            else
            {
                GameObject go = new GameObject();
                return go;
            }
        }

        public static void GetEffect(string assetName, Vector3 pos, Quaternion rotate, Vector3 scale, float lifeTime = 1f)
        {
            GetAsset(assetName, (go) =>
            {
                go.transform.position = pos;
                go.transform.rotation = rotate;
                go.transform.localScale = scale;

                GameObjectLifeInfo info = new GameObjectLifeInfo(go, assetName, Time.realtimeSinceStartup + lifeTime);
                m_LifeList.Add(info);
            });
        }

        public static void Release(string assetName, GameObject item)
        {
            item.transform.SetParent(m_Transform);
            item.transform.localPosition = m_ReleasePos;
            item.SetActive(false);

            if (!m_PoolMap.TryGetValue(assetName, out var queue))
            {
                queue = QueuePool<GameObjectReleaseInfo>.Get();
                m_PoolMap.Add(assetName, queue);
            }

            GameObjectReleaseInfo info = new GameObjectReleaseInfo(item, Time.realtimeSinceStartup);
            queue.Enqueue(info);
        }


        void Update()
        {
            if (m_LifeList.Count > 0)
            {
                int count = m_LifeList.Count;
                for (int i = count - 1; i >= 0; i--)
                {
                    var info = m_LifeList[i];
                    if (Time.realtimeSinceStartup >= info.LifeTime)
                    {
                        Release(info.AssetName, info.GameObject);
                        m_LifeList.RemoveAt(i);
                    }
                }
            }
            
            if (++m_FrameCount % 60 == 0 && m_PoolMap.Count > 0)
            {
                float nowTime = Time.realtimeSinceStartup;

                foreach (var pool in m_PoolMap)
                {
                    if (pool.Value.Count > 0)
                    {
                        GameObjectReleaseInfo info = pool.Value.Peek();
                        while (nowTime - info.ReleaseTime >= m_LifeDuration)
                        {
                            pool.Value.Dequeue();

                            AssetUtility.Destroy(info.GameObject);

                            if (pool.Value.Count > 0)
                                info = pool.Value.Peek();
                            else
                                break;

                            if (pool.Value.Count < 1)
                                m_ReleaseKeyList.Add(pool.Key);
                        }

                    }
                }

                if (m_ReleaseKeyList.Count > 0)
                {
                    foreach (string key in m_ReleaseKeyList)
                    {
                        QueuePool<GameObjectReleaseInfo>.Release(m_PoolMap[key]);
                        m_PoolMap.Remove(key);
                    }
                    m_ReleaseKeyList.Clear();
                }
            }
        }
    }
}

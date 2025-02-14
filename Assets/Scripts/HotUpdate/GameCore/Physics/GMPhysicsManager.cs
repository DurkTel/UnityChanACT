using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// 物理模拟管理
    /// </summary>
    public sealed class GMPhysicsManager : FrameworkModule
    {
        public override int Priority => 0;

        private GameUid m_UID;

        private Dictionary<int, OBBCollision> m_AllCollisions;
        public Dictionary<int, OBBCollision> AllCollisions { get { return m_AllCollisions; } }

        private List<int> m_PreDeletes;

        public override void OnInit()
        {
            m_UID = new GameUid();  
            m_AllCollisions = new Dictionary<int, OBBCollision>();
            m_PreDeletes = new List<int>();
        }

        internal void Evaluate(int tick)
        {
            foreach (var item1 in m_AllCollisions)
            {
                foreach(var item2 in m_AllCollisions)
                {
                    if (item1.Key == item2.Key)
                        continue;

                    if (item1.Value.EntityId == item2.Value.EntityId)
                        continue;

                    bool intersect = item1.Value.Intersects(item2.Value);
                    if (intersect)
                    {
                        if (!item1.Value.InCollision.Contains(item2.Key))
                        {
                            item1.Value.InCollision.Add(item2.Key);
                            item2.Value.InCollision.Add(item1.Key);
                            item1.Value.OnCollisionEnter.Invoke(item2.Key);
                            item2.Value.OnCollisionEnter.Invoke(item1.Key);
                        }
                    }
                    else
                    {
                        if (item1.Value.InCollision.Contains(item2.Key))
                        {
                            item1.Value.InCollision.Remove(item2.Key);
                            item2.Value.InCollision.Remove(item1.Key);
                            item1.Value.OnCollisionExit.Invoke(item2.Key);
                            item2.Value.OnCollisionExit.Invoke(item1.Key);
                        }
                    }
                }
            }

            if (m_PreDeletes.Count > 0)
            {
                foreach (var id in m_PreDeletes)
                {
                    var obb = m_AllCollisions[id] as OBBCollision;
                    obb.Dispose();
                    Pool.Release(obb);
                    m_AllCollisions.Remove(id);
                }

                m_PreDeletes.Clear();
            }
        }

        internal int AddCollision(int collisionType, int entityId, int sourceId, Vector3 scale = default)
        {
            int id = m_UID.Uid;
            var obb = Pool.Get<OBBCollision>();
            obb.CollisionType = collisionType;
            obb.EntityId = entityId;
            obb.SourceId = sourceId;
            obb.Scale = scale * 2;

            m_AllCollisions[id] = obb;
            return id;
        }

        internal void RemoveCollision(int id)
        {
            if (!m_AllCollisions.ContainsKey(id) || m_PreDeletes.Contains(id))
                return;

            foreach (var item in m_AllCollisions.Values)
            {
                if (item.InCollision.Contains(id))
                { 
                    item.InCollision.Remove(id);
                    item.OnCollisionExit.Invoke(id);
                }    
            }

            m_PreDeletes.Add(id);
            //m_AllCollisions.Remove(id); 
        }

        internal ICollision GetCollision(int id)
        {
            if (!m_AllCollisions.ContainsKey(id))
                return null;

            return m_AllCollisions[id];
        }
    }
}

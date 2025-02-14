using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public class PhysicUtility : ModuleUtility<GMPhysicsManager>
    {
        public static void Evaluate(int tick)
        {
            Instance.Evaluate(tick);
        }

        public static int AddCollision(int collisionType, int entityId, int sourceId, Vector3 scale = default)
        {
            return Instance.AddCollision(collisionType, entityId, sourceId, scale);
        }

        public static void RemoveCollision(int id)
        {
            Instance.RemoveCollision(id);
        }

        public static ICollision GetCollision(int id)
        {
            return Instance.GetCollision(id);
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore
{
    public interface ICollision
    {
        public HashSet<int> InCollision { get; }
        public int CollisionType { get; set; }
        public bool Intersects(ICollision other);
        public UnityEvent<int> OnCollisionEnter { get; set; }
        public UnityEvent<int> OnCollisionExit { get; set; }
    }
}

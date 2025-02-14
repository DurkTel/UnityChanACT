using System;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [Serializable]
    public struct RootMotionData
    {
        public int tick;

        public Vector3 rootPosition;

        public Quaternion rootRotation;

        public bool enablePosition;

        public bool enableRotation;
    }
}

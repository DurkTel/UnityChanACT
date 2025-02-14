using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public class CameraUtility : ModuleUtility<GMOrbitCamera>
    {

        public static GMOrbitCamera GetOrbitCamera()
        {
            return Instance;
        }

        public static Transform GetCameraTransform()
        {
            return Instance.CameraTran;
        }

        public static Camera GetMainCamera()
        {
            return Instance.RegularCamera;
        }
    }
}

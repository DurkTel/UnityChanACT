using GAS.Runtime;
using LGameFramework.GameBase;
using LGameFramework.GameCore;
using LGameFramework.GameLogic.GUI;
using UnityEngine;
using static LGameFramework.GameCore.GMCameraShake;
using static LGameFramework.GameLogic.DodgeEffectView;
using static UnityEngine.GraphicsBuffer;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ÓÎÏ·Ö÷Âß¼­
    /// </summary>
    public class GameMainLogic : MonoBehaviour
    {
        public CameraShakeCueSpec.Parameter cameraShakeParam;

        private void Awake()
        {
            GameLogicEntry.Instantiate();

            GameWorldMessage.OnInit();

        }

        private void Start()
        {
            GameWorldMessage.OninitWorldMessage();

        }

        void Update()
        {
            GameWorldDrives.Update();

            if (Input.GetKeyDown(KeyCode.F1))
            {
                //var camera = GameFrameworkEntry.GetModule<GMOrbitCamera>();
                //camera.CameraShake.ShakeScreen(cameraShakeParam.shakeMode, cameraShakeParam.period, cameraShakeParam.shakeTime, cameraShakeParam.maxWave, cameraShakeParam.minWave, cameraShakeParam.offPeriod);

                var entity = EntityUtility.GetLocalEntity();

                if (entity.Abilitys.TryGetAbility<AvatarAbility>(out var avatar) && avatar.Avatar.AllSkeletonBones.TryGetValue("Character1_Head", out Transform headTra))
                {
                    UIUtility.OpenView<DodgeEffectView>(new DodgeEffectView.DodgeEffectViewData() { TargetTran = headTra.transform });
                }
            }
        }
    }
}
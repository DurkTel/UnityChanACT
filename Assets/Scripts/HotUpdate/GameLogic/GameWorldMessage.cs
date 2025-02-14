using LGameFramework.GameBase;
using LGameFramework.GameBase.Data;
using LGameFramework.GameBase.RangeDetection;
using LGameFramework.GameCore.Asset;
using LGameFramework.GameCore.Audio;
using LGameFramework.GameCore.Config;
using LGameFramework.GameCore.GameScene;
using LGameFramework.GameCore.Input;
using LGameFramework.GameLogic;
using LGameFramework.GameLogic.GUI;
using LGameFramework.GameNet;
using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using static LGameFramework.GameCore.GameWorldMessage;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// 游戏世界层面上的事件
    /// </summary>
    public class GameWorldMessage
    {

        public static void OnInit()
        {
            GameRequire.RequireModule();

            AssetUtility.LoadAssetBundle("shader.asset");
            AssetUtility.LoadAssetBundle("commoneffect.asset");
            AssetUtility.LoadAssetBundle("fonts.asset");

            NetworkUtility.ConnentGateServer();
            //NetworkUtility.ConnentFightServer();

            UIUtility.OpenView<LoginView>();
            AudioUtility.Play("CopyLoopAudio", "Unite2017_music_prepro.wav");

        }

        public static void OninitWorldMessage()
        {
            InputUtility.RegisterListener((InputActionArgs.InputAction_Look, InputMode.Direction), (p) =>
            {
                GameFrameworkEntry.GetModule<GMOrbitCamera>().GetAxisInput(p.Direction);
            });
        }


    }
}

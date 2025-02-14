using UnityEngine.UI;
using UnityEngine;
using LGameFramework.GameLogic.GUI;
using LGameFramework.GameCore;
using GameMessage;
using LGameFramework.GameNet;
using System;
using DG.Tweening;

namespace LGameFramework.GameLogic
{
    public class LoginView : GUIView
    {
        protected override string m_PrefabName => "GUI_Login_View.prefab";

        private CanvasGroup m_LoginCanvas;

        private RectTransform m_AnyKeyTips;

        private Button m_AnyKeyBtn;

        public override void OnInit()
        {

            m_LoginCanvas = Injection.Get<CanvasGroup>("LoginCanvas");
            m_AnyKeyTips = Injection.Get<RectTransform>("AnyKey");
            m_AnyKeyBtn = Injection.Get<Button>("AnyKeyBtn");


            m_AnyKeyBtn.onClick.AddListener(() =>
            {
                ShowLoginPanel(true);
            });

            Injection.Get<Button>("CloseLogin").onClick.AddListener(() =>
            {
                ShowLoginPanel(false);
            });

            Injection.Get<Button>("LoginBtn").onClick.AddListener(() =>
            {
                Module.Proxy.Login.CreatePlayerAsyn("测试角色", (uid) =>
                {
                    Module.Data.Login.PlayerUID = uid;
                    Debug.Log("创建角色成功 UID：" + uid);

                    Module.Proxy.Login.LoginAsyn(Module.Data.Login.PlayerUID, (clientId) =>
                    {
                        Debug.Log("登录成功 客户端id" + clientId);
                        Module.Data.Login.ClientId = clientId;
                        UIUtility.OpenView<GameRoomHallView>();
                        Close();
                    });
                });
            });

            Injection.Get<Button>("OfflineBtn").onClick.AddListener(() =>
            {
                Module.Data.Login.ClientId = 1;
                BattlefieldLogic.s_Offline = true;
                BattlefieldStart battlefieldStart = new BattlefieldStart();
                battlefieldStart.FightID = -1;
                battlefieldStart.AllPlayers.Add(1, new PlayerData() { UID = 123456, Name = "测试角色" });
                battlefieldStart.AllPlayers.Add(-1, new PlayerData() { UID = 111, Name = "测试敌人" });

                battlefieldStart.AllCharacter.Add(1, new CharacterData() { Position = new CommonVector3() { X = 10, Y = 0, Z = 10 }, Rotation = new CommonVector3(), CampName = "Camp.Camp1", ArchetypeAsset = "Kohaku.asset", IsAI = false });
                battlefieldStart.AllCharacter.Add(-1, new CharacterData() { Position = new CommonVector3() { X = 10, Y = 0, Z = -10 }, Rotation = new CommonVector3(), CampName = "Camp.Camp2", ArchetypeAsset = "Akaza.asset", IsAI = true });
                battlefieldStart.StartTimestamp = DateTime.Now.Ticks / TimeSpan.TicksPerSecond;

                EventUtility.NetDispatch((int)ENetworkCommand.BattlefieldStartInfo, this, NetMessageArg.Get(battlefieldStart));
                Cursor.lockState = CursorLockMode.Locked;
                Close();

            });

            base.OnInit();

        }

        public override void OnEnable()
        {
            base.OnEnable();
            ShowLoginPanel(false, true);
        }


        private void ShowLoginPanel(bool value, bool immediately = false)
        {

            if (value)
            {
                m_LoginCanvas.SetActive(true);
                m_LoginCanvas.alpha = 0f;
                m_LoginCanvas.DOFade(1, 0.2f);
                m_AnyKeyTips.SetActive(false);
                m_AnyKeyBtn.SetActive(false);
            }
            else
            {
                m_LoginCanvas.DOFade(0, immediately ? 0f : 0.2f).onComplete += ()=> 
                {
                    m_LoginCanvas.SetActive(false);
                    m_AnyKeyTips.SetActive(true);
                    m_AnyKeyBtn.SetActive(true);

                };
            }
        }

    }
}

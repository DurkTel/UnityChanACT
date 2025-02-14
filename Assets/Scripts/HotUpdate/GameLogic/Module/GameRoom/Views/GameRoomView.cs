using GameMessage;
using LGameFramework.GameCore;
using LGameFramework.GameLogic.GUI;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace LGameFramework.GameLogic
{
    public class GameRoomView : GUIView
    {
        protected override string m_PrefabName => "GUI_GameRoom_View.prefab";

        private ListView m_PlayerList;

        private RoomPlayerData[] m_TempData;

        private int m_SelfState;

        private int m_PlayerIndex;

        public override void OnInit()
        {
            m_TempData = new RoomPlayerData[] { new RoomPlayerData(), new RoomPlayerData(), new RoomPlayerData(), new RoomPlayerData() };

            Injection.Get<Button>("SureBtn").onClick.AddListener(() =>
            {
                if (m_SelfState == 2)
                {
                    Module.Proxy.GameRoom.StartGameAsyn(Module.Data.GameRoom.RoomID, () =>
                    {
                        Close();
                    });
                }
                else
                {
                    Module.Proxy.GameRoom.BeReadyAsyn(m_SelfState == 0, Module.Data.GameRoom.RoomID, m_PlayerIndex, () =>
                    {
                        m_SelfState = m_SelfState == 0 ? 1 : 0;
                        m_TempData[m_PlayerIndex].state = m_SelfState;
                        m_PlayerList.ForceRefresh();
                    });
                }
            });

            Injection.Get<Button>("CancelBtn").onClick.AddListener(() =>
            {
                Close();
                UIUtility.OpenView<GameRoomHallView>();
            });

            m_PlayerList = Injection.Get<ListView>("PlayerList");
            m_PlayerList.SetItemRenderer<PlayerListRender>();

            base.OnInit();
        }

        public override void OnOpenEffect()
        {
            Module.Proxy.GameRoom.GetRoomInfoAsyn(Module.Data.GameRoom.RoomID, OnServerUpdate);
            base.OnOpenEffect();
        }

        public override void OnEnable()
        {
            base.OnEnable();

            EventUtility.RegisterEvent((int)GMEventRegister.GAMEROOM_SERVER_UPDATE_INFO, OnServerUpdate);
        }

        public override void OnDisable()
        {
            base.OnDisable();

            EventUtility.UnRegisterEvent((int)GMEventRegister.GAMEROOM_SERVER_UPDATE_INFO, OnServerUpdate);
        }

        private void OnServerUpdate(object sender, GameEventArg arg)
        {
            OnRereshRoomInfo();
        }

        private void OnServerUpdate(GameRoomUpdateInfo updateInfo)
        {
            Module.Data.GameRoom.SetServerData(updateInfo);
            OnRereshRoomInfo();
        }

        private void OnRereshRoomInfo()
        {
            int count = Module.Data.GameRoom.JoinPlayers.Count;
            m_SelfState = -1;

            for (int i = 0; i < 4; i++)
            {
                if (i >= count)
                {
                    m_TempData[i].playerName = "";
                    m_TempData[i].state = -1;
                }
                else
                {
                    m_TempData[i].playerName = Module.Data.GameRoom.JoinPlayers[i].Name;
                    m_TempData[i].state = Module.Data.GameRoom.IsReadys[i];

                    if (Module.Data.GameRoom.JoinPlayers[i].UID == Module.Data.Login.PlayerUID)
                    {
                        m_SelfState = Module.Data.GameRoom.IsReadys[i];
                        m_PlayerIndex = i;
                    }
                }
            }

            m_PlayerList.SetData(m_TempData);

            string sureStr = "开始游戏";
            if (m_SelfState == 1)
                sureStr = "取消准备";
            else if (m_SelfState == 0)
                sureStr = "准备";

            Injection.Get<TextMeshProUGUI>("SureText").text = sureStr;
        }

        class PlayerListRender : ListViewItemRender
        {
            private TextMeshProUGUI m_Name;

            private Transform m_Master;

            private Image m_Ready, m_Wait, m_Empty;

            private RoomPlayerData m_PlayerData;

            public override void Create(GameObject gameObject, ListView list)
            {
                base.Create(gameObject, list);

                m_Name = Injection.Get<TextMeshProUGUI>("PlayerName");
                m_Master = Injection.Get<RectTransform>("Master");
                m_Ready = Injection.Get<Image>("Ready");
                m_Wait = Injection.Get<Image>("Wait");
                m_Empty = Injection.Get<Image>("Empty");
            }

            public override void Refresh()
            {
                base.Refresh();
                m_PlayerData = GetData() as RoomPlayerData;

                m_Name.text = m_PlayerData.playerName;
                m_Master.SetActive(m_PlayerData.state == 2);
                m_Ready.SetActive(m_PlayerData.state >= 1);
                m_Wait.SetActive(m_PlayerData.state == 0);
                m_Empty.SetActive(m_PlayerData.state == -1);

            }
        }

        class RoomPlayerData
        {
            public string playerName;

            public int state;
        }
    }
}

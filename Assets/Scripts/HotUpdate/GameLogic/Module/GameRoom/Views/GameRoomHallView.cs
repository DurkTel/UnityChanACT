using LGameFramework.GameLogic.GUI;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace LGameFramework.GameLogic
{
    public class GameRoomHallView : GUIView
    {
        protected override string m_PrefabName => "GUI_GameRoomHall_View.prefab";

        private ListView m_RoomList;

        public override void OnInit()
        {
            base.OnInit();


            Injection.Get<Button>("CreateBtn").onClick.AddListener(() =>
            {
                

                UIUtility.OpenView<CommonMessageView>(new MessageViewData()
                {
                    Desc = "新建房间名",
                    IsShowInput = true,
                    OnSure = (s) => 
                    {
                        if (string.IsNullOrEmpty(s))
                            return;

                        Module.Proxy.GameRoom.CreateRoomAsyn(s, (roomId) =>
                        {
                            Module.Data.GameRoom.RoomID = roomId;
                            Module.Data.GameRoom.RoomName = s;
                            UIUtility.OpenView<GameRoomView>();
                            Close();
                            Debug.Log("创建房间成功 房间ID：" + roomId);
                        });
                    }
                });
            });

            Injection.Get<Button>("RereshBtn").onClick.AddListener(() =>
            {
                OnRefreshRoomList();
            });

            m_RoomList = Injection.Get<ListView>("RoomList");
            m_RoomList.SetItemRenderer<RoomListRender>();
        }

        public override void OnEnable()
        {
            base.OnEnable();
            OnRefreshRoomList();
        }

        private void OnRefreshRoomList()
        {
            Module.Proxy.GameRoom.GetAllRoomInfo((allRoom) =>
            {
                var list = new RoomData[allRoom.RoomCount];
                for (int i = 0; i < allRoom.RoomCount; i++)
                {
                    list[i] = new RoomData() { count = allRoom.PlayerCount[i], roomId = allRoom.RoomId[i], roomName = allRoom.RoomName[i] };
                }

                m_RoomList.SetData(list);
            });
        }


        class RoomListRender : ListViewItemRender
        {
            private TextMeshProUGUI m_Name;

            private TextMeshProUGUI m_Count;

            private RoomData m_RoomData;

            public override void Create(GameObject gameObject, ListView list)
            {
                base.Create(gameObject, list);

                m_Name = Injection.Get<TextMeshProUGUI>("RoomName");
                m_Count = Injection.Get<TextMeshProUGUI>("PlayerCount");

                Injection.Get<Button>("JoinBtn").onClick.AddListener(() =>
                {
                    if (m_RoomData.count >= 4)
                    {
                        UIUtility.OpenView<CommonMessageView>(new MessageViewData() { Desc = "房间已满人！" });
                        return;
                    }

                    Module.Proxy.GameRoom.JoinRoomAsyn(m_RoomData.roomId, () =>
                    {
                        Module.Data.GameRoom.RoomID = m_RoomData.roomId;
                        UIUtility.OpenView<GameRoomView>();
                        UIUtility.CloseView<GameRoomHallView>();
                    });
                });
            }

            public override void Refresh()
            {
                base.Refresh();
                m_RoomData = GetData() as RoomData;

                m_Name.text = m_RoomData.roomName;
                m_Count.text = $"房间人数{m_RoomData.count}/4";
            }
        }

        class RoomData
        { 
            public int roomId;

            public string roomName;

            public int count;
        }
    }
}

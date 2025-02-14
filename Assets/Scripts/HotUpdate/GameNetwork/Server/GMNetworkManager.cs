using Cysharp.Threading.Tasks;
using GameMessage;
using GameServer;
using Google.Protobuf;
using LGameFramework.GameBase;
using LGameFramework.GameCore;
using System;

namespace LGameFramework.GameNet
{
    public class GMNetworkManager : FrameworkModule
    {
        private GateNetworkServer m_GateNetworkServer;
        public GateNetworkServer GateNetworkServer { get { return m_GateNetworkServer; } }

        private FightNetworkServer m_FightNetworkServer;
        public FightNetworkServer FightNetworkServer { get { return m_FightNetworkServer; } }

        private bool m_FightServerConnected;
        public bool FightServerConnected { get { return m_FightServerConnected; } }

        public override int Priority => 1;

        public override void OnInit()
        {
            m_GateNetworkServer = new GateNetworkServer();
            m_FightNetworkServer = new FightNetworkServer();
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            if (m_GateNetworkServer != null && m_GateNetworkServer.IsValid && m_GateNetworkServer.Update(out var receiveResult))
            {
                switch (receiveResult.msgType)
                {
                    case 1:
                        ENetworkCommand command = (ENetworkCommand)receiveResult.msgID;
                        var data = MQGenerate.GetDeserialize(command, receiveResult.msgBody);
                        EventUtility.NetDispatch(receiveResult.msgID, this, NetMessageArg.Get(data));
                        break;
                    case 2:
                        EventUtility.NetDispatch(-receiveResult.msgID, this, NetActionArg.Get(receiveResult.msgBody));
                        break;
                    case 3:
                        EventUtility.NetDispatch(-receiveResult.msgID - 1, this, NetErrorArg.Get(BitConverter.ToInt32(receiveResult.msgBody)));
                        break;
                    default:
                        break;
                }

                EventUtility.UnRegisterEvent(receiveResult.msgID);
            }

            if (m_FightNetworkServer != null && m_FightNetworkServer.IsValid && m_FightNetworkServer.Update(out var receiveResult2))
            {
                switch (receiveResult2.msgType)
                {
                    case 1:
                        ENetworkCommand command = (ENetworkCommand)receiveResult2.msgID;
                        var data = MQGenerate.GetDeserialize(command, receiveResult2.msgBody);
                        EventUtility.NetDispatch(receiveResult2.msgID, this, NetMessageArg.Get(data));
                        break;
                    case 2:
                        EventUtility.NetDispatch(-receiveResult2.msgID, this, NetActionArg.Get(receiveResult2.msgBody));
                        break;
                    case 3:
                        EventUtility.NetDispatch(-receiveResult2.msgID - 1, this, NetErrorArg.Get(BitConverter.ToInt32(receiveResult2.msgBody)));
                        break;
                    default:
                        break;
                }
                EventUtility.UnRegisterEvent(receiveResult2.msgID);
            }
        }

        public override void OnDestroy()
        {
            if (m_GateNetworkServer != null)
            {
                m_GateNetworkServer.Reset();
                m_GateNetworkServer = null;
            }

            if (m_FightNetworkServer != null && m_FightServerConnected)
            {
                m_FightNetworkServer.Reset();
                m_FightNetworkServer = null;
                m_FightServerConnected = false;
            }
        }

        public async UniTask ConnentGateServer()
        {
            await m_GateNetworkServer.Connect("127.0.0.1", 8080);
        }

        public async UniTask ConnentFightServer()
        {
            await m_FightNetworkServer.Connect("127.0.0.1", 8081);
            m_FightServerConnected = true;
        }

        private void AddListener(Action<byte[]> success = null, Action<int> error = null)
        {
            int sendID = MessageSender.SendID;
            int actionID = -sendID;
            int errorID = actionID - 1;

            if (success != null)
            {
                EventUtility.NetRegisterEvent(actionID, (sender, arg) =>
                {
                    NetActionArg actionArg = arg as NetActionArg;
                    if (actionArg == null)
                        return;
                    success.Invoke(actionArg.Bytes);
                });
            }

            if (error != null)
            {
                EventUtility.NetRegisterEvent(errorID, (sender, arg) =>
                {
                    NetErrorArg errorArg = arg as NetErrorArg;
                    error.Invoke(errorArg.Error);
                });
            }
        }

        public void Send(ByteBuffer buffer, Action<byte[]> success = null, Action<int> error = null)
        {
            AddListener(success, error);
            m_GateNetworkServer.Send(buffer);
        }

        public void SendAsyn(ByteBuffer buffer, Action<byte[]> success = null, Action<int> error = null)
        {
            AddListener(success, error);
            m_GateNetworkServer.SendAsync(buffer);
        }

        public void SendTo(ByteBuffer buffer, Action<byte[]> success = null, Action<int> error = null)
        {
            AddListener(success, error);
            m_FightNetworkServer.Send(buffer);
        }

        public void SendToAsyn(ByteBuffer buffer, Action<byte[]> success = null, Action<int> error = null)
        {
            AddListener(success, error);
            m_FightNetworkServer.SendAsync(buffer);
        }
    }


    public class NetMessageArg : GameEventArg
    {
        private object m_Message;
        public T GetData<T>() where T : class, IMessage
        {
            return m_Message as T;
        }

        public override void Dispose()
        {
            m_Message = null;
        }

        public static NetMessageArg Get(object message)
        {
            NetMessageArg args = Pool.Get<NetMessageArg>();
            args.m_Message = message;

            return args;
        }
    }

    public class NetActionArg : GameEventArg
    {
        private byte[] m_Bytes;
        public byte[] Bytes { get { return m_Bytes; } }

        public override void Dispose()
        {
            m_Bytes = null;
        }

        public static NetActionArg Get(byte[] bytes)
        {
            NetActionArg args = Pool.Get<NetActionArg>();
            args.m_Bytes = bytes;

            return args;
        }
    }


    public class NetErrorArg : GameEventArg
    {
        private int m_Error;
        public int Error { get { return m_Error; } }

        public override void Dispose()
        {
            m_Error = -1;
        }

        public static NetErrorArg Get(int error)
        {
            NetErrorArg args = Pool.Get<NetErrorArg>();
            args.m_Error = error;

            return args;
        }
    }
}
using Cysharp.Threading.Tasks;
using LGameFramework.GameCore;
using System;
using System.Net;

namespace LGameFramework.GameNet
{
    public class NetworkUtility : ModuleUtility<GMNetworkManager>
    {
        public static void ConnentGateServer()
        {
            _ = Instance.ConnentGateServer();
        }

        public static UniTask ConnentFightServer()
        {
            return Instance.ConnentFightServer();
        }

        public static void Send(ByteBuffer buffer, Action<byte[]> success = null, Action<int> error = null)
        {
            Instance.Send(buffer, success, error);
        }

        public static void SendAsyn(ByteBuffer buffer, Action<byte[]> success = null, Action<int> error = null)
        {
            Instance.SendAsyn(buffer, success, error);
        }

        public static void SendTo(ByteBuffer buffer, Action<byte[]> success = null, Action<int> error = null)
        {
            Instance.SendTo(buffer, success, error);
        }

        public static void SendToAsyn(ByteBuffer buffer, Action<byte[]> success = null, Action<int> error = null)
        {
            Instance.SendToAsyn(buffer, success, error);
        }

        public static IPEndPoint GetFightIp()
        {
            return Instance.FightNetworkServer.Socket.LocalEndPoint as IPEndPoint;
        }

        public static IPEndPoint GetGateIp()
        {
            return Instance.GateNetworkServer.Socket.LocalEndPoint as IPEndPoint;
        }
    }
}

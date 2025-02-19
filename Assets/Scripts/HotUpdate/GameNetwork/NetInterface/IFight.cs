///////////////////////////////////
//// This is a generated file. ////
////     Do not modify it.     ////
////       Generated by        ////
///////MessageGenerate.Gen.////////
///////////////////////////////////


using System;
using GameMessage;
using Google.Protobuf;
using LGameFramework.GameNet;

namespace GameNet
{
    public static class IFight
    {

        #region FightLoadComplete Interface Begin
        private static ByteBuffer FightLoadCompleteInternal(int fightId, int uid, string ip, int udpPort)
        {
            var msgIdArr = MessageSender.SendID.ToByteArray();
            var msgIdLen = msgIdArr.Length;
            var identityArr = "IFight.FightLoadComplete".ToByteArray();
            var identityLen = identityArr.Length;
            var fightIdArr = fightId.ToByteArray();
			var fightIdLen = fightIdArr.Length;;
			var uidArr = uid.ToByteArray();
			var uidLen = uidArr.Length;;
			var ipArr = ip.ToByteArray();
			var ipLen = ipArr.Length;;
			var udpPortArr = udpPort.ToByteArray();
			var udpPortLen = udpPortArr.Length;;
			
            int bodyLen = identityLen + fightIdLen + uidLen + ipLen + udpPortLen;
            var bodyLenArr = bodyLen.ToByteArray();
            int len = msgIdLen + 4 + bodyLen;
            ByteBuffer buffer = new ByteBuffer(len);
            buffer.Write(msgIdArr);
			buffer.Write(bodyLenArr);
			buffer.Write(identityArr);
			buffer.Write(fightIdArr);
			buffer.Write(uidArr);
			buffer.Write(ipArr);
			buffer.Write(udpPortArr);
			

            return buffer;
        }

        public static void FightLoadComplete(int fightId, int uid, string ip, int udpPort, Action response)
        {
            void IFight_FightLoadComplete_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = FightLoadCompleteInternal(fightId, uid, ip, udpPort);
            NetworkUtility.Send(buffer, IFight_FightLoadComplete_response);
        }

        public static void FightLoadCompleteAsyn(int fightId, int uid, string ip, int udpPort, Action response)
        {
            void IFight_FightLoadComplete_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = FightLoadCompleteInternal(fightId, uid, ip, udpPort);
            NetworkUtility.SendAsyn(buffer, IFight_FightLoadComplete_response);
        }
        #endregion FightLoadComplete Interface End

        #region RobotLoadComplete Interface Begin
        private static ByteBuffer RobotLoadCompleteInternal(int robotId, int fightId, int uid, string ip, int udpPort)
        {
            var msgIdArr = MessageSender.SendID.ToByteArray();
            var msgIdLen = msgIdArr.Length;
            var identityArr = "IFight.RobotLoadComplete".ToByteArray();
            var identityLen = identityArr.Length;
            var robotIdArr = robotId.ToByteArray();
			var robotIdLen = robotIdArr.Length;;
			var fightIdArr = fightId.ToByteArray();
			var fightIdLen = fightIdArr.Length;;
			var uidArr = uid.ToByteArray();
			var uidLen = uidArr.Length;;
			var ipArr = ip.ToByteArray();
			var ipLen = ipArr.Length;;
			var udpPortArr = udpPort.ToByteArray();
			var udpPortLen = udpPortArr.Length;;
			
            int bodyLen = identityLen + robotIdLen + fightIdLen + uidLen + ipLen + udpPortLen;
            var bodyLenArr = bodyLen.ToByteArray();
            int len = msgIdLen + 4 + bodyLen;
            ByteBuffer buffer = new ByteBuffer(len);
            buffer.Write(msgIdArr);
			buffer.Write(bodyLenArr);
			buffer.Write(identityArr);
			buffer.Write(robotIdArr);
			buffer.Write(fightIdArr);
			buffer.Write(uidArr);
			buffer.Write(ipArr);
			buffer.Write(udpPortArr);
			

            return buffer;
        }

        public static void RobotLoadComplete(int robotId, int fightId, int uid, string ip, int udpPort, Action response)
        {
            void IFight_RobotLoadComplete_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = RobotLoadCompleteInternal(robotId, fightId, uid, ip, udpPort);
            NetworkUtility.Send(buffer, IFight_RobotLoadComplete_response);
        }

        public static void RobotLoadCompleteAsyn(int robotId, int fightId, int uid, string ip, int udpPort, Action response)
        {
            void IFight_RobotLoadComplete_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = RobotLoadCompleteInternal(robotId, fightId, uid, ip, udpPort);
            NetworkUtility.SendAsyn(buffer, IFight_RobotLoadComplete_response);
        }
        #endregion RobotLoadComplete Interface End

        #region SynFightInfo Interface Begin
        private static ByteBuffer SynFightInfoInternal(OperationInfo operate)
        {
            var msgIdArr = MessageSender.SendID.ToByteArray();
            var msgIdLen = msgIdArr.Length;
            var identityArr = "IFight.SynFightInfo".ToByteArray();
            var identityLen = identityArr.Length;
            var operateArr = operate.ToByteArray(true);
			var operateLen = operateArr.Length;;
			
            int bodyLen = identityLen + operateLen;
            var bodyLenArr = bodyLen.ToByteArray();
            int len = msgIdLen + 4 + bodyLen;
            ByteBuffer buffer = new ByteBuffer(len);
            buffer.Write(msgIdArr);
			buffer.Write(bodyLenArr);
			buffer.Write(identityArr);
			buffer.Write(operateArr);
			

            return buffer;
        }

        public static void SynFightInfo(OperationInfo operate, Action response)
        {
            void IFight_SynFightInfo_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = SynFightInfoInternal(operate);
            NetworkUtility.SendTo(buffer, IFight_SynFightInfo_response);
        }

        public static void SynFightInfoAsyn(OperationInfo operate, Action response)
        {
            void IFight_SynFightInfo_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = SynFightInfoInternal(operate);
            NetworkUtility.SendToAsyn(buffer, IFight_SynFightInfo_response);
        }
        #endregion SynFightInfo Interface End

        #region SynRobotFightInfo Interface Begin
        private static ByteBuffer SynRobotFightInfoInternal(int robotId, OperationInfo operate)
        {
            var msgIdArr = MessageSender.SendID.ToByteArray();
            var msgIdLen = msgIdArr.Length;
            var identityArr = "IFight.SynRobotFightInfo".ToByteArray();
            var identityLen = identityArr.Length;
            var robotIdArr = robotId.ToByteArray();
			var robotIdLen = robotIdArr.Length;;
			var operateArr = operate.ToByteArray(true);
			var operateLen = operateArr.Length;;
			
            int bodyLen = identityLen + robotIdLen + operateLen;
            var bodyLenArr = bodyLen.ToByteArray();
            int len = msgIdLen + 4 + bodyLen;
            ByteBuffer buffer = new ByteBuffer(len);
            buffer.Write(msgIdArr);
			buffer.Write(bodyLenArr);
			buffer.Write(identityArr);
			buffer.Write(robotIdArr);
			buffer.Write(operateArr);
			

            return buffer;
        }

        public static void SynRobotFightInfo(int robotId, OperationInfo operate, Action response)
        {
            void IFight_SynRobotFightInfo_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = SynRobotFightInfoInternal(robotId, operate);
            NetworkUtility.SendTo(buffer, IFight_SynRobotFightInfo_response);
        }

        public static void SynRobotFightInfoAsyn(int robotId, OperationInfo operate, Action response)
        {
            void IFight_SynRobotFightInfo_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = SynRobotFightInfoInternal(robotId, operate);
            NetworkUtility.SendToAsyn(buffer, IFight_SynRobotFightInfo_response);
        }
        #endregion SynRobotFightInfo Interface End
    }
}

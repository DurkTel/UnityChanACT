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
    public static class IApplication
    {

        #region Heartbeat Interface Begin
        private static ByteBuffer HeartbeatInternal()
        {
            var msgIdArr = MessageSender.SendID.ToByteArray();
            var msgIdLen = msgIdArr.Length;
            var identityArr = "IApplication.Heartbeat".ToByteArray();
            var identityLen = identityArr.Length;

            int bodyLen = identityLen;
            var bodyLenArr = bodyLen.ToByteArray();
            int len = msgIdLen + 4 + bodyLen;
            ByteBuffer buffer = new ByteBuffer(len);
            buffer.Write(msgIdArr);
			buffer.Write(bodyLenArr);
			buffer.Write(identityArr);
			

            return buffer;
        }

        public static void Heartbeat(Action response)
        {
            void IApplication_Heartbeat_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = HeartbeatInternal();
            NetworkUtility.Send(buffer, IApplication_Heartbeat_response);
        }

        public static void HeartbeatAsyn(Action response)
        {
            void IApplication_Heartbeat_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = HeartbeatInternal();
            NetworkUtility.SendAsyn(buffer, IApplication_Heartbeat_response);
        }
        #endregion Heartbeat Interface End

        #region DisconnectGateServer Interface Begin
        private static ByteBuffer DisconnectGateServerInternal()
        {
            var msgIdArr = MessageSender.SendID.ToByteArray();
            var msgIdLen = msgIdArr.Length;
            var identityArr = "IApplication.DisconnectGateServer".ToByteArray();
            var identityLen = identityArr.Length;

            int bodyLen = identityLen;
            var bodyLenArr = bodyLen.ToByteArray();
            int len = msgIdLen + 4 + bodyLen;
            ByteBuffer buffer = new ByteBuffer(len);
            buffer.Write(msgIdArr);
			buffer.Write(bodyLenArr);
			buffer.Write(identityArr);
			

            return buffer;
        }

        public static void DisconnectGateServer(Action response)
        {
            void IApplication_DisconnectGateServer_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = DisconnectGateServerInternal();
            NetworkUtility.Send(buffer, IApplication_DisconnectGateServer_response);
        }

        public static void DisconnectGateServerAsyn(Action response)
        {
            void IApplication_DisconnectGateServer_response(byte[] bytes)
            {

                response.Invoke();
            }

            ByteBuffer buffer = DisconnectGateServerInternal();
            NetworkUtility.SendAsyn(buffer, IApplication_DisconnectGateServer_response);
        }
        #endregion DisconnectGateServer Interface End
    }
}

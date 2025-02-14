namespace LGameFramework.GameNet
{
    /// <summary>
    /// ������������Ϣ
    /// </summary>
    public struct ReceiveResult
    {
        public byte msgType;

        public int msgID;

        public byte[] msgBody;

        public ReceiveResult(byte msgType, int msgID, byte[] msgBody)
        {
            this.msgType = msgType;
            this.msgID = msgID;
            this.msgBody = msgBody;
        }
    }
}
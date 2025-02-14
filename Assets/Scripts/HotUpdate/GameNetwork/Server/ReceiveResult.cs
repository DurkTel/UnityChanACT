namespace LGameFramework.GameNet
{
    /// <summary>
    /// 初步解析后信息
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
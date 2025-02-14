using Luban;
using System;
using System.Text;

/// <summary>
/// 网络通信中的字节缓冲
/// </summary>
public class ByteBuffer : ICloneable, IEquatable<ByteBuffer>
{
    private byte[] m_CacheBytes;
    /// <summary>
    /// 字节缓冲区
    /// </summary>
    public byte[] CacheBytes { get { return m_CacheBytes; } }

    /// <summary>
    /// 从哪个下标开始读
    /// </summary>
    public int ReadIndex { get; set; }

    /// <summary>
    /// 从哪个下标开始写
    /// </summary>
    public int WriteIndex { get; set; }

    /// <summary>
    /// 容量
    /// </summary>
    private int m_Capacity;

    /// <summary>
    /// 这条消息字节长度
    /// </summary>
    public int Length { get {  return WriteIndex - ReadIndex; } }

    /// <summary>
    /// 剩余空间
    /// </summary>
    public int Remain { get { return m_Capacity - WriteIndex; } }

    public ByteBuffer(byte[] bytes) 
    {
        m_CacheBytes = bytes;
        ReadIndex = 0;
        WriteIndex = bytes.Length;
        m_Capacity = bytes.Length;
    }

    public ByteBuffer(int size = 1024)
    {
        m_CacheBytes = new byte[size];
        ReadIndex = 0;
        WriteIndex = 0;
        m_Capacity = size;
    }

    /// <summary>
    /// 扩容
    /// </summary>
    /// <param name="writeSize"></param>
    public void Expansion(int writeSize)
    {
        if (writeSize <= Remain)
            return;

        //如果除去ReadIndex之前的数据容量是够的 就移动数据
        if (Remain + ReadIndex >= writeSize)
        {
            //将数据移到下标0
            Buffer.BlockCopy(CacheBytes, ReadIndex, CacheBytes, 0, Length);
        }
        else //如果还是不够 就扩容
        {
            int n = 1;
            int newSize = writeSize + Length; //最小要多大
            while (n < newSize)
                n *= 2;

            m_Capacity = n;
            var newBytes = new byte[m_Capacity];
            //把有效的数据复制到新数组
            Buffer.BlockCopy(CacheBytes, ReadIndex, newBytes, 0, Length);
            m_CacheBytes = newBytes;
        }

        WriteIndex = Length;
        ReadIndex = 0;
    }

    public void AdaptLength()
    {
        if (Length == m_Capacity)
            return;

        var newBytes = new byte[Length];
        Buffer.BlockCopy(CacheBytes, ReadIndex, newBytes, 0, Length);
        m_CacheBytes = newBytes;
        WriteIndex = Length;
        ReadIndex = 0;
    }

    public void Clear()
    {
        WriteIndex = ReadIndex = 0;
    }

    /// <summary>
    /// 写入数据
    /// </summary>
    /// <param name="bytes"></param>
    /// <param name="offset"></param>
    /// <param name="count"></param>
    public void Write(byte[] bytes, int offset, int count)
    {
        Expansion(count);

        Buffer.BlockCopy(bytes, offset, m_CacheBytes, WriteIndex, count); //这个更快
        //Array.Copy(bytes, offset, m_CacheBytes, WriteIndex, count);
        WriteIndex += count;
    }

    /// <summary>
    /// 写入数据
    /// </summary>
    /// <param name="bytes"></param>
    public void Write(byte[] bytes)
    {
        Write(bytes, 0, bytes.Length);
    }

    /// <summary>
    /// 写入数据
    /// </summary>
    /// <param name="buffer"></param>
    public void Write(ByteBuffer buffer)
    {
        Write(buffer.CacheBytes, buffer.ReadIndex, buffer.Length);
    }

    /// <summary>
    /// 读取数据
    /// </summary>
    /// <param name="bytes"></param>
    /// <param name="offset"></param>
    /// <param name="count"></param>
    public void Read(byte[] bytes, int offset, int count, bool ignoreRead = false)
    {
        count = Math.Min(count, Length);
        Buffer.BlockCopy(m_CacheBytes, ReadIndex, bytes, offset, count);
        if (!ignoreRead)
            ReadIndex += count;
    }

    /// <summary>
    /// 读取数据
    /// </summary>
    /// <param name="count"></param>
    /// <returns></returns>
    public byte[] Read(int count, bool ignoreRead = false)
    {
        count = Math.Min(count, Length);
        var bytes = new byte[count];
        Read(bytes, 0, count, ignoreRead);
        return bytes;
    }

    /// <summary>
    /// 替换字节数组
    /// </summary>
    /// <param name="bytes"></param>
    public void Replace(byte[] bytes)
    {
        m_CacheBytes = bytes;
        ReadIndex = 0;
        WriteIndex = bytes.Length;
    }

    /// <summary>
    /// 替换字节数组
    /// </summary>
    /// <param name="bytes"></param>
    /// <param name="beginPos"></param>
    /// <param name="endPos"></param>
    public void Replace(byte[] bytes, int beginPos, int endPos)
    {
        m_CacheBytes = bytes;
        ReadIndex = beginPos;
        WriteIndex = endPos;
    }

    public object Clone()
    {
        return new ByteBuffer(Read(Length, true));
    }

    public override bool Equals(object obj)
    {
        return (obj is ByteBuffer other) && Equals(other);
    }

    public bool Equals(ByteBuffer other)
    {
        if (other == null)
            return false;

        if (Length != other.Length)
            return false;

        for (int i = 0; i < Length; i++)
        {
            if (m_CacheBytes[ReadIndex + i] != other.m_CacheBytes[other.ReadIndex + i]) //readindex开始才是有用的数据
            {
                return false;
            }
        }

        return true;
    }


    #region WriteReadData

    public void WriteByte(byte b)
    {
        m_CacheBytes[WriteIndex++] = (byte)b;
    }

    public byte ReadByte()
    {
        return m_CacheBytes[ReadIndex++];
    }

    public void WriteShort(short i)
    {
        var bytes = BitConverter.GetBytes(i);
        Write(bytes, 0, bytes.Length);
    }

    public short ReadShort()
    {
        var i = BitConverter.ToInt16(m_CacheBytes, ReadIndex);
        ReadIndex += 2;
        return i;
    }

    public void WriteUShort(ushort i)
    {
        var bytes = BitConverter.GetBytes(i);
        Write(bytes, 0, bytes.Length);
    }

    public ushort ReadUShort()
    {
        var i = BitConverter.ToUInt16(m_CacheBytes, ReadIndex);
        ReadIndex += 2;
        return i;
    }

    public void WriteInt(int i)
    {
        var bytes = BitConverter.GetBytes(i);
        Write(bytes, 0, bytes.Length);
    }

    public int ReadInt()
    {
        var i = BitConverter.ToInt32(m_CacheBytes, ReadIndex);
        ReadIndex += 4;
        return i;
    }

    public void WriteUInt(uint i)
    {
        var bytes = BitConverter.GetBytes(i);
        Write(bytes, 0, bytes.Length);
    }

    public uint ReadUInt()
    {
        var i = BitConverter.ToUInt32(m_CacheBytes, ReadIndex);
        ReadIndex += 4;
        return i;
    }

    public void WriteLong(long l)
    {
        var bytes = BitConverter.GetBytes(l);
        Write(bytes, 0, bytes.Length);
    }

    public long ReadLong()
    {
        var i = BitConverter.ToInt64(m_CacheBytes, ReadIndex);
        ReadIndex += 8;
        return i;
    }

    public void WriteBool(bool b)
    {
        var bytes = BitConverter.GetBytes(b);
        Write(bytes, 0, bytes.Length);
    }

    public bool ReadBool()
    {
        var b = BitConverter.ToBoolean(m_CacheBytes, ReadIndex);
        ReadIndex ++;
        return b;
    }

    public void WriteString(string s)
    {
        s = string.IsNullOrEmpty(s) ? "" : s;
        var bytes = UTF8Encoding.UTF8.GetBytes(s);
        WriteInt(bytes.Length);
        Write(bytes, 0, bytes.Length);
    }

    public string ReadString()
    {
        var len = ReadInt();
        var str = UTF8Encoding.UTF8.GetString(m_CacheBytes, ReadIndex, len);
        ReadIndex += len;
        return str;
    }

    #endregion

}

using Luban;
using System;
using System.Text;

/// <summary>
/// ����ͨ���е��ֽڻ���
/// </summary>
public class ByteBuffer : ICloneable, IEquatable<ByteBuffer>
{
    private byte[] m_CacheBytes;
    /// <summary>
    /// �ֽڻ�����
    /// </summary>
    public byte[] CacheBytes { get { return m_CacheBytes; } }

    /// <summary>
    /// ���ĸ��±꿪ʼ��
    /// </summary>
    public int ReadIndex { get; set; }

    /// <summary>
    /// ���ĸ��±꿪ʼд
    /// </summary>
    public int WriteIndex { get; set; }

    /// <summary>
    /// ����
    /// </summary>
    private int m_Capacity;

    /// <summary>
    /// ������Ϣ�ֽڳ���
    /// </summary>
    public int Length { get {  return WriteIndex - ReadIndex; } }

    /// <summary>
    /// ʣ��ռ�
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
    /// ����
    /// </summary>
    /// <param name="writeSize"></param>
    public void Expansion(int writeSize)
    {
        if (writeSize <= Remain)
            return;

        //�����ȥReadIndex֮ǰ�����������ǹ��� ���ƶ�����
        if (Remain + ReadIndex >= writeSize)
        {
            //�������Ƶ��±�0
            Buffer.BlockCopy(CacheBytes, ReadIndex, CacheBytes, 0, Length);
        }
        else //������ǲ��� ������
        {
            int n = 1;
            int newSize = writeSize + Length; //��СҪ���
            while (n < newSize)
                n *= 2;

            m_Capacity = n;
            var newBytes = new byte[m_Capacity];
            //����Ч�����ݸ��Ƶ�������
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
    /// д������
    /// </summary>
    /// <param name="bytes"></param>
    /// <param name="offset"></param>
    /// <param name="count"></param>
    public void Write(byte[] bytes, int offset, int count)
    {
        Expansion(count);

        Buffer.BlockCopy(bytes, offset, m_CacheBytes, WriteIndex, count); //�������
        //Array.Copy(bytes, offset, m_CacheBytes, WriteIndex, count);
        WriteIndex += count;
    }

    /// <summary>
    /// д������
    /// </summary>
    /// <param name="bytes"></param>
    public void Write(byte[] bytes)
    {
        Write(bytes, 0, bytes.Length);
    }

    /// <summary>
    /// д������
    /// </summary>
    /// <param name="buffer"></param>
    public void Write(ByteBuffer buffer)
    {
        Write(buffer.CacheBytes, buffer.ReadIndex, buffer.Length);
    }

    /// <summary>
    /// ��ȡ����
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
    /// ��ȡ����
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
    /// �滻�ֽ�����
    /// </summary>
    /// <param name="bytes"></param>
    public void Replace(byte[] bytes)
    {
        m_CacheBytes = bytes;
        ReadIndex = 0;
        WriteIndex = bytes.Length;
    }

    /// <summary>
    /// �滻�ֽ�����
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
            if (m_CacheBytes[ReadIndex + i] != other.m_CacheBytes[other.ReadIndex + i]) //readindex��ʼ�������õ�����
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

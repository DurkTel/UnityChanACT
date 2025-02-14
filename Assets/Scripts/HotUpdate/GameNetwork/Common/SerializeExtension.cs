using Google.Protobuf;
using System;
using System.Text;

public static class SerializeExtension
{
    public static byte[] ToByteArray(this byte i)
    {
        return new byte[] { i };
    }

    public static byte[] ToByteArray(this short s)
    {
        return BitConverter.GetBytes(s);
    }

    public static byte[] ToByteArray(this ushort s)
    {
        return BitConverter.GetBytes(s);
    }

    public static byte[] ToByteArray(this int i)
    {
        return BitConverter.GetBytes(i);
    }

    public static byte[] ToByteArray(this uint i)
    {
        return BitConverter.GetBytes(i);
    }

    public static byte[] ToByteArray(this long l)
    {
        return BitConverter.GetBytes(l);
    }

    public static byte[] ToByteArray(this ulong l)
    {
        return BitConverter.GetBytes(l);
    }

    public static byte[] ToByteArray(this float f)
    {
        return BitConverter.GetBytes(f);
    }

    public static byte[] ToByteArray(this double d)
    {
        return BitConverter.GetBytes(d);
    }

    public static byte[] ToByteArray(this bool b)
    {
        return BitConverter.GetBytes(b);
    }

    public static byte[] ToByteArray(this string s)
    {
        s = string.IsNullOrEmpty(s) ? "" : s;
        var strArray = UTF8Encoding.UTF8.GetBytes(s);
        var lenArray = strArray.Length.ToByteArray();
        var bytes = new byte[strArray.Length + 4];
        Array.Copy(lenArray, 0, bytes, 0, 4);
        Array.Copy(strArray, 0, bytes, 4, strArray.Length);

        return bytes;
    }

    public static byte[] ToByteArray(this IMessage message, bool includeSize)
    {
        if (includeSize)
        {
            //加上长度
            var arrT = message.ToByteArray();
            var len = arrT.Length;
            var lenArr = len.ToByteArray();
            var arr = new byte[len + 4];
            Array.Copy(lenArr, 0, arr, 0, 4);
            Array.Copy(arrT, 0, arr, 4, len);
            return arr;
        }
        else
        {
            return message.ToByteArray();
        }

    }
}

using System;
using System.IO;

public sealed class IndentedWriter : IDisposable
{
    private StreamWriter m_StreamWriter;

    private bool m_isDisposed;

    public int Spaces { get; set; }

    public int Indent { get; set; }

    public IndentedWriter(StreamWriter streamWriter, int indent = 0, int spaces = 4)
    {
        m_StreamWriter = streamWriter;
        Indent = indent;
        Spaces = spaces;
    }

    public string GetIndentation()
    {
        return new string(' ', Math.Max(0, Indent * Spaces));
    }

    public void Write(string text)
    {
        if (string.IsNullOrWhiteSpace(text))
            m_StreamWriter.Write(text);
        else
            m_StreamWriter.Write(GetIndentation() + text);
    }

    public void WriteLine(string line = null)
    {
        if (string.IsNullOrWhiteSpace(line))
            m_StreamWriter.WriteLine();
        else
            m_StreamWriter.WriteLine(GetIndentation() + line);
    }


    public void Dispose()
    {
        if (!m_isDisposed)
        {
            m_isDisposed = true;

            m_StreamWriter.Dispose();
            m_StreamWriter = null;
        }

        GC.SuppressFinalize(this);
    }
}

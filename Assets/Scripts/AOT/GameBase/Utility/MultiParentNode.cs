using System;
using System.Collections;
using System.Collections.Generic;

namespace LGameFramework.GameBase
{
    public class MultiParentNode<T> : ICollection<MultiParentNode<T>>, IList<MultiParentNode<T>>
    {
        public T Data { get; set; }
        public List<MultiParentNode<T>> Parent { get; set; }

        protected List<MultiParentNode<T>> m_Children;
        public int Count { get { return m_Children.Count; } }
        public bool IsReadOnly { get { return false; } }

        public MultiParentNode<T> this[int index] { get { return m_Children[index]; } set { m_Children[index] = value; } }

        public MultiParentNode(T data)
        {
            SetData(data);
        }

        public MultiParentNode()
        {

        }

        public void SetData(T data)
        {
            Data = data;
            m_Children = new List<MultiParentNode<T>>(0);
            Parent = new List<MultiParentNode<T>>(1);
        }

        public void Add(MultiParentNode<T> item)
        {
            if (Contains(item))
                return;

            item.Parent.Add(this);
            m_Children.Add(item);
        }

        public bool Remove(MultiParentNode<T> item)
        {
            if (!Contains(item))
                return false;

            item.Parent.Remove(this);
            m_Children.Remove(item);
            return true;
        }

        public bool Remove(T item)
        {
            int index = IndexOf(item);
            if (index == -1)
                return false;

            var child = m_Children[index];

            child.Parent = null;
            m_Children.Remove(child);
            return true;
        }

        public void Clear()
        {
            Data = default(T);
            m_Children.Clear();
        }

        public bool Contains(MultiParentNode<T> item)
        {
            if (m_Children == null) return false;
            return m_Children.Contains(item);
        }

        public bool Contains(T item)
        {
            foreach (var value in this)
            {
                if (value.Equals(item))
                    return true;
            }

            return false;
        }

        public void CopyTo(MultiParentNode<T>[] array, int arrayIndex)
        {
            m_Children.CopyTo(array, arrayIndex);
        }

        public int IndexOf(MultiParentNode<T> item)
        {
            return m_Children.IndexOf(item);
        }

        public int IndexOf(T item)
        {
            for (int i = 0; i < m_Children.Count; i++)
            {
                if (item.Equals(m_Children[i].Data))
                    return i;
            }

            return -1;
        }

        public void Insert(int index, MultiParentNode<T> item)
        {
            m_Children.Insert(index, item);
        }

        public void RemoveAt(int index)
        {
            if (index < 0 || index >= m_Children.Count)
                return;

            m_Children.RemoveAt(index);
        }

        public IEnumerator<MultiParentNode<T>> GetEnumerator()
        {
            return new Enumerator(this);
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return new Enumerator(this);
        }

        public struct Enumerator : IEnumerator<MultiParentNode<T>>, IDisposable, IEnumerator
        {
            private MultiParentNode<T> m_Node;

            private int m_Index;
            public MultiParentNode<T> Current { get { return m_Node.m_Children[m_Index]; } }
            object IEnumerator.Current { get { return Current; } }

            public Enumerator(MultiParentNode<T> node)
            {
                m_Node = node;
                m_Index = -1;
            }


            public void Dispose()
            {
                m_Node = null;
            }

            public bool MoveNext()
            {
                m_Index++;
                return m_Index < m_Node.Count;
            }

            public void Reset()
            {
                m_Index = -1;
            }
        }
    }

}

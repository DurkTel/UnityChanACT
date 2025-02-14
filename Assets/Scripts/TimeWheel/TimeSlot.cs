using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public class TimeSlot
    {
        private static Queue<LinkedListNode<TimeTask>> s_Pool;

        public static void IninPool()
        {
            s_Pool = new Queue<LinkedListNode<TimeTask>>(2000000);
            for (int i = 0; i < 2000000; i++)
            {
                s_Pool.Enqueue(new LinkedListNode<TimeTask>(null));
            }
        }

        private LinkedList<TimeTask> m_AllTasks;

        public LinkedListNode<TimeTask> FirstTask
        {
            get { return m_AllTasks.First; }
        }

        public TimeSlot() 
        {
            m_AllTasks = new LinkedList<TimeTask>();        
        }

        public void AddTask(TimeTask task)
        {
            var taskNode = s_Pool.Dequeue();
            taskNode.Value = task;
            m_AllTasks.AddLast(taskNode);
        }

        public void RemoveFirst()
        {
            var taskNode = m_AllTasks.First;
            taskNode.Value = null;
            s_Pool.Enqueue(taskNode);
            m_AllTasks.RemoveFirst();
        }

        public void RemoveTask(TimeTask taskId)
        {
            m_AllTasks.Remove(taskId);
        }
    }
}

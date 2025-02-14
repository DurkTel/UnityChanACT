using GameMessage;
using Google.Protobuf.Collections;
using LGameFramework.GameLogic;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

namespace LGameFramework.GameLogic
{
    public class SequenceCommand : MonoBehaviour
    {
        private const float c_RecordKeepTime = 1f;

        private List<OperationCommandRecord> m_InputRecord = new List<OperationCommandRecord>();

        private double m_CurrentTimeStamp;

        private Vector2 m_Direction;

        private void Update()
        {
            float deltaTime = Time.deltaTime;
            for (int i = m_InputRecord.Count - 1; i >= 0; i--)
            {
                //if (m_CurrentTimeStamp - m_InputRecord[i].TimeStamp > c_RecordKeepTime)
                //    m_InputRecord.RemoveAt(i);
            }

            m_CurrentTimeStamp += deltaTime;
        }

        public bool ContainsAction(ActionCommand command)
        {
            //检测多少秒之前的输入
            //double lastStamp = m_CurrentTimeStamp - Mathf.Max(command.validInFrame, Time.deltaTime);
            //for (int i = 0; i < command.keySequence.Count; i++)
            //{
            //    bool exist = false;
            //    var key = command.keySequence[i];
            //    foreach (var record in m_InputRecord)
            //    {
            //        //if (record.TimeStamp >= lastStamp && record.Operate == key)
            //        //{ 
            //        //    exist = true; 
            //        //    break;
            //        //}
            //    }

            //    if (exist)
            //        continue;

            //    return false;
            //}


            return true;
        }

        public Vector2 GetMoveDirection()
        {
            return m_Direction;
            //检测上一帧的
            //double lastStamp = 0;//m_CurrentTimeStamp - Time.deltaTime;
            //for (int i = m_InputRecord.Count - 1; i > 0; i--)
            //{
            //    var record = m_InputRecord[i];
            //    if (record.TimeStamp >= lastStamp && IsDirection(record.Operate))
            //    {
            //        switch (record.Operate)
            //        {
            //            case EClientOperation.Forward:
            //                return new Vector2(0, 1);
            //            case EClientOperation.Backward:
            //                return new Vector2(0, -1);
            //            case EClientOperation.Left:
            //                return new Vector2(-1, 0);
            //            case EClientOperation.Right:
            //                return new Vector2(1, 0);
            //            case EClientOperation.LeftForward:
            //                return new Vector2(-1, 1);
            //            case EClientOperation.LeftBackward:
            //                return new Vector2(-1, -1);
            //            case EClientOperation.RightForward:
            //                return new Vector2(1, 1);
            //            case EClientOperation.RightBackward:
            //                return new Vector2(1, -1);
            //        }
            //    }
            //}

            //return Vector2.zero;
        }

        private bool IsDirection(EClientOperation operation)
        { 
            switch (operation)
            {
                case EClientOperation.Forward: 
                    return true;
                case EClientOperation.Backward:
                    return true;
                case EClientOperation.Left:
                    return true;
                case EClientOperation.Right:
                    return true;
                case EClientOperation.LeftForward:
                    return true;
                case EClientOperation.LeftBackward:
                    return true;
                case EClientOperation.RightForward:
                    return true;
                case EClientOperation.RightBackward:
                    return true;
            }

            return false;
        }

        public void AddCommand(RepeatedField<OperationCommandRecord> records)
        {
            if (records == null || records.Count <= 0)
            {
                m_Direction = Vector2.zero;
                return;
            }

            m_InputRecord.AddRange(records);
            foreach (var record in records)
            {
                if (IsDirection(record.Operate))
                {
                    switch (record.Operate)
                    {
                        case EClientOperation.Forward:
                            m_Direction = new Vector2(0, 1);
                            break;
                        case EClientOperation.Backward:
                            m_Direction = new Vector2(0, -1);
                            break;
                        case EClientOperation.Left:
                            m_Direction = new Vector2(-1, 0);
                            break;
                        case EClientOperation.Right:
                            m_Direction = new Vector2(1, 0);
                            break;
                        case EClientOperation.LeftForward:
                            m_Direction = new Vector2(-1, 1);
                            break;
                        case EClientOperation.LeftBackward:
                            m_Direction = new Vector2(-1, -1);
                            break;
                        case EClientOperation.RightForward:
                            m_Direction = new Vector2(1, 1);
                            break;
                        case EClientOperation.RightBackward:
                            m_Direction = new Vector2(1, -1);
                            break;
                    }
                }
            }
            
        }

        public void AddCommand(OperationCommandRecord record)
        {
            if (record == null)
            {
                m_Direction = Vector2.zero;
                return;
            }

            m_InputRecord.Add(record);

            //float radian = record.Direction / 100f * Mathf.Deg2Rad;
            //float x = Mathf.Cos(radian);
            //float y = Mathf.Sin(radian);
            //m_Direction = new Vector2(x, y);
        }

    }

}

using GameMessage;
using LGameFramework.GameCore;
using System.Collections;
using System.Collections.Generic;
using System.Numerics;
using UnityEngine;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameLogic
{
    public class InputCommandSyn : MonoBehaviour
    {
        private const float c_RecordKeepTime = 1f;

        private List<OperationCommandRecord> m_InputRecord = new List<OperationCommandRecord>();
        public List<OperationCommandRecord> InputRecord { get { return m_InputRecord; } }

        private long m_CurrentTimeStamp;

        private void Start()
        {
            
        }

        private void Update()
        {
            float deltaTime = Time.deltaTime;

            for (int i = 0; i < (int)EClientOperation.End; i++)
            {
                //检测除方向输入外的按键
                var key = (EClientOperation)i;
                if (InputUtility.GetButtonDown(KeyCommand2InputAction(key)))
                    AddInput(key);
            }

            //八方向输入检测
            var inputDir = InputUtility.GetAxis(InputActionArgs.InputAction_Move);
            if (inputDir[0] > 0) AddInput(EClientOperation.Right);
            if (inputDir[0] < 0) AddInput(EClientOperation.Left);
            if (inputDir[1] > 0) AddInput(EClientOperation.Forward);
            if (inputDir[1] < 0) AddInput(EClientOperation.Backward);

            if (inputDir[0] > 0 && inputDir[1] > 0) AddInput(EClientOperation.RightForward);
            if (inputDir[0] > 0 && inputDir[1] < 0) AddInput(EClientOperation.RightBackward);
            if (inputDir[0] < 0 && inputDir[1] > 0) AddInput(EClientOperation.LeftForward);
            if (inputDir[0] < 0 && inputDir[1] < 0) AddInput(EClientOperation.LeftBackward);


            m_CurrentTimeStamp += (long)deltaTime;
        }

        private void AddInput(EClientOperation key)
        {
            var inputDir = InputUtility.GetAxis(InputActionArgs.InputAction_Move);

            OperationCommandRecord kir = new OperationCommandRecord();
            kir.Operate = key;
            //kir.TimeStamp = m_CurrentTimeStamp;

            //float radian = Mathf.Atan2(inputDir.y, inputDir.x);
            //// 将弧度转换为度数
            //float angle = radian * Mathf.Rad2Deg;

            //// 确保角度在 0 到 360 度之间
            //if (angle < 0)
            //    angle += 360;

            //kir.Direction = (int)(radian * 100);
            m_InputRecord.Add(kir);
        }

        private string KeyCommand2InputAction(EClientOperation key)
        {
            switch (key)
            {
                case EClientOperation.Attack:
                    return InputActionArgs.InputAction_Attack;
                case EClientOperation.Skill:
                    return InputActionArgs.InputAction_SpecialAttack;
                case EClientOperation.Defense:
                    return InputActionArgs.InputAction_Guard;
                case EClientOperation.Dodge:
                    return InputActionArgs.InputAction_Dodge;
            }

            return "";
        }
    }
}

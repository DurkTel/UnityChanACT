using GameMessage;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [Serializable]
    public class ActionCommand
    {
        /// <summary>
        /// 接受多少帧以内的输入
        /// </summary>
        public int validInFrame;

        /// <summary>
        /// 按键顺序
        /// </summary>
        [SerializeField]
        public List<Operation> operationSequence = new List<Operation>();

    }

    [Serializable]
    public class Operation
    {
        public EClientOperation operation;

        public EOperationType type;

        public int validInFrame;
    }

}

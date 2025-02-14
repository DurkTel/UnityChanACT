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
        /// ���ܶ���֡���ڵ�����
        /// </summary>
        public int validInFrame;

        /// <summary>
        /// ����˳��
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

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [SerializeField]
    public enum KeyCommandMap
    {
        /// <summary>
        /// ��ǰ
        /// </summary>
        Forward,
        /// <summary>
        /// ���
        /// </summary>
        Backward,
        /// <summary>
        /// ����
        /// </summary>
        Left,
        /// <summary>
        /// ����
        /// </summary>
        Right,
        /// <summary>
        /// ��ǰ
        /// </summary>
        LeftForward,
        /// <summary>
        /// ��ǰ
        /// </summary>
        RightForward,
        /// <summary>
        /// ���
        /// </summary>
        LeftBackward,
        /// <summary>
        /// �Һ�
        /// </summary>
        RightBackward,
        /// <summary>
        /// �޷�������
        /// </summary>
        NoDirection,
        /// <summary>
        /// ��ͨ����
        /// </summary>
        Attack,
        /// <summary>
        /// ���ܹ���
        /// </summary>
        Skill,
        /// <summary>
        /// ����
        /// </summary>
        Defense,
        /// <summary>
        /// ����
        /// </summary>
        Dodge,
        /// <summary>
        /// ö�ٽ�����ʶ
        /// </summary>
        End,
    }
}

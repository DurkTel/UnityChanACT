using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Actioner.Runtime
{
    [CreateAssetMenu(fileName = "ActionBundle", menuName = "Actioner/ActionBundle")]
    public class ActionBundle : ActionData
    {
        /// <summary>
        /// ����Ƭ��
        /// </summary>
        public List<AnimationClip> motions = new List<AnimationClip>();

        public AnimationClip this[int index]
        {
            get 
            {
                if (index < 0 || index >= motions.Count) 
                    return motion; //ȡ�����ͷ���Ĭ�ϵ�

                return motions[index];
            }
        }

    }
}

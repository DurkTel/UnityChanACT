using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Actioner.Runtime
{
    [CreateAssetMenu(fileName = "ActionBundle", menuName = "Actioner/ActionBundle")]
    public class ActionBundle : ActionData
    {
        /// <summary>
        /// 动画片段
        /// </summary>
        public List<AnimationClip> motions = new List<AnimationClip>();

        public AnimationClip this[int index]
        {
            get 
            {
                if (index < 0 || index >= motions.Count) 
                    return motion; //取不到就返回默认的

                return motions[index];
            }
        }

    }
}

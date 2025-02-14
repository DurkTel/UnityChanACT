using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// 角色等级基数
    /// </summary>
    public class GradBaseFormula
    {
        public static float GetGradBase(int level)
        {
            if (level >= 60)
                return 794f;
            else if (level >= 50)
                return 592f;
            else if (level >= 40)
                return 421;
            else if (level >= 30)
                return 281;
            else if (level >= 20)
                return 172;
            else if (level >= 10)
                return 94f;
            else
                return 50f;
        }
    }
}

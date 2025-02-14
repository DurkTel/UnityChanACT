using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class FightUtility : ModuleUtility<GMFightManager>
    {
        public static AttackInfo GetEmptyAttack()
        { 
            return Pool.Get<AttackInfo>();
        }

        public static void OnAttackBegin(AttackInfo info)
        {
            Instance.OnAttackBegin(info);
        }

        public static void OnAttackEnd(int attackId)
        {
            Instance.OnAttackEnd(attackId);
        }

        public static bool TryGetAttackInfo(int attackId, out AttackInfo info)
        {
            return Instance.TryGetAttackInfo(attackId, out info);
        }


        public static void ResetHitRecord(int attackId)
        {
            if (TryGetAttackInfo(attackId, out AttackInfo info))
            {
                info.HitInfo.ClearHitRecord();
            }
        }
    }
}

using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ���������߼�
    /// </summary>
    public class AttackPrepareSpec : GameplayEffect
    {
        public AttackConfigAsset SubAsset { get { return EffectAsset as AttackConfigAsset; } }

        public override void OnApply(params object[] paramArgs)
        {

            AttackInfo attackInfo = paramArgs[0] as AttackInfo;
            if (attackInfo == null)
                return;

            if (SubAsset.attackParm.autoLookTarget)
            {
                //�Զ��������
                var target = GMEntitySelectionFunc.GetTarget(Source as GMEntity);
                if (target != null && Source.Abilitys.TryGetAbility<SyncAbility>(out var sync) && target.Abilitys.TryGetAbility<SyncAbility>(out var sync2))
                {
                    Vector3 toTarget = sync2.SyncPosition - sync.SyncPosition;
                    sync.SyncRotationImmediately(Quaternion.LookRotation(toTarget));
                }
            }

            
        }
    }
}

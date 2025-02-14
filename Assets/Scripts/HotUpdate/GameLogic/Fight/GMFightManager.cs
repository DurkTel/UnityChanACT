using BehaviorDesigner.Runtime;
using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GAS.Runtime;

namespace LGameFramework.GameLogic
{
    public class GMFightManager : LogicModule
    {
        public override int Priority => 66;

        private Dictionary<int, AttackInfo> m_AttackInfos;

        public override void OnInit()
        {
            m_AttackInfos = new Dictionary<int, AttackInfo>();
        }

        internal void OnAttackBegin(AttackInfo info)
        {
            if (EntityUtility.TryGetEntity(info.SourceEntity, out var source))
            {
                if (source.Tags.HasTag(GameplayTagsLib.Camp_Local))
                {
                    //发给行为树
                    //if (BehaviorManager.instance.BehaviorTrees != null)
                    //{
                    //    foreach (var tree in BehaviorManager.instance.BehaviorTrees)
                    //        tree.behavior.SendEvent(BehaviorTree.c_Event_PrepareAttack, info);
                    //}
                }

                //开始攻击
                source.Effects.TryAddEffect<AttackPrepareSpec>(info.ConfigAsset, out var effect, info);
                OnAttackInfoUpdate(info);
            }
        }

        internal void OnAttackInfoUpdate(AttackInfo info)
        {
            m_AttackInfos[info.AttackId] = info;
        }

        internal void OnAttackEnd(int attackId)
        {
            if (TryGetAttackInfo(attackId, out var info))
            {
                info.Dispose();
                Pool.Release(info);
                m_AttackInfos.Remove(attackId);
            }
        }

        internal bool TryGetAttackInfo(int attackId, out AttackInfo info) 
        {
            return m_AttackInfos.TryGetValue(attackId, out info);
        }

    }
}

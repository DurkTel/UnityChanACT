using GAS.Runtime;
using UnityEngine;
using UnityEngine.Animations;

namespace LGameFramework.GameLogic
{
    public class SubAbility : GameplayAbility
    {
        private ParentConstraint m_Constraint;

        public SubAbilityAsset SubAsset { get { return m_AbilityAsset as SubAbilityAsset; } }

        public override void OnInit(GameplayAbilityAsset abilityAsset, IAbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);

            m_Constraint = m_ASC.GameObject.TryAddComponent<ParentConstraint>();    
        }

        public override void Dispose()
        {
            Object.Destroy(m_Constraint);
            m_Constraint = null;
            base.Dispose();
        }

        public override void OnActivation(params object[] paramsArgs)
        {
            base.OnActivation(paramsArgs);

            GMEntity parent = paramsArgs[0] as GMEntity;
            if (parent == null)
                return;

            var target = parent.Transform;
            if (!string.IsNullOrEmpty(SubAsset.ContactBone) && parent.Abilitys.TryGetAbility<AvatarAbility>(out var avatar))
            {
                if (avatar.Avatar.AllSkeletonBones.TryGetValue(SubAsset.ContactBone, out target))
                { 
                    
                }
            }
                

            m_Constraint.weight = 1;
            m_Constraint.constraintActive = true;
            m_Constraint.AddSource(new ConstraintSource() { weight = 1, sourceTransform = target });
            m_Constraint.SetTranslationOffset(0, SubAsset.PositionOffset);
            m_Constraint.SetRotationOffset(0, SubAsset.RotationOffset);
        }

        public override void OnInactivation()
        {
            base.OnInactivation();
            m_Constraint.constraintActive = false;
            m_Constraint.weight = 0;
            for (int i = m_Constraint.sourceCount; i >= 0; i--)
                m_Constraint.RemoveSource(i);

        }
    }
}

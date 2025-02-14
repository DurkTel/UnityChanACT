using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;

namespace LGameFramework.GameLogic
{
    public class AimTarget : AbstractAction
    {
        private const string c_LookTargetBone = "LookTarget";

        public SharedInt targetEntityId;

        public SharedBool isActive;

        public override TaskStatus OnUpdate()
        {
            if (!Entity.Abilitys.TryGetAbility<AvatarAbility>(out var avatar))
                return TaskStatus.Failure;

            if (!EntityUtility.TryGetEntity(targetEntityId.Value, out var target))
                return TaskStatus.Failure;

            if (!avatar.Avatar.AllSkeletonBones.TryGetValue(c_LookTargetBone, out var tra))
                return TaskStatus.Failure;

            if (!tra.TryGetComponent<AimTargetConstraints>(out var aim))
                return TaskStatus.Failure;

            aim.EnableAim = isActive.Value;
            aim.Target = isActive.Value ? target.Transform : null;

            return TaskStatus.Success;
        }
    }
}

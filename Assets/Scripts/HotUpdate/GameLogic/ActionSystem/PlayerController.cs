using Actioner.Runtime;
using GAS.Runtime;
using LGameFramework.GameBase.Blackboard;
using LGameFramework.GameCore;
using UnityEngine;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameLogic
{
    public class PlayerController : MonoBehaviour
    {
        [SerializeField]
        private AbilitySystemComponent m_ASC;

        [SerializeField]
        private ActionSystemComponent m_Action;

        [SerializeField]
        private SequenceCommand m_Command;

        private GameBlackboard m_Blackboard;

        private Transform m_CameraTrans;

        private Vector2 m_MoveInputArgRaw;

        private bool m_Sprinting;

        private ActionerController m_ActionerController;

        private LocomotionController m_LocomotionController;


        //先写这里
        public static readonly BlackboardKey s_WorldMoveDirectionKey = new BlackboardKey("WorldMoveDirectionKey");
        public static readonly BlackboardKey s_MoveCommandKey = new BlackboardKey("MoveCommandKey");
        public static readonly BlackboardKey s_SprintCommandKey = new BlackboardKey("SprintCommandKey");
        public static readonly BlackboardKey s_AnimationDurationKey = new BlackboardKey("AnimationDurationKey");

        private void Start()
        {
            m_LocomotionController = GetComponent<LocomotionController>();
            m_ActionerController = GetComponent<ActionerController>();
            m_Blackboard = gameObject.TryAddComponent<GameBlackboard>();

            InputUtility.RegisterListener((InputActionArgs.InputAction_Move, InputMode.Direction), OnUpdateMoveInput);
            InputUtility.RegisterListener((InputActionArgs.InputAction_Dodge, InputMode.Click), OnUpdateDodgeInput);
            InputUtility.RegisterListener((InputActionArgs.InputAction_Attack, InputMode.Click), OnUpdateAttackInput);
            InputUtility.RegisterListener((InputActionArgs.InputAction_SpecialAttack, InputMode.Click), OnUpdateAttackInput);
            InputUtility.RegisterListener((InputActionArgs.InputAction_Guard, InputMode.Click), OnUpdateGuardInput);
            InputUtility.RegisterListener((InputActionArgs.InputAction_Guard, InputMode.Release), OnUpdateGuardInput);

            var camera = GameFrameworkEntry.GetModule<GMOrbitCamera>();
            camera.Focus = transform;
            m_CameraTrans = camera.Transform;
        }

        private void Update()
        {
            m_ASC.Tags.UpdateDynamicTags(this, m_ActionerController.IsApplyRootMotion, GameplayTagsLib.Event_Animation_RootMotion);
            m_ASC.Tags.UpdateDynamicTags(this, m_LocomotionController.IsMoveing, GameplayTagsLib.Event_Locomotion_IsMoveing);
            m_ASC.Tags.UpdateDynamicTags(this, m_LocomotionController.IsMoveCommand, GameplayTagsLib.Command_Move);
            m_ASC.Tags.UpdateDynamicTags(this, m_LocomotionController.IsReturnning, GameplayTagsLib.Ability_Locomotion_SharpTurn);

            m_LocomotionController.EnableDirectionCommand = m_ASC.Tags.HasNoneTags(GameplayTagsLib.Command_BanCommand_BanMoveCommand);
            m_LocomotionController.EnableLocomotion = m_ASC.Tags.HasNoneTags(GameplayTagsLib.Event_Locomotion_BanLocomotion);
            m_LocomotionController.EnableMove = m_ASC.Tags.HasNoneTags(GameplayTagsLib.Event_Locomotion_BanMove);
            m_LocomotionController.EnableRotate = m_ASC.Tags.HasNoneTags(GameplayTagsLib.Event_Locomotion_BanRotate);

            m_LocomotionController.rootMotionRotate = m_ActionerController.IsApplyRootMotion;

            m_ASC.OnUpdate(Time.deltaTime);

            m_MoveInputArgRaw = m_Command.GetMoveDirection();
        }

        private void LateUpdate()
        {
            var worldDir = m_CameraTrans.TransformDirection(new Vector3(m_MoveInputArgRaw.x, 0f, m_MoveInputArgRaw.y));

            if (!m_LocomotionController.IsReturnning)
                m_LocomotionController.UpdateMoveDirection(worldDir);

            m_ASC.Tags.RemoveDynamicTags(this, GameplayTagsLib.Command_Fight_Attack);
        }

        private void OnUpdateMoveInput(InputActionArgs arg)
        {
            //m_MoveInputArgRaw = arg.Direction;

        }

        private void OnUpdateDodgeInput(InputActionArgs arg)
        {
            //m_ASC.Abilitys.TryActivateAbility<DodgeAbility>();
            //var actionName = m_ASC.Tags.HasTag(GameplayTagsLib.Command_Move) ? "Action_DodgeFront" : "Action_DodgeBack";

            //m_ASC.Abilitys.TryActivateAbility<ActionAbility>(actionName);

        }

        private void OnUpdateAttackInput(InputActionArgs arg)
        {
            //if (arg.ActionName == InputActionArgs.InputAction_Attack)
            //{
            //    if (m_ASC.Tags.HasTag(GameplayTagsLib.Event_Locomotion_Sprint))
            //        m_ASC.Abilitys.TryActivateAbility("Skill_10003");
            //    else
            //        m_ASC.Abilitys.TryActivateAbility<ActionAbility>("Skill_10000");

            //    //m_ASC.Abilitys.TryActivateAbility("Skill_10000");
            //    m_ASC.Tags.AddDynamicTags(this, GameplayTagsLib.Command_Fight_Attack);
            //}
            //else if (arg.ActionName == InputActionArgs.InputAction_SpecialAttack)
            //{
            //    m_ASC.Abilitys.TryActivateAbility("Skill_10004");
            //}
        }

        private void OnUpdateGuardInput(InputActionArgs arg)
        {
            //if (arg.InputMode == InputMode.Click)
            //    m_ASC.Abilitys.TryActivateAbility<GuardAbility>();
            //else if (arg.InputMode == InputMode.Release)
            //    m_ASC.Abilitys.TryInActivateAbility<GuardAbility>();
        }


        private void OnGUI()
        {
            //GUIStyle style = GUI.skin.label;
            //style.fontSize = 30;
            ////GUILayout.Label($"当前速度向量 ：{m_Animator.velocity}   当前速度值：{m_Animator.velocity.sqrMagnitude}", style);

            //GUILayout.BeginHorizontal();

            //GUILayout.BeginVertical();
            //GUILayout.Label("当前固定Tag：", style);
            //foreach (var item in m_ASC.Tags.FixedTags.Keys)
            //    GUILayout.Label(item.FullName, style);
            //GUILayout.EndVertical();

            //GUILayout.BeginVertical();
            //GUILayout.Label("当前动态Tag：", style);
            //foreach (var item in m_ASC.Tags.DynamicTags.Keys)
            //    GUILayout.Label(item.FullName, style);
            //GUILayout.EndVertical();

            //GUILayout.EndHorizontal();

            //actionAbility ??= m_ASC.Abilitys.GetAbility("ActionAbility") as ActionAbility;
            //if (actionAbility != null)
            //{
            //    GUILayout.Label("当前Action：", style);
            //    GUILayout.Label(actionAbility.CurrentAction.TimeLineAsset.UID, style);
            //}

        }
    }
}

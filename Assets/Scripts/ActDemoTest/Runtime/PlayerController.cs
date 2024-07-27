using UnityChanAct;
using Actioner.Runtime;
using LGameFramework.GameBase.Blackboard;
using LGameFramework.GameCore;
using UnityEngine;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace GAS.Runtime
{
    public class PlayerController : MonoBehaviour
    {
        [SerializeField]
        private AbilitySystemComponent m_ASC;

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

        private void Start()
        {
            m_LocomotionController = GetComponent<LocomotionController>();
            m_ActionerController = GetComponent<ActionerController>();
            m_Blackboard = gameObject.TryAddComponent<GameBlackboard>();

            InputUtility.RegisterListener((InputActionArgs.InputAction_Move, InputMode.Direction), OnUpdateMoveInput);
            InputUtility.RegisterListener((InputActionArgs.InputAction_Run, InputMode.Click), OnUpdateRunInput);
            InputUtility.RegisterListener((InputActionArgs.InputAction_Dodge, InputMode.Click), OnUpdateDodgeInput);
            InputUtility.RegisterListener((InputActionArgs.InputAction_LightAttack, InputMode.Click), OnUpdateAttackInput);

            m_CameraTrans = GameFrameworkEntry.GetModule<GMOrbitCamera>().Transform;

            m_ASC.Abilitys.TryActivateAbility<LocomotionAbility>();
        }

        private void Update()
        {
            m_ASC.Tags.UpdateDynamicTags(this, m_ActionerController.IsApplyRootMotion, GameplayTagsLib.Event_Animation_RootMotion);
            m_ASC.Tags.UpdateDynamicTags(this, m_LocomotionController.IsMoveing, GameplayTagsLib.Event_Locomotion_IsMoveing);
            m_ASC.Tags.UpdateDynamicTags(this, m_LocomotionController.IsReturnning, GameplayTagsLib.Ability_Locomotion_SharpTurn);

            m_LocomotionController.EnableLocomotion = m_ASC.Tags.HasNoneTags(GameplayTagsLib.Event_Locomotion_BanLocomotion);
            m_LocomotionController.EnableMove = m_ASC.Tags.HasNoneTags(GameplayTagsLib.Event_Locomotion_BanMove);
            m_LocomotionController.EnableRotate = m_ASC.Tags.HasNoneTags(GameplayTagsLib.Event_Locomotion_BanRotate);

            m_LocomotionController.rootMotionRotate = m_ActionerController.IsApplyRootMotion;

            m_ASC.OnUpdate(Time.deltaTime);

            if (Input.GetKeyDown(KeyCode.P))
            {
                m_ASC.Abilitys.TryActivateAbility<TimeLineAbility>();
            }

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
            m_MoveInputArgRaw = arg.Direction;

        }

        private void OnUpdateRunInput(InputActionArgs arg)
        {
            m_Sprinting = !m_Sprinting;
            m_Blackboard.SetValue(s_SprintCommandKey, m_Sprinting);
            if (m_Sprinting)
                m_ASC.Abilitys.TryActivateAbility<SprintAbility>();
            else
                m_ASC.Abilitys.TryInActivateAbility<SprintAbility>();
        }

        private void OnUpdateDodgeInput(InputActionArgs arg)
        {
            m_ASC.Abilitys.TryActivateAbility<DodgeAbility>();

        }

        private void OnUpdateAttackInput(InputActionArgs arg)
        {
            m_ASC.Abilitys.TryActivateAbility("Skill_10000");
            m_ASC.Tags.AddDynamicTags(this, GameplayTagsLib.Command_Fight_Attack);
        }

        private void OnGUI()
        {
            GUIStyle style = GUI.skin.label;
            style.fontSize = 30;
            //GUILayout.Label($"当前速度向量 ：{m_Animator.velocity}   当前速度值：{m_Animator.velocity.sqrMagnitude}", style);

            GUILayout.BeginHorizontal();

            GUILayout.BeginVertical();
            GUILayout.Label("当前固定Tag：", style);
            foreach (var item in m_ASC.Tags.FixedTags.Keys)
                GUILayout.Label(item.FullName, style);
            GUILayout.EndVertical();

            GUILayout.BeginVertical();
            GUILayout.Label("当前动态Tag：", style);
            foreach (var item in m_ASC.Tags.DynamicTags.Keys)
                GUILayout.Label(item.FullName, style);
            GUILayout.EndVertical();

            GUILayout.EndHorizontal();
        }
    }
}

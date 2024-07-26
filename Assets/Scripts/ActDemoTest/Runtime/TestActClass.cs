using LGameFramework.GameCore;
using UnityEngine;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace UnityChanAct
{
    public class TestActClass : MonoBehaviour
    {
        private Vector2 m_MoveInputArgRaw;

        private Vector3 m_WorldMoveDirectionLerp;

        private Transform m_CameraTrans;

        private LocomotionController m_LocomotionController;

        void Start()
        {
            InputUtility.RegisterListener((InputActionArgs.InputAction_Move, InputMode.Direction), OnUpdateMoveInput);
            m_CameraTrans = GameFrameworkEntry.GetModule<GMOrbitCamera>().Transform;

            m_LocomotionController = GetComponent<LocomotionController>();

        }

        private void LateUpdate()
        {
            var worldDir = m_CameraTrans.TransformDirection(new Vector3(m_MoveInputArgRaw.x, 0f, m_MoveInputArgRaw.y));
            m_WorldMoveDirectionLerp = Vector3.Lerp(m_WorldMoveDirectionLerp, worldDir, 10f * Time.deltaTime);
            m_LocomotionController.UpdateMoveDirection(worldDir);
        }
        private void OnUpdateMoveInput(InputActionArgs arg)
        {
            m_MoveInputArgRaw = arg.Direction;

        }
    }
}

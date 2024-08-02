using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class SearchEffect : TimeLineEffect
    {
        private LocomotionController m_Controller;

        private bool m_ApplyFlag;

        public override void OnApply(params object[] paramArgs)
        {
            base.OnApply(paramArgs);

            m_ApplyFlag = false;
            m_Controller = Source.GetComponent<LocomotionController>();
        }

        public override void DisApply(bool canceled)
        {
            base.DisApply(canceled);
            m_Controller = null;
            m_ApplyFlag = false;
        }

        public override void OnUpdate(float deltaTime)
        {
            base.OnUpdate(deltaTime);

            if (!m_ApplyFlag && m_Controller.IsMoveCommand)
            {
                m_ApplyFlag = true;
                Source.transform.rotation = Quaternion.LookRotation(m_Controller.WorldMoveDirection);
            }
        }
    }
}

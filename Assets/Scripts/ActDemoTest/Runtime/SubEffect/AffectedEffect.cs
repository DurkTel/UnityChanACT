using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class AffectedEffect : TimeLineEffect
    {
        private AffectedEffectClip m_AffectedClip;

        private Collider m_Collider;
        public override void OnApply(params object[] paramArgs)
        {
            base.OnApply(paramArgs);
            m_AffectedClip = paramArgs[0] as AffectedEffectClip;

            switch (m_AffectedClip.boxShape)
            {
                case FightBoxShape.Box:
                    var box = Source.TryAddComponent<BoxCollider>();
                    box.center = m_AffectedClip.boxParams.center;
                    box.size = m_AffectedClip.boxParams.halfExtents;
                    box.isTrigger = true;
                    m_Collider = box;
                    break;
                case FightBoxShape.Sphere:
                    break; 
                case FightBoxShape.Capsule:
                    break;
            }
        }

        public override void DisApply(bool canceled)
        {
            base.DisApply(canceled);
            if (m_Collider != null)
                GameObject.Destroy(m_Collider);

        }
    }
}

using UnityEngine;

namespace BehaviorDesigner.Runtime
{
    // Wrapper for the Behavior class
    [AddComponentMenu("Behavior Designer/Behavior Tree")]
    public class BehaviorTree : Behavior
    {
        // intentionally left blank

        public const string c_Event_PrepareAttack = "PrepareAttack";

        public int EnitityId { get; set; }



    }
}
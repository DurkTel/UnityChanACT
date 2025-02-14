using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public interface IActionSystemComponent
    {
        public int Id { get; }
        public GameObject GameObject { get; }
        public Transform Transform { get; }
        public List<ActionInfo> Actions { get; }
        public ActionChangeInfo PreviousChangeInfo { get; }
        public void PreorderAction(ActionChangeInfo changeInfo, ActionChangeType changeType);

    }
}

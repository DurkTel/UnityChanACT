

using System;
using System.Collections.Generic;
using GameMessage;
using GameNet;
using LGameFramework.GameNet;

namespace LGameFramework.GameLogic
{
    public class BattlefieldProxy
    {
        public void FightLoadCompleteAsyn(int fightId, int uid, string ip, int udpPort, Action response)
        {
            IFight.FightLoadCompleteAsyn(fightId, uid, ip, udpPort, response);
        }

        public void RobotLoadCompleteAsyn(int robotId, int fightId, int uid, string ip, int udpPort, Action response)
        {
            IFight.RobotLoadCompleteAsyn(robotId, fightId, uid, ip, udpPort, response);
        }

        public void SynFightInfoAsyn(OperationInfo operate, Action response)
        {
            IFight.SynFightInfoAsyn(operate, response);
        }

        public void SynRobotFightInfoAsyn(int robotId, OperationInfo operate, Action response)
        {
            IFight.SynRobotFightInfoAsyn(robotId, operate, response);
        }
    }
}

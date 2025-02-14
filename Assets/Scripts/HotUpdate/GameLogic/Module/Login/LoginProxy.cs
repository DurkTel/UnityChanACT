using GameNet;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class LoginProxy
    {
        public void CreatePlayerAsyn(string playerName, Action<int> response)
        {
            IPlayer.CreatePlayerAsyn(playerName, response);
        }

        public void LoginAsyn(int uid, Action<int> response)
        {
            ILogin.LoginAsyn(uid, response);
        }
    }
}

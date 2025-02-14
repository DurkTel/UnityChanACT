using LGameFramework.GameBase.FSM;
using LGameFramework.GameBase;
using UnityEngine;

public class ProcedureLaunch : FSM_Status<ProcedureLaunchProcess>
{
    public override void OnAction()
    {
        switch (GameConfig.Instance.assetLoadMode)
        {
            case 0:
#if UNITY_EDITOR
                //AssetManifest_Editor.RefreshEditorAssetsManifest();
#endif
                subMachine.ChangeState(ProcedureLaunchProcess.GameEntry);
                break;
            case 1:
                subMachine.ChangeState(ProcedureLaunchProcess.CheckVersion);
                break;
            default:
                break;
        }
    }

    public override void OnEnter()
    {
        Application.targetFrameRate = GameConfig.Instance.frameRate;
        Time.timeScale = GameConfig.Instance.gameSpeed;
        Application.runInBackground = GameConfig.Instance.runInBackground;
        Screen.sleepTimeout = GameConfig.Instance.neverSleep ? SleepTimeout.NeverSleep : SleepTimeout.SystemSetting;

    }

    public override void OnExit()
    {
        
    }
}

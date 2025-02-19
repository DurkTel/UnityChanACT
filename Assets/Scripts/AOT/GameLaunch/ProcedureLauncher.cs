using LGameFramework.GameBase.FSM;
using UnityEngine;
using LGameFramework.GameBase;
using UnityEngine.Networking;

/// <summary>
/// 流程加载器
/// </summary>
public class ProcedureLauncher : MonoBehaviour
{
    /// <summary>
    /// 记录标识
    /// </summary>
    public const string procedureMarkHead = "Procedure_";

    /// <summary>
    /// 流程状态机
    /// </summary>
    private ProcedureFSM m_Procedure;


    private void Awake()
    {
        m_Procedure = new ProcedureFSM();
        m_Procedure.dataBase = gameObject.AddComponent<FSM_DataBase>();
        m_Procedure.AddStatus<ProcedureLaunch>(ProcedureLaunchProcess.Launch);
        m_Procedure.AddStatus<ProcedureCheckVersion>(ProcedureLaunchProcess.CheckVersion);
        m_Procedure.AddStatus<ProcedureCheckLocalFile>(ProcedureLaunchProcess.CheckLocalFile);
        m_Procedure.AddStatus<ProcedureUpdateVersion>(ProcedureLaunchProcess.UpdateVersion);
        m_Procedure.AddStatus<ProcedureGameEntry>(ProcedureLaunchProcess.GameEntry);
        
        m_Procedure.OnInit();

    }

    private void Update()
    {
        m_Procedure.OnAction();
    }
    private void OnDestroy()
    {
        m_Procedure = null;
    }

}

public class ProcedureFSM : FSM_StateMachine<ProcedureLaunchProcess>
{
    public override void ChangeState(ProcedureLaunchProcess name)
    {
        GameLogger.INFO("程序启动流程——" + name);
        base.ChangeState(name);
    }
}

/// <summary>
/// 程序运行流程
/// </summary>
public enum ProcedureLaunchProcess
{
    /// <summary>
    /// 开始运行
    /// </summary>
    Launch,
    /// <summary>
    /// 检查版本文件
    /// </summary>
    CheckVersion,
    /// <summary>
    /// 检查本地本地文件
    /// </summary>
    CheckLocalFile,
    /// <summary>
    /// 更新版本
    /// </summary>
    UpdateVersion,
    /// <summary>
    /// 进入游戏主入口
    /// </summary>
    GameEntry,
    /// <summary>
    /// 程序异常
    /// </summary>
    ProcedureError,
}

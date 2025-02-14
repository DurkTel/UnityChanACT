using LGameFramework.GameBase.FSM;
using HybridCLR;
using LGameFramework.GameBase;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;

public class ProcedureGameEntry : FSM_Status<ProcedureLaunchProcess>
{
    public override void OnEnter()
    {
        LoadMetadataForAOTAssemblies();

        Assembly coreAssembly = null;

#if !UNITY_EDITOR
        foreach (var dll in GameConfig.Instance.hotUpdateDll)
        {
            var assembly = Assembly.Load(File.ReadAllBytes($"{GameConfig.Instance.hotUpdateDllPath.AssetPath}/{dll}.bytes"));
            if (coreAssembly == null)
                coreAssembly = assembly;
        }
#else
        foreach (var dll in GameConfig.Instance.hotUpdateDll)
        {
            string name = Path.GetFileNameWithoutExtension(dll);
            var assembly = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == name);
            if (coreAssembly == null)
                coreAssembly = assembly;
        }
#endif
        Type type = coreAssembly.GetType("LGameFramework.GameCore.GameFrameworkEntry");
        type.GetMethod("Instantiate").Invoke(null, new object[] { true });

        //进入游戏成功 销毁启动器
        Debug.Log("销毁启动器");
        UnityEngine.Object.Destroy(dataBase.gameObject);
    }

    private void LoadMetadataForAOTAssemblies()
    {
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in GameConfig.Instance.aotGenericDll)
        {
            string path = $"{GameConfig.Instance.hotUpdateDllPath.AssetPath}/{aotDllName}.bytes";
            if (!File.Exists(path))
                continue;

            byte[] dllBytes = File.ReadAllBytes(path);
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            GameLogger.INFO($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }
}

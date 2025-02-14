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

        //������Ϸ�ɹ� ����������
        Debug.Log("����������");
        UnityEngine.Object.Destroy(dataBase.gameObject);
    }

    private void LoadMetadataForAOTAssemblies()
    {
        /// ע�⣬����Ԫ�����Ǹ�AOT dll����Ԫ���ݣ������Ǹ��ȸ���dll����Ԫ���ݡ�
        /// �ȸ���dll��ȱԪ���ݣ�����Ҫ���䣬�������LoadMetadataForAOTAssembly�᷵�ش���
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in GameConfig.Instance.aotGenericDll)
        {
            string path = $"{GameConfig.Instance.hotUpdateDllPath.AssetPath}/{aotDllName}.bytes";
            if (!File.Exists(path))
                continue;

            byte[] dllBytes = File.ReadAllBytes(path);
            // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            GameLogger.INFO($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }
}

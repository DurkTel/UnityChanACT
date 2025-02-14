using System.IO;
using UnityEditor;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class FolderContextMenu
    {


        [MenuItem("Assets/Create/LGameFramework/CreateModule")]
        private static void CreateNewModule()
        {
            // 获取选中的对象
            Object selectedObject = Selection.activeObject;

            // 检查选中的对象是否是文件夹并且在目标路径中
            string path = AssetDatabase.GetAssetPath(selectedObject);
            if (AssetDatabase.IsValidFolder(path) && path == CreateModule.c_moduleFolder)
            {

                InputStringWindow.OpenWindow("新建模块", (s) =>
                {
                    string name = s[0];
                    name = char.ToUpper(name[0]) + name.Substring(1); //首字符大写
                    string newModule = Path.Combine(CreateModule.c_moduleFolder, name);
                    if (Directory.Exists(newModule))
                    {
                        EditorUtility.DisplayDialog("提示", "已经存在相同模块！", "打错字了 我的");
                        return;
                    }

                    Directory.CreateDirectory(newModule);

                    CreateModule.Create(name);
                    AssetDatabase.Refresh();

                }, new InputStringWindow.InputStringSet() { tips = "输入要新建的模块名" });
            }
        }

        [MenuItem("Assets/Create/LGameFramework/CreateModule", true)]
        private static bool ValidateCustomAction()
        {
            // 获取选中的对象
            Object selectedObject = Selection.activeObject;

            // 检查选中的对象是否是文件夹并且在目标路径中
            string path = AssetDatabase.GetAssetPath(selectedObject);
            return AssetDatabase.IsValidFolder(path) && path == CreateModule.c_moduleFolder;
        }
    }
}

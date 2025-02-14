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
            // ��ȡѡ�еĶ���
            Object selectedObject = Selection.activeObject;

            // ���ѡ�еĶ����Ƿ����ļ��в�����Ŀ��·����
            string path = AssetDatabase.GetAssetPath(selectedObject);
            if (AssetDatabase.IsValidFolder(path) && path == CreateModule.c_moduleFolder)
            {

                InputStringWindow.OpenWindow("�½�ģ��", (s) =>
                {
                    string name = s[0];
                    name = char.ToUpper(name[0]) + name.Substring(1); //���ַ���д
                    string newModule = Path.Combine(CreateModule.c_moduleFolder, name);
                    if (Directory.Exists(newModule))
                    {
                        EditorUtility.DisplayDialog("��ʾ", "�Ѿ�������ͬģ�飡", "������� �ҵ�");
                        return;
                    }

                    Directory.CreateDirectory(newModule);

                    CreateModule.Create(name);
                    AssetDatabase.Refresh();

                }, new InputStringWindow.InputStringSet() { tips = "����Ҫ�½���ģ����" });
            }
        }

        [MenuItem("Assets/Create/LGameFramework/CreateModule", true)]
        private static bool ValidateCustomAction()
        {
            // ��ȡѡ�еĶ���
            Object selectedObject = Selection.activeObject;

            // ���ѡ�еĶ����Ƿ����ļ��в�����Ŀ��·����
            string path = AssetDatabase.GetAssetPath(selectedObject);
            return AssetDatabase.IsValidFolder(path) && path == CreateModule.c_moduleFolder;
        }
    }
}

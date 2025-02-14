using System.IO;
using UnityEditor;

namespace LGameFramework.GameEditor
{
    public class CreateModule
    {

        public const string c_moduleFolder = "Assets/Scripts/HotUpdate/GameLogic/Module";

        public static void Create(string name)
        {
            Create_Module(name);
            Create_Cfg(name);
            Create_Data(name);
            Create_Proxy(name);
            AssetDatabase.Refresh();
            Create_Define();
        }

        private static void Create_Module(string name)
        {
            var writer = new IndentedWriter(new StreamWriter(c_moduleFolder + $"/{name}/{name}Module.cs"));
            using (writer)
            {
                //WriteDescription(writer);
                writer.WriteLine("");
                writer.WriteLine("");
                writer.WriteLine("using GameMessage;");
                WriteNamespace(writer);
                writer.WriteLine("{");
                writer.Indent++;
                {
                    writer.WriteLine($"public class {name}Module : Module");
                    writer.WriteLine("{");
                    writer.Indent++;
                    {
                        writer.WriteLine("public override void OnRegister()");
                        writer.WriteLine("{");
                        writer.Indent++;
                        {
                            writer.WriteLine($"Data.{name} = new {name}Data();");
                            writer.WriteLine($"Proxy.{name} = new {name}Proxy();");
                            writer.WriteLine($"Cfg.{name} = new {name}Config();");
                        }
                        writer.Indent--;
                        writer.WriteLine("}");
                        writer.WriteLine("");
                        writer.WriteLine("public override void OnUnregister()");
                        writer.WriteLine("{");
                        writer.WriteLine("}");
                        writer.WriteLine("");
                        writer.WriteLine("public override ENetworkCommand[] GetNetworkCommand()");
                        writer.WriteLine("{");
                        writer.Indent++;
                        {
                            writer.WriteLine("return null;");
                        }
                        writer.Indent--;
                        writer.WriteLine("}");
                        writer.WriteLine("");
                        writer.WriteLine("public override void OnNetworkCommand(ENetworkCommand cmd, NetMessageArg data)");
                        writer.WriteLine("{");
                        writer.WriteLine("}");
                    }
                    writer.Indent--;
                    writer.WriteLine("}");
                }
                writer.Indent--;
                writer.WriteLine("}");
            }
        }

        private static void Create_Cfg(string name)
        {
            var writer = new IndentedWriter(new StreamWriter(c_moduleFolder + $"/{name}/{name}Config.cs"));
            using (writer)
            {
                //WriteDescription(writer);
                writer.WriteLine("");
                writer.WriteLine("");
                WriteNamespace(writer);
                writer.WriteLine("{");
                writer.Indent++;
                {
                    writer.WriteLine($"public class {name}Config");
                    writer.WriteLine("{");
                    writer.WriteLine("}");
                }
                writer.Indent--;
                writer.WriteLine("}");
            }
        }

        private static void Create_Data(string name)
        {
            var writer = new IndentedWriter(new StreamWriter(c_moduleFolder + $"/{name}/{name}Data.cs"));
            using (writer)
            {
                //WriteDescription(writer);
                writer.WriteLine("");
                writer.WriteLine("");
                WriteNamespace(writer);
                writer.WriteLine("{");
                writer.Indent++;
                {
                    writer.WriteLine($"public class {name}Data");
                    writer.WriteLine("{");
                    writer.WriteLine("}");
                }
                writer.Indent--;
                writer.WriteLine("}");
            }
        }

        private static void Create_Proxy(string name)
        {
            var writer = new IndentedWriter(new StreamWriter(c_moduleFolder + $"/{name}/{name}Proxy.cs"));
            using (writer)
            {
                //WriteDescription(writer);
                writer.WriteLine("");
                writer.WriteLine("");
                WriteNamespace(writer);
                writer.WriteLine("{");
                writer.Indent++;
                {
                    writer.WriteLine($"public class {name}Proxy");
                    writer.WriteLine("{");
                    writer.WriteLine("}");
                }
                writer.Indent--;
                writer.WriteLine("}");
            }
        }

        private static void Create_Define()
        { 
            var writer = new IndentedWriter(new StreamWriter(c_moduleFolder + $"/ModuleDefine.cs"));
            using (writer)
            {
                WriteDescription(writer);
                writer.WriteLine("");
                writer.WriteLine("");
                WriteNamespace(writer);
                writer.WriteLine("{");
                writer.Indent++;
                {
                    var folders = Directory.GetDirectories(c_moduleFolder);
                    writer.WriteLine("public class ModuleCfg");
                    writer.WriteLine("{");
                    writer.Indent++;
                    {
                        foreach (var folder in folders)
                        {
                            string name = Path.GetFileName(folder);
                            writer.WriteLine($"public {name}Config {name} {{ get; set; }}");
                        }
                    }
                    writer.Indent--;
                    writer.WriteLine("}");
                    writer.WriteLine("");
                    writer.WriteLine("public class ModuleData");
                    writer.WriteLine("{");
                    writer.Indent++;
                    {
                        foreach (var folder in folders)
                        {
                            string name = Path.GetFileName(folder);
                            writer.WriteLine($"public {name}Data {name} {{ get; set; }}");
                        }
                    }
                    writer.Indent--;
                    writer.WriteLine("}");
                    writer.WriteLine("");
                    writer.WriteLine("public class ModuleProxy");
                    writer.WriteLine("{");
                    writer.Indent++;
                    {
                        foreach (var folder in folders)
                        {
                            string name = Path.GetFileName(folder);
                            writer.WriteLine($"public {name}Proxy {name} {{ get; set; }}");
                        }
                    }
                    writer.Indent--;
                    writer.WriteLine("}");
                }
                writer.Indent--;
                writer.WriteLine("}");
            }
        }

        private static void WriteDescription(IndentedWriter writer)
        {
            writer.WriteLine("///////////////////////////////////");
            writer.WriteLine("//// This is a generated file. ////");
            writer.WriteLine("////     Do not modify it.     ////");
            writer.WriteLine("////       Generated by        ////");
            writer.WriteLine("///////MessageGenerate.Gen.////////");
            writer.WriteLine("///////////////////////////////////");
        }

        private static void WriteNamespace(IndentedWriter writer)
        {
            writer.WriteLine("using System.Collections.Generic;");
            writer.WriteLine("using LGameFramework.GameNet;");
            writer.WriteLine("");
            writer.WriteLine("namespace LGameFramework.GameLogic");
        }
    }
}

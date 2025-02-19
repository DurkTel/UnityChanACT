// <auto-generated>
//     Generated by the protocol buffer compiler.  DO NOT EDIT!
//     source: GameMsg.proto
// </auto-generated>
#pragma warning disable 1591, 0612, 3021, 8981
#region Designer generated code

using pb = global::Google.Protobuf;
using pbc = global::Google.Protobuf.Collections;
using pbr = global::Google.Protobuf.Reflection;
using scg = global::System.Collections.Generic;
namespace GameMessage {

  /// <summary>Holder for reflection information generated from GameMsg.proto</summary>
  public static partial class GameMsgReflection {

    #region Descriptor
    /// <summary>File descriptor for GameMsg.proto</summary>
    public static pbr::FileDescriptor Descriptor {
      get { return descriptor; }
    }
    private static pbr::FileDescriptor descriptor;

    static GameMsgReflection() {
      byte[] descriptorData = global::System.Convert.FromBase64String(
          string.Concat(
            "Cg1HYW1lTXNnLnByb3RvEgtHYW1lTWVzc2FnZSp+Cg9FTmV0d29ya0NvbW1h",
            "bmQSCAoETm9uZRAAEhYKEkdhbWVSb29tVXBkYXRlSW5mbxABEhgKFEJhdHRs",
            "ZWZpZWxkU3RhcnRJbmZvEAISFwoTU3luQ2xpZW50RnJpc3RGcmFtZRAUEhYK",
            "ElN5bkNsaWVudE9wZXJhdGlvbhAVYgZwcm90bzM="));
      descriptor = pbr::FileDescriptor.FromGeneratedCode(descriptorData,
          new pbr::FileDescriptor[] { },
          new pbr::GeneratedClrTypeInfo(new[] {typeof(global::GameMessage.ENetworkCommand), }, null, null));
    }
    #endregion

  }
  #region Enums
  public enum ENetworkCommand {
    [pbr::OriginalName("None")] None = 0,
    /// <summary>
    ///房间内信息更新
    /// </summary>
    [pbr::OriginalName("GameRoomUpdateInfo")] GameRoomUpdateInfo = 1,
    /// <summary>
    ///房间的游戏开始
    /// </summary>
    [pbr::OriginalName("BattlefieldStartInfo")] BattlefieldStartInfo = 2,
    /// <summary>
    ///同步客户端第一帧
    /// </summary>
    [pbr::OriginalName("SynClientFristFrame")] SynClientFristFrame = 20,
    /// <summary>
    ///同步客户端操作
    /// </summary>
    [pbr::OriginalName("SynClientOperation")] SynClientOperation = 21,
  }

  #endregion

}

#endregion Designer generated code

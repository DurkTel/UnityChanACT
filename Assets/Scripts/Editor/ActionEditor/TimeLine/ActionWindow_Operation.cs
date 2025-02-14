using GAS.Runtime;
using LGameFramework.GameLogic;
using System;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public partial class ActionWindow : UnityEditor.EditorWindow
    {

        /// <summary>
        /// 打开添加轨道菜单
        /// </summary>
        public void OpenAddTrackMenu()
        {
            Type type = typeof(ActionTrack);

            var list = typeof(ActionTrack).Assembly
            .GetTypes()
            .Where(t => t.IsClass && !t.IsAbstract && t.IsSubclassOf(type))
            .ToList();

            GenericMenu menu = new GenericMenu();
            foreach (var item in list)
            {
                menu.AddItem(new GUIContent(item.Name), false, () =>
                {
                    var track = Activator.CreateInstance(item) as ActionTrack;
                    s_SelectActionInfo.ActionTracks.Add(track);
                    OnInit();
                });
            }

            //menu.AddItem(new GUIContent("Copy"), false, () =>
            //{
            //    var track = new ActionTrack();
            //    m_AbilityAsset.AbilityTracks.Add(track);
            //    OnInit();
            //});

            menu.ShowAsContext();
        }


        /// <summary>
        /// 打开添加片段菜单
        /// </summary>
        public void OpneAddClipMenu()
        {
            if (s_SelectActionInfo == null || m_CurrentSelectTrack == -1 || m_CurrentSelectTrack >= s_SelectActionInfo.Count)
                return;
            var mousePos = Event.current.mousePosition;
            GenericMenu menu = new GenericMenu();
            var track = s_SelectActionInfo[m_CurrentSelectTrack];
            Type baseType = track.GetClipType();
            menu.AddItem(new GUIContent($"Add {baseType.Name}"), false, () =>
            {
                var track = s_SelectActionInfo[m_CurrentSelectTrack];
                var clip = Activator.CreateInstance(baseType) as ActionClip;
                clip.actionId = s_SelectActionInfo.ActionID;
                var sTime = mousePos.x;
                sTime = Mathf.RoundToInt(sTime / 10); //对齐帧

                clip.UpdateTime((int)sTime, (int)sTime + 25);
                track.ActionClips.Add(clip);
                OnInit();
            });

            menu.ShowAsContext();
        }

        /// <summary>
        /// 打开操作轨道菜单
        /// </summary>
        public void OpenOperateTrackpMenu()
        {
            GenericMenu menu = new GenericMenu();
            menu.AddItem(new GUIContent("Delete"), false, () =>
            {
                if (s_SelectActionInfo == null || m_CurrentSelectTrack == -1)
                    return;

                s_SelectActionInfo.ActionTracks.RemoveAt(m_CurrentSelectTrack);
                OnInit();
            });

            menu.ShowAsContext();

        }

        /// <summary>
        /// 打开操作片段菜单
        /// </summary>
        public void OpenOperateClipMenu()
        {
            GenericMenu menu = new GenericMenu();
            menu.AddItem(new GUIContent("Delete"), false, () =>
            {
                if (s_SelectActionInfo == null || m_CurrentSelectTrack == -1)
                    return;

                int trackIndex = -1;
                int clipIndex = -1;
                GetSelectIndex(ref trackIndex, ref clipIndex);

                if (trackIndex == -1 || clipIndex == -1)
                    return;
                s_SelectActionInfo[trackIndex].ActionClips.RemoveAt(clipIndex);
                OnInit();
            });

            menu.ShowAsContext();

        }
    }
}

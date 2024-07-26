using GAS.Runtime;
using LGameFramework.GameCore;

namespace UnityChanAct
{
    public class AudioCue : GameplayCueDuration
    {
        public override void Dispose()
        {
            
        }

        public override void Trigger<V>(V arg)
        {
            
        }

        public override void Trigger(GameplayCueAsset asset, object param = null)
        {
            if (asset is AudioCueAsset audioAsset)
            {
                AudioUtility.Play("HitAudio", audioAsset.audioClip);
            }
        }
    }
}


using System.Collections.Generic;

namespace GAS.Runtime
{
    public static class GASExpansion
    {
        public static GameplayTag ToGameplayTag(this string tag)
        {
            return GameplayTagsLib.TagMap.GetValueOrDefault(tag);
        }
    }
}

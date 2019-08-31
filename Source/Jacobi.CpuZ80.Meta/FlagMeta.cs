using System.Collections.Generic;

namespace Jacobi.CpuZ80.Meta
{
    public enum FlagsZ80
    {
        C,
        N,
        PV,
        X,
        H,
        Y,
        Z,
        S
    }

    public sealed class FlagMeta
    {
        public string Name { get; set; }

        public Dictionary<FlagsZ80, string> Operations { get; set; }

    }
}

using System.Collections.Generic;

namespace Jacobi.CpuZ80.Meta
{
    public class InstructionMeta
    {
        public InstructionMeta(InstructionInfo info)
        {
            Info = info;
            Parameters = InstructionParameter.Parse(info.Mnemonic);
        }

        public InstructionInfo Info { get; }

        public string FormatMnemonic(IDictionary<string, string> paramValues)
        {
            return InstructionParameter.FormatText(Info.Mnemonic, paramValues);
        }

        public IEnumerable<string> Parameters { get; }
    }
}

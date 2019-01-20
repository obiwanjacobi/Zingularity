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

        public bool IsCB => (IsDD || IsFD) ? Info.Bytes[1] == "CB" : Info.Bytes[0] == "CB";

        public bool IsED => (IsDD || IsFD) ? Info.Bytes[1] == "ED" : Info.Bytes[0] == "ED";

        public bool IsDD => Info.Bytes[0] == "DD";

        public bool IsFD => Info.Bytes[0] == "FD";
    }
}

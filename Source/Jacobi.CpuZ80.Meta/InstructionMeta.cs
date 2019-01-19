using System.Collections.Generic;
using System.Linq;

namespace Jacobi.CpuZ80.Meta
{
    public class InstructionMeta
    {
        public InstructionMeta(InstructionInfo info)
        {
            Info = info;
            Parameters = ParseParameters();
        }

        public InstructionInfo Info { get; }

        public string FormatMnemonic(IDictionary<string, string> paramValues)
        {
            return InstructionParameter.FormatText(Info.Mnemonic, paramValues);
        }

        public IEnumerable<string> Parameters { get; }

        private IEnumerable<string> ParseParameters()
        {
            var parts = Info.Mnemonic.Split(' ', '+', ',');
            return parts.Where(p => p.IsLower()).ToList();
        }
    }
}

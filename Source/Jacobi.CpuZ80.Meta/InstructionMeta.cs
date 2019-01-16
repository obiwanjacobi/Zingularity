using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Jacobi.CpuZ80.Meta
{
    public class InstructionMeta
    {
        private readonly InstructionInfo _info;

        public InstructionMeta(InstructionInfo info)
        {
            _info = info;

            Parameters = ParseParameters();
        }

        public string FormatMnemonic(IDictionary<string, string> paramValues)
        {
            var builder = new StringBuilder(_info.Mnemonic);

            foreach (var paramVal in paramValues)
            {
                builder.Replace(paramVal.Key, paramVal.Value);
            }

            return builder.ToString();
        }

        public IEnumerable<string> Parameters { get; }

        private IEnumerable<string> ParseParameters()
        {
            var parts = _info.Mnemonic.Split(' ');
            return parts.Where(p => p.IsLower()).ToList();
        }
    }
}

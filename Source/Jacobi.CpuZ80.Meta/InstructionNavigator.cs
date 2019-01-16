using System.Collections.Generic;
using System.Linq;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionNavigator
    {
        private readonly InstructionSetInfo _instructionSetInfo;

        public InstructionNavigator(InstructionSetInfo setInfo)
        {
            _instructionSetInfo = setInfo;
        }

        public IEnumerable<InstructionInfo> MnemonicStartsWith(string part)
        {
            return _instructionSetInfo.Instructions
                .Where(i => i.Mnemonic.StartsWith(part.ToUpperInvariant()))
                .ToList();
        }

        public IEnumerable<IDictionary<string, string>> TablesForValue(string value)
        {
            var tables = new List<IDictionary<string, string>>();

            foreach (var table in _instructionSetInfo.Tables)
            {
                foreach (var val in table.Value.Values)
                {
                    if (val == value)
                    {
                        tables.Add(table.Value);
                        break;
                    }
                }
            }

            return tables;
        }
    }
}

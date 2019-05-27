using System.Collections.Generic;
using System.Linq;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionNavigator
    {
        private readonly InstructionSetInfo _instructionSetInfo;
        private readonly List<TableInfo> _tables;

        public InstructionNavigator(InstructionSetInfo setInfo)
        {
            _instructionSetInfo = setInfo;
            _tables = TableInfo.ToList(setInfo.Tables);
        }

        public InstructionSetInfo InstructionSetInfo => _instructionSetInfo;

        public IEnumerable<TableInfo> Tables => _tables;

        public IEnumerable<InstructionInfo> MnemonicStartsWith(string part)
        {
            return _instructionSetInfo.Instructions
                .Where(i => i.Mnemonic.StartsWith(part.ToUpperInvariant()))
                .ToList();
        }

        public IEnumerable<InstructionInfo> Mnemonic(string part)
        {
            return _instructionSetInfo.Instructions
                .Where(i => i.Mnemonic.StartsWith(part))
                .ToList();
        }

        public IEnumerable<TableInfo> TablesForValue(string value)
        {
            var tables = new List<TableInfo>();

            foreach (var table in _tables)
            {
                foreach (var val in table.Entries.Values)
                {
                    if (val == value)
                    {
                        tables.Add(table);
                        break;
                    }
                }
            }

            return tables;
        }
    }
}

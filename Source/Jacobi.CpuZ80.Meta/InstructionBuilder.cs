using System.Collections.Generic;
using System.Linq;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionBuilder
    {
        private readonly InstructionInfo _instructionInfo;

        public static InstructionBuilder Copy(InstructionInfo instructionInfo)
        {
            var newInstructionInfo = new InstructionInfo
            {
                AltCycles = instructionInfo.AltCycles,
                Cycles = instructionInfo.Cycles,
                Flags = instructionInfo.Flags,
            };

            newInstructionInfo.Bytes.AddRange(instructionInfo.Bytes);
            newInstructionInfo.Mnemonic = instructionInfo.Mnemonic;

            return new InstructionBuilder(newInstructionInfo);
        }

        public InstructionBuilder(InstructionInfo instructionInfo)
        {
            _instructionInfo = instructionInfo;
        }

        public InstructionInfo InstructionInfo => _instructionInfo;

        public void ReplaceParams(IEnumerable<TableInfo> tables, IDictionary<string, string> paramValues)
        {
            _instructionInfo.Mnemonic = InstructionParameter.FormatText(_instructionInfo.Mnemonic, paramValues);

            var tableValues = ToTableValues(tables, paramValues);
            _instructionInfo.Bytes = InstructionParameter.FormatBytes(_instructionInfo.Bytes, tableValues);
        }

        private static List<KeyValuePair<string, string>> ToTableValues(
            IEnumerable<TableInfo> tables, IDictionary<string, string> paramValues)
        {
            var tableValues = new List<KeyValuePair<string, string>>();
            foreach (var kvParam in paramValues)
            {
                var table = tables.Where(t => t.Key == kvParam.Key).First();
                tableValues.Add(new KeyValuePair<string, string>(kvParam.Key, table.Entries[kvParam.Value]));
            }

            return tableValues;
        }
    }
}

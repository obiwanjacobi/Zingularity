using System;
using System.Collections.Generic;
using System.Linq;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionBuilder
    {
        private readonly InstructionInfo _instructionInfo;
        private readonly InstructionMeta _instructionMeta;

        public static InstructionBuilder New(InstructionInfo instructionInfo)
        {
            var newInstructionInfo = new InstructionInfo
            {
                AltCycles = instructionInfo.AltCycles,
                Cycles = instructionInfo.Cycles,
                Ops = instructionInfo.Ops,
                Flags = instructionInfo.Flags,
                Parent = instructionInfo,
            };

            newInstructionInfo.Bytes.AddRange(instructionInfo.Bytes);
            newInstructionInfo.Mnemonic = instructionInfo.Mnemonic;

            return new InstructionBuilder(newInstructionInfo);
        }

        private InstructionBuilder(InstructionInfo instructionInfo)
        {
            _instructionInfo = instructionInfo;
            _instructionMeta = new InstructionMeta(instructionInfo);
        }

        public InstructionInfo InstructionInfo => _instructionInfo;
        public InstructionMeta InstructionMeta => _instructionMeta;

        public void AssignParameterValues(IEnumerable<TableInfo> tables, IDictionary<string, string> paramValues)
        {
            _instructionInfo.Mnemonic = InstructionParameter.FormatText(_instructionInfo.Mnemonic, paramValues);
            //AssignVariableValues(paramValues.ToList());

            var tableValues = ToTableValues(tables, paramValues);
            _instructionInfo.Bytes = InstructionParameter.FormatBytes(_instructionInfo.Bytes, tableValues);
            AssignVariableValues(tableValues);
        }

        private void AssignVariableValues(IEnumerable<KeyValuePair<string, string>> variableValues)
        {
            string lookupValue(string name)
            {
                foreach (var kvp in variableValues)
                {
                    if (kvp.Key == name) return kvp.Value;
                }
                return null;
            };

            foreach (var variable in _instructionMeta.Variables)
            {
                var val = lookupValue(variable.Name);
                if (val != null)
                {
                    if (variable.Type == InstructionVariableType.OpcodeByte)
                        variable.Value = Convert.ToInt32(val, 16);  // hex
                    else
                        variable.Value = Convert.ToInt32(val, 2);   // binary
                }
            }
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

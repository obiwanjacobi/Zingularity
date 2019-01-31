using System.Collections.Generic;
using System.Linq;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionVariable
    {
        private static readonly Dictionary<string, InstructionVariableType> _varTables =
            new Dictionary<string, InstructionVariableType>()
        {
            //{ "d", InstructionVariableType.OpcodeByte },
            //{ "n", InstructionVariableType.OpcodeByte },
            //{ "nn", InstructionVariableType.OpcodeByte },
            { "ex", InstructionVariableType.OpcodeByte },

            { "b", InstructionVariableType.Bits8 },
            { "c", InstructionVariableType.Condition8 },
            { "i", InstructionVariableType.Rst },
            { "j", InstructionVariableType.Condition4 },
            { "m", InstructionVariableType.RegistersSP16 },
            { "o", InstructionVariableType.RegistersSP16 },
            { "p", InstructionVariableType.RegistersSP16 },
            { "q", InstructionVariableType.Registers16 },
            { "r", InstructionVariableType.Registers8 },
            { "s", InstructionVariableType.Registers8 },
            { "t", InstructionVariableType.Registers8 },
            { "u", InstructionVariableType.Registers8 },
            { "v", InstructionVariableType.Registers8 },
            { "w", InstructionVariableType.Registers8 },
        };

        public InstructionVariableType Type { get; set; }

        public int Value { get; set; }

        public static IEnumerable<InstructionVariable> Create(InstructionMeta instructionMeta)
        {
            var root = instructionMeta.Root;

            var vars = new List<InstructionVariable>();

            foreach (var p in root.Parameters)
            {
                if (_varTables.ContainsKey(p))
                {
                    var type = _varTables[p];
                    var index = InstructionParameter.IndexOf(p, root.Info.Bytes);
                }
            }

            return vars;
        }

        public static List<string> Parse(string mnemonic)
        {
            var parameters = InstructionParameter.Parse(mnemonic);
            return parameters.Where(p => IsVariable(p))
                .ToList();
        }

        public static bool IsVariable(string var)
        {
            return _varTables.ContainsKey(var);
        }
    }

    public enum InstructionVariableType
    {
        None,
        OpcodeByte,     // value is byte index
        Registers8,
        Registers16,
        RegistersSP16,
        Condition8,
        Condition4,
        Bits8,
        AluOps,
        AluRot,
        Rst,
    }
}

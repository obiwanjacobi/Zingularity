using System.Collections.Generic;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionVariable
    {
        private static readonly Dictionary<string, InstructionVariableType> _varTables =
            new Dictionary<string, InstructionVariableType>()
        {
            { "ex", InstructionVariableType.OpcodeByte },
            { "b", InstructionVariableType.Bits8 },
            { "c", InstructionVariableType.Condition8 },
            { "i", InstructionVariableType.RstAddress },
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
            { "*", InstructionVariableType.None },
        };

        public string Name { get; set; }

        public InstructionVariableType Type { get; set; }

        public int Value { get; set; }

        public static void Create(InstructionMeta instructionMeta)
        {
            var root = instructionMeta.Parent ?? instructionMeta;

            foreach (var p in root.Parameters)
            {
                if (IsVariable(p))
                {
                    var type = _varTables[p];
                    instructionMeta.Variables.Add(new InstructionVariable { Name = p, Type = type });
                }
            }
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
        RstAddress,
        Ignore
    }
}

using System.Collections.Generic;

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

        public void ReplaceParams(IDictionary<string, string> paramValues)
        {
            _instructionInfo.Mnemonic = InstructionParameter.FormatText(_instructionInfo.Mnemonic, paramValues);
            //InstructionParameter.FormatBytes(_instructionInfo.Bytes, paramValues);
        }
    }
}

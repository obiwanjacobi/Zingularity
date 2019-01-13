using System.Collections.Generic;
using System.Linq;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionFinder
    {
        private readonly InstructionSetInfo _instructionSetInfo;

        public InstructionFinder(InstructionSetInfo setInfo)
        {
            _instructionSetInfo = setInfo;
        }

        public IEnumerable<InstructionInfo> Find(string part)
        {
            return _instructionSetInfo.Instructions
                .Where(i => i.Mnemonic.StartsWith(part.ToUpperInvariant()))
                .ToList();
        }
    }
}

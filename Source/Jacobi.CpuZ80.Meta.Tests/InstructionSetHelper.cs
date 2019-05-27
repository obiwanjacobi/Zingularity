using System.IO;

namespace Jacobi.CpuZ80.Meta.Tests
{
    internal static class InstructionSetHelper
    {
        public static InstructionSetInfo Load()
        {
            var path = Path.Combine(Directory.GetCurrentDirectory(), @"..\..\..\Jacobi.CpuZ80.Meta\InstructionsZ80.json");
            return InstructionSetInfo.FromJsonFile(path);
        }
    }
}

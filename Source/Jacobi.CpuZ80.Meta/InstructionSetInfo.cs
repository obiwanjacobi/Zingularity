using Newtonsoft.Json;
using System.Collections.Generic;
using System.IO;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionInfo
    {
        public string Mnemonic { get; set; }
        public IList<string> Bytes { get; set; }
        public IList<int> Cycles { get; set; }
        public IList<int> AltCycles { get; set; }
        public IDictionary<string, string> Flags { get; set; }
    }

    public sealed class InstructionSetInfo
    {
        public static InstructionSetInfo FromJsonFile(string filePath)
        {
            var content = File.ReadAllText(filePath);
            return JsonConvert.DeserializeObject<InstructionSetInfo>(content);
        }

        public IDictionary<string, IDictionary<string, string>> Tables { get; set; }
        public IList<InstructionInfo> Instructions { get; set; }
    }
}

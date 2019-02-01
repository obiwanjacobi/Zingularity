using Newtonsoft.Json;
using System.Collections.Generic;
using System.IO;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionInfo
    {
        public InstructionInfo()
        {
            Bytes = new List<string>();
            Cycles = new List<int>();
            AltCycles = new List<int>();
            Ops = new List<string>();
            Flags = new Dictionary<string, string>();
        }

        public string Mnemonic { get; set; }
        public List<string> Bytes { get; internal set; }

        public List<int> Cycles { get; internal set; }
        public List<int> AltCycles { get; internal set; }
        public List<string> Ops { get; internal set; }
        public Dictionary<string, string> Flags { get; internal set; }

        public InstructionInfo Parent { get; set; }
    }

    public sealed class InstructionSetInfo
    {
        public static InstructionSetInfo FromJsonFile(string filePath)
        {
            var content = File.ReadAllText(filePath);
            return JsonConvert.DeserializeObject<InstructionSetInfo>(content);
        }

        public Dictionary<string, Dictionary<string, string>> Tables { get; set; }
        public List<InstructionInfo> Instructions { get; set; }
    }
}

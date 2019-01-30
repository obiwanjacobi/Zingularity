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

        public IList<int> Cycles { get; internal set; }
        public IList<int> AltCycles { get; internal set; }
        public List<string> Ops { get; internal set; }
        public IDictionary<string, string> Flags { get; internal set; }
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

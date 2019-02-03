using System;
using System.Collections.Generic;

namespace Jacobi.CpuZ80.Meta
{
    public class InstructionMeta
    {
        private static readonly Dictionary<string, int> _opCycles = new Dictionary<string, int>()
        {
            { "OF", 4 }, // opcode fetch
            { "OD", 3 }, // operand data
            { "ODl", 3 }, // operand data lsb
            { "ODh", 3 }, // operand data msb
            { "MR", 3 }, // memory read
            { "MRl", 3 }, // memory read lsb
            { "MRh", 3 }, // memory read msb
            { "MW", 3 }, // memory write
            { "MWl", 3 }, // memory write lsb
            { "MWh", 3 }, // memory write msb
            { "SRl", 3 }, // stack read lsb
            { "SRh", 3 }, // stack read msb
            { "SWl", 3 }, // stack write lsb
            { "SWh", 3 }, // stack write msb
            { "AD", 5 }, // add IX/IY + d
            { "PCd", 5 }, // PC = PC - 2
            { "FD", 5 }, // Opcode Fetch and +d
            { "OP", 0 }, // internal operation - number of cycles not fixed
            { "PR", 4 }, // port read
            { "PW", 4 } // port write
        };

        public InstructionMeta(InstructionInfo info)
        {
            Info = info;
            _parameters = InstructionParameter.Parse(info.Mnemonic);
            MachineCycles = CreateMachineCycles(info);

            if (info.Parent != null)
                Parent = new InstructionMeta(info.Parent);

            Variables = new List<InstructionVariable>();
            InstructionVariable.Create(this);
        }

        private string _name;
        public string Name
        {
            get
            {
                if (_name == null)
                {
                    _name = Info.Mnemonic
                        .Replace(" ", "")
                        .Replace("'", "2")
                        .Replace("*", "x")
                        .ReplaceAll("_", ",", "(", ")", "+");

                    _name += "_";
                    if (IsExt(Info.Bytes[0]))
                        _name += Info.Bytes[0];
                    _name += Info.Bytes.Count;
                }

                return _name;
            }
        }

        public InstructionInfo Info { get; }

        public InstructionMeta Parent { get; }

        public InstructionMeta Root => Parent ?? this;

        private readonly List<string> _parameters;

        public IEnumerable<string> Parameters => _parameters;

        public List<InstructionVariable> Variables { get; private set; }

        public IEnumerable<MachineCycleInfo> MachineCycles { get; }

        public bool Has_d => _parameters.Contains("d");
        public bool Has_n => _parameters.Contains("n");
        public bool Has_nn => _parameters.Contains("nn");

        public bool HasCB => (HasDD || HasFD) ? IsExtCB(Info.Bytes[1]) : IsExtCB(Info.Bytes[0]);

        public bool HasED => (HasDD || HasFD) ? IsExtED(Info.Bytes[1]) : IsExtED(Info.Bytes[0]);

        public bool HasDD => IsExtDD(Info.Bytes[0]);

        public bool HasFD => IsExtFD(Info.Bytes[0]);

        public static bool IsExtDD(string b)
        {
            return b == "DD";
        }

        public static bool IsExtED(string b)
        {
            return b == "ED";
        }

        public static bool IsExtFD(string b)
        {
            return b == "FD";
        }

        public static bool IsExtCB(string b)
        {
            return b == "CB";
        }

        public static bool IsExt(string b)
        {
            return IsExtCB(b) || IsExtDD(b) || IsExtED(b) || IsExtFD(b) || b == "ex";
        }

        private IEnumerable<MachineCycleInfo> CreateMachineCycles(InstructionInfo info)
        {
            var mCycles = new List<MachineCycleInfo>();

            if (info.Cycles.Count != info.Ops.Count)
                throw new InvalidOperationException("Error in ops/cycles in InstructionsZ80.json: " + info.Mnemonic);

            for (int i = 0; i < info.Cycles.Count; i++)
            {
                string op = info.Ops[i];
                int tCycles = info.Cycles[i];
                int extraCycles = tCycles - (!String.IsNullOrEmpty(op) ? _opCycles[op] : 0);
                bool isExt = false;

                if (op == "OF")
                {
                    isExt = IsExt(info.Bytes[i]);
                    if (isExt)
                        extraCycles = 0;
                    else if (extraCycles == 0)
                        extraCycles = 1;
                }

                mCycles.Add(new MachineCycleInfo
                {
                    Operation = op,
                    TCycles = tCycles,
                    ExtraCycles = extraCycles,
                    IsAlt = i < info.AltCycles.Count,
                    IsExt = isExt,
                });
            }

            return mCycles;
        }
    }

    public struct MachineCycleInfo
    {
        public string Operation;
        public int TCycles;
        public int ExtraCycles;
        public bool IsAlt;
        public bool IsExt;
    }
}

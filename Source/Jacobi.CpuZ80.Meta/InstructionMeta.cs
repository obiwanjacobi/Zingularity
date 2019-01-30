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
            Parameters = InstructionParameter.Parse(info.Mnemonic);
            MachineCycles = CreateMachineCycles(info);
        }

        public InstructionInfo Info { get; }

        public string FormatMnemonic(IDictionary<string, string> paramValues)
        {
            return InstructionParameter.FormatText(Info.Mnemonic, paramValues);
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

                if (op == "OF")
                {
                    if (IsExt(info.Bytes[i]))
                        extraCycles = 0;
                    else if (extraCycles == 0)
                        extraCycles = 1;
                }

                mCycles.Add(new MachineCycleInfo
                {
                    Operation = op,
                    TCycles = tCycles,
                    IsAlt = i < info.AltCycles.Count,
                    ExtraCycles = extraCycles
                });
            }

            return mCycles;
        }

        public IEnumerable<string> Parameters { get; }

        public IEnumerable<MachineCycleInfo> MachineCycles { get; }

        public bool IsCB => (IsDD || IsFD) ? IsExtCB(Info.Bytes[1]) : IsExtCB(Info.Bytes[0]);

        public bool IsED => (IsDD || IsFD) ? IsExtED(Info.Bytes[1]) : IsExtED(Info.Bytes[0]);

        public bool IsDD => IsExtDD(Info.Bytes[0]);

        public bool IsFD => IsExtFD(Info.Bytes[0]);

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
            return IsExtCB(b) || IsExtDD(b) || IsExtED(b) || IsExtFD(b);
        }
    }

    public struct MachineCycleInfo
    {
        public string Operation;
        public int TCycles;
        public bool IsAlt;
        public int ExtraCycles;
    }
}

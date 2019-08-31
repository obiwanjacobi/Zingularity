using System;
using System.Collections.Generic;
using System.Text;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class FlagsBuilder
    {
        private readonly Dictionary<string, FlagMeta> _flags = new Dictionary<string, FlagMeta>();

        public IEnumerable<FlagMeta> GetUniqueFlagSets()
        {
            return _flags.Values;
        }

        public FlagMeta CreateFlagsFor(InstructionInfo instructionInfo)
        {
            if (instructionInfo == null || instructionInfo.Flags.Count == 0)
            {
                return null;
            }

            var flagMeta = CreateFlagMeta(instructionInfo.Flags);

            if (!_flags.ContainsKey(flagMeta.Name))
            {
                _flags.Add(flagMeta.Name, flagMeta);
            }
            else
            {
                // reuse existing instances
                flagMeta = _flags[flagMeta.Name];
            }

            return flagMeta;
        }

        private FlagMeta CreateFlagMeta(Dictionary<string, string> flags)
        {
            var flagOps = new Dictionary<FlagsZ80, string>();

            foreach (var fkv in flags)
            {
                flagOps.Add(ToFlagsZ80(fkv.Key), ToOperationName(fkv.Key, fkv.Value));
            }

            return new FlagMeta
            {
                Name = BuildName(flags),
                Operations = flagOps
            };
        }

        private string BuildName(Dictionary<string, string> flagOps)
        {
            var list = new List<string>();
            foreach (var okv in flagOps)
            {
                list.Add(okv.Key + okv.Value);
            }
            list.Sort();

            var txt = new StringBuilder();
            foreach (var op in list)
            {
                txt.Append(op);
            }
            return txt.ToString();
        }

        private FlagsZ80 ToFlagsZ80(string flag)
        {
            switch (flag)
            {
                case "V":
                case "P":
                    return FlagsZ80.PV;
                default:
                    return (FlagsZ80)Enum.Parse(typeof(FlagsZ80), flag);
            }
        }

        private string ToOperationName(string flag, string flagOp)
        {
            if (flagOp.StartsWith("_"))
            {
                return flag + flagOp;
            }

            string fnName;

            switch (flagOp)
            {
                case "0":
                    fnName = "Reset";
                    break;
                case "1":
                    fnName = "Set";
                    break;
                case "r15":
                    fnName = "Result_Bit15";
                    break;
                case "r7":
                    fnName = "Result_Bit7";
                    break;
                case "r5":
                    fnName = "Result_Bit5";
                    break;
                case "r3":
                    fnName = "Result_Bit3";
                    break;
                case "rz":
                    fnName = "Result_IsZero";
                    break;
                case "ro":
                    fnName = "Result_Overflows";
                    break;
                case "rp":
                    fnName = "Result_ParityIsEven";
                    break;

                case "d7":
                    fnName = "Data_Bit7";
                    break;
                case "dz":
                    fnName = "Data_IsZero";
                    break;
                case "c7":
                    fnName = "Carry_Bit7";
                    break;
                case "c3":
                    fnName = "Carry_Bit3";
                    break;
                case "c11":
                    fnName = "Carry_Bit11";
                    break;
                case "b16":
                    fnName = "Borrow_Bit16";
                    break;
                case "b12":
                    fnName = "Borrow_Bit12";
                    break;
                case "c15":
                    fnName = "Carry_Bit15";
                    break;
                case "b8":
                    fnName = "Borrow_Bit8";
                    break;
                case "b4":
                    fnName = "Borrow_Bit4";
                    break;

                case "c":
                    fnName = "CarryFlag";
                    break;

                case "80":
                    fnName = "Result_IsValue80";
                    break;
                case "7F":
                    fnName = "Result_IsValue7F";
                    break;
                case "FF":
                    fnName = "Result_IsValueFF";
                    break;


                case "i":
                    fnName = "IFF2_Value";
                    break;

                case "BC":
                    fnName = "BC_IsNotZero";
                    break;

                case "ah3":
                    fnName = "AddressHi_Bit3";
                    break;
                case "ah5":
                    fnName = "AddressHi_Bit5";
                    break;

                default:
                    fnName = flagOp + "_NotImplemented";
                    break;
            }

            return fnName;
        }
    }
}

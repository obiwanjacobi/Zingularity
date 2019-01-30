using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionParameter
    {
        private static bool IsBinary(string byteStr)
        {
            return byteStr.Length == 8;
        }

        private static string ToHex(string binaryStr)
        {
            try
            {
                return Convert.ToInt32(binaryStr, 2).ToString("X2");
            }
            catch (FormatException fe)
            {
                throw new ArgumentException(
                    $"Converting '{binaryStr}' to hex failed.\r\nCheck if tables and variable names match.",
                    nameof(binaryStr), fe);
            }
        }

        public static string ReplaceByte(string byteStr, string key, string value)
        {
            if (IsBinary(byteStr))
            {
                if (key.Length == 1)
                {
                    var find = new String(key[0], value.Length);
                    return byteStr.Replace(find, value);
                }
            }

            return byteStr.Replace(key, value);
        }

        public static List<string> FormatBytes(List<string> bytes, IEnumerable<KeyValuePair<string, string>> tableValues)
        {
            var newBytes = new List<string>(bytes);

            for (int i = 0; i < newBytes.Count; i++)
            {
                foreach (var kv in tableValues)
                {
                    newBytes[i] = ReplaceByte(newBytes[i], kv.Key, kv.Value);
                }

                if (IsBinary(newBytes[i]))
                {
                    newBytes[i] = ToHex(newBytes[i]);
                }
            }

            return newBytes;
        }

        public static string FormatText(string text, IDictionary<string, string> paramValues)
        {
            var builder = new StringBuilder(text);

            foreach (var paramVal in paramValues)
            {
                builder.Replace(paramVal.Key, paramVal.Value);
            }

            return builder.ToString();
        }

        public static List<string> Parse(string mnemonic)
        {
            var parts = mnemonic.Split(' ', '+', ',', '(', ')');
            return parts.Where(p => IsParameter(p)).ToList();
        }

        public static bool IsParameter(string name)
        {
            return name.IsLower();
        }

        public static int IndexOf(string param, IEnumerable<string> bytes)
        {
            int index = 0;

            foreach (var b in bytes)
            {
                if (b.Contains(param)) return index;

                index++;
            }

            return -1;
        }
    }
}

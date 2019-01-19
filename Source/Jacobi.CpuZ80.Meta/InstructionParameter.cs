using System.Collections.Generic;
using System.Text;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionParameter
    {
        public static void FormatBytes(List<string> bytes, IDictionary<string, string> paramValues)
        {
            for (int i = 0; i < bytes.Count; i++)
            {
                bytes[i] = FormatText(bytes[i], paramValues);
            }
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
    }
}

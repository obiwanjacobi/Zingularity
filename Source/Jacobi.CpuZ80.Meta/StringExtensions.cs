using System;
using System.Text;

namespace Jacobi.CpuZ80.Meta
{
    public static class StringExtensions
    {
        public static bool IsLower(this string txt)
        {
            if (String.IsNullOrEmpty(txt))
            {
                return false;
            }

            foreach (var c in txt)
            {
                if (!Char.IsLower(c))
                    return false;
            }
            return true;
        }

        public static string ReplaceAll(this string txt, string replacment, params string[] replaceTokens)
        {
            var builder = new StringBuilder(txt);

            foreach (var token in replaceTokens)
            {
                builder.Replace(token, replacment);
            }

            return builder.ToString();
        }
    }
}

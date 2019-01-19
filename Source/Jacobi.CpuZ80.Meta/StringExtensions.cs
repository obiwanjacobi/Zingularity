using System;

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
    }
}

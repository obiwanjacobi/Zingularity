using System.Collections.Generic;
using System.Linq;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class TableInfo
    {
        public TableInfo(string key, IDictionary<string, string> entries)
        {
            Key = key;
            Entries = entries;
        }

        public string Key { get; }

        public IDictionary<string, string> Entries { get; }

        public static List<TableInfo> ToList(IDictionary<string, IDictionary<string, string>> tables)
        {
            return new List<TableInfo>(
                tables.Select(t => new TableInfo(t.Key, t.Value)));
        }
    }
}

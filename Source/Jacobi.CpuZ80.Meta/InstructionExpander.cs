using System.Collections.Generic;
using System.Linq;

namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionExpander
    {
        private readonly IEnumerable<TableInfo> _tables;

        public InstructionExpander(IEnumerable<TableInfo> tables)
        {
            _tables = tables;
        }

        public IEnumerable<InstructionMeta> Expand(InstructionMeta instructionMeta)
        {
            var tableIterators = _tables
                .Where(t => instructionMeta.Parameters.Contains(t.Key))
                .Select(t => new TableIterator(t))
                .ToList();

            var decls = new List<InstructionMeta>();
            if (tableIterators.Any())
            {
                AddInstructionDecls(decls, instructionMeta.Info, tableIterators, 0);
            }
            else
            {
                decls.Add(instructionMeta);
            }

            return decls;
        }

        private bool AddInstructionDecls(
            List<InstructionMeta> instructionDecls, InstructionInfo instructionInfo,
            List<TableIterator> tables, int currentTableIndex)
        {
            if (currentTableIndex >= tables.Count) return false;
            var currentTable = tables[currentTableIndex];

            currentTable.Reset();
            while (currentTable.MoveNext())
            {
                if (!AddInstructionDecls(
                        instructionDecls, instructionInfo, tables, currentTableIndex + 1))
                {
                    var paramValues = tables.ToDictionary(t => t.Table.Key, t => t.CurrentKey);

                    var builder = InstructionBuilder.New(instructionInfo);
                    builder.AssignParameterValues(tables.Select(t => t.Table), paramValues);

                    instructionDecls.Add(builder.InstructionMeta);
                }
            }
            return true;
        }

        private class TableIterator
        {
            public TableIterator(TableInfo table)
            {
                Table = table;
                Enumerator = table.Entries.GetEnumerator();
            }

            public TableInfo Table { get; }

            public IEnumerator<KeyValuePair<string, string>> Enumerator { get; }

            public string CurrentKey
            {
                get { return Enumerator.Current.Key; }
            }

            public void Reset()
            {
                Enumerator.Reset();
            }

            public bool MoveNext()
            {
                return Enumerator.MoveNext();
            }

            public override string ToString()
            {
                return $"{Table.Key}: {Enumerator.Current.ToString()}";
            }
        }
    }
}

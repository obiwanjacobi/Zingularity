﻿using System.Collections.Generic;
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

        private void AddInstructionDecls(
            List<InstructionMeta> instructionDecls, InstructionInfo instructionInfo,
            List<TableIterator> tables, int currentTableIndex)
        {
            if (currentTableIndex >= tables.Count) return;
            var currentTable = tables[currentTableIndex];

            while (currentTable.Enumerator.MoveNext())
            {
                // reset all child iterators to first item
                for (var i = currentTableIndex + 1; i < tables.Count; i++)
                { tables[i].Reset(); }

                var paramValues = tables.ToDictionary(t => t.Table.Key, t => t.Enumerator.Current.Key);

                var builder = InstructionBuilder.New(instructionInfo);
                builder.AssignParameterValues(tables.Select(t => t.Table), paramValues);

                instructionDecls.Add(builder.InstructionMeta);

                AddInstructionDecls(instructionDecls, instructionInfo, tables, currentTableIndex + 1);
            }
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

            public void Reset()
            {
                Enumerator.Reset();
                Enumerator.MoveNext();
            }
        }
    }
}
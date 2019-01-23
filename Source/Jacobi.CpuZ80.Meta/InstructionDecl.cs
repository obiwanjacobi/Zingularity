namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionDecl
    {
        public InstructionDecl(InstructionMeta instructionMeta)
        {
            Meta = instructionMeta;
            Info = instructionMeta.Info;
            Name = Info.Mnemonic
                .Replace(" ", "")
                .Replace("'", "2")
                .ReplaceAll("_", ",", "(", ")", "+");

            Name += "_";
            if (Meta.IsDD || Meta.IsFD)
                Name += Info.Bytes[0];
            Name += Info.Bytes.Count;
        }

        public InstructionDecl(InstructionInfo instructionInfo)
            : this(new InstructionMeta(instructionInfo))
        { }

        public InstructionMeta Meta { get; }

        public InstructionInfo Info { get; }

        public string Name { get; set; }
    }
}

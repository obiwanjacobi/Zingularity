namespace Jacobi.CpuZ80.Meta
{
    public sealed class InstructionDecl
    {
        public InstructionDecl(InstructionMeta instructionMeta)
        {
            Meta = instructionMeta;
            Info = instructionMeta.Info;
            Name = Info.Mnemonic.ReplaceAll("_", " ", ",", "(", ")", "+", "'");
        }

        public InstructionDecl(InstructionInfo instructionInfo)
        {
            Meta = new InstructionMeta(instructionInfo);
            Info = instructionInfo;
        }

        public InstructionMeta Meta { get; }

        public InstructionInfo Info { get; }

        public string Name { get; set; }
    }
}

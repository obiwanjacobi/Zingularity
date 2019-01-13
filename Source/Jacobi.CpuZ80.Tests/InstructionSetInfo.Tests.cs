using FluentAssertions;
using Jacobi.CpuZ80.Meta;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using System.IO;

namespace Jacobi.CpuZ80.Tests
{
    [TestClass]
    public class InstructionSetInfoTests
    {
        [TestMethod]
        public void LoadJson()
        {
            var path = Path.Combine(Directory.GetCurrentDirectory(), @"..\..\..\..\Jacobi.CpuZ80.Meta\InstructionsZ80.json");
            var setInfo = InstructionSetInfo.FromJsonFile(path);

            setInfo.Tables.Should().HaveCount(9);
            setInfo.Tables.ContainsKey("r").Should().BeTrue();
            setInfo.Tables.ContainsKey("s").Should().BeTrue();
            setInfo.Tables.ContainsKey("p").Should().BeTrue();
            setInfo.Tables.ContainsKey("q").Should().BeTrue();
            setInfo.Tables.ContainsKey("ex").Should().BeTrue();
            setInfo.Tables.ContainsKey("b").Should().BeTrue();
            setInfo.Tables.ContainsKey("c").Should().BeTrue();
            setInfo.Tables.ContainsKey("j").Should().BeTrue();
            setInfo.Tables.ContainsKey("i").Should().BeTrue();

            setInfo.Instructions.Should().HaveCount(165);
        }
    }
}

using FluentAssertions;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Jacobi.CpuZ80.Tests
{
    [TestClass]
    public class InstructionSetInfoTests
    {
        [TestMethod]
        public void LoadJson()
        {
            var setInfo = InstructionSetHelper.Load();

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

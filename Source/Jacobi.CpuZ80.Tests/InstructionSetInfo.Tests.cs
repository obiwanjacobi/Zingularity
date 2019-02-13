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

            setInfo.Tables.Should().HaveCount(16);
            setInfo.Tables.ContainsKey("r").Should().BeTrue();
            setInfo.Tables.ContainsKey("s").Should().BeTrue();
            setInfo.Tables.ContainsKey("t").Should().BeTrue();
            setInfo.Tables.ContainsKey("u").Should().BeTrue();
            setInfo.Tables.ContainsKey("v").Should().BeTrue();
            setInfo.Tables.ContainsKey("w").Should().BeTrue();
            setInfo.Tables.ContainsKey("m").Should().BeTrue();
            setInfo.Tables.ContainsKey("o").Should().BeTrue();
            setInfo.Tables.ContainsKey("p").Should().BeTrue();
            setInfo.Tables.ContainsKey("q").Should().BeTrue();
            setInfo.Tables.ContainsKey("ex").Should().BeTrue();
            setInfo.Tables.ContainsKey("b").Should().BeTrue();
            setInfo.Tables.ContainsKey("c").Should().BeTrue();
            setInfo.Tables.ContainsKey("j").Should().BeTrue();
            setInfo.Tables.ContainsKey("i").Should().BeTrue();
            setInfo.Tables.ContainsKey("ops").Should().BeTrue();

            setInfo.Instructions.Should().HaveCount(207);
        }
    }
}

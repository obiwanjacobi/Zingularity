using FluentAssertions;
using Jacobi.CpuZ80.Meta;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using System.Linq;

namespace Jacobi.CpuZ80.Tests
{
    [TestClass]
    public class InstructionExpanderTests
    {
        private static InstructionSetInfo _instructionSetInfo;

        [ClassInitialize]
        public static void Initialize(TestContext testContext)
        {
            _instructionSetInfo = InstructionSetHelper.Load();
        }

        [TestMethod]
        public void Expand_LDrs()
        {
            var navigator = new InstructionNavigator(_instructionSetInfo);
            var expander = new InstructionExpander(navigator.Tables);

            var instruction = navigator.Mnemonic("LD r, s").First();
            var decls = expander.Expand(new InstructionMeta(instruction)).ToList();

            decls.Should().HaveCount(49);
            decls[0].Info.Mnemonic.Should().Be("LD A, A");
            decls[1].Info.Mnemonic.Should().Be("LD A, B");
            decls[7].Info.Mnemonic.Should().Be("LD B, A");
            decls[8].Info.Mnemonic.Should().Be("LD B, B");
            decls[48].Info.Mnemonic.Should().Be("LD L, L");
        }
    }
}

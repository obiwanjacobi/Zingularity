using FluentAssertions;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Jacobi.CpuZ80.Meta.Tests
{
    [TestClass]
    public class InstructionNavigatorTests
    {
        private static InstructionSetInfo _instructionSetInfo;

        [ClassInitialize]
        public static void Initialize(TestContext testContext)
        {
            _instructionSetInfo = InstructionSetHelper.Load();
        }

        [TestMethod]
        public void MnemonicStartsWith_Loads()
        {
            var finder = new InstructionNavigator(_instructionSetInfo);
            var result = finder.MnemonicStartsWith("ld");

            result.Should().HaveCount(36);
        }

        [TestMethod]
        public void MnemonicStartsWith_LoadsOfA()
        {
            var finder = new InstructionNavigator(_instructionSetInfo);
            var result = finder.MnemonicStartsWith("ld A");

            result.Should().HaveCount(5);
        }
    }
}

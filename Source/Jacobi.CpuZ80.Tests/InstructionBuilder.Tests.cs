using FluentAssertions;
using Jacobi.CpuZ80.Meta;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Jacobi.CpuZ80.Tests
{
    [TestClass]
    public class InstructionBuilderTests
    {
        private static InstructionSetInfo _instructionSetInfo;

        [ClassInitialize]
        public static void Initialize(TestContext testContext)
        {
            _instructionSetInfo = InstructionSetHelper.Load();
        }

        [TestMethod]
        public void test()
        {
            _instructionSetInfo.Should().NotBeNull();
        }
    }
}

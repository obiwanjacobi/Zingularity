using FluentAssertions;
using Jacobi.CpuZ80.Meta;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace Jacobi.CpuZ80.Tests
{
    [TestClass]
    public class InstructionFinderTests
    {
        private static InstructionSetInfo _instructionSetInfo;

        [ClassInitialize]
        public static void Initialize(TestContext testContext)
        {
            _instructionSetInfo = InstructionSetHelper.Load();
        }

        [TestMethod]
        public void Find_Loads()
        {
            var finder = new InstructionFinder(_instructionSetInfo);
            var result = finder.Find("ld");

            result.Should().HaveCount(32);
        }

        [TestMethod]
        public void Find_LoadsOfA()
        {
            var finder = new InstructionFinder(_instructionSetInfo);
            var result = finder.Find("ld A");

            result.Should().HaveCount(5);
        }
    }
}

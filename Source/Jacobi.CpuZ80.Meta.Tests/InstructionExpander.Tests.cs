using FluentAssertions;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using System.Collections.Generic;
using System.Linq;

namespace Jacobi.CpuZ80.Meta.Tests
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
        public void Expand_LDrs_Mnemonics()
        {
            var navigator = new InstructionNavigator(_instructionSetInfo);
            var expander = new InstructionExpander(navigator.Tables);

            var instruction = navigator.Mnemonic("LD r, s").First();
            var decls = expander.Expand(new InstructionMeta(instruction)).ToList();

            decls.ForEach(d => Console.WriteLine(d.Name));

            decls.Should().HaveCount(49);
            decls[0].Info.Mnemonic.Should().Be("LD A, A");
            decls[1].Info.Mnemonic.Should().Be("LD A, B");
            decls[7].Info.Mnemonic.Should().Be("LD B, A");
            decls[8].Info.Mnemonic.Should().Be("LD B, B");
            decls[48].Info.Mnemonic.Should().Be("LD L, L");

            decls[0].Info.Bytes[0].Should().Be("7F");
        }

        [TestMethod]
        public void Expand_LDIA_Mnemonics()
        {
            var navigator = new InstructionNavigator(_instructionSetInfo);
            var expander = new InstructionExpander(navigator.Tables);

            var instruction = navigator.Mnemonic("LD I, A").First();
            var decls = expander.Expand(new InstructionMeta(instruction)).ToList();

            decls.ForEach(d => Console.WriteLine(d.Name));

            decls.Should().HaveCount(1);
            decls[0].Info.Mnemonic.Should().Be("LD I, A");
        }

        [TestMethod]
        public void Expand_LDrexd_Mnemonics()
        {
            var navigator = new InstructionNavigator(_instructionSetInfo);
            var expander = new InstructionExpander(navigator.Tables);

            var instruction = navigator.Mnemonic("LD r, (ex+d)").First();
            var decls = expander.Expand(new InstructionMeta(instruction)).ToList();

            decls.ForEach(d => Console.WriteLine(d.Name));

            decls.Should().HaveCount(14);
            decls[0].Info.Mnemonic.Should().Be("LD A, (IX+d)");
            decls[1].Info.Mnemonic.Should().Be("LD A, (IY+d)");
            decls[2].Info.Mnemonic.Should().Be("LD B, (IX+d)");
            decls[3].Info.Mnemonic.Should().Be("LD B, (IY+d)");
            decls[13].Info.Mnemonic.Should().Be("LD L, (IY+d)");

            decls[0].Info.Bytes[0].Should().Be("DD");
            decls[0].Info.Bytes[1].Should().Be("7E");
            decls[0].Info.Bytes[2].Should().Be("d");

            decls[1].Info.Bytes[0].Should().Be("FD");
            decls[1].Info.Bytes[1].Should().Be("7E");
            decls[1].Info.Bytes[2].Should().Be("d");
        }


        [TestMethod]
        public void Expand_ADDIXm_Mnemonics()
        {
            var navigator = new InstructionNavigator(_instructionSetInfo);
            var expander = new InstructionExpander(navigator.Tables);

            var instruction = navigator.MnemonicStartsWith("ADD IX").First();
            var decls = expander.Expand(new InstructionMeta(instruction)).ToList();

            decls.ForEach(d => Console.WriteLine(d.Name));

            decls.Should().HaveCount(4);
            decls[0].Info.Mnemonic.Should().Be("ADD IX, BC");
            decls[1].Info.Mnemonic.Should().Be("ADD IX, DE");
            decls[2].Info.Mnemonic.Should().Be("ADD IX, IX");
            decls[3].Info.Mnemonic.Should().Be("ADD IX, SP");

            decls[0].Info.Bytes[0].Should().Be("DD");
            decls[0].Info.Bytes[1].Should().Be("08");
        }

        [TestMethod]
        public void Expand_RES_b_ex_r_Mnemonics()
        {
            var navigator = new InstructionNavigator(_instructionSetInfo);
            var expander = new InstructionExpander(navigator.Tables);

            var instruction = navigator.Mnemonic("RES b, (ex+d), r").First();
            var decls = expander.Expand(new InstructionMeta(instruction)).ToList();

            decls.ForEach(d => Console.WriteLine(d.Name));

            decls.Should().HaveCount(112);
        }

        [TestMethod]
        public void Expand_NEG_x_Mnemonics()
        {
            var navigator = new InstructionNavigator(_instructionSetInfo);
            var expander = new InstructionExpander(navigator.Tables);

            var instruction = navigator.Mnemonic("NEG *").First();
            var decls = expander.Expand(new InstructionMeta(instruction)).ToList();

            decls.ForEach(d => Console.WriteLine(d.Name));

            decls.Should().HaveCount(8);
        }

        [TestMethod]
        public void Expand_NEG_Mnemonics()
        {
            var navigator = new InstructionNavigator(_instructionSetInfo);
            var expander = new InstructionExpander(navigator.Tables);

            var instructions = navigator.MnemonicStartsWith("NEG");
            var decls = new List<InstructionMeta>();

            foreach (var instruction in instructions)
            {
                expander.Expand(decls, new InstructionMeta(instruction));
            }

            decls.ForEach(d => Console.WriteLine(d.Name));

            decls.Should().HaveCount(8);
        }
    }
}

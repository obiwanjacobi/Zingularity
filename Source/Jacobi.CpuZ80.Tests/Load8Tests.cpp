#include "stdafx.h"
#include "CppUnitTest.h"
#include "TestCpuState.h"
#include "../Jacobi.CpuZ80/ClockTick.h"
#include "../Jacobi.CpuZ80/CpuState.h"
#include "../Jacobi.CpuZ80/CpuZ80.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern CpuState _state;

namespace Z80InstructionTests
{
    TEST_CLASS(Load8Tests)
    {
    public:

        //
        // LD r, s
        // LD t, u
        // LD v, w
        //
        TEST_METHOD(LD_r_s)
        {
            for (uint8_t r = Reg8_B; r <= Reg8_A; r++)
            {
                if (r == Reg8_HL) continue;

                for (uint8_t s = Reg8_B; s <= Reg8_A; s++)
                {
                    if (s == Reg8_HL) continue;

                    LDrsTest((Registers8)r, (Registers8)s, 0);
                    LDrsTest((Registers8)r, (Registers8)s, RegistersExOpcodes_IX);
                    LDrsTest((Registers8)r, (Registers8)s, RegistersExOpcodes_IY);
                }
            }
        }

        void LDrsTest(Registers8 r, Registers8 s, uint8_t ex)
        {
            uint8_t bytes[] = { ex, 0b01000000 | r << 3 | s };
            TestCpuState cpuState(bytes, sizeof(bytes));
            
            SetRegister8Ex(s, 0xAA, ex);

            cpuState.Run();

            Assert::AreEqual(0xAA, (int)GetRegister8Ex(r, ex));
        }

        //
        // LD r, n
        // LD t, n
        // LD v, n
        //

        TEST_METHOD(LD_r_n)
        {
            for (uint8_t r = Reg8_B; r <= Reg8_A; r++)
            {
                if (r == Reg8_HL) continue;

                LDrnTest((Registers8)r, 0);
                LDrnTest((Registers8)r, RegistersExOpcodes_IX);
                LDrnTest((Registers8)r, RegistersExOpcodes_IY);
            }
        }

        void LDrnTest(Registers8 r, uint8_t ex)
        {
            uint8_t bytes[] = { ex, 0b00000110 | r << 3, 0xFF };
            TestCpuState cpuState(bytes, sizeof(bytes));

            SetRegister8Ex(r, 0x11, ex);

            cpuState.Run();

            Assert::AreEqual(0xFF, (int)GetRegister8Ex(r, ex));
        }

        //
        // LD r, (HL)
        // LD r, (ex+d)
        //

        TEST_METHOD(LD_r_HL)
        {
            for (uint8_t r = Reg8_B; r <= Reg8_A; r++)
            {
                if (r == Reg8_HL) continue;

                LDrHLTest((Registers8)r);
                LDrExdTest((Registers8)r, RegistersExOpcodes_IX);
                LDrExdTest((Registers8)r, RegistersExOpcodes_IY);
            }
        }

        void LDrHLTest(Registers8 r)
        {
            uint8_t bytes[] = { 0xAA, 0b01000110 | r << 3, 0xFF };
            TestCpuState cpuState(bytes, sizeof(bytes));

            _state.Registers.PC = 1;

            // don't set target reg for:
            // LD H, (HL)
            // LD L, (HL)
            if (r != Reg8_H && r != Reg8_L)
            {
                SetRegister8(r, 0x11);
            }

            cpuState.Run();

            Assert::AreEqual(0xAA, (int)GetRegister8(r));
        }

        void LDrExdTest(Registers8 r, uint8_t ex)
        {
            uint8_t bytes[] = { 0xAA, ex, 0b01000110 | r << 3, 0xFF };
            TestCpuState cpuState(bytes, sizeof(bytes));

            _state.Registers.PC = 1;

            SetRegisterEx16Ex(1, ex);
            SetRegister8(r, 0x11);

            cpuState.Run();

            Assert::AreEqual(0xAA, (int)GetRegister8(r));
        }

        //
        // LD (HL), r
        // LD (ex+d), r
        //

        TEST_METHOD(LD_HL_r)
        {
            for (uint8_t r = Reg8_B; r <= Reg8_A; r++)
            {
                if (r == Reg8_HL) continue;

                LDHLrTest((Registers8)r);
                LDExdrTest((Registers8)r, RegistersExOpcodes_IX);
                LDExdrTest((Registers8)r, RegistersExOpcodes_IY);
            }
        }

        void LDHLrTest(Registers8 r)
        {
            uint8_t bytes[] = { 0x11, 0b01110000 | r };
            TestCpuState cpuState(bytes, sizeof(bytes));

            _state.Registers.PC = 1;
            
            int expected = 0xAA;
            // don't set target reg for:
            // LD (HL), H
            // LD (HL), L
            if (r != Reg8_H && r != Reg8_L)
                SetRegister8(r, expected);
            else
                expected = 0;

            cpuState.Run();

            Assert::AreEqual(expected, (int)cpuState.memory[0]);
        }

        void LDExdrTest(Registers8 r, uint8_t ex)
        {
            uint8_t bytes[] = { 0x11, ex, 0b01110000 | r, 0xFF };
            TestCpuState cpuState(bytes, sizeof(bytes));

            _state.Registers.PC = 1;

            SetRegisterEx16Ex(1, ex);
            SetRegister8Ex(r, 0xAA, 0);

            cpuState.Run();

            Assert::AreEqual(0xAA, (int)cpuState.memory[0]);
        }

        //
        // LD (HL), n
        // LD (ex+d), n
        //

        TEST_METHOD(LD_HL_n)
        {
            LDHLnTest();
            LDExdnTest(RegistersExOpcodes_IX);
            LDExdnTest(RegistersExOpcodes_IY);
        }

        void LDHLnTest()
        {
            uint8_t bytes[] = { 0x11, 0x36, 0xAA };
            TestCpuState cpuState(bytes, sizeof(bytes));

            _state.Registers.PC = 1;

            cpuState.Run();

            Assert::AreEqual(0xAA, (int)cpuState.memory[0]);
        }

        void LDExdnTest(uint8_t ex)
        {
            uint8_t bytes[] = { 0x11, ex, 0x36, 0xFF, 0xAA };
            TestCpuState cpuState(bytes, sizeof(bytes));

            _state.Registers.PC = 1;
            SetRegisterEx16Ex(1, ex);

            cpuState.Run();

            Assert::AreEqual(0xAA, (int)cpuState.memory[0]);
        }
    };
}

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


        TEST_METHOD(LD_r_s)
        {
            for (uint8_t r = Reg8_B; r <= Reg8_A; r++)
            {
                if (r == Reg8_HL) continue;

                for (uint8_t s = Reg8_B; s <= Reg8_A; s++)
                {
                    if (s == Reg8_HL) continue;

                    for (uint8_t ex = 0; ex < RegistersExOpcodesSize; ex++)
                    {
                        LDrsTest((Registers8)r, (Registers8)s, RegistersExOpcodes[ex]);
                    }
                }
            }
        }

        void LDrsTest(Registers8 r, Registers8 s, uint8_t ex)
        {
            uint8_t bytes[] = { ex, 0b01000000 | r << 3 | s, 0x00 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0002;

            SetRegister8Ex(s, 0xAA, ex);
            SetFlag(Flag_C, true);

            do
            {
                cpuState.ToggleClockLevel();
            } while (cpuState.ClockTick());

            Assert::AreEqual(0xAA, (int)GetRegister8Ex(r, ex));
            Assert::AreEqual(1, (int)GetFlag(Flag_C));
        }

        TEST_METHOD(LD_r_n)
        {
            for (uint8_t r = Reg8_B; r <= Reg8_A; r++)
            {
                if (r == Reg8_HL) continue;

                for (uint8_t ex = 0; ex < RegistersExOpcodesSize; ex++)
                {
                    LDrnTest((Registers8)r, ex);
                }
            }
        }

        void LDrnTest(Registers8 r, uint8_t ex)
        {
            uint8_t bytes[] = { ex, 0b00000110 | r << 3, 0xFF, 0x00 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0003;

            SetRegister8Ex(r, 0x11, ex);
            SetFlag(Flag_C, true);

            do
            {
                cpuState.ToggleClockLevel();
            } while (cpuState.ClockTick());

            Assert::AreEqual(0xFF, (int)GetRegister8Ex(r, ex));
            Assert::AreEqual(1, (int)GetFlag(Flag_C));
        }
    };
}

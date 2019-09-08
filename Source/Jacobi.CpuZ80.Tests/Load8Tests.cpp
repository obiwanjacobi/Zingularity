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

        TEST_METHOD(LD_B_n)
        {
            uint8_t bytes[] = { 0b00000110, 0xFF, 0x00 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0002;

            _state.Registers.B = 0x11;
            SetFlag(Flag_C, true);

            do
            {
                cpuState.ToggleClockLevel();
            } while (cpuState.ClockTick());

            Assert::AreEqual(0xFF, (int)_state.Registers.B);
            Assert::AreEqual(1, (int)GetFlag(Flag_C));
        }
    };
}

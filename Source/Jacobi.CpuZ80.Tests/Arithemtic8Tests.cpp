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
    TEST_CLASS(Arithmetic8Tests)
    {
    public:

        TEST_METHOD(Add_A_r)
        {
            uint8_t bytes[] = { 0b10000000, 0x00 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0001;

            _state.Registers.A = 0x66;
            _state.Registers.B = 0x11;
            SetFlag(Flag_C, true);

            do
            {
                cpuState.ToggleClockLevel();
            } while (cpuState.ClockTick());

            Assert::AreEqual(0x11, (int)_state.Registers.B);
            Assert::AreEqual(0x77, (int)_state.Registers.A);
            Assert::AreEqual(0, (int)GetFlag(Flag_C));
        }
    };
}

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
    TEST_CLASS(Arithmetic16Tests)
    {
    public:

        TEST_METHOD(SBC_HL_BC_wC)
        {
            uint8_t bytes[] = { 0xED, 0b01000010, 0x00 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0002;

            _state.Registers.HL = 0x6666;
            _state.Registers.BC = 0x1111;
            SetFlag(Flag_C, true);

            do
            {
                cpuState.ToggleClockLevel();
            } while (cpuState.ClockTick());

            Assert::AreEqual(0x1111, (int)_state.Registers.BC);
            Assert::AreEqual(0x5554, (int)_state.Registers.HL);
            Assert::AreEqual(0, (int)GetFlag(Flag_C));
        }

        TEST_METHOD(SBC_HL_BC_woC_nZ)
        {
            uint8_t bytes[] = { 0xED, 0b01000010, 0x00 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0002;

            _state.Registers.HL = 0x6666;
            _state.Registers.BC = 0x6622;
            SetFlag(Flag_C, false);

            do
            {
                cpuState.ToggleClockLevel();
            } while (cpuState.ClockTick());

            Assert::AreEqual(0x6622, (int)_state.Registers.BC);
            Assert::AreEqual(0x0044, (int)_state.Registers.HL);
            Assert::AreEqual(0, (int)GetFlag(Flag_C));
            Assert::AreEqual(0, (int)GetFlag(Flag_Z));
        }
    };
}

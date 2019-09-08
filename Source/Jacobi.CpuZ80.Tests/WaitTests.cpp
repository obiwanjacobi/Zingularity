#include "stdafx.h"
#include "CppUnitTest.h"
#include "TestCpuState.h"
#include "../Jacobi.CpuZ80/ClockTick.h"
#include "../Jacobi.CpuZ80/CpuState.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern CpuState _state;

namespace Z80InterruptTests
{
    TEST_CLASS(WaitTests)
    {
    public:

        TEST_METHOD(Wait_FO)
        {
            uint8_t bytes[] = { 0x00, 0x00 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0001;

            cpuState.host.Wait = true;
            int leftOverCycles = cpuState.RunForTCycles(16);

            Assert::AreEqual(0, leftOverCycles);
            Assert::AreEqual(0x00, (int)cpuState.host.Address);
            Assert::AreEqual(1, (int)_state.Clock.M);
            Assert::AreEqual(2, (int)_state.Clock.T);

            cpuState.host.Wait = false;
            leftOverCycles = cpuState.RunForTCycles(8);

            Assert::AreEqual(4, leftOverCycles);
            Assert::AreEqual(0x01, (int)cpuState.host.Address);
        }

        TEST_METHOD(Wait_MR)
        {
            // LD B, 0xFF
            uint8_t bytes[] = { 0b00000110, 0xFF, 0x00 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0002;

            cpuState.RunForTCycles(4);

            cpuState.host.Wait = true;
            int leftOverCycles = cpuState.RunForTCycles(16);

            Assert::AreEqual(0, leftOverCycles);
            Assert::AreEqual(0x01, (int)cpuState.host.Address);
            Assert::AreEqual(2, (int)_state.Clock.M);
            Assert::AreEqual(2, (int)_state.Clock.T);

            cpuState.host.Wait = false;
            leftOverCycles = cpuState.RunForTCycles(8);

            Assert::AreEqual(5, leftOverCycles);
            Assert::AreEqual(0x02, (int)cpuState.host.Address);
        }
    };
}
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

        TEST_METHOD(Wait)
        {
            uint8_t bytes[] = { 0x00, 0x00 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0001;

            cpuState.host.Wait = true;
            cpuState.RunForTCycles(16);

            Assert::AreEqual(0x00, (int)cpuState.host.Address);
            Assert::AreEqual(1, (int)_state.Clock.M);
            Assert::AreEqual(2, (int)_state.Clock.T);

            cpuState.host.Wait = false;
            int leftOverCycles = cpuState.RunForTCycles(8);

            Assert::AreEqual(4, leftOverCycles);
            Assert::AreEqual(0x01, (int)cpuState.host.Address);
        }
    };
}
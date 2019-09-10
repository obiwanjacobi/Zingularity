#include "stdafx.h"
#include "CppUnitTest.h"
#include "TestCpuState.h"
#include "../Jacobi.CpuZ80/ClockTick.h"
#include "../Jacobi.CpuZ80/CpuState.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern CpuState _state;

namespace Z80InterruptTests
{
    TEST_CLASS(BusRequestTests)
    {
    public:

        TEST_METHOD(BusReq)
        {
            uint8_t bytes[] = { 0x00, 0x00 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0001;

            cpuState.host.BusReq = true;
            int leftOverCycles = cpuState.RunForTCycles(4);

            Assert::AreEqual(0, leftOverCycles);
            Assert::AreEqual(0x00, (int)cpuState.host.Address);
            Assert::AreEqual(1, (int)_state.Clock.M);
            Assert::AreEqual(1, (int)_state.Clock.T);
            Assert::AreEqual((int)false, (int)cpuState.host.BusAck);

            leftOverCycles = cpuState.RunForTCycles(4);
            Assert::AreEqual((int)true, (int)cpuState.host.BusAck);
            Assert::AreEqual((int)true, (int)cpuState.host.FloatBus);

            cpuState.host.BusReq = false;
            leftOverCycles = cpuState.RunForTCycles(1);

            Assert::AreEqual(0, leftOverCycles);
            Assert::AreEqual((int)false, (int)cpuState.host.BusAck);

            leftOverCycles = cpuState.RunForTCycles(1);

            Assert::AreEqual(0, leftOverCycles);
            Assert::AreEqual((int)false, (int)cpuState.host.FloatBus);
        }
    };
}

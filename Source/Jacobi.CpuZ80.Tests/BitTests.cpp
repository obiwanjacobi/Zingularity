#include "stdafx.h"
#include "CppUnitTest.h"
#include "CpuZ80TestHost.h"
#include "Memory.h"
#include "../Jacobi.CpuZ80/ClockTick.h"
#include "../Jacobi.CpuZ80/CpuState.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern CpuState _state;
extern AsyncThis asyncClockTick;

namespace JacobiCpuZ80Tests
{
    TEST_CLASS(BitTests)
    {
    public:

        TEST_METHOD(BitSet0_IX0_A)
        {
            uint8_t bytes[] = { 0xDD, 0xCB, 0, 0b11000000 };
            CpuZ80TestHost host;
            Memory memory(&host);
            memory.Assign(bytes, 4);

            asyncClockTick.State = 0;
            InitClock();

            while (!ClockTick(&asyncClockTick))
            {
                AdvanceClock();
            }

            Assert::AreEqual(1, (int)_state.Clock.M);
            Assert::AreEqual(5, (int)_state.Clock.T);
        }
    };
}
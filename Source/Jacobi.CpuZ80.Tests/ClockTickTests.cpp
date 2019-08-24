#include "stdafx.h"
#include "CppUnitTest.h"
#include "CpuZ80TestHost.h"
#include "../Jacobi.CpuZ80/ClockTick.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace JacobiCpuZ80Tests
{
    TEST_CLASS(ClockTickTests)
    {
    public:

        TEST_METHOD(ClockTick_Fetch)
        {
            CpuZ80TestHost host;

            _state.Clock.Level = Level_PosEdge;
            ResetClock();

            Async_Reset(&asyncClockTick);
            // executes a NOP
            while (!ClockTick(&asyncClockTick))
            {
                ToggleClockLevel();
            }

            // should be reset for next instruction
            Assert::AreEqual(1, (int)_state.Clock.M);
            Assert::AreEqual(1, (int)_state.Clock.T);
        }
    };
}
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

            InitClock();

            Async_Reset(&asyncClockTick);
            while (!ClockTick(&asyncClockTick))
            {
                AdvanceClock();
            }
            Assert::AreEqual(1, (int)_state.Clock.M);
            Assert::AreEqual(5, (int)_state.Clock.T);
        }
    };
}
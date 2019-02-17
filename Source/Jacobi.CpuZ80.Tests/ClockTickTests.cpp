#include "stdafx.h"
#include "CppUnitTest.h"
#include "CpuZ80TestHost.h"
#include "../Jacobi.CpuZ80/ClockTick.h"
#include "../Jacobi.CpuZ80/CpuState.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

CpuState _state;

AsyncThis asyncClockTick;

namespace JacobiCpuZ80Tests
{
    TEST_CLASS(ClockTickTests)
    {
    public:

        TEST_METHOD(ClockTick_Fetch)
        {
            CpuZ80TestHost host;

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
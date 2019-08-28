#include "stdafx.h"
#include "CppUnitTest.h"
#include "TestCpuState.h"
#include "../Jacobi.CpuZ80/ClockTick.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace JacobiCpuZ80Tests
{
    TEST_CLASS(ClockTickTests)
    {
    public:

        TEST_METHOD(ClockTick_Fetch)
        {
            TestCpuState cpuState;

            do 
            {
                cpuState.ToggleClockLevel();
                // executes a NOP
            } while (!ClockTickAsync(&cpuState.asyncThis));

            // should be reset for next instruction
            Assert::AreEqual(1, (int)_state.Clock.M);
            Assert::AreEqual(1, (int)_state.Clock.T);
        }
    };
}
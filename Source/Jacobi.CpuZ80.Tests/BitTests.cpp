#include "stdafx.h"
#include "CppUnitTest.h"
#include "TestCpuState.h"
#include "../Jacobi.CpuZ80/ClockTick.h"
#include "../Jacobi.CpuZ80/CpuState.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern CpuState _state;

namespace JacobiCpuZ80Tests
{
    TEST_CLASS(BitTests)
    {
    public:

        TEST_METHOD(BitSet4_IX04_A)
        {
            uint8_t bytes[] = { 0x10, 0xDD, 0xCB, 0x02, 0b11000000 };
            TestCpuState cpuState;
            cpuState.memory.Assign(bytes, sizeof(bytes));
            cpuState.AbortAddress = 0x0004;

            // IX + d => 2+2=4
            _state.Registers.IX = 0x02;
            _state.Registers.PC = 0x01;
            
            do
            {
                cpuState.ToggleClockLevel();
            }
            while (cpuState.ClockTick());
            

            // should be reset for next instruction
            Assert::AreEqual(1, (int)_state.Clock.M);
            Assert::AreEqual(1, (int)_state.Clock.T);

            Assert::AreEqual(0x17, (int)cpuState.memory[4]);
        }
    };
}
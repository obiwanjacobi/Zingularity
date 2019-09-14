#include "stdafx.h"
#include "CppUnitTest.h"
#include "TestCpuState.h"
#include "../Jacobi.CpuZ80/ClockTick.h"
#include "../Jacobi.CpuZ80/CpuState.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern CpuState _state;

namespace Z80InstructionTests
{
    TEST_CLASS(BitTests)
    {
    public:

        TEST_METHOD(BitSet0_IXFF_B)
        {
            uint8_t bytes[] = { 0x10, 0xDD, 0xCB, 0xFF, 0b11000000 };
            TestCpuState cpuState(bytes, sizeof(bytes));

            // IX + d => 1-1=0
            _state.Registers.IX = 0x01;
            _state.Registers.PC = 0x01;
            
            cpuState.Run();
            
            Assert::AreEqual(0x11, (int)_state.Registers.B);
            Assert::AreEqual(0x11, (int)cpuState.memory[0]);
        }
    };
}
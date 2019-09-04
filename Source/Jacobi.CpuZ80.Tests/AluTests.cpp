#include "stdafx.h"
#include "CppUnitTest.h"
#include "TestCpuState.h"
#include "../Jacobi.CpuZ80/FlagsZ80.h"
#include "../Jacobi.CpuZ80/CpuZ80.h"
#include "../Jacobi.CpuZ80/CpuAlu.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Z80AluTests
{
    TEST_CLASS(AluTests)
    {
    public:

        TEST_METHOD(Sub8_Zero)
        {
            uint8_t result = Sub8(0b01101101, 
                                  0b01101101, Alu_WithoutCarry);

            Assert::AreEqual(0b00000000, (int)result);
            Assert::AreEqual(1, (int)GetFlag(Flag_Z));
        }

        TEST_METHOD(Sub8_HalfBorrow)
        {
            uint8_t result = Sub8(0b00000000, 
                                  0b00001000, Alu_WithoutCarry);

            Assert::AreEqual(0b11111000, (int)result);
            Assert::AreEqual(1, (int)GetFlag(Flag_H));
        }

        TEST_METHOD(Sub8_Borrow)
        {
            uint8_t result = Sub8(0b00000000, 
                                  0b10000000, Alu_WithoutCarry);

            Assert::AreEqual(0b10000000, (int)result);
            Assert::AreEqual(1, (int)GetFlag(Flag_C));
            Assert::AreEqual(1, (int)GetFlag(Flag_S));
        }
    };
}

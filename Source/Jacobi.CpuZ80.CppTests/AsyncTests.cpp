#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Jacobi.CpuZ80/Async.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

static bool NestedDone = false;

Async_Function(AsyncNested)
{
    Logger::WriteMessage("AsyncNested");
    Async_YieldUntil(1, true);
    Logger::WriteMessage("AsyncNested - done");
    NestedDone = true;
}
Async_End

AsyncThis asyncNested;

Async_Function(AsyncTest)
{
    Logger::WriteMessage("AsyncTest");
    Async_WaitUntil(1, AsyncNested(&asyncNested));
    Logger::WriteMessage("AsyncTest - done");
}
Async_End

namespace JacobiCpuZ80CppTests
{
	TEST_CLASS(AsyncTests)
	{
	public:
		
		TEST_METHOD(Async)
		{
            NestedDone = false;
            AsyncThis async;
            bool yielded = false;

            while (!AsyncTest(&async)) 
            {
                yielded = true;
                Logger::WriteMessage("Yielded");
            }

            Assert::IsTrue(yielded);
            Assert::IsTrue(NestedDone);
		}
	};
}
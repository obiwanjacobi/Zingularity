#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Jacobi.CpuZ80/Async.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

Async_Function(AsyncNested)
{
    Logger::WriteMessage("AsyncNested");
    Async_YieldUntil(1, true);
    Logger::WriteMessage("AsyncNested - done");
}
Async_EndFn()

AsyncThis asyncNested;

Async_Function(AsyncTest)
{
    Logger::WriteMessage("AsyncTest");
    Async_WaitUntil(1, AsyncNested(&asyncNested));
    Logger::WriteMessage("AsyncTest - done");
}
Async_EndFn()

namespace JacobiCpuZ80CppTests
{
	TEST_CLASS(AsyncTests)
	{
	public:
		
		TEST_METHOD(Async)
		{
            AsyncThis async;
            bool yielded = false;

            while (!AsyncTest(&async)) 
            {
                yielded = true;
                Logger::WriteMessage("Yielded");
            }

            Assert::IsTrue(yielded);
		}
	};
}
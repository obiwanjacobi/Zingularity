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

static int8_t Counter;

Async_Function(DynAsyncTest)
{
    Logger::WriteMessage("DynAsyncTest1 ");
    Async_Yield(1);
    Logger::WriteMessage("=> ");

    if (Counter == 1)
    {
        Logger::WriteMessage("DynAsyncTest2 ");
        Async_Yield(2);
        Logger::WriteMessage("=> ");
        Logger::WriteMessage("DynAsyncTest2 ");
        Async_Yield(5);
        Logger::WriteMessage("=> ");
    }

    if (Counter == 2)
    {
        Logger::WriteMessage("DynAsyncTest3 ");
        Async_Yield(3);
        Logger::WriteMessage("=> ");
    }

    Async_Yield(4);
    Logger::WriteMessage("DynAsyncTest - done");
}
Async_End

namespace JacobiCpuZ80Tests
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

        TEST_METHOD(DynamicAsync)
        {
            AsyncThis async;
            Counter = 1;
            while (!DynAsyncTest(&async))
            {
                Counter++;
            }
        }
	};
}
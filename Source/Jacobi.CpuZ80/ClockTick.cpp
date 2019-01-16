#include "stdafx.h"
#include "Async.h"
#include "CpuState.h"
#include <string.h>

extern CpuState _state;


void Clear()
{
    memset(&_state.Instruction, sizeof(InstructionState), 0);
}

Async_Function(Fetch)
{

}
Async_EndFn()

Async_Function(Decode)
{

}
Async_EndFn()

Async_Function(Execute)
{

}
Async_EndFn()

Async_Function(Interrupt)
{

}
Async_EndFn()

AsyncThis fetchAsync;
AsyncThis decodeAsync;
AsyncThis executeAsync;
AsyncThis interruptAsync;

Async_Function(ClockTick)
{
    Clear();
    
    Async_WaitUntil(1, Fetch(&fetchAsync));
    Async_WaitUntil(2, Decode(&decodeAsync));
    Async_WaitUntil(3, Execute(&executeAsync));
    Async_WaitUntil(4, Interrupt(&interruptAsync));
}
Async_EndFn()


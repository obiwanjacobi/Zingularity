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
Async_End

Async_Function(Decode)
{

}
Async_End

Async_Function(Execute)
{

}
Async_End

Async_Function(Interrupt)
{

}
Async_End

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
Async_End


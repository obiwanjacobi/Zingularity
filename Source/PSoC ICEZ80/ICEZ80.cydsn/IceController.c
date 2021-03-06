#include "project.h"

#ifdef Z80ICE

#include "Async.h"
#include "CpuState.h"
#include "ClockTick.h"
    
static volatile uint8_t _inClock;
static volatile uint8_t _clockTooFast;


CpuState _state;
AsyncThis asyncClockTick;

void OnClock()
{
    if (_inClock == 1)
    {
        _clockTooFast = 1;
    }
    
    _inClock = 1;

    // => clock PosEdge
    ClockTick(&asyncClockTick, Level_PosEdge);
    
    // wait for the high clock pulse to end
    while (CLK_Read());
    
    // => clock NegEdge
    ClockTick(&asyncClockTick, Level_NegEdge);
    
    _inClock = 0;
}

void Run()
{
    _inClock = 0;
    _clockTooFast = 0;
    CLK_ISR_StartEx(OnClock);
    
    BusCtrl_Write(0);
    
    Async_Reset(&asyncClockTick);
    ResetClock();
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        if (_clockTooFast) 
        {
            // output error message
        }    
    }
}
    
#endif

/* [] END OF FILE */

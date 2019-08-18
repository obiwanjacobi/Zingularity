/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
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

    if (_state.Clock.Level == Level_PosEdge)
    {
        _state.Clock.Level = Level_NegEdge;
    }
    
    // => clock PosEdge
    AdvanceClock();
    
    // wait for the high clock pulse to end
    while (CLK_Read());
    
    // => clock NegEdge
    AdvanceClock();
    
    _inClock = 0;
}

int main(void)
{
    _inClock = 0;
    _clockTooFast = 0;
    CLK_ISR_StartEx(OnClock);
    
    BusCtrl_Write(0);
    
    InitClock();
    
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

/* [] END OF FILE */

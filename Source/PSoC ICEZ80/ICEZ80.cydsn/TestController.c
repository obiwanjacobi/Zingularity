#include "project.h"

// Executes Z80 test routines against a real Z80 as well as the Z80 emulator code.
// Detect differences in IO.

#ifdef Z80TEST
    
#include "CpuController.h"    
#include "DebugConsole.h"
    
/**
    The test controller supplies a clock signal to a real Z80.
    The PSoC will respond to MEMory and IO requests from the Z80.
    Depending on the test scenario (program) stuff will happen.
    
    As the test is running the Test Controller will feed the Z80 emulator code the same input.
    The output of the emulator code is compared to the output of the real Z80 chip.
 */
    
uint8_t bytes[] = { 0x00, 0x00, 0x00, 0x00 };
Memory memory;
void InitMemory()
{
    memory.bytes = bytes;
    memory.length = sizeof(memory.bytes);
}

void ResetCpu()
{
    ctrl_setReset(Active);
    
    bool_t clk = false;
    for(int n = 0; n < 8; n++)
    {
        clk = !clk;
        ctrl_clock(clk);
    }
    
    ctrl_setReset(Inactive);
}

void Startup()
{
    ctrl_InitPins();
    InitMemory();
    ResetCpu();
}


void Run()
{
    Startup();
    
    if (ctrl_PrintDiff())
    {
        DebugConsole_LogWarning("  Aborting on diff after RESET.");
        return;
    }
    
    bool_t keepGoing = true;
    bool_t clk = false;
    while(keepGoing)
    {
        clk = !clk;
        ctrl_clock(clk);
        
        keepGoing = ctrl_IO(&memory);

        if (ctrl_PrintDiff())
        {
            DebugConsole_EndLine();
        }
        
        if (clk)
            DebugConsole_Log(".");
    }
}

#endif

/* [] END OF FILE */

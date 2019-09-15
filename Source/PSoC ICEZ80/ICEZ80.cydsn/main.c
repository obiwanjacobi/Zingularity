// only enable ONE (and only one) of the following

// set this in build-settings for In-Circuit Emulator mode
// Z80ICE

// set this in build-settings for test Emulator mode
// Z80TEST

// Menu: Project => Buid Settings... (dialog)
// => Tree: ARM GCC... => Compiler => General => Preprocessor Definitions
// add define to list - ';' separated

// NOTE: 
// - Specify only one of the #defines above!
// - Make sure the correct page in TopDesign is enabled (and all other pages are disabled)!
// - When switch modes: check the pin assignments!!

#include "project.h"
#include "IceController.h"
#include "TestController.h"
#include "DebugConsole.h"
#include "ClockTick.h"

#include <stdio.h>

int main(void)
{
    ResetClock();
    DebugConsole_Init();
    
    Run();
    
    DebugConsole_EndLine();
    DebugConsole_EndLine();
    DebugConsole_LogInfo("Finished.");
}


/* [] END OF FILE */

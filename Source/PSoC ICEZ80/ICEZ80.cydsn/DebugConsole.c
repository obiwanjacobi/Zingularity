#include "DebugConsole.h"
#include "project.h"

void DebugConsole_Init()
{
    DbgConsole_Start();
}

void DebugConsole_LogInfo(const char* txt)
{
    DbgConsole_PutString(txt);
}


/* [] END OF FILE */

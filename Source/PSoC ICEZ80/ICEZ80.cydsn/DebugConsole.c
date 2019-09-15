#include "DebugConsole.h"
#include "project.h"

void DebugConsole_Init()
{
    DbgConsole_Start();
}

void DebugConsole_EndLine()
{
    DbgConsole_PutString("\r\n");
}

// no endline
void DebugConsole_Log(const char* text)
{
    DbgConsole_PutString(text);
}


void DebugConsole_LogInfo(const char* txt)
{
    DbgConsole_PutString("Info: ");
    DbgConsole_PutString(txt);
    DebugConsole_EndLine();
}

void DebugConsole_LogWarning(const char* txt)
{
    DbgConsole_PutString("Warning: ");
    DbgConsole_PutString(txt);
    DebugConsole_EndLine();
}

/* [] END OF FILE */

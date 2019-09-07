#pragma once

#include "CpuZ80TestHost.h"
#include "Memory.h"
#include "../Jacobi.CpuZ80/Async.h"
#include "../Jacobi.CpuZ80/ClockTick.h"
#include <string.h>

extern CpuState _state;

class TestCpuState
{
public:
    TestCpuState()
        : memory(&host)
    {
        ClearAll();
    }

    void ClearAll()
    {
        Async_Reset(&asyncThis);
        ClearClock();
        ClearRegisters();
        ClearInstruction();
        ClearInterrupt();

        ClearHost();
        AbortAddress = 0;
    }
    void ClearClock() { ResetClock(); }
    void ClearRegisters() { memset(&_state.Registers, 0, sizeof(Registers)); }
    void ClearInterrupt() { memset(&_state.Interrupt, 0, sizeof(InterruptState)); }
    void ClearInstruction() { memset(&_state.Instruction, 0, sizeof(InstructionState)); }
    void ClearHost() { memset(&host, 0, sizeof(CpuZ80TestHost)); }

    int RunForTCycles(int tCycles)
    {
        while (tCycles > 0)
        {
            // pos edge
            ToggleClockLevel();
            if (!ClockTick())
            {
                break;
            }

            // neg edge
            ToggleClockLevel();
            if (!ClockTick())
            {
                break;
            }

            tCycles--;
        }

        return tCycles;
    }

    bool ClockTick()
    {
        // abort on fetch on abort address
        if (AbortAddress > 0 && 
            host.M1 && host.MemReq && host.Rd && 
            host.Address == AbortAddress) 
        { 
            return false; 
        }

        bool keepGoing = memory.ClockTick();
        if (keepGoing) ClockTickAsync(&asyncThis);
        return keepGoing;
    }
    void ToggleClockLevel()
    {
        _state.Clock.Level = _state.Clock.Level != Level_PosEdge ? Level_PosEdge : Level_NegEdge;
    }
    void ClockLevelIs(Level lvl) { _state.Clock.Level = lvl; }

    CpuZ80TestHost host;
    AsyncThis asyncThis;
    Memory memory;
    uint16_t AbortAddress;
};

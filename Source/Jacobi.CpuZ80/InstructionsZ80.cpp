/**
 *  Generated Source Code
 *  Any changes you make will be lost when the code is regenerated.
 */

#include "stdafx.h"
#include "InstructionsZ80.hpp"
#include "FunctionsZ80.hpp"

// Instructions for the Z80:

// LD A, A  -  7F
InstructionInfo instructionInfoLDA_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 7 },
    }
};

// LD A, B  -  78
InstructionInfo instructionInfoLDA_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 0 },
    }
};

// LD A, C  -  79
InstructionInfo instructionInfoLDA_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 1 },
    }
};

// LD A, D  -  7A
InstructionInfo instructionInfoLDA_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 2 },
    }
};

// LD A, E  -  7B
InstructionInfo instructionInfoLDA_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 3 },
    }
};

// LD A, H  -  7C
InstructionInfo instructionInfoLDA_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 4 },
    }
};

// LD A, L  -  7D
InstructionInfo instructionInfoLDA_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 5 },
    }
};

// LD B, A  -  47
InstructionInfo instructionInfoLDB_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 7 },
    }
};

// LD B, B  -  40
InstructionInfo instructionInfoLDB_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 0 },
    }
};

// LD B, C  -  41
InstructionInfo instructionInfoLDB_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 1 },
    }
};

// LD B, D  -  42
InstructionInfo instructionInfoLDB_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 2 },
    }
};

// LD B, E  -  43
InstructionInfo instructionInfoLDB_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 3 },
    }
};

// LD B, H  -  44
InstructionInfo instructionInfoLDB_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 4 },
    }
};

// LD B, L  -  45
InstructionInfo instructionInfoLDB_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 5 },
    }
};

// LD C, A  -  4F
InstructionInfo instructionInfoLDC_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 7 },
    }
};

// LD C, B  -  48
InstructionInfo instructionInfoLDC_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 0 },
    }
};

// LD C, C  -  49
InstructionInfo instructionInfoLDC_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 1 },
    }
};

// LD C, D  -  4A
InstructionInfo instructionInfoLDC_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 2 },
    }
};

// LD C, E  -  4B
InstructionInfo instructionInfoLDC_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 3 },
    }
};

// LD C, H  -  4C
InstructionInfo instructionInfoLDC_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 4 },
    }
};

// LD C, L  -  4D
InstructionInfo instructionInfoLDC_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 5 },
    }
};

// LD D, A  -  57
InstructionInfo instructionInfoLDD_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 7 },
    }
};

// LD D, B  -  50
InstructionInfo instructionInfoLDD_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 0 },
    }
};

// LD D, C  -  51
InstructionInfo instructionInfoLDD_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 1 },
    }
};

// LD D, D  -  52
InstructionInfo instructionInfoLDD_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 2 },
    }
};

// LD D, E  -  53
InstructionInfo instructionInfoLDD_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 3 },
    }
};

// LD D, H  -  54
InstructionInfo instructionInfoLDD_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 4 },
    }
};

// LD D, L  -  55
InstructionInfo instructionInfoLDD_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 5 },
    }
};

// LD E, A  -  5F
InstructionInfo instructionInfoLDE_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 7 },
    }
};

// LD E, B  -  58
InstructionInfo instructionInfoLDE_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 0 },
    }
};

// LD E, C  -  59
InstructionInfo instructionInfoLDE_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 1 },
    }
};

// LD E, D  -  5A
InstructionInfo instructionInfoLDE_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 2 },
    }
};

// LD E, E  -  5B
InstructionInfo instructionInfoLDE_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 3 },
    }
};

// LD E, H  -  5C
InstructionInfo instructionInfoLDE_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 4 },
    }
};

// LD E, L  -  5D
InstructionInfo instructionInfoLDE_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 5 },
    }
};

// LD H, A  -  67
InstructionInfo instructionInfoLDH_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 7 },
    }
};

// LD H, B  -  60
InstructionInfo instructionInfoLDH_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 0 },
    }
};

// LD H, C  -  61
InstructionInfo instructionInfoLDH_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 1 },
    }
};

// LD H, D  -  62
InstructionInfo instructionInfoLDH_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 2 },
    }
};

// LD H, E  -  63
InstructionInfo instructionInfoLDH_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 3 },
    }
};

// LD H, H  -  64
InstructionInfo instructionInfoLDH_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 4 },
    }
};

// LD H, L  -  65
InstructionInfo instructionInfoLDH_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 5 },
    }
};

// LD L, A  -  6F
InstructionInfo instructionInfoLDL_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 7 },
    }
};

// LD L, B  -  68
InstructionInfo instructionInfoLDL_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 0 },
    }
};

// LD L, C  -  69
InstructionInfo instructionInfoLDL_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 1 },
    }
};

// LD L, D  -  6A
InstructionInfo instructionInfoLDL_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 2 },
    }
};

// LD L, E  -  6B
InstructionInfo instructionInfoLDL_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 3 },
    }
};

// LD L, H  -  6C
InstructionInfo instructionInfoLDL_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 4 },
    }
};

// LD L, L  -  6D
InstructionInfo instructionInfoLDL_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 5 },
    }
};

// LD A, A  -  DD, 7F
InstructionInfo instructionInfoLDA_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 7 },
    }
};

// LD A, B  -  DD, 78
InstructionInfo instructionInfoLDA_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 0 },
    }
};

// LD A, C  -  DD, 79
InstructionInfo instructionInfoLDA_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 1 },
    }
};

// LD A, D  -  DD, 7A
InstructionInfo instructionInfoLDA_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 2 },
    }
};

// LD A, E  -  DD, 7B
InstructionInfo instructionInfoLDA_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 3 },
    }
};

// LD A, IXh  -  DD, 7C
InstructionInfo instructionInfoLDA_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 4 },
    }
};

// LD A, IXl  -  DD, 7D
InstructionInfo instructionInfoLDA_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 5 },
    }
};

// LD B, A  -  DD, 47
InstructionInfo instructionInfoLDB_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 7 },
    }
};

// LD B, B  -  DD, 40
InstructionInfo instructionInfoLDB_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 0 },
    }
};

// LD B, C  -  DD, 41
InstructionInfo instructionInfoLDB_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 1 },
    }
};

// LD B, D  -  DD, 42
InstructionInfo instructionInfoLDB_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 2 },
    }
};

// LD B, E  -  DD, 43
InstructionInfo instructionInfoLDB_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 3 },
    }
};

// LD B, IXh  -  DD, 44
InstructionInfo instructionInfoLDB_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 4 },
    }
};

// LD B, IXl  -  DD, 45
InstructionInfo instructionInfoLDB_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 5 },
    }
};

// LD C, A  -  DD, 4F
InstructionInfo instructionInfoLDC_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 7 },
    }
};

// LD C, B  -  DD, 48
InstructionInfo instructionInfoLDC_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 0 },
    }
};

// LD C, C  -  DD, 49
InstructionInfo instructionInfoLDC_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 1 },
    }
};

// LD C, D  -  DD, 4A
InstructionInfo instructionInfoLDC_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 2 },
    }
};

// LD C, E  -  DD, 4B
InstructionInfo instructionInfoLDC_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 3 },
    }
};

// LD C, IXh  -  DD, 4C
InstructionInfo instructionInfoLDC_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 4 },
    }
};

// LD C, IXl  -  DD, 4D
InstructionInfo instructionInfoLDC_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 5 },
    }
};

// LD D, A  -  DD, 57
InstructionInfo instructionInfoLDD_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 7 },
    }
};

// LD D, B  -  DD, 50
InstructionInfo instructionInfoLDD_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 0 },
    }
};

// LD D, C  -  DD, 51
InstructionInfo instructionInfoLDD_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 1 },
    }
};

// LD D, D  -  DD, 52
InstructionInfo instructionInfoLDD_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 2 },
    }
};

// LD D, E  -  DD, 53
InstructionInfo instructionInfoLDD_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 3 },
    }
};

// LD D, IXh  -  DD, 54
InstructionInfo instructionInfoLDD_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 4 },
    }
};

// LD D, IXl  -  DD, 55
InstructionInfo instructionInfoLDD_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 5 },
    }
};

// LD E, A  -  DD, 5F
InstructionInfo instructionInfoLDE_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 7 },
    }
};

// LD E, B  -  DD, 58
InstructionInfo instructionInfoLDE_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 0 },
    }
};

// LD E, C  -  DD, 59
InstructionInfo instructionInfoLDE_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 1 },
    }
};

// LD E, D  -  DD, 5A
InstructionInfo instructionInfoLDE_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 2 },
    }
};

// LD E, E  -  DD, 5B
InstructionInfo instructionInfoLDE_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 3 },
    }
};

// LD E, IXh  -  DD, 5C
InstructionInfo instructionInfoLDE_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 4 },
    }
};

// LD E, IXl  -  DD, 5D
InstructionInfo instructionInfoLDE_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 5 },
    }
};

// LD IXh, A  -  DD, 67
InstructionInfo instructionInfoLDIXh_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 7 },
    }
};

// LD IXh, B  -  DD, 60
InstructionInfo instructionInfoLDIXh_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 0 },
    }
};

// LD IXh, C  -  DD, 61
InstructionInfo instructionInfoLDIXh_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 1 },
    }
};

// LD IXh, D  -  DD, 62
InstructionInfo instructionInfoLDIXh_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 2 },
    }
};

// LD IXh, E  -  DD, 63
InstructionInfo instructionInfoLDIXh_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 3 },
    }
};

// LD IXh, IXh  -  DD, 64
InstructionInfo instructionInfoLDIXh_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 4 },
    }
};

// LD IXh, IXl  -  DD, 65
InstructionInfo instructionInfoLDIXh_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 5 },
    }
};

// LD IXl, A  -  DD, 6F
InstructionInfo instructionInfoLDIXl_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 7 },
    }
};

// LD IXl, B  -  DD, 68
InstructionInfo instructionInfoLDIXl_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 0 },
    }
};

// LD IXl, C  -  DD, 69
InstructionInfo instructionInfoLDIXl_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 1 },
    }
};

// LD IXl, D  -  DD, 6A
InstructionInfo instructionInfoLDIXl_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 2 },
    }
};

// LD IXl, E  -  DD, 6B
InstructionInfo instructionInfoLDIXl_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 3 },
    }
};

// LD IXl, IXh  -  DD, 6C
InstructionInfo instructionInfoLDIXl_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 4 },
    }
};

// LD IXl, IXl  -  DD, 6D
InstructionInfo instructionInfoLDIXl_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 5 },
    }
};

// LD A, A  -  FD, 7F
InstructionInfo instructionInfoLDA_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 7 },
    }
};

// LD A, B  -  FD, 78
InstructionInfo instructionInfoLDA_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 0 },
    }
};

// LD A, C  -  FD, 79
InstructionInfo instructionInfoLDA_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 1 },
    }
};

// LD A, D  -  FD, 7A
InstructionInfo instructionInfoLDA_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 2 },
    }
};

// LD A, E  -  FD, 7B
InstructionInfo instructionInfoLDA_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 3 },
    }
};

// LD A, IYh  -  FD, 7C
InstructionInfo instructionInfoLDA_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 4 },
    }
};

// LD A, IYl  -  FD, 7D
InstructionInfo instructionInfoLDA_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::Registers8, 5 },
    }
};

// LD B, A  -  FD, 47
InstructionInfo instructionInfoLDB_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 7 },
    }
};

// LD B, B  -  FD, 40
InstructionInfo instructionInfoLDB_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 0 },
    }
};

// LD B, C  -  FD, 41
InstructionInfo instructionInfoLDB_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 1 },
    }
};

// LD B, D  -  FD, 42
InstructionInfo instructionInfoLDB_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 2 },
    }
};

// LD B, E  -  FD, 43
InstructionInfo instructionInfoLDB_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 3 },
    }
};

// LD B, IYh  -  FD, 44
InstructionInfo instructionInfoLDB_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 4 },
    }
};

// LD B, IYl  -  FD, 45
InstructionInfo instructionInfoLDB_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::Registers8, 5 },
    }
};

// LD C, A  -  FD, 4F
InstructionInfo instructionInfoLDC_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 7 },
    }
};

// LD C, B  -  FD, 48
InstructionInfo instructionInfoLDC_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 0 },
    }
};

// LD C, C  -  FD, 49
InstructionInfo instructionInfoLDC_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 1 },
    }
};

// LD C, D  -  FD, 4A
InstructionInfo instructionInfoLDC_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 2 },
    }
};

// LD C, E  -  FD, 4B
InstructionInfo instructionInfoLDC_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 3 },
    }
};

// LD C, IYh  -  FD, 4C
InstructionInfo instructionInfoLDC_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 4 },
    }
};

// LD C, IYl  -  FD, 4D
InstructionInfo instructionInfoLDC_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::Registers8, 5 },
    }
};

// LD D, A  -  FD, 57
InstructionInfo instructionInfoLDD_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 7 },
    }
};

// LD D, B  -  FD, 50
InstructionInfo instructionInfoLDD_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 0 },
    }
};

// LD D, C  -  FD, 51
InstructionInfo instructionInfoLDD_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 1 },
    }
};

// LD D, D  -  FD, 52
InstructionInfo instructionInfoLDD_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 2 },
    }
};

// LD D, E  -  FD, 53
InstructionInfo instructionInfoLDD_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 3 },
    }
};

// LD D, IYh  -  FD, 54
InstructionInfo instructionInfoLDD_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 4 },
    }
};

// LD D, IYl  -  FD, 55
InstructionInfo instructionInfoLDD_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::Registers8, 5 },
    }
};

// LD E, A  -  FD, 5F
InstructionInfo instructionInfoLDE_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 7 },
    }
};

// LD E, B  -  FD, 58
InstructionInfo instructionInfoLDE_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 0 },
    }
};

// LD E, C  -  FD, 59
InstructionInfo instructionInfoLDE_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 1 },
    }
};

// LD E, D  -  FD, 5A
InstructionInfo instructionInfoLDE_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 2 },
    }
};

// LD E, E  -  FD, 5B
InstructionInfo instructionInfoLDE_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 3 },
    }
};

// LD E, IYh  -  FD, 5C
InstructionInfo instructionInfoLDE_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 4 },
    }
};

// LD E, IYl  -  FD, 5D
InstructionInfo instructionInfoLDE_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::Registers8, 5 },
    }
};

// LD IYh, A  -  FD, 67
InstructionInfo instructionInfoLDIYh_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 7 },
    }
};

// LD IYh, B  -  FD, 60
InstructionInfo instructionInfoLDIYh_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 0 },
    }
};

// LD IYh, C  -  FD, 61
InstructionInfo instructionInfoLDIYh_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 1 },
    }
};

// LD IYh, D  -  FD, 62
InstructionInfo instructionInfoLDIYh_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 2 },
    }
};

// LD IYh, E  -  FD, 63
InstructionInfo instructionInfoLDIYh_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 3 },
    }
};

// LD IYh, IYh  -  FD, 64
InstructionInfo instructionInfoLDIYh_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 4 },
    }
};

// LD IYh, IYl  -  FD, 65
InstructionInfo instructionInfoLDIYh_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::Registers8, 5 },
    }
};

// LD IYl, A  -  FD, 6F
InstructionInfo instructionInfoLDIYl_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 7 },
    }
};

// LD IYl, B  -  FD, 68
InstructionInfo instructionInfoLDIYl_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 0 },
    }
};

// LD IYl, C  -  FD, 69
InstructionInfo instructionInfoLDIYl_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 1 },
    }
};

// LD IYl, D  -  FD, 6A
InstructionInfo instructionInfoLDIYl_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 2 },
    }
};

// LD IYl, E  -  FD, 6B
InstructionInfo instructionInfoLDIYl_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 3 },
    }
};

// LD IYl, IYh  -  FD, 6C
InstructionInfo instructionInfoLDIYl_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 4 },
    }
};

// LD IYl, IYl  -  FD, 6D
InstructionInfo instructionInfoLDIYl_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::Registers8, 5 },
    }
};

// LD A, n  -  3E, n
InstructionInfo instructionInfoLDA_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// LD B, n  -  06, n
InstructionInfo instructionInfoLDB_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// LD C, n  -  0E, n
InstructionInfo instructionInfoLDC_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// LD D, n  -  16, n
InstructionInfo instructionInfoLDD_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// LD E, n  -  1E, n
InstructionInfo instructionInfoLDE_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// LD H, n  -  26, n
InstructionInfo instructionInfoLDH_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// LD L, n  -  2E, n
InstructionInfo instructionInfoLDL_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// LD A, n  -  DD, 3E, n
InstructionInfo instructionInfoLDA_n_DD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// LD B, n  -  DD, 06, n
InstructionInfo instructionInfoLDB_n_DD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// LD C, n  -  DD, 0E, n
InstructionInfo instructionInfoLDC_n_DD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// LD D, n  -  DD, 16, n
InstructionInfo instructionInfoLDD_n_DD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// LD E, n  -  DD, 1E, n
InstructionInfo instructionInfoLDE_n_DD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// LD IXh, n  -  DD, 26, n
InstructionInfo instructionInfoLDIXh_n_DD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// LD IXl, n  -  DD, 2E, n
InstructionInfo instructionInfoLDIXl_n_DD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// LD A, n  -  FD, 3E, n
InstructionInfo instructionInfoLDA_n_FD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// LD B, n  -  FD, 06, n
InstructionInfo instructionInfoLDB_n_FD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// LD C, n  -  FD, 0E, n
InstructionInfo instructionInfoLDC_n_FD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// LD D, n  -  FD, 16, n
InstructionInfo instructionInfoLDD_n_FD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// LD E, n  -  FD, 1E, n
InstructionInfo instructionInfoLDE_n_FD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// LD IYh, n  -  FD, 26, n
InstructionInfo instructionInfoLDIYh_n_FD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// LD IYl, n  -  FD, 2E, n
InstructionInfo instructionInfoLDIYl_n_FD3 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// LD A, (HL)  -  7E
InstructionInfo instructionInfoLDA__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// LD B, (HL)  -  46
InstructionInfo instructionInfoLDB__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// LD C, (HL)  -  4E
InstructionInfo instructionInfoLDC__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// LD D, (HL)  -  56
InstructionInfo instructionInfoLDD__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// LD E, (HL)  -  5E
InstructionInfo instructionInfoLDE__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// LD H, (HL)  -  66
InstructionInfo instructionInfoLDH__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// LD L, (HL)  -  6E
InstructionInfo instructionInfoLDL__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// LD A, (IX+d)  -  DD, BE, d
InstructionInfo instructionInfoLDA__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// LD A, (IY+d)  -  FD, BE, d
InstructionInfo instructionInfoLDA__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// LD B, (IX+d)  -  DD, 86, d
InstructionInfo instructionInfoLDB__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// LD B, (IY+d)  -  FD, 86, d
InstructionInfo instructionInfoLDB__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// LD C, (IX+d)  -  DD, 8E, d
InstructionInfo instructionInfoLDC__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// LD C, (IY+d)  -  FD, 8E, d
InstructionInfo instructionInfoLDC__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// LD D, (IX+d)  -  DD, 96, d
InstructionInfo instructionInfoLDD__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// LD D, (IY+d)  -  FD, 96, d
InstructionInfo instructionInfoLDD__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// LD E, (IX+d)  -  DD, 9E, d
InstructionInfo instructionInfoLDE__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// LD E, (IY+d)  -  FD, 9E, d
InstructionInfo instructionInfoLDE__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// LD H, (IX+d)  -  DD, A6, d
InstructionInfo instructionInfoLDH__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// LD H, (IY+d)  -  FD, A6, d
InstructionInfo instructionInfoLDH__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// LD L, (IX+d)  -  DD, AE, d
InstructionInfo instructionInfoLDL__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// LD L, (IY+d)  -  FD, AE, d
InstructionInfo instructionInfoLDL__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_LDr__ex_d__ex3_OD },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// LD (HL), A  -  77
InstructionInfo instructionInfoLD_HL__A_1 =
{
    2,
    0,
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// LD (HL), B  -  70
InstructionInfo instructionInfoLD_HL__B_1 =
{
    2,
    0,
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// LD (HL), C  -  71
InstructionInfo instructionInfoLD_HL__C_1 =
{
    2,
    0,
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// LD (HL), D  -  72
InstructionInfo instructionInfoLD_HL__D_1 =
{
    2,
    0,
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// LD (HL), E  -  73
InstructionInfo instructionInfoLD_HL__E_1 =
{
    2,
    0,
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// LD (HL), H  -  74
InstructionInfo instructionInfoLD_HL__H_1 =
{
    2,
    0,
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// LD (HL), L  -  75
InstructionInfo instructionInfoLD_HL__L_1 =
{
    2,
    0,
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// LD (IX+d), A  -  DD, 77, d
InstructionInfo instructionInfoLD_IX_d__A_DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// LD (IY+d), A  -  FD, 77, d
InstructionInfo instructionInfoLD_IY_d__A_FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// LD (IX+d), B  -  DD, 70, d
InstructionInfo instructionInfoLD_IX_d__B_DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// LD (IY+d), B  -  FD, 70, d
InstructionInfo instructionInfoLD_IY_d__B_FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// LD (IX+d), C  -  DD, 71, d
InstructionInfo instructionInfoLD_IX_d__C_DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// LD (IY+d), C  -  FD, 71, d
InstructionInfo instructionInfoLD_IY_d__C_FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// LD (IX+d), D  -  DD, 72, d
InstructionInfo instructionInfoLD_IX_d__D_DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// LD (IY+d), D  -  FD, 72, d
InstructionInfo instructionInfoLD_IY_d__D_FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// LD (IX+d), E  -  DD, 73, d
InstructionInfo instructionInfoLD_IX_d__E_DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// LD (IY+d), E  -  FD, 73, d
InstructionInfo instructionInfoLD_IY_d__E_FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// LD (IX+d), H  -  DD, 74, d
InstructionInfo instructionInfoLD_IX_d__H_DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// LD (IY+d), H  -  FD, 74, d
InstructionInfo instructionInfoLD_IY_d__H_FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// LD (IX+d), L  -  DD, 75, d
InstructionInfo instructionInfoLD_IX_d__L_DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// LD (IY+d), L  -  FD, 75, d
InstructionInfo instructionInfoLD_IY_d__L_FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_LD_ex_d__r_ex3_OD },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// LD (HL), n  -  36, n
InstructionInfo instructionInfoLD_HL__n_2 =
{
    3,
    0,
    {
        { 4, OnClock_LD_HL__n_2_OF },
        { 3, OnClock_LD_HL__n_2_OD },
        { 3, OnClock_LD_HL__n_2_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD (IX+d), n  -  DD, 36, d, n
InstructionInfo instructionInfoLD_IX_d__n_DD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__n_ex4_OF },
        { 3, OnClock_LD_ex_d__n_ex4_OD },
        { 5, OnClock_LD_ex_d__n_ex4_FD },
        { 3, OnClock_LD_ex_d__n_ex4_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD (IY+d), n  -  FD, 36, d, n
InstructionInfo instructionInfoLD_IY_d__n_FD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__n_ex4_OF },
        { 3, OnClock_LD_ex_d__n_ex4_OD },
        { 5, OnClock_LD_ex_d__n_ex4_FD },
        { 3, OnClock_LD_ex_d__n_ex4_MW },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD A, (BC)  -  0A
InstructionInfo instructionInfoLDA__BC__1 =
{
    2,
    0,
    {
        { 4, OnClock_LDA__BC__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD A, (DE)  -  1A
InstructionInfo instructionInfoLDA__DE__1 =
{
    2,
    0,
    {
        { 4, OnClock_LDA__DE__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD A, (nn)  -  3A, n, n
InstructionInfo instructionInfoLDA__nn__3 =
{
    4,
    0,
    {
        { 4, OnClock_LDA__nn__3_OF },
        { 3, OnClock_LDA__nn__3_ODl },
        { 3, OnClock_LDA__nn__3_ODh },
        { 3, OnClock_LDA__nn__3_MR },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD (BC), A  -  02
InstructionInfo instructionInfoLD_BC__A_1 =
{
    2,
    0,
    {
        { 4, OnClock_LD_BC__A_1_OF },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD (DE), A  -  12
InstructionInfo instructionInfoLD_DE__A_1 =
{
    2,
    0,
    {
        { 4, OnClock_LD_DE__A_1_OF },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD (nn), A  -  32, n, n
InstructionInfo instructionInfoLD_nn__A_3 =
{
    4,
    0,
    {
        { 4, OnClock_LD_nn__A_3_OF },
        { 3, OnClock_LD_nn__A_3_ODl },
        { 3, OnClock_LD_nn__A_3_ODh },
        { 3, OnClock_LD_nn__A_3_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD A, I  -  ED, 57
InstructionInfo instructionInfoLDA_I_ED2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 5, OnClock_LDA_I_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD A, R  -  ED, 5F
InstructionInfo instructionInfoLDA_R_ED2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 5, OnClock_LDA_R_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD I, A  -  ED, 47
InstructionInfo instructionInfoLDI_A_ED2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 5, OnClock_LDI_A_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD R, A  -  ED, 4F
InstructionInfo instructionInfoLDR_A_ED2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 5, OnClock_LDR_A_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD BC, nn  -  01, n, n
InstructionInfo instructionInfoLDBC_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_LDp_nn_3_OF },
        { 3, OnClock_LDp_nn_3_ODl },
        { 3, OnClock_LDp_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 0 },
        { VariableType::None },
    }
};

// LD DE, nn  -  11, n, n
InstructionInfo instructionInfoLDDE_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_LDp_nn_3_OF },
        { 3, OnClock_LDp_nn_3_ODl },
        { 3, OnClock_LDp_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 1 },
        { VariableType::None },
    }
};

// LD HL, nn  -  21, n, n
InstructionInfo instructionInfoLDHL_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_LDp_nn_3_OF },
        { 3, OnClock_LDp_nn_3_ODl },
        { 3, OnClock_LDp_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 2 },
        { VariableType::None },
    }
};

// LD SP, nn  -  31, n, n
InstructionInfo instructionInfoLDSP_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_LDp_nn_3_OF },
        { 3, OnClock_LDp_nn_3_ODl },
        { 3, OnClock_LDp_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 3 },
        { VariableType::None },
    }
};

// LD IX, nn  -  DD, 21, n, n
InstructionInfo instructionInfoLDIX_nn_DD4 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDex_nn_ex4_OF },
        { 3, OnClock_LDex_nn_ex4_ODl },
        { 3, OnClock_LDex_nn_ex4_ODh },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD IY, nn  -  FD, 21, n, n
InstructionInfo instructionInfoLDIY_nn_FD4 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDex_nn_ex4_OF },
        { 3, OnClock_LDex_nn_ex4_ODl },
        { 3, OnClock_LDex_nn_ex4_ODh },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD HL, (nn)  -  2A, n, n
InstructionInfo instructionInfoLDHL__nn__3 =
{
    5,
    0,
    {
        { 4, OnClock_LDHL__nn__3_OF },
        { 3, OnClock_LDHL__nn__3_ODl },
        { 3, OnClock_LDHL__nn__3_ODh },
        { 3, OnClock_LDHL__nn__3_MRl },
        { 3, OnClock_LDHL__nn__3_MRh },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD BC, (nn)  -  ED, 4B, n, n
InstructionInfo instructionInfoLDBC__nn__ED4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDp__nn__ED4_OF },
        { 3, OnClock_LDp__nn__ED4_ODl },
        { 3, OnClock_LDp__nn__ED4_ODh },
        { 3, OnClock_LDp__nn__ED4_MWl },
        { 3, OnClock_LDp__nn__ED4_MRh },
    },
    {
        { VariableType::RegistersSP16, 0 },
        { VariableType::None },
    }
};

// LD DE, (nn)  -  ED, 5B, n, n
InstructionInfo instructionInfoLDDE__nn__ED4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDp__nn__ED4_OF },
        { 3, OnClock_LDp__nn__ED4_ODl },
        { 3, OnClock_LDp__nn__ED4_ODh },
        { 3, OnClock_LDp__nn__ED4_MWl },
        { 3, OnClock_LDp__nn__ED4_MRh },
    },
    {
        { VariableType::RegistersSP16, 1 },
        { VariableType::None },
    }
};

// LD HL, (nn)  -  ED, 6B, n, n
InstructionInfo instructionInfoLDHL__nn__ED4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDp__nn__ED4_OF },
        { 3, OnClock_LDp__nn__ED4_ODl },
        { 3, OnClock_LDp__nn__ED4_ODh },
        { 3, OnClock_LDp__nn__ED4_MWl },
        { 3, OnClock_LDp__nn__ED4_MRh },
    },
    {
        { VariableType::RegistersSP16, 2 },
        { VariableType::None },
    }
};

// LD SP, (nn)  -  ED, 7B, n, n
InstructionInfo instructionInfoLDSP__nn__ED4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDp__nn__ED4_OF },
        { 3, OnClock_LDp__nn__ED4_ODl },
        { 3, OnClock_LDp__nn__ED4_ODh },
        { 3, OnClock_LDp__nn__ED4_MWl },
        { 3, OnClock_LDp__nn__ED4_MRh },
    },
    {
        { VariableType::RegistersSP16, 3 },
        { VariableType::None },
    }
};

// LD IX, (nn)  -  DD, 2A, n, n
InstructionInfo instructionInfoLDIX__nn__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDex__nn__ex4_OF },
        { 3, OnClock_LDex__nn__ex4_ODl },
        { 3, OnClock_LDex__nn__ex4_ODh },
        { 3, OnClock_LDex__nn__ex4_MRl },
        { 3, OnClock_LDex__nn__ex4_MRh },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD IY, (nn)  -  FD, 2A, n, n
InstructionInfo instructionInfoLDIY__nn__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDex__nn__ex4_OF },
        { 3, OnClock_LDex__nn__ex4_ODl },
        { 3, OnClock_LDex__nn__ex4_ODh },
        { 3, OnClock_LDex__nn__ex4_MRl },
        { 3, OnClock_LDex__nn__ex4_MRh },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD (nn), HL  -  22, n, n
InstructionInfo instructionInfoLD_nn__HL_3 =
{
    5,
    0,
    {
        { 4, OnClock_LD_nn__HL_3_OF },
        { 3, OnClock_LD_nn__HL_3_ODl },
        { 3, OnClock_LD_nn__HL_3_ODh },
        { 3, OnClock_LD_nn__HL_3_MWl },
        { 3, OnClock_LD_nn__HL_3_MWh },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD (nn), BC  -  ED, 43, n, n
InstructionInfo instructionInfoLD_nn__BC_ED4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__p_ED4_OF },
        { 3, OnClock_LD_nn__p_ED4_ODl },
        { 3, OnClock_LD_nn__p_ED4_ODh },
        { 3, OnClock_LD_nn__p_ED4_MWl },
        { 3, OnClock_LD_nn__p_ED4_MWh },
    },
    {
        { VariableType::RegistersSP16, 0 },
        { VariableType::None },
    }
};

// LD (nn), DE  -  ED, 53, n, n
InstructionInfo instructionInfoLD_nn__DE_ED4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__p_ED4_OF },
        { 3, OnClock_LD_nn__p_ED4_ODl },
        { 3, OnClock_LD_nn__p_ED4_ODh },
        { 3, OnClock_LD_nn__p_ED4_MWl },
        { 3, OnClock_LD_nn__p_ED4_MWh },
    },
    {
        { VariableType::RegistersSP16, 1 },
        { VariableType::None },
    }
};

// LD (nn), HL  -  ED, 63, n, n
InstructionInfo instructionInfoLD_nn__HL_ED4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__p_ED4_OF },
        { 3, OnClock_LD_nn__p_ED4_ODl },
        { 3, OnClock_LD_nn__p_ED4_ODh },
        { 3, OnClock_LD_nn__p_ED4_MWl },
        { 3, OnClock_LD_nn__p_ED4_MWh },
    },
    {
        { VariableType::RegistersSP16, 2 },
        { VariableType::None },
    }
};

// LD (nn), SP  -  ED, 73, n, n
InstructionInfo instructionInfoLD_nn__SP_ED4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__p_ED4_OF },
        { 3, OnClock_LD_nn__p_ED4_ODl },
        { 3, OnClock_LD_nn__p_ED4_ODh },
        { 3, OnClock_LD_nn__p_ED4_MWl },
        { 3, OnClock_LD_nn__p_ED4_MWh },
    },
    {
        { VariableType::RegistersSP16, 3 },
        { VariableType::None },
    }
};

// LD (nn), IX  -  DD, 22, n, n
InstructionInfo instructionInfoLD_nn__IX_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__ex_ex4_OF },
        { 3, OnClock_LD_nn__ex_ex4_ODl },
        { 3, OnClock_LD_nn__ex_ex4_ODh },
        { 3, OnClock_LD_nn__ex_ex4_MWl },
        { 3, OnClock_LD_nn__ex_ex4_MWh },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD (nn), IY  -  FD, 22, n, n
InstructionInfo instructionInfoLD_nn__IY_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__ex_ex4_OF },
        { 3, OnClock_LD_nn__ex_ex4_ODl },
        { 3, OnClock_LD_nn__ex_ex4_ODh },
        { 3, OnClock_LD_nn__ex_ex4_MWl },
        { 3, OnClock_LD_nn__ex_ex4_MWh },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD SP, HL  -  F9
InstructionInfo instructionInfoLDSP_HL_1 =
{
    1,
    0,
    {
        { 6, OnClock_LDSP_HL_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD SP, IX  -  DD, F9
InstructionInfo instructionInfoLDSP_IX_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 6, OnClock_LDSP_ex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LD SP, IY  -  FD, F9
InstructionInfo instructionInfoLDSP_IY_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 6, OnClock_LDSP_ex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// PUSH BC  -  C5
InstructionInfo instructionInfoPUSHBC_1 =
{
    3,
    0,
    {
        { 5, OnClock_PUSHq_1_OF },
        { 3, OnClock_PUSHq_1_SWh },
        { 3, OnClock_PUSHq_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers16, 0 },
        { VariableType::None },
    }
};

// PUSH DE  -  D5
InstructionInfo instructionInfoPUSHDE_1 =
{
    3,
    0,
    {
        { 5, OnClock_PUSHq_1_OF },
        { 3, OnClock_PUSHq_1_SWh },
        { 3, OnClock_PUSHq_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers16, 1 },
        { VariableType::None },
    }
};

// PUSH HL  -  E5
InstructionInfo instructionInfoPUSHHL_1 =
{
    3,
    0,
    {
        { 5, OnClock_PUSHq_1_OF },
        { 3, OnClock_PUSHq_1_SWh },
        { 3, OnClock_PUSHq_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers16, 2 },
        { VariableType::None },
    }
};

// PUSH AF  -  F5
InstructionInfo instructionInfoPUSHAF_1 =
{
    3,
    0,
    {
        { 5, OnClock_PUSHq_1_OF },
        { 3, OnClock_PUSHq_1_SWh },
        { 3, OnClock_PUSHq_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers16, 3 },
        { VariableType::None },
    }
};

// PUSH IX  -  DD, E5
InstructionInfo instructionInfoPUSHIX_DD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 5, OnClock_PUSHex_ex2_OF },
        { 3, OnClock_PUSHex_ex2_SWh },
        { 3, OnClock_PUSHex_ex2_SWl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// PUSH IY  -  FD, E5
InstructionInfo instructionInfoPUSHIY_FD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 5, OnClock_PUSHex_ex2_OF },
        { 3, OnClock_PUSHex_ex2_SWh },
        { 3, OnClock_PUSHex_ex2_SWl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// POP BC  -  C1
InstructionInfo instructionInfoPOPBC_1 =
{
    3,
    0,
    {
        { 4, OnClock_POPq_1_OF },
        { 3, OnClock_POPq_1_SRh },
        { 3, OnClock_POPq_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers16, 0 },
        { VariableType::None },
    }
};

// POP DE  -  D1
InstructionInfo instructionInfoPOPDE_1 =
{
    3,
    0,
    {
        { 4, OnClock_POPq_1_OF },
        { 3, OnClock_POPq_1_SRh },
        { 3, OnClock_POPq_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers16, 1 },
        { VariableType::None },
    }
};

// POP HL  -  E1
InstructionInfo instructionInfoPOPHL_1 =
{
    3,
    0,
    {
        { 4, OnClock_POPq_1_OF },
        { 3, OnClock_POPq_1_SRh },
        { 3, OnClock_POPq_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers16, 2 },
        { VariableType::None },
    }
};

// POP AF  -  F1
InstructionInfo instructionInfoPOPAF_1 =
{
    3,
    0,
    {
        { 4, OnClock_POPq_1_OF },
        { 3, OnClock_POPq_1_SRh },
        { 3, OnClock_POPq_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers16, 3 },
        { VariableType::None },
    }
};

// POP IX  -  DD, E1
InstructionInfo instructionInfoPOPIX_DD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_POPex_ex2_OF },
        { 3, OnClock_POPex_ex2_SRh },
        { 3, OnClock_POPex_ex2_SRl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// POP IY  -  FD, E1
InstructionInfo instructionInfoPOPIY_FD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_POPex_ex2_OF },
        { 3, OnClock_POPex_ex2_SRh },
        { 3, OnClock_POPex_ex2_SRl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// EX DE, HL  -  EB
InstructionInfo instructionInfoEXDE_HL_1 =
{
    1,
    0,
    {
        { 4, OnClock_EXDE_HL_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// EX AF, AF'  -  08
InstructionInfo instructionInfoEXAF_AF2_1 =
{
    1,
    0,
    {
        { 4, OnClock_EXAF_AF2_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// EXX  -  D9
InstructionInfo instructionInfoEXX_1 =
{
    1,
    0,
    {
        { 4, OnClock_EXX_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// EX (SP), HL  -  E3
InstructionInfo instructionInfoEX_SP__HL_1 =
{
    5,
    0,
    {
        { 4, OnClock_EX_SP__HL_1_OF },
        { 3, OnClock_SRh },
        { 4, OnClock_EX_SP__HL_1_SRl },
        { 3, OnClock_SWh },
        { 5, OnClock_EX_SP__HL_1_SWl },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// EX (SP), IX  -  DD, E3
InstructionInfo instructionInfoEX_SP__IX_DD2 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_EX_SP__ex_ex2_OF },
        { 3, OnClock_EX_SP__ex_ex2_SRh },
        { 4, OnClock_EX_SP__ex_ex2_SRl },
        { 3, OnClock_EX_SP__ex_ex2_SWh },
        { 5, OnClock_EX_SP__ex_ex2_SWl },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// EX (SP), IY  -  FD, E3
InstructionInfo instructionInfoEX_SP__IY_FD2 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_EX_SP__ex_ex2_OF },
        { 3, OnClock_EX_SP__ex_ex2_SRh },
        { 4, OnClock_EX_SP__ex_ex2_SRl },
        { 3, OnClock_EX_SP__ex_ex2_SWh },
        { 5, OnClock_EX_SP__ex_ex2_SWl },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LDI  -  ED, A0
InstructionInfo instructionInfoLDI_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDI_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_LDI_ED2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LDIR  -  ED, B0
InstructionInfo instructionInfoLDIR_ED2 =
{
    5,
    4,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDIR_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_LDIR_ED2_MW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LDD  -  ED, A8
InstructionInfo instructionInfoLDD_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDD_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_LDD_ED2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// LDDR  -  ED, B8
InstructionInfo instructionInfoLDDR_ED2 =
{
    5,
    4,
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDDR_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_LDDR_ED2_MW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CPI  -  ED, A1
InstructionInfo instructionInfoCPI_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPI_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_CPI_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CPIR  -  ED, B1
InstructionInfo instructionInfoCPIR_ED2 =
{
    5,
    4,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPIR_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_CPIR_ED2_OP },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CPD  -  ED, A9
InstructionInfo instructionInfoCPD_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPD_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_CPD_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CPDR  -  ED, B9
InstructionInfo instructionInfoCPDR_ED2 =
{
    5,
    4,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPDR_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_CPDR_ED2_OP },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// ADD A, A  -  87
InstructionInfo instructionInfoADDA_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// ADD A, B  -  80
InstructionInfo instructionInfoADDA_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// ADD A, C  -  81
InstructionInfo instructionInfoADDA_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// ADD A, D  -  82
InstructionInfo instructionInfoADDA_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// ADD A, E  -  83
InstructionInfo instructionInfoADDA_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// ADD A, H  -  84
InstructionInfo instructionInfoADDA_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// ADD A, L  -  85
InstructionInfo instructionInfoADDA_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// ADD A, A  -  DD, 87
InstructionInfo instructionInfoADDA_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// ADD A, B  -  DD, 80
InstructionInfo instructionInfoADDA_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// ADD A, C  -  DD, 81
InstructionInfo instructionInfoADDA_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// ADD A, D  -  DD, 82
InstructionInfo instructionInfoADDA_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// ADD A, E  -  DD, 83
InstructionInfo instructionInfoADDA_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// ADD A, IXh  -  DD, 84
InstructionInfo instructionInfoADDA_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// ADD A, IXl  -  DD, 85
InstructionInfo instructionInfoADDA_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// ADD A, A  -  FD, 87
InstructionInfo instructionInfoADDA_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// ADD A, B  -  FD, 80
InstructionInfo instructionInfoADDA_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// ADD A, C  -  FD, 81
InstructionInfo instructionInfoADDA_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// ADD A, D  -  FD, 82
InstructionInfo instructionInfoADDA_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// ADD A, E  -  FD, 83
InstructionInfo instructionInfoADDA_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// ADD A, IYh  -  FD, 84
InstructionInfo instructionInfoADDA_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// ADD A, IYl  -  FD, 85
InstructionInfo instructionInfoADDA_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// ADD A, n  -  C6, n
InstructionInfo instructionInfoADDA_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_ADDA_n_2_OF },
        { 3, OnClock_ADDA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// ADD A, (HL)  -  86
InstructionInfo instructionInfoADDA__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_ADDA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// ADD A, (IX+d)  -  DD, 86, d
InstructionInfo instructionInfoADDA__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA__ex_d__ex3_OF },
        { 3, OnClock_ADDA__ex_d__ex3_OD },
        { 5, OnClock_ADDA__ex_d__ex3_AD },
        { 3, OnClock_ADDA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// ADD A, (IY+d)  -  FD, 86, d
InstructionInfo instructionInfoADDA__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA__ex_d__ex3_OF },
        { 3, OnClock_ADDA__ex_d__ex3_OD },
        { 5, OnClock_ADDA__ex_d__ex3_AD },
        { 3, OnClock_ADDA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// ADC A, A  -  8F
InstructionInfo instructionInfoADCA_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// ADC A, B  -  88
InstructionInfo instructionInfoADCA_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// ADC A, C  -  89
InstructionInfo instructionInfoADCA_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// ADC A, D  -  8A
InstructionInfo instructionInfoADCA_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// ADC A, E  -  8B
InstructionInfo instructionInfoADCA_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// ADC A, H  -  8C
InstructionInfo instructionInfoADCA_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// ADC A, L  -  8D
InstructionInfo instructionInfoADCA_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// ADC A, A  -  DD, 8F
InstructionInfo instructionInfoADCA_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// ADC A, B  -  DD, 88
InstructionInfo instructionInfoADCA_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// ADC A, C  -  DD, 89
InstructionInfo instructionInfoADCA_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// ADC A, D  -  DD, 8A
InstructionInfo instructionInfoADCA_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// ADC A, E  -  DD, 8B
InstructionInfo instructionInfoADCA_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// ADC A, IXh  -  DD, 8C
InstructionInfo instructionInfoADCA_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// ADC A, IXl  -  DD, 8D
InstructionInfo instructionInfoADCA_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// ADC A, A  -  FD, 8F
InstructionInfo instructionInfoADCA_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// ADC A, B  -  FD, 88
InstructionInfo instructionInfoADCA_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// ADC A, C  -  FD, 89
InstructionInfo instructionInfoADCA_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// ADC A, D  -  FD, 8A
InstructionInfo instructionInfoADCA_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// ADC A, E  -  FD, 8B
InstructionInfo instructionInfoADCA_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// ADC A, IYh  -  FD, 8C
InstructionInfo instructionInfoADCA_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// ADC A, IYl  -  FD, 8D
InstructionInfo instructionInfoADCA_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// ADC A, n  -  CE, n
InstructionInfo instructionInfoADCA_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_ADCA_n_2_OF },
        { 3, OnClock_ADCA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// ADC A, (HL)  -  8E
InstructionInfo instructionInfoADCA__HL__1 =
{
    1,
    0,
    {
        { 4, OnClock_ADCA__HL__1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// ADC A, (IX+d)  -  DD, 8E, d
InstructionInfo instructionInfoADCA__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA__ex_d__ex3_OF },
        { 3, OnClock_ADCA__ex_d__ex3_OD },
        { 5, OnClock_ADCA__ex_d__ex3_AD },
        { 3, OnClock_ADCA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// ADC A, (IY+d)  -  FD, 8E, d
InstructionInfo instructionInfoADCA__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA__ex_d__ex3_OF },
        { 3, OnClock_ADCA__ex_d__ex3_OD },
        { 5, OnClock_ADCA__ex_d__ex3_AD },
        { 3, OnClock_ADCA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SUB A, A  -  97
InstructionInfo instructionInfoSUBA_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// SUB A, B  -  90
InstructionInfo instructionInfoSUBA_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// SUB A, C  -  91
InstructionInfo instructionInfoSUBA_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// SUB A, D  -  92
InstructionInfo instructionInfoSUBA_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// SUB A, E  -  93
InstructionInfo instructionInfoSUBA_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// SUB A, H  -  94
InstructionInfo instructionInfoSUBA_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// SUB A, L  -  95
InstructionInfo instructionInfoSUBA_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// SUB A, A  -  DD, 97
InstructionInfo instructionInfoSUBA_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// SUB A, B  -  DD, 90
InstructionInfo instructionInfoSUBA_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// SUB A, C  -  DD, 91
InstructionInfo instructionInfoSUBA_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// SUB A, D  -  DD, 92
InstructionInfo instructionInfoSUBA_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// SUB A, E  -  DD, 93
InstructionInfo instructionInfoSUBA_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// SUB A, IXh  -  DD, 94
InstructionInfo instructionInfoSUBA_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// SUB A, IXl  -  DD, 95
InstructionInfo instructionInfoSUBA_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// SUB A, A  -  FD, 97
InstructionInfo instructionInfoSUBA_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// SUB A, B  -  FD, 90
InstructionInfo instructionInfoSUBA_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// SUB A, C  -  FD, 91
InstructionInfo instructionInfoSUBA_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// SUB A, D  -  FD, 92
InstructionInfo instructionInfoSUBA_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// SUB A, E  -  FD, 93
InstructionInfo instructionInfoSUBA_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// SUB A, IYh  -  FD, 94
InstructionInfo instructionInfoSUBA_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// SUB A, IYl  -  FD, 95
InstructionInfo instructionInfoSUBA_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// SUB A, n  -  8E, n
InstructionInfo instructionInfoSUBA_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_SUBA_n_2_OF },
        { 3, OnClock_SUBA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SUB A, (HL)  -  96
InstructionInfo instructionInfoSUBA__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_SUBA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SUB A, (IX+d)  -  DD, 96, d
InstructionInfo instructionInfoSUBA__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA__ex_d__ex3_OF },
        { 3, OnClock_SUBA__ex_d__ex3_OD },
        { 5, OnClock_SUBA__ex_d__ex3_AD },
        { 3, OnClock_SUBA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SUB A, (IY+d)  -  FD, 96, d
InstructionInfo instructionInfoSUBA__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA__ex_d__ex3_OF },
        { 3, OnClock_SUBA__ex_d__ex3_OD },
        { 5, OnClock_SUBA__ex_d__ex3_AD },
        { 3, OnClock_SUBA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SBC A, A  -  9F
InstructionInfo instructionInfoSBCA_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// SBC A, B  -  98
InstructionInfo instructionInfoSBCA_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// SBC A, C  -  99
InstructionInfo instructionInfoSBCA_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// SBC A, D  -  9A
InstructionInfo instructionInfoSBCA_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// SBC A, E  -  9B
InstructionInfo instructionInfoSBCA_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// SBC A, H  -  9C
InstructionInfo instructionInfoSBCA_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// SBC A, L  -  9D
InstructionInfo instructionInfoSBCA_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// SBC A, A  -  DD, 9F
InstructionInfo instructionInfoSBCA_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// SBC A, B  -  DD, 98
InstructionInfo instructionInfoSBCA_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// SBC A, C  -  DD, 99
InstructionInfo instructionInfoSBCA_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// SBC A, D  -  DD, 9A
InstructionInfo instructionInfoSBCA_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// SBC A, E  -  DD, 9B
InstructionInfo instructionInfoSBCA_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// SBC A, IXh  -  DD, 9C
InstructionInfo instructionInfoSBCA_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// SBC A, IXl  -  DD, 9D
InstructionInfo instructionInfoSBCA_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// SBC A, A  -  FD, 9F
InstructionInfo instructionInfoSBCA_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// SBC A, B  -  FD, 98
InstructionInfo instructionInfoSBCA_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// SBC A, C  -  FD, 99
InstructionInfo instructionInfoSBCA_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// SBC A, D  -  FD, 9A
InstructionInfo instructionInfoSBCA_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// SBC A, E  -  FD, 9B
InstructionInfo instructionInfoSBCA_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// SBC A, IYh  -  FD, 9C
InstructionInfo instructionInfoSBCA_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// SBC A, IYl  -  FD, 9D
InstructionInfo instructionInfoSBCA_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// SBC A, n  -  DE, n
InstructionInfo instructionInfoSBCA_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_SBCA_n_2_OF },
        { 3, OnClock_SBCA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SBC A, (HL)  -  9E
InstructionInfo instructionInfoSBCA__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_SBCA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SBC A, (IX+d)  -  DD, 9E, d
InstructionInfo instructionInfoSBCA__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA__ex_d__ex3_OF },
        { 3, OnClock_SBCA__ex_d__ex3_OD },
        { 5, OnClock_SBCA__ex_d__ex3_AD },
        { 3, OnClock_SBCA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SBC A, (IY+d)  -  FD, 9E, d
InstructionInfo instructionInfoSBCA__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA__ex_d__ex3_OF },
        { 3, OnClock_SBCA__ex_d__ex3_OD },
        { 5, OnClock_SBCA__ex_d__ex3_AD },
        { 3, OnClock_SBCA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// AND A, A  -  A7
InstructionInfo instructionInfoANDA_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// AND A, B  -  A0
InstructionInfo instructionInfoANDA_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// AND A, C  -  A1
InstructionInfo instructionInfoANDA_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// AND A, D  -  A2
InstructionInfo instructionInfoANDA_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// AND A, E  -  A3
InstructionInfo instructionInfoANDA_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// AND A, H  -  A4
InstructionInfo instructionInfoANDA_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// AND A, L  -  A5
InstructionInfo instructionInfoANDA_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// AND A, A  -  DD, A7
InstructionInfo instructionInfoANDA_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// AND A, B  -  DD, A0
InstructionInfo instructionInfoANDA_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// AND A, C  -  DD, A1
InstructionInfo instructionInfoANDA_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// AND A, D  -  DD, A2
InstructionInfo instructionInfoANDA_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// AND A, E  -  DD, A3
InstructionInfo instructionInfoANDA_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// AND A, IXh  -  DD, A4
InstructionInfo instructionInfoANDA_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// AND A, IXl  -  DD, A5
InstructionInfo instructionInfoANDA_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// AND A, A  -  FD, A7
InstructionInfo instructionInfoANDA_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// AND A, B  -  FD, A0
InstructionInfo instructionInfoANDA_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// AND A, C  -  FD, A1
InstructionInfo instructionInfoANDA_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// AND A, D  -  FD, A2
InstructionInfo instructionInfoANDA_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// AND A, E  -  FD, A3
InstructionInfo instructionInfoANDA_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// AND A, IYh  -  FD, A4
InstructionInfo instructionInfoANDA_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// AND A, IYl  -  FD, A5
InstructionInfo instructionInfoANDA_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// AND A, n  -  E6, n
InstructionInfo instructionInfoANDA_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_ANDA_n_2_OF },
        { 3, OnClock_ANDA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// AND A, (HL)  -  A6
InstructionInfo instructionInfoANDA__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_ANDA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// AND A, (IX+d)  -  DD, A6, d
InstructionInfo instructionInfoANDA__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA__ex_d__ex3_OF },
        { 3, OnClock_ANDA__ex_d__ex3_OD },
        { 5, OnClock_ANDA__ex_d__ex3_AD },
        { 3, OnClock_ANDA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// AND A, (IY+d)  -  FD, A6, d
InstructionInfo instructionInfoANDA__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA__ex_d__ex3_OF },
        { 3, OnClock_ANDA__ex_d__ex3_OD },
        { 5, OnClock_ANDA__ex_d__ex3_AD },
        { 3, OnClock_ANDA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// OR A, A  -  B7
InstructionInfo instructionInfoORA_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// OR A, B  -  B0
InstructionInfo instructionInfoORA_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// OR A, C  -  B1
InstructionInfo instructionInfoORA_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// OR A, D  -  B2
InstructionInfo instructionInfoORA_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// OR A, E  -  B3
InstructionInfo instructionInfoORA_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// OR A, H  -  B4
InstructionInfo instructionInfoORA_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// OR A, L  -  B5
InstructionInfo instructionInfoORA_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// OR A, A  -  DD, B7
InstructionInfo instructionInfoORA_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// OR A, B  -  DD, B0
InstructionInfo instructionInfoORA_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// OR A, C  -  DD, B1
InstructionInfo instructionInfoORA_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// OR A, D  -  DD, B2
InstructionInfo instructionInfoORA_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// OR A, E  -  DD, B3
InstructionInfo instructionInfoORA_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// OR A, IXh  -  DD, B4
InstructionInfo instructionInfoORA_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// OR A, IXl  -  DD, B5
InstructionInfo instructionInfoORA_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// OR A, A  -  FD, B7
InstructionInfo instructionInfoORA_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// OR A, B  -  FD, B0
InstructionInfo instructionInfoORA_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// OR A, C  -  FD, B1
InstructionInfo instructionInfoORA_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// OR A, D  -  FD, B2
InstructionInfo instructionInfoORA_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// OR A, E  -  FD, B3
InstructionInfo instructionInfoORA_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// OR A, IYh  -  FD, B4
InstructionInfo instructionInfoORA_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// OR A, IYl  -  FD, B5
InstructionInfo instructionInfoORA_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// OR A, n  -  F6, n
InstructionInfo instructionInfoORA_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_ORA_n_2_OF },
        { 3, OnClock_ORA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// OR A, (HL)  -  B6
InstructionInfo instructionInfoORA__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_ORA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// OR A, (IX+d)  -  DD, B6, d
InstructionInfo instructionInfoORA__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA__ex_d__ex3_OF },
        { 3, OnClock_ORA__ex_d__ex3_OD },
        { 5, OnClock_ORA__ex_d__ex3_AD },
        { 3, OnClock_ORA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// OR A, (IY+d)  -  FD, B6, d
InstructionInfo instructionInfoORA__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA__ex_d__ex3_OF },
        { 3, OnClock_ORA__ex_d__ex3_OD },
        { 5, OnClock_ORA__ex_d__ex3_AD },
        { 3, OnClock_ORA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// XOR A, A  -  AF
InstructionInfo instructionInfoXORA_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// XOR A, B  -  A8
InstructionInfo instructionInfoXORA_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// XOR A, C  -  A9
InstructionInfo instructionInfoXORA_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// XOR A, D  -  AA
InstructionInfo instructionInfoXORA_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// XOR A, E  -  AB
InstructionInfo instructionInfoXORA_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// XOR A, H  -  AC
InstructionInfo instructionInfoXORA_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// XOR A, L  -  AD
InstructionInfo instructionInfoXORA_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// XOR A, A  -  DD, AF
InstructionInfo instructionInfoXORA_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// XOR A, B  -  DD, A8
InstructionInfo instructionInfoXORA_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// XOR A, C  -  DD, A9
InstructionInfo instructionInfoXORA_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// XOR A, D  -  DD, AA
InstructionInfo instructionInfoXORA_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// XOR A, E  -  DD, AB
InstructionInfo instructionInfoXORA_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// XOR A, IXh  -  DD, AC
InstructionInfo instructionInfoXORA_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// XOR A, IXl  -  DD, AD
InstructionInfo instructionInfoXORA_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// XOR A, A  -  FD, AF
InstructionInfo instructionInfoXORA_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// XOR A, B  -  FD, A8
InstructionInfo instructionInfoXORA_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// XOR A, C  -  FD, A9
InstructionInfo instructionInfoXORA_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// XOR A, D  -  FD, AA
InstructionInfo instructionInfoXORA_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// XOR A, E  -  FD, AB
InstructionInfo instructionInfoXORA_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// XOR A, IYh  -  FD, AC
InstructionInfo instructionInfoXORA_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// XOR A, IYl  -  FD, AD
InstructionInfo instructionInfoXORA_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// XOR A, n  -  EE, n
InstructionInfo instructionInfoXORA_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_XORA_n_2_OF },
        { 3, OnClock_XORA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// XOR A, (HL)  -  AE
InstructionInfo instructionInfoXORA__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_XORA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// XOR A, (IX+d)  -  DD, AE, d
InstructionInfo instructionInfoXORA__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA__ex_d__ex3_OF },
        { 3, OnClock_XORA__ex_d__ex3_OD },
        { 5, OnClock_XORA__ex_d__ex3_AD },
        { 3, OnClock_XORA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// XOR A, (IY+d)  -  FD, AE, d
InstructionInfo instructionInfoXORA__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA__ex_d__ex3_OF },
        { 3, OnClock_XORA__ex_d__ex3_OD },
        { 5, OnClock_XORA__ex_d__ex3_AD },
        { 3, OnClock_XORA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CP A, A  -  BF
InstructionInfo instructionInfoCPA_A_1 =
{
    1,
    0,
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// CP A, B  -  B8
InstructionInfo instructionInfoCPA_B_1 =
{
    1,
    0,
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// CP A, C  -  B9
InstructionInfo instructionInfoCPA_C_1 =
{
    1,
    0,
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// CP A, D  -  BA
InstructionInfo instructionInfoCPA_D_1 =
{
    1,
    0,
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// CP A, E  -  BB
InstructionInfo instructionInfoCPA_E_1 =
{
    1,
    0,
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// CP A, H  -  BC
InstructionInfo instructionInfoCPA_H_1 =
{
    1,
    0,
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// CP A, L  -  BD
InstructionInfo instructionInfoCPA_L_1 =
{
    1,
    0,
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// CP A, A  -  DD, BF
InstructionInfo instructionInfoCPA_A_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// CP A, B  -  DD, B8
InstructionInfo instructionInfoCPA_B_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// CP A, C  -  DD, B9
InstructionInfo instructionInfoCPA_C_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// CP A, D  -  DD, BA
InstructionInfo instructionInfoCPA_D_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// CP A, E  -  DD, BB
InstructionInfo instructionInfoCPA_E_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// CP A, IXh  -  DD, BC
InstructionInfo instructionInfoCPA_IXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// CP A, IXl  -  DD, BD
InstructionInfo instructionInfoCPA_IXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// CP A, A  -  FD, BF
InstructionInfo instructionInfoCPA_A_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// CP A, B  -  FD, B8
InstructionInfo instructionInfoCPA_B_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// CP A, C  -  FD, B9
InstructionInfo instructionInfoCPA_C_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// CP A, D  -  FD, BA
InstructionInfo instructionInfoCPA_D_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// CP A, E  -  FD, BB
InstructionInfo instructionInfoCPA_E_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// CP A, IYh  -  FD, BC
InstructionInfo instructionInfoCPA_IYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// CP A, IYl  -  FD, BD
InstructionInfo instructionInfoCPA_IYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// CP A, n  -  FE, n
InstructionInfo instructionInfoCPA_n_2 =
{
    2,
    0,
    {
        { 4, OnClock_CPA_n_2_OF },
        { 3, OnClock_CPA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CP A, (HL)  -  BE
InstructionInfo instructionInfoCPA__HL__1 =
{
    2,
    0,
    {
        { 4, OnClock_CPA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CP A, (IX+d)  -  DD, BE, d
InstructionInfo instructionInfoCPA__IX_d__DD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA__ex_d__ex3_OF },
        { 3, OnClock_CPA__ex_d__ex3_OD },
        { 5, OnClock_CPA__ex_d__ex3_AD },
        { 3, OnClock_CPA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CP A, (IY+d)  -  FD, BE, d
InstructionInfo instructionInfoCPA__IY_d__FD3 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA__ex_d__ex3_OF },
        { 3, OnClock_CPA__ex_d__ex3_OD },
        { 5, OnClock_CPA__ex_d__ex3_AD },
        { 3, OnClock_CPA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// INC A  -  3C
InstructionInfo instructionInfoINCA_1 =
{
    1,
    0,
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// INC B  -  04
InstructionInfo instructionInfoINCB_1 =
{
    1,
    0,
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// INC C  -  0C
InstructionInfo instructionInfoINCC_1 =
{
    1,
    0,
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// INC D  -  14
InstructionInfo instructionInfoINCD_1 =
{
    1,
    0,
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// INC E  -  1C
InstructionInfo instructionInfoINCE_1 =
{
    1,
    0,
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// INC H  -  24
InstructionInfo instructionInfoINCH_1 =
{
    1,
    0,
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// INC L  -  2C
InstructionInfo instructionInfoINCL_1 =
{
    1,
    0,
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// INC A  -  DD, 3C
InstructionInfo instructionInfoINCA_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// INC B  -  DD, 04
InstructionInfo instructionInfoINCB_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// INC C  -  DD, 0C
InstructionInfo instructionInfoINCC_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// INC D  -  DD, 14
InstructionInfo instructionInfoINCD_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// INC E  -  DD, 1C
InstructionInfo instructionInfoINCE_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// INC IXh  -  DD, 24
InstructionInfo instructionInfoINCIXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// INC IXl  -  DD, 2C
InstructionInfo instructionInfoINCIXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// INC A  -  FD, 3C
InstructionInfo instructionInfoINCA_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// INC B  -  FD, 04
InstructionInfo instructionInfoINCB_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// INC C  -  FD, 0C
InstructionInfo instructionInfoINCC_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// INC D  -  FD, 14
InstructionInfo instructionInfoINCD_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// INC E  -  FD, 1C
InstructionInfo instructionInfoINCE_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// INC IYh  -  FD, 24
InstructionInfo instructionInfoINCIYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// INC IYl  -  FD, 2C
InstructionInfo instructionInfoINCIYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// INC (HL)  -  34
InstructionInfo instructionInfoINC_HL__1 =
{
    3,
    0,
    {
        { 4, OnClock_INC_HL__1_OF },
        { 4, OnClock_INC_HL__1_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// INC (IX+d)  -  DD, 34, d
InstructionInfo instructionInfoINC_IX_d__DD3 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INC_ex_d__ex3_OF },
        { 3, OnClock_INC_ex_d__ex3_OD },
        { 5, OnClock_INC_ex_d__ex3_AD },
        { 4, OnClock_INC_ex_d__ex3_MR },
        { 3, OnClock_INC_ex_d__ex3_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// INC (IY+d)  -  FD, 34, d
InstructionInfo instructionInfoINC_IY_d__FD3 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INC_ex_d__ex3_OF },
        { 3, OnClock_INC_ex_d__ex3_OD },
        { 5, OnClock_INC_ex_d__ex3_AD },
        { 4, OnClock_INC_ex_d__ex3_MR },
        { 3, OnClock_INC_ex_d__ex3_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// DEC A  -  3D
InstructionInfo instructionInfoDECA_1 =
{
    1,
    0,
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// DEC B  -  05
InstructionInfo instructionInfoDECB_1 =
{
    1,
    0,
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// DEC C  -  0D
InstructionInfo instructionInfoDECC_1 =
{
    1,
    0,
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// DEC D  -  15
InstructionInfo instructionInfoDECD_1 =
{
    1,
    0,
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// DEC E  -  1D
InstructionInfo instructionInfoDECE_1 =
{
    1,
    0,
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// DEC H  -  25
InstructionInfo instructionInfoDECH_1 =
{
    1,
    0,
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// DEC L  -  2D
InstructionInfo instructionInfoDECL_1 =
{
    1,
    0,
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// DEC A  -  DD, 3D
InstructionInfo instructionInfoDECA_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// DEC B  -  DD, 05
InstructionInfo instructionInfoDECB_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// DEC C  -  DD, 0D
InstructionInfo instructionInfoDECC_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// DEC D  -  DD, 15
InstructionInfo instructionInfoDECD_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// DEC E  -  DD, 1D
InstructionInfo instructionInfoDECE_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// DEC IXh  -  DD, 25
InstructionInfo instructionInfoDECIXh_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// DEC IXl  -  DD, 2D
InstructionInfo instructionInfoDECIXl_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// DEC A  -  FD, 3D
InstructionInfo instructionInfoDECA_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// DEC B  -  FD, 05
InstructionInfo instructionInfoDECB_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// DEC C  -  FD, 0D
InstructionInfo instructionInfoDECC_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// DEC D  -  FD, 15
InstructionInfo instructionInfoDECD_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// DEC E  -  FD, 1D
InstructionInfo instructionInfoDECE_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// DEC IYh  -  FD, 25
InstructionInfo instructionInfoDECIYh_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// DEC IYl  -  FD, 2D
InstructionInfo instructionInfoDECIYl_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// DEC (HL)  -  35
InstructionInfo instructionInfoDEC_HL__1 =
{
    3,
    0,
    {
        { 4, OnClock_DEC_HL__1_OF },
        { 4, OnClock_DEC_HL__1_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// DEC (IX+d)  -  DD, 35, d
InstructionInfo instructionInfoDEC_IX_d__DD3 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DEC_ex_d__ex3_OF },
        { 3, OnClock_DEC_ex_d__ex3_OD },
        { 5, OnClock_DEC_ex_d__ex3_AD },
        { 4, OnClock_DEC_ex_d__ex3_MR },
        { 3, OnClock_DEC_ex_d__ex3_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// DEC (IY+d)  -  FD, 35, d
InstructionInfo instructionInfoDEC_IY_d__FD3 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_DEC_ex_d__ex3_OF },
        { 3, OnClock_DEC_ex_d__ex3_OD },
        { 5, OnClock_DEC_ex_d__ex3_AD },
        { 4, OnClock_DEC_ex_d__ex3_MR },
        { 3, OnClock_DEC_ex_d__ex3_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// DAA  -  27
InstructionInfo instructionInfoDAA_1 =
{
    1,
    0,
    {
        { 4, OnClock_DAA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CPL A  -  2F
InstructionInfo instructionInfoCPLA_1 =
{
    1,
    0,
    {
        { 4, OnClock_CPLA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// NEG  -  ED, 44
InstructionInfo instructionInfoNEG_ED2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_NEG_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CCF  -  3F
InstructionInfo instructionInfoCCF_1 =
{
    1,
    0,
    {
        { 4, OnClock_CCF_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SCF  -  37
InstructionInfo instructionInfoSCF_1 =
{
    1,
    0,
    {
        { 4, OnClock_SCF_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// NOP  -  00
InstructionInfo instructionInfoNOP_1 =
{
    1,
    0,
    {
        { 4, OnClock_NOP_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// HALT  -  76
InstructionInfo instructionInfoHALT_1 =
{
    1,
    0,
    {
        { 4, OnClock_HALT_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// DI  -  F3
InstructionInfo instructionInfoDI_1 =
{
    1,
    0,
    {
        { 4, OnClock_DI_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// EI  -  FB
InstructionInfo instructionInfoEI_1 =
{
    1,
    0,
    {
        { 4, OnClock_EI_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// IM0  -  ED, 46
InstructionInfo instructionInfoIM0_ED2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_IM0_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// IM1  -  ED, 56
InstructionInfo instructionInfoIM1_ED2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_IM1_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// IM1*  -  ED, 76
InstructionInfo instructionInfoIM1x_ED2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_IM1x_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// IM2  -  ED, 5E
InstructionInfo instructionInfoIM2_ED2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_IM2_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// IM2*  -  ED, 7E
InstructionInfo instructionInfoIM2x_ED2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_IM2x_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// ADD HL, BC  -  09
InstructionInfo instructionInfoADDHL_BC_1 =
{
    3,
    0,
    {
        { 4, OnClock_ADDHL_p_1_OF },
        { 4, OnClock_ADDHL_p_1_OP },
        { 3, OnClock_ADDHL_p_1_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 0 },
        { VariableType::None },
    }
};

// ADD HL, DE  -  19
InstructionInfo instructionInfoADDHL_DE_1 =
{
    3,
    0,
    {
        { 4, OnClock_ADDHL_p_1_OF },
        { 4, OnClock_ADDHL_p_1_OP },
        { 3, OnClock_ADDHL_p_1_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 1 },
        { VariableType::None },
    }
};

// ADD HL, HL  -  29
InstructionInfo instructionInfoADDHL_HL_1 =
{
    3,
    0,
    {
        { 4, OnClock_ADDHL_p_1_OF },
        { 4, OnClock_ADDHL_p_1_OP },
        { 3, OnClock_ADDHL_p_1_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 2 },
        { VariableType::None },
    }
};

// ADD HL, SP  -  39
InstructionInfo instructionInfoADDHL_SP_1 =
{
    3,
    0,
    {
        { 4, OnClock_ADDHL_p_1_OF },
        { 4, OnClock_ADDHL_p_1_OP },
        { 3, OnClock_ADDHL_p_1_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 3 },
        { VariableType::None },
    }
};

// ADD IX, BC  -  DD, 09
InstructionInfo instructionInfoADDIX_BC_DD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIX_m_DD2_OF },
        { 4, OnClock_ADDIX_m_DD2_OP },
        { 3, OnClock_ADDIX_m_DD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 0 },
        { VariableType::None },
    }
};

// ADD IX, DE  -  DD, 19
InstructionInfo instructionInfoADDIX_DE_DD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIX_m_DD2_OF },
        { 4, OnClock_ADDIX_m_DD2_OP },
        { 3, OnClock_ADDIX_m_DD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 1 },
        { VariableType::None },
    }
};

// ADD IX, IX  -  DD, 29
InstructionInfo instructionInfoADDIX_IX_DD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIX_m_DD2_OF },
        { 4, OnClock_ADDIX_m_DD2_OP },
        { 3, OnClock_ADDIX_m_DD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 2 },
        { VariableType::None },
    }
};

// ADD IX, SP  -  DD, 39
InstructionInfo instructionInfoADDIX_SP_DD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIX_m_DD2_OF },
        { 4, OnClock_ADDIX_m_DD2_OP },
        { 3, OnClock_ADDIX_m_DD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 3 },
        { VariableType::None },
    }
};

// ADD IY, BC  -  FD, 09
InstructionInfo instructionInfoADDIY_BC_FD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIY_o_FD2_OF },
        { 4, OnClock_ADDIY_o_FD2_OP },
        { 3, OnClock_ADDIY_o_FD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 0 },
        { VariableType::None },
    }
};

// ADD IY, DE  -  FD, 19
InstructionInfo instructionInfoADDIY_DE_FD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIY_o_FD2_OF },
        { 4, OnClock_ADDIY_o_FD2_OP },
        { 3, OnClock_ADDIY_o_FD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 1 },
        { VariableType::None },
    }
};

// ADD IY, IY  -  FD, 29
InstructionInfo instructionInfoADDIY_IY_FD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIY_o_FD2_OF },
        { 4, OnClock_ADDIY_o_FD2_OP },
        { 3, OnClock_ADDIY_o_FD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 2 },
        { VariableType::None },
    }
};

// ADD IY, SP  -  FD, 39
InstructionInfo instructionInfoADDIY_SP_FD2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIY_o_FD2_OF },
        { 4, OnClock_ADDIY_o_FD2_OP },
        { 3, OnClock_ADDIY_o_FD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 3 },
        { VariableType::None },
    }
};

// ADC HL, BC  -  ED, 4A
InstructionInfo instructionInfoADCHL_BC_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCHL_p_ED2_OF },
        { 4, OnClock_ADCHL_p_ED2_OP },
        { 3, OnClock_ADCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 0 },
        { VariableType::None },
    }
};

// ADC HL, DE  -  ED, 5A
InstructionInfo instructionInfoADCHL_DE_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCHL_p_ED2_OF },
        { 4, OnClock_ADCHL_p_ED2_OP },
        { 3, OnClock_ADCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 1 },
        { VariableType::None },
    }
};

// ADC HL, HL  -  ED, 6A
InstructionInfo instructionInfoADCHL_HL_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCHL_p_ED2_OF },
        { 4, OnClock_ADCHL_p_ED2_OP },
        { 3, OnClock_ADCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 2 },
        { VariableType::None },
    }
};

// ADC HL, SP  -  ED, 7A
InstructionInfo instructionInfoADCHL_SP_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCHL_p_ED2_OF },
        { 4, OnClock_ADCHL_p_ED2_OP },
        { 3, OnClock_ADCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 3 },
        { VariableType::None },
    }
};

// SBC HL, BC  -  ED, 42
InstructionInfo instructionInfoSBCHL_BC_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCHL_p_ED2_OF },
        { 4, OnClock_SBCHL_p_ED2_OP },
        { 3, OnClock_SBCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 0 },
        { VariableType::None },
    }
};

// SBC HL, DE  -  ED, 52
InstructionInfo instructionInfoSBCHL_DE_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCHL_p_ED2_OF },
        { 4, OnClock_SBCHL_p_ED2_OP },
        { 3, OnClock_SBCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 1 },
        { VariableType::None },
    }
};

// SBC HL, HL  -  ED, 62
InstructionInfo instructionInfoSBCHL_HL_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCHL_p_ED2_OF },
        { 4, OnClock_SBCHL_p_ED2_OP },
        { 3, OnClock_SBCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 2 },
        { VariableType::None },
    }
};

// SBC HL, SP  -  ED, 72
InstructionInfo instructionInfoSBCHL_SP_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCHL_p_ED2_OF },
        { 4, OnClock_SBCHL_p_ED2_OP },
        { 3, OnClock_SBCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 3 },
        { VariableType::None },
    }
};

// INC BC  -  03
InstructionInfo instructionInfoINCBC_1 =
{
    1,
    0,
    {
        { 6, OnClock_INCp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 0 },
        { VariableType::None },
    }
};

// INC DE  -  13
InstructionInfo instructionInfoINCDE_1 =
{
    1,
    0,
    {
        { 6, OnClock_INCp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 1 },
        { VariableType::None },
    }
};

// INC HL  -  23
InstructionInfo instructionInfoINCHL_1 =
{
    1,
    0,
    {
        { 6, OnClock_INCp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 2 },
        { VariableType::None },
    }
};

// INC SP  -  33
InstructionInfo instructionInfoINCSP_1 =
{
    1,
    0,
    {
        { 6, OnClock_INCp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 3 },
        { VariableType::None },
    }
};

// INC IX  -  DD, 23
InstructionInfo instructionInfoINCIX_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 6, OnClock_INCex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// INC IY  -  FD, 23
InstructionInfo instructionInfoINCIY_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 6, OnClock_INCex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// DEC BC  -  0B
InstructionInfo instructionInfoDECBC_1 =
{
    1,
    0,
    {
        { 6, OnClock_DECp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 0 },
        { VariableType::None },
    }
};

// DEC DE  -  1B
InstructionInfo instructionInfoDECDE_1 =
{
    1,
    0,
    {
        { 6, OnClock_DECp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 1 },
        { VariableType::None },
    }
};

// DEC HL  -  2B
InstructionInfo instructionInfoDECHL_1 =
{
    1,
    0,
    {
        { 6, OnClock_DECp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 2 },
        { VariableType::None },
    }
};

// DEC SP  -  3B
InstructionInfo instructionInfoDECSP_1 =
{
    1,
    0,
    {
        { 6, OnClock_DECp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RegistersSP16, 3 },
        { VariableType::None },
    }
};

// DEC IX  -  DD, 2B
InstructionInfo instructionInfoDECIX_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 6, OnClock_DECex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// DEC IY  -  FD, 2B
InstructionInfo instructionInfoDECIY_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 6, OnClock_DECex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RLCA  -  07
InstructionInfo instructionInfoRLCA_1 =
{
    1,
    0,
    {
        { 4, OnClock_RLCA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RLA  -  17
InstructionInfo instructionInfoRLA_1 =
{
    1,
    0,
    {
        { 4, OnClock_RLA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RRCA  -  0F
InstructionInfo instructionInfoRRCA_1 =
{
    1,
    0,
    {
        { 4, OnClock_RRCA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RRA  -  1F
InstructionInfo instructionInfoRRA_1 =
{
    1,
    0,
    {
        { 4, OnClock_RRA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RLC A  -  CB, 07
InstructionInfo instructionInfoRLCA_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// RLC B  -  CB, 00
InstructionInfo instructionInfoRLCB_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// RLC C  -  CB, 01
InstructionInfo instructionInfoRLCC_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// RLC D  -  CB, 02
InstructionInfo instructionInfoRLCD_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// RLC E  -  CB, 03
InstructionInfo instructionInfoRLCE_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// RLC H  -  CB, 04
InstructionInfo instructionInfoRLCH_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// RLC L  -  CB, 05
InstructionInfo instructionInfoRLCL_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// RLC (HL)  -  CB, 06
InstructionInfo instructionInfoRLC_HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLC_HL__CB2_OF },
        { 4, OnClock_RLC_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RLC (IX+d)  -  DD, CB, d, 06
InstructionInfo instructionInfoRLC_IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__ex4_OD },
        { 5, OnClock_RLC_ex_d__ex4_FD },
        { 4, OnClock_RLC_ex_d__ex4_MR },
        { 3, OnClock_RLC_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RLC (IY+d)  -  FD, CB, d, 06
InstructionInfo instructionInfoRLC_IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__ex4_OD },
        { 5, OnClock_RLC_ex_d__ex4_FD },
        { 4, OnClock_RLC_ex_d__ex4_MR },
        { 3, OnClock_RLC_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RLC (IX+d), A  -  DD, CB, d, 07
InstructionInfo instructionInfoRLC_IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// RLC (IY+d), A  -  FD, CB, d, 07
InstructionInfo instructionInfoRLC_IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// RLC (IX+d), B  -  DD, CB, d, 00
InstructionInfo instructionInfoRLC_IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// RLC (IY+d), B  -  FD, CB, d, 00
InstructionInfo instructionInfoRLC_IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// RLC (IX+d), C  -  DD, CB, d, 01
InstructionInfo instructionInfoRLC_IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// RLC (IY+d), C  -  FD, CB, d, 01
InstructionInfo instructionInfoRLC_IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// RLC (IX+d), D  -  DD, CB, d, 02
InstructionInfo instructionInfoRLC_IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// RLC (IY+d), D  -  FD, CB, d, 02
InstructionInfo instructionInfoRLC_IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// RLC (IX+d), E  -  DD, CB, d, 03
InstructionInfo instructionInfoRLC_IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// RLC (IY+d), E  -  FD, CB, d, 03
InstructionInfo instructionInfoRLC_IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// RLC (IX+d), H  -  DD, CB, d, 04
InstructionInfo instructionInfoRLC_IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// RLC (IY+d), H  -  FD, CB, d, 04
InstructionInfo instructionInfoRLC_IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// RLC (IX+d), L  -  DD, CB, d, 05
InstructionInfo instructionInfoRLC_IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// RLC (IY+d), L  -  FD, CB, d, 05
InstructionInfo instructionInfoRLC_IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RLC_ex_d__r_ex4_OD },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// RL A  -  CB, 17
InstructionInfo instructionInfoRLA_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// RL B  -  CB, 10
InstructionInfo instructionInfoRLB_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// RL C  -  CB, 11
InstructionInfo instructionInfoRLC_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// RL D  -  CB, 12
InstructionInfo instructionInfoRLD_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// RL E  -  CB, 13
InstructionInfo instructionInfoRLE_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// RL H  -  CB, 14
InstructionInfo instructionInfoRLH_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// RL L  -  CB, 15
InstructionInfo instructionInfoRLL_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// RL (HL)  -  CB, 16
InstructionInfo instructionInfoRL_HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RL_HL__CB2_OF },
        { 4, OnClock_RL_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RL (IX+d)  -  DD, CB, d, 16
InstructionInfo instructionInfoRL_IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__ex4_OD },
        { 5, OnClock_RL_ex_d__ex4_FD },
        { 4, OnClock_RL_ex_d__ex4_MR },
        { 3, OnClock_RL_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RL (IY+d)  -  FD, CB, d, 16
InstructionInfo instructionInfoRL_IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__ex4_OD },
        { 5, OnClock_RL_ex_d__ex4_FD },
        { 4, OnClock_RL_ex_d__ex4_MR },
        { 3, OnClock_RL_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RL (IX+d), A  -  DD, CB, d, 17
InstructionInfo instructionInfoRL_IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// RL (IY+d), A  -  FD, CB, d, 17
InstructionInfo instructionInfoRL_IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// RL (IX+d), B  -  DD, CB, d, 10
InstructionInfo instructionInfoRL_IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// RL (IY+d), B  -  FD, CB, d, 10
InstructionInfo instructionInfoRL_IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// RL (IX+d), C  -  DD, CB, d, 11
InstructionInfo instructionInfoRL_IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// RL (IY+d), C  -  FD, CB, d, 11
InstructionInfo instructionInfoRL_IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// RL (IX+d), D  -  DD, CB, d, 12
InstructionInfo instructionInfoRL_IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// RL (IY+d), D  -  FD, CB, d, 12
InstructionInfo instructionInfoRL_IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// RL (IX+d), E  -  DD, CB, d, 13
InstructionInfo instructionInfoRL_IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// RL (IY+d), E  -  FD, CB, d, 13
InstructionInfo instructionInfoRL_IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// RL (IX+d), H  -  DD, CB, d, 14
InstructionInfo instructionInfoRL_IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// RL (IY+d), H  -  FD, CB, d, 14
InstructionInfo instructionInfoRL_IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// RL (IX+d), L  -  DD, CB, d, 15
InstructionInfo instructionInfoRL_IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// RL (IY+d), L  -  FD, CB, d, 15
InstructionInfo instructionInfoRL_IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RL_ex_d__r_ex4_OD },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// RRC A  -  CB, 0F
InstructionInfo instructionInfoRRCA_CB2 =
{
    1,
    0,
    {
        { 4, OnClock_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// RRC B  -  CB, 08
InstructionInfo instructionInfoRRCB_CB2 =
{
    1,
    0,
    {
        { 4, OnClock_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// RRC C  -  CB, 09
InstructionInfo instructionInfoRRCC_CB2 =
{
    1,
    0,
    {
        { 4, OnClock_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// RRC D  -  CB, 0A
InstructionInfo instructionInfoRRCD_CB2 =
{
    1,
    0,
    {
        { 4, OnClock_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// RRC E  -  CB, 0B
InstructionInfo instructionInfoRRCE_CB2 =
{
    1,
    0,
    {
        { 4, OnClock_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// RRC H  -  CB, 0C
InstructionInfo instructionInfoRRCH_CB2 =
{
    1,
    0,
    {
        { 4, OnClock_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// RRC L  -  CB, 0D
InstructionInfo instructionInfoRRCL_CB2 =
{
    1,
    0,
    {
        { 4, OnClock_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// RRC (HL)  -  CB, 0E
InstructionInfo instructionInfoRRC_HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRC_HL__CB2_OF },
        { 4, OnClock_RRC_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RRC (IX+d)  -  DD, CB, d, 0E
InstructionInfo instructionInfoRRC_IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__ex4_OD },
        { 5, OnClock_RRC_ex_d__ex4_FD },
        { 4, OnClock_RRC_ex_d__ex4_MR },
        { 3, OnClock_RRC_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RRC (IY+d)  -  FD, CB, d, 0E
InstructionInfo instructionInfoRRC_IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__ex4_OD },
        { 5, OnClock_RRC_ex_d__ex4_FD },
        { 4, OnClock_RRC_ex_d__ex4_MR },
        { 3, OnClock_RRC_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RRC (IX+d), A  -  DD, CB, d, 0F
InstructionInfo instructionInfoRRC_IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// RRC (IY+d), A  -  FD, CB, d, 0F
InstructionInfo instructionInfoRRC_IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// RRC (IX+d), B  -  DD, CB, d, 08
InstructionInfo instructionInfoRRC_IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// RRC (IY+d), B  -  FD, CB, d, 08
InstructionInfo instructionInfoRRC_IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// RRC (IX+d), C  -  DD, CB, d, 09
InstructionInfo instructionInfoRRC_IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// RRC (IY+d), C  -  FD, CB, d, 09
InstructionInfo instructionInfoRRC_IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// RRC (IX+d), D  -  DD, CB, d, 0A
InstructionInfo instructionInfoRRC_IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// RRC (IY+d), D  -  FD, CB, d, 0A
InstructionInfo instructionInfoRRC_IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// RRC (IX+d), E  -  DD, CB, d, 0B
InstructionInfo instructionInfoRRC_IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// RRC (IY+d), E  -  FD, CB, d, 0B
InstructionInfo instructionInfoRRC_IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// RRC (IX+d), H  -  DD, CB, d, 0C
InstructionInfo instructionInfoRRC_IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// RRC (IY+d), H  -  FD, CB, d, 0C
InstructionInfo instructionInfoRRC_IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// RRC (IX+d), L  -  DD, CB, d, 0D
InstructionInfo instructionInfoRRC_IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// RRC (IY+d), L  -  FD, CB, d, 0D
InstructionInfo instructionInfoRRC_IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RRC_ex_d__r_ex4_OD },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// RR A  -  CB, 1F
InstructionInfo instructionInfoRRA_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// RR B  -  CB, 18
InstructionInfo instructionInfoRRB_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// RR C  -  CB, 19
InstructionInfo instructionInfoRRC_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// RR D  -  CB, 1A
InstructionInfo instructionInfoRRD_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// RR E  -  CB, 1B
InstructionInfo instructionInfoRRE_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// RR H  -  CB, 1C
InstructionInfo instructionInfoRRH_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// RR L  -  CB, 1D
InstructionInfo instructionInfoRRL_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// RR (HL)  -  CB, 1E
InstructionInfo instructionInfoRR_HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RR_HL__CB2_OF },
        { 4, OnClock_RR_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RR (IX+d)  -  DD, CB, d, 1E
InstructionInfo instructionInfoRR_IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__ex4_OD },
        { 5, OnClock_RR_ex_d__ex4_FD },
        { 4, OnClock_RR_ex_d__ex4_MR },
        { 3, OnClock_RR_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RR (IY+d)  -  FD, CB, d, 1E
InstructionInfo instructionInfoRR_IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__ex4_OD },
        { 5, OnClock_RR_ex_d__ex4_FD },
        { 4, OnClock_RR_ex_d__ex4_MR },
        { 3, OnClock_RR_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RR (IX+d), A  -  DD, CB, d, 1F
InstructionInfo instructionInfoRR_IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// RR (IY+d), A  -  FD, CB, d, 1F
InstructionInfo instructionInfoRR_IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// RR (IX+d), B  -  DD, CB, d, 18
InstructionInfo instructionInfoRR_IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// RR (IY+d), B  -  FD, CB, d, 18
InstructionInfo instructionInfoRR_IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// RR (IX+d), C  -  DD, CB, d, 19
InstructionInfo instructionInfoRR_IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// RR (IY+d), C  -  FD, CB, d, 19
InstructionInfo instructionInfoRR_IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// RR (IX+d), D  -  DD, CB, d, 1A
InstructionInfo instructionInfoRR_IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// RR (IY+d), D  -  FD, CB, d, 1A
InstructionInfo instructionInfoRR_IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// RR (IX+d), E  -  DD, CB, d, 1B
InstructionInfo instructionInfoRR_IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// RR (IY+d), E  -  FD, CB, d, 1B
InstructionInfo instructionInfoRR_IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// RR (IX+d), H  -  DD, CB, d, 1C
InstructionInfo instructionInfoRR_IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// RR (IY+d), H  -  FD, CB, d, 1C
InstructionInfo instructionInfoRR_IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// RR (IX+d), L  -  DD, CB, d, 1D
InstructionInfo instructionInfoRR_IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// RR (IY+d), L  -  FD, CB, d, 1D
InstructionInfo instructionInfoRR_IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RR_ex_d__r_ex4_OD },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// SLA A  -  CB, 27
InstructionInfo instructionInfoSLAA_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// SLA B  -  CB, 20
InstructionInfo instructionInfoSLAB_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// SLA C  -  CB, 21
InstructionInfo instructionInfoSLAC_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// SLA D  -  CB, 22
InstructionInfo instructionInfoSLAD_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// SLA E  -  CB, 23
InstructionInfo instructionInfoSLAE_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// SLA H  -  CB, 24
InstructionInfo instructionInfoSLAH_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// SLA L  -  CB, 25
InstructionInfo instructionInfoSLAL_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// SLA (HL)  -  CB, 26
InstructionInfo instructionInfoSLA_HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLA_HL__CB2_OF },
        { 4, OnClock_SLA_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SLA (IX+d)  -  DD, CB, d, 26
InstructionInfo instructionInfoSLA_IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__ex4_OD },
        { 5, OnClock_SLA_ex_d__ex4_FD },
        { 4, OnClock_SLA_ex_d__ex4_MR },
        { 3, OnClock_SLA_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SLA (IY+d)  -  FD, CB, d, 26
InstructionInfo instructionInfoSLA_IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__ex4_OD },
        { 5, OnClock_SLA_ex_d__ex4_FD },
        { 4, OnClock_SLA_ex_d__ex4_MR },
        { 3, OnClock_SLA_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SLA (IX+d), A  -  DD, CB, d, 27
InstructionInfo instructionInfoSLA_IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// SLA (IY+d), A  -  FD, CB, d, 27
InstructionInfo instructionInfoSLA_IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// SLA (IX+d), B  -  DD, CB, d, 20
InstructionInfo instructionInfoSLA_IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// SLA (IY+d), B  -  FD, CB, d, 20
InstructionInfo instructionInfoSLA_IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// SLA (IX+d), C  -  DD, CB, d, 21
InstructionInfo instructionInfoSLA_IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// SLA (IY+d), C  -  FD, CB, d, 21
InstructionInfo instructionInfoSLA_IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// SLA (IX+d), D  -  DD, CB, d, 22
InstructionInfo instructionInfoSLA_IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// SLA (IY+d), D  -  FD, CB, d, 22
InstructionInfo instructionInfoSLA_IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// SLA (IX+d), E  -  DD, CB, d, 23
InstructionInfo instructionInfoSLA_IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// SLA (IY+d), E  -  FD, CB, d, 23
InstructionInfo instructionInfoSLA_IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// SLA (IX+d), H  -  DD, CB, d, 24
InstructionInfo instructionInfoSLA_IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// SLA (IY+d), H  -  FD, CB, d, 24
InstructionInfo instructionInfoSLA_IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// SLA (IX+d), L  -  DD, CB, d, 25
InstructionInfo instructionInfoSLA_IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// SLA (IY+d), L  -  FD, CB, d, 25
InstructionInfo instructionInfoSLA_IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLA_ex_d__r_ex4_OD },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// SLL A  -  CB, 37
InstructionInfo instructionInfoSLLA_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// SLL B  -  CB, 30
InstructionInfo instructionInfoSLLB_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// SLL C  -  CB, 31
InstructionInfo instructionInfoSLLC_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// SLL D  -  CB, 32
InstructionInfo instructionInfoSLLD_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// SLL E  -  CB, 33
InstructionInfo instructionInfoSLLE_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// SLL H  -  CB, 34
InstructionInfo instructionInfoSLLH_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// SLL L  -  CB, 35
InstructionInfo instructionInfoSLLL_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// SLL (HL)  -  CB, 36
InstructionInfo instructionInfoSLL_HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLL_HL__CB2_OF },
        { 4, OnClock_SLL_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SLL (IX+d)  -  DD, CB, d, 36
InstructionInfo instructionInfoSLL_IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__ex4_OD },
        { 5, OnClock_SLL_ex_d__ex4_FD },
        { 4, OnClock_SLL_ex_d__ex4_MR },
        { 3, OnClock_SLL_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SLL (IY+d)  -  FD, CB, d, 36
InstructionInfo instructionInfoSLL_IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__ex4_OD },
        { 5, OnClock_SLL_ex_d__ex4_FD },
        { 4, OnClock_SLL_ex_d__ex4_MR },
        { 3, OnClock_SLL_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SLL (IX+d), A  -  DD, CB, d, 37
InstructionInfo instructionInfoSLL_IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// SLL (IY+d), A  -  FD, CB, d, 37
InstructionInfo instructionInfoSLL_IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// SLL (IX+d), B  -  DD, CB, d, 30
InstructionInfo instructionInfoSLL_IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// SLL (IY+d), B  -  FD, CB, d, 30
InstructionInfo instructionInfoSLL_IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// SLL (IX+d), C  -  DD, CB, d, 31
InstructionInfo instructionInfoSLL_IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// SLL (IY+d), C  -  FD, CB, d, 31
InstructionInfo instructionInfoSLL_IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// SLL (IX+d), D  -  DD, CB, d, 32
InstructionInfo instructionInfoSLL_IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// SLL (IY+d), D  -  FD, CB, d, 32
InstructionInfo instructionInfoSLL_IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// SLL (IX+d), E  -  DD, CB, d, 33
InstructionInfo instructionInfoSLL_IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// SLL (IY+d), E  -  FD, CB, d, 33
InstructionInfo instructionInfoSLL_IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// SLL (IX+d), H  -  DD, CB, d, 34
InstructionInfo instructionInfoSLL_IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// SLL (IY+d), H  -  FD, CB, d, 34
InstructionInfo instructionInfoSLL_IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// SLL (IX+d), L  -  DD, CB, d, 35
InstructionInfo instructionInfoSLL_IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// SLL (IY+d), L  -  FD, CB, d, 35
InstructionInfo instructionInfoSLL_IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SLL_ex_d__r_ex4_OD },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// SRA A  -  CB, 2F
InstructionInfo instructionInfoSRAA_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// SRA B  -  CB, 28
InstructionInfo instructionInfoSRAB_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// SRA C  -  CB, 29
InstructionInfo instructionInfoSRAC_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// SRA D  -  CB, 2A
InstructionInfo instructionInfoSRAD_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// SRA E  -  CB, 2B
InstructionInfo instructionInfoSRAE_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// SRA H  -  CB, 2C
InstructionInfo instructionInfoSRAH_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// SRA L  -  CB, 2D
InstructionInfo instructionInfoSRAL_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// SRA (HL)  -  CB, 2E
InstructionInfo instructionInfoSRA_HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRA_HL__CB2_OF },
        { 4, OnClock_SRA_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SRA (IX+d)  -  DD, CB, d, 2E
InstructionInfo instructionInfoSRA_IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__ex4_OD },
        { 5, OnClock_SRA_ex_d__ex4_FD },
        { 4, OnClock_SRA_ex_d__ex4_MR },
        { 3, OnClock_SRA_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SRA (IY+d)  -  FD, CB, d, 2E
InstructionInfo instructionInfoSRA_IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__ex4_OD },
        { 5, OnClock_SRA_ex_d__ex4_FD },
        { 4, OnClock_SRA_ex_d__ex4_MR },
        { 3, OnClock_SRA_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SRA (IX+d), A  -  DD, CB, d, 2F
InstructionInfo instructionInfoSRA_IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// SRA (IY+d), A  -  FD, CB, d, 2F
InstructionInfo instructionInfoSRA_IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// SRA (IX+d), B  -  DD, CB, d, 28
InstructionInfo instructionInfoSRA_IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// SRA (IY+d), B  -  FD, CB, d, 28
InstructionInfo instructionInfoSRA_IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// SRA (IX+d), C  -  DD, CB, d, 29
InstructionInfo instructionInfoSRA_IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// SRA (IY+d), C  -  FD, CB, d, 29
InstructionInfo instructionInfoSRA_IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// SRA (IX+d), D  -  DD, CB, d, 2A
InstructionInfo instructionInfoSRA_IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// SRA (IY+d), D  -  FD, CB, d, 2A
InstructionInfo instructionInfoSRA_IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// SRA (IX+d), E  -  DD, CB, d, 2B
InstructionInfo instructionInfoSRA_IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// SRA (IY+d), E  -  FD, CB, d, 2B
InstructionInfo instructionInfoSRA_IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// SRA (IX+d), H  -  DD, CB, d, 2C
InstructionInfo instructionInfoSRA_IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// SRA (IY+d), H  -  FD, CB, d, 2C
InstructionInfo instructionInfoSRA_IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// SRA (IX+d), L  -  DD, CB, d, 2D
InstructionInfo instructionInfoSRA_IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// SRA (IY+d), L  -  FD, CB, d, 2D
InstructionInfo instructionInfoSRA_IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRA_ex_d__r_ex4_OD },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// SRL A  -  CB, 3F
InstructionInfo instructionInfoSRLA_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// SRL B  -  CB, 38
InstructionInfo instructionInfoSRLB_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// SRL C  -  CB, 39
InstructionInfo instructionInfoSRLC_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// SRL D  -  CB, 3A
InstructionInfo instructionInfoSRLD_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// SRL E  -  CB, 3B
InstructionInfo instructionInfoSRLE_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// SRL H  -  CB, 3C
InstructionInfo instructionInfoSRLH_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// SRL L  -  CB, 3D
InstructionInfo instructionInfoSRLL_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// SRL (HL)  -  CB, 3E
InstructionInfo instructionInfoSRL_HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRL_HL__CB2_OF },
        { 4, OnClock_SRL_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SRL (IX+d)  -  DD, CB, d, 3E
InstructionInfo instructionInfoSRL_IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__ex4_OD },
        { 5, OnClock_SRL_ex_d__ex4_FD },
        { 4, OnClock_SRL_ex_d__ex4_MR },
        { 3, OnClock_SRL_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SRL (IY+d)  -  FD, CB, d, 3E
InstructionInfo instructionInfoSRL_IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__ex4_OD },
        { 5, OnClock_SRL_ex_d__ex4_FD },
        { 4, OnClock_SRL_ex_d__ex4_MR },
        { 3, OnClock_SRL_ex_d__ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// SRL (IX+d), A  -  DD, CB, d, 3F
InstructionInfo instructionInfoSRL_IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// SRL (IY+d), A  -  FD, CB, d, 3F
InstructionInfo instructionInfoSRL_IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 7 },
    }
};

// SRL (IX+d), B  -  DD, CB, d, 38
InstructionInfo instructionInfoSRL_IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// SRL (IY+d), B  -  FD, CB, d, 38
InstructionInfo instructionInfoSRL_IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 0 },
    }
};

// SRL (IX+d), C  -  DD, CB, d, 39
InstructionInfo instructionInfoSRL_IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// SRL (IY+d), C  -  FD, CB, d, 39
InstructionInfo instructionInfoSRL_IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 1 },
    }
};

// SRL (IX+d), D  -  DD, CB, d, 3A
InstructionInfo instructionInfoSRL_IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// SRL (IY+d), D  -  FD, CB, d, 3A
InstructionInfo instructionInfoSRL_IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 2 },
    }
};

// SRL (IX+d), E  -  DD, CB, d, 3B
InstructionInfo instructionInfoSRL_IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// SRL (IY+d), E  -  FD, CB, d, 3B
InstructionInfo instructionInfoSRL_IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 3 },
    }
};

// SRL (IX+d), H  -  DD, CB, d, 3C
InstructionInfo instructionInfoSRL_IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// SRL (IY+d), H  -  FD, CB, d, 3C
InstructionInfo instructionInfoSRL_IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 4 },
    }
};

// SRL (IX+d), L  -  DD, CB, d, 3D
InstructionInfo instructionInfoSRL_IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// SRL (IY+d), L  -  FD, CB, d, 3D
InstructionInfo instructionInfoSRL_IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SRL_ex_d__r_ex4_OD },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { VariableType::None },
        { VariableType::Registers8, 5 },
    }
};

// RLD A  -  ED, 6F
InstructionInfo instructionInfoRLDA_ED2 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLDA_ED2_OF },
        { 3, OnClock_RLDA_ED2_OP },
        { 4, OnClock_RLDA_ED2_OP },
        { 3, OnClock_RLDA_ED2_OP },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RRD A  -  ED, 67
InstructionInfo instructionInfoRRDA_ED2 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRDA_ED2_OF },
        { 3, OnClock_RRDA_ED2_OP },
        { 4, OnClock_RRDA_ED2_OP },
        { 3, OnClock_RRDA_ED2_OP },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// BIT 0, A  -  CB, 47
InstructionInfo instructionInfoBIT0_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 7 },
    }
};

// BIT 1, A  -  CB, 4F
InstructionInfo instructionInfoBIT1_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 7 },
    }
};

// BIT 2, A  -  CB, 57
InstructionInfo instructionInfoBIT2_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 7 },
    }
};

// BIT 3, A  -  CB, 5F
InstructionInfo instructionInfoBIT3_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 7 },
    }
};

// BIT 4, A  -  CB, 67
InstructionInfo instructionInfoBIT4_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 7 },
    }
};

// BIT 5, A  -  CB, 6F
InstructionInfo instructionInfoBIT5_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 7 },
    }
};

// BIT 6, A  -  CB, 77
InstructionInfo instructionInfoBIT6_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 7 },
    }
};

// BIT 7, A  -  CB, 7F
InstructionInfo instructionInfoBIT7_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 7 },
    }
};

// BIT 0, B  -  CB, 40
InstructionInfo instructionInfoBIT0_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 0 },
    }
};

// BIT 1, B  -  CB, 48
InstructionInfo instructionInfoBIT1_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 0 },
    }
};

// BIT 2, B  -  CB, 50
InstructionInfo instructionInfoBIT2_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 0 },
    }
};

// BIT 3, B  -  CB, 58
InstructionInfo instructionInfoBIT3_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 0 },
    }
};

// BIT 4, B  -  CB, 60
InstructionInfo instructionInfoBIT4_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 0 },
    }
};

// BIT 5, B  -  CB, 68
InstructionInfo instructionInfoBIT5_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 0 },
    }
};

// BIT 6, B  -  CB, 70
InstructionInfo instructionInfoBIT6_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 0 },
    }
};

// BIT 7, B  -  CB, 78
InstructionInfo instructionInfoBIT7_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 0 },
    }
};

// BIT 0, C  -  CB, 41
InstructionInfo instructionInfoBIT0_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 1 },
    }
};

// BIT 1, C  -  CB, 49
InstructionInfo instructionInfoBIT1_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 1 },
    }
};

// BIT 2, C  -  CB, 51
InstructionInfo instructionInfoBIT2_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 1 },
    }
};

// BIT 3, C  -  CB, 59
InstructionInfo instructionInfoBIT3_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 1 },
    }
};

// BIT 4, C  -  CB, 61
InstructionInfo instructionInfoBIT4_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 1 },
    }
};

// BIT 5, C  -  CB, 69
InstructionInfo instructionInfoBIT5_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 1 },
    }
};

// BIT 6, C  -  CB, 71
InstructionInfo instructionInfoBIT6_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 1 },
    }
};

// BIT 7, C  -  CB, 79
InstructionInfo instructionInfoBIT7_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 1 },
    }
};

// BIT 0, D  -  CB, 42
InstructionInfo instructionInfoBIT0_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 2 },
    }
};

// BIT 1, D  -  CB, 4A
InstructionInfo instructionInfoBIT1_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 2 },
    }
};

// BIT 2, D  -  CB, 52
InstructionInfo instructionInfoBIT2_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 2 },
    }
};

// BIT 3, D  -  CB, 5A
InstructionInfo instructionInfoBIT3_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 2 },
    }
};

// BIT 4, D  -  CB, 62
InstructionInfo instructionInfoBIT4_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 2 },
    }
};

// BIT 5, D  -  CB, 6A
InstructionInfo instructionInfoBIT5_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 2 },
    }
};

// BIT 6, D  -  CB, 72
InstructionInfo instructionInfoBIT6_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 2 },
    }
};

// BIT 7, D  -  CB, 7A
InstructionInfo instructionInfoBIT7_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 2 },
    }
};

// BIT 0, E  -  CB, 43
InstructionInfo instructionInfoBIT0_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 3 },
    }
};

// BIT 1, E  -  CB, 4B
InstructionInfo instructionInfoBIT1_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 3 },
    }
};

// BIT 2, E  -  CB, 53
InstructionInfo instructionInfoBIT2_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 3 },
    }
};

// BIT 3, E  -  CB, 5B
InstructionInfo instructionInfoBIT3_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 3 },
    }
};

// BIT 4, E  -  CB, 63
InstructionInfo instructionInfoBIT4_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 3 },
    }
};

// BIT 5, E  -  CB, 6B
InstructionInfo instructionInfoBIT5_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 3 },
    }
};

// BIT 6, E  -  CB, 73
InstructionInfo instructionInfoBIT6_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 3 },
    }
};

// BIT 7, E  -  CB, 7B
InstructionInfo instructionInfoBIT7_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 3 },
    }
};

// BIT 0, H  -  CB, 44
InstructionInfo instructionInfoBIT0_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 4 },
    }
};

// BIT 1, H  -  CB, 4C
InstructionInfo instructionInfoBIT1_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 4 },
    }
};

// BIT 2, H  -  CB, 54
InstructionInfo instructionInfoBIT2_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 4 },
    }
};

// BIT 3, H  -  CB, 5C
InstructionInfo instructionInfoBIT3_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 4 },
    }
};

// BIT 4, H  -  CB, 64
InstructionInfo instructionInfoBIT4_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 4 },
    }
};

// BIT 5, H  -  CB, 6C
InstructionInfo instructionInfoBIT5_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 4 },
    }
};

// BIT 6, H  -  CB, 74
InstructionInfo instructionInfoBIT6_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 4 },
    }
};

// BIT 7, H  -  CB, 7C
InstructionInfo instructionInfoBIT7_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 4 },
    }
};

// BIT 0, L  -  CB, 45
InstructionInfo instructionInfoBIT0_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 5 },
    }
};

// BIT 1, L  -  CB, 4D
InstructionInfo instructionInfoBIT1_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 5 },
    }
};

// BIT 2, L  -  CB, 55
InstructionInfo instructionInfoBIT2_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 5 },
    }
};

// BIT 3, L  -  CB, 5D
InstructionInfo instructionInfoBIT3_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 5 },
    }
};

// BIT 4, L  -  CB, 65
InstructionInfo instructionInfoBIT4_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 5 },
    }
};

// BIT 5, L  -  CB, 6D
InstructionInfo instructionInfoBIT5_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 5 },
    }
};

// BIT 6, L  -  CB, 75
InstructionInfo instructionInfoBIT6_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 5 },
    }
};

// BIT 7, L  -  CB, 7D
InstructionInfo instructionInfoBIT7_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 5 },
    }
};

// BIT 0, (HL)  -  CB, 46
InstructionInfo instructionInfoBIT0__HL__CB2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// BIT 1, (HL)  -  CB, 4E
InstructionInfo instructionInfoBIT1__HL__CB2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// BIT 2, (HL)  -  CB, 56
InstructionInfo instructionInfoBIT2__HL__CB2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// BIT 3, (HL)  -  CB, 5E
InstructionInfo instructionInfoBIT3__HL__CB2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// BIT 4, (HL)  -  CB, 66
InstructionInfo instructionInfoBIT4__HL__CB2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// BIT 5, (HL)  -  CB, 6E
InstructionInfo instructionInfoBIT5__HL__CB2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// BIT 6, (HL)  -  CB, 76
InstructionInfo instructionInfoBIT6__HL__CB2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// BIT 7, (HL)  -  CB, 7E
InstructionInfo instructionInfoBIT7__HL__CB2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// BIT 0, (IX+d)  -  DD, CB, d, 46
InstructionInfo instructionInfoBIT0__IX_d__DD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// BIT 0, (IY+d)  -  FD, CB, d, 46
InstructionInfo instructionInfoBIT0__IY_d__FD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// BIT 1, (IX+d)  -  DD, CB, d, 4E
InstructionInfo instructionInfoBIT1__IX_d__DD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// BIT 1, (IY+d)  -  FD, CB, d, 4E
InstructionInfo instructionInfoBIT1__IY_d__FD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// BIT 2, (IX+d)  -  DD, CB, d, 56
InstructionInfo instructionInfoBIT2__IX_d__DD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// BIT 2, (IY+d)  -  FD, CB, d, 56
InstructionInfo instructionInfoBIT2__IY_d__FD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// BIT 3, (IX+d)  -  DD, CB, d, 5E
InstructionInfo instructionInfoBIT3__IX_d__DD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// BIT 3, (IY+d)  -  FD, CB, d, 5E
InstructionInfo instructionInfoBIT3__IY_d__FD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// BIT 4, (IX+d)  -  DD, CB, d, 66
InstructionInfo instructionInfoBIT4__IX_d__DD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// BIT 4, (IY+d)  -  FD, CB, d, 66
InstructionInfo instructionInfoBIT4__IY_d__FD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// BIT 5, (IX+d)  -  DD, CB, d, 6E
InstructionInfo instructionInfoBIT5__IX_d__DD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// BIT 5, (IY+d)  -  FD, CB, d, 6E
InstructionInfo instructionInfoBIT5__IY_d__FD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// BIT 6, (IX+d)  -  DD, CB, d, 76
InstructionInfo instructionInfoBIT6__IX_d__DD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// BIT 6, (IY+d)  -  FD, CB, d, 76
InstructionInfo instructionInfoBIT6__IY_d__FD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// BIT 7, (IX+d)  -  DD, CB, d, 7E
InstructionInfo instructionInfoBIT7__IX_d__DD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// BIT 7, (IY+d)  -  FD, CB, d, 7E
InstructionInfo instructionInfoBIT7__IY_d__FD4 =
{
    5,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_BITb__ex_d__ex4_OD },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 0, A  -  CB, C7
InstructionInfo instructionInfoSET0_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 7 },
    }
};

// SET 1, A  -  CB, CF
InstructionInfo instructionInfoSET1_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 7 },
    }
};

// SET 2, A  -  CB, D7
InstructionInfo instructionInfoSET2_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 7 },
    }
};

// SET 3, A  -  CB, DF
InstructionInfo instructionInfoSET3_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 7 },
    }
};

// SET 4, A  -  CB, E7
InstructionInfo instructionInfoSET4_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 7 },
    }
};

// SET 5, A  -  CB, EF
InstructionInfo instructionInfoSET5_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 7 },
    }
};

// SET 6, A  -  CB, F7
InstructionInfo instructionInfoSET6_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 7 },
    }
};

// SET 7, A  -  CB, FF
InstructionInfo instructionInfoSET7_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 7 },
    }
};

// SET 0, B  -  CB, C0
InstructionInfo instructionInfoSET0_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 0 },
    }
};

// SET 1, B  -  CB, C8
InstructionInfo instructionInfoSET1_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 0 },
    }
};

// SET 2, B  -  CB, D0
InstructionInfo instructionInfoSET2_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 0 },
    }
};

// SET 3, B  -  CB, D8
InstructionInfo instructionInfoSET3_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 0 },
    }
};

// SET 4, B  -  CB, E0
InstructionInfo instructionInfoSET4_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 0 },
    }
};

// SET 5, B  -  CB, E8
InstructionInfo instructionInfoSET5_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 0 },
    }
};

// SET 6, B  -  CB, F0
InstructionInfo instructionInfoSET6_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 0 },
    }
};

// SET 7, B  -  CB, F8
InstructionInfo instructionInfoSET7_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 0 },
    }
};

// SET 0, C  -  CB, C1
InstructionInfo instructionInfoSET0_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 1 },
    }
};

// SET 1, C  -  CB, C9
InstructionInfo instructionInfoSET1_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 1 },
    }
};

// SET 2, C  -  CB, D1
InstructionInfo instructionInfoSET2_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 1 },
    }
};

// SET 3, C  -  CB, D9
InstructionInfo instructionInfoSET3_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 1 },
    }
};

// SET 4, C  -  CB, E1
InstructionInfo instructionInfoSET4_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 1 },
    }
};

// SET 5, C  -  CB, E9
InstructionInfo instructionInfoSET5_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 1 },
    }
};

// SET 6, C  -  CB, F1
InstructionInfo instructionInfoSET6_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 1 },
    }
};

// SET 7, C  -  CB, F9
InstructionInfo instructionInfoSET7_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 1 },
    }
};

// SET 0, D  -  CB, C2
InstructionInfo instructionInfoSET0_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 2 },
    }
};

// SET 1, D  -  CB, CA
InstructionInfo instructionInfoSET1_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 2 },
    }
};

// SET 2, D  -  CB, D2
InstructionInfo instructionInfoSET2_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 2 },
    }
};

// SET 3, D  -  CB, DA
InstructionInfo instructionInfoSET3_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 2 },
    }
};

// SET 4, D  -  CB, E2
InstructionInfo instructionInfoSET4_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 2 },
    }
};

// SET 5, D  -  CB, EA
InstructionInfo instructionInfoSET5_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 2 },
    }
};

// SET 6, D  -  CB, F2
InstructionInfo instructionInfoSET6_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 2 },
    }
};

// SET 7, D  -  CB, FA
InstructionInfo instructionInfoSET7_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 2 },
    }
};

// SET 0, E  -  CB, C3
InstructionInfo instructionInfoSET0_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 3 },
    }
};

// SET 1, E  -  CB, CB
InstructionInfo instructionInfoSET1_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 3 },
    }
};

// SET 2, E  -  CB, D3
InstructionInfo instructionInfoSET2_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 3 },
    }
};

// SET 3, E  -  CB, DB
InstructionInfo instructionInfoSET3_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 3 },
    }
};

// SET 4, E  -  CB, E3
InstructionInfo instructionInfoSET4_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 3 },
    }
};

// SET 5, E  -  CB, EB
InstructionInfo instructionInfoSET5_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 3 },
    }
};

// SET 6, E  -  CB, F3
InstructionInfo instructionInfoSET6_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 3 },
    }
};

// SET 7, E  -  CB, FB
InstructionInfo instructionInfoSET7_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 3 },
    }
};

// SET 0, H  -  CB, C4
InstructionInfo instructionInfoSET0_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 4 },
    }
};

// SET 1, H  -  CB, CC
InstructionInfo instructionInfoSET1_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 4 },
    }
};

// SET 2, H  -  CB, D4
InstructionInfo instructionInfoSET2_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 4 },
    }
};

// SET 3, H  -  CB, DC
InstructionInfo instructionInfoSET3_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 4 },
    }
};

// SET 4, H  -  CB, E4
InstructionInfo instructionInfoSET4_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 4 },
    }
};

// SET 5, H  -  CB, EC
InstructionInfo instructionInfoSET5_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 4 },
    }
};

// SET 6, H  -  CB, F4
InstructionInfo instructionInfoSET6_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 4 },
    }
};

// SET 7, H  -  CB, FC
InstructionInfo instructionInfoSET7_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 4 },
    }
};

// SET 0, L  -  CB, C5
InstructionInfo instructionInfoSET0_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 5 },
    }
};

// SET 1, L  -  CB, CD
InstructionInfo instructionInfoSET1_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 5 },
    }
};

// SET 2, L  -  CB, D5
InstructionInfo instructionInfoSET2_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 5 },
    }
};

// SET 3, L  -  CB, DD
InstructionInfo instructionInfoSET3_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 5 },
    }
};

// SET 4, L  -  CB, E5
InstructionInfo instructionInfoSET4_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 5 },
    }
};

// SET 5, L  -  CB, ED
InstructionInfo instructionInfoSET5_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 5 },
    }
};

// SET 6, L  -  CB, F5
InstructionInfo instructionInfoSET6_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 5 },
    }
};

// SET 7, L  -  CB, FD
InstructionInfo instructionInfoSET7_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 5 },
    }
};

// SET 0, (HL)  -  CB, C6
InstructionInfo instructionInfoSET0__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// SET 1, (HL)  -  CB, CE
InstructionInfo instructionInfoSET1__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 2, (HL)  -  CB, D6
InstructionInfo instructionInfoSET2__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 3, (HL)  -  CB, DE
InstructionInfo instructionInfoSET3__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 4, (HL)  -  CB, E6
InstructionInfo instructionInfoSET4__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 5, (HL)  -  CB, EE
InstructionInfo instructionInfoSET5__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 6, (HL)  -  CB, F6
InstructionInfo instructionInfoSET6__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 7, (HL)  -  CB, FE
InstructionInfo instructionInfoSET7__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 0, (IX+d)  -  DD, CB, d, C6
InstructionInfo instructionInfoSET0__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// SET 0, (IY+d)  -  FD, CB, d, C6
InstructionInfo instructionInfoSET0__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// SET 1, (IX+d)  -  DD, CB, d, CE
InstructionInfo instructionInfoSET1__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 1, (IY+d)  -  FD, CB, d, CE
InstructionInfo instructionInfoSET1__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 2, (IX+d)  -  DD, CB, d, D6
InstructionInfo instructionInfoSET2__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 2, (IY+d)  -  FD, CB, d, D6
InstructionInfo instructionInfoSET2__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 3, (IX+d)  -  DD, CB, d, DE
InstructionInfo instructionInfoSET3__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 3, (IY+d)  -  FD, CB, d, DE
InstructionInfo instructionInfoSET3__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 4, (IX+d)  -  DD, CB, d, E6
InstructionInfo instructionInfoSET4__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 4, (IY+d)  -  FD, CB, d, E6
InstructionInfo instructionInfoSET4__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 5, (IX+d)  -  DD, CB, d, EE
InstructionInfo instructionInfoSET5__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 5, (IY+d)  -  FD, CB, d, EE
InstructionInfo instructionInfoSET5__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 6, (IX+d)  -  DD, CB, d, F6
InstructionInfo instructionInfoSET6__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 6, (IY+d)  -  FD, CB, d, F6
InstructionInfo instructionInfoSET6__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 7, (IX+d)  -  DD, CB, d, FE
InstructionInfo instructionInfoSET7__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 7, (IY+d)  -  FD, CB, d, FE
InstructionInfo instructionInfoSET7__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__ex4_OD },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 0, (IX+d), A  -  DD, CB, d, C7
InstructionInfo instructionInfoSET0__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// SET 1, (IX+d), A  -  DD, CB, d, CF
InstructionInfo instructionInfoSET1__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 1, (IY+d), A  -  FD, CB, d, CF
InstructionInfo instructionInfoSET1__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 2, (IX+d), A  -  DD, CB, d, D7
InstructionInfo instructionInfoSET2__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 2, (IY+d), A  -  FD, CB, d, D7
InstructionInfo instructionInfoSET2__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 3, (IX+d), A  -  DD, CB, d, DF
InstructionInfo instructionInfoSET3__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 3, (IY+d), A  -  FD, CB, d, DF
InstructionInfo instructionInfoSET3__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 4, (IX+d), A  -  DD, CB, d, E7
InstructionInfo instructionInfoSET4__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 4, (IY+d), A  -  FD, CB, d, E7
InstructionInfo instructionInfoSET4__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 5, (IX+d), A  -  DD, CB, d, EF
InstructionInfo instructionInfoSET5__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 5, (IY+d), A  -  FD, CB, d, EF
InstructionInfo instructionInfoSET5__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 6, (IX+d), A  -  DD, CB, d, F7
InstructionInfo instructionInfoSET6__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 6, (IY+d), A  -  FD, CB, d, F7
InstructionInfo instructionInfoSET6__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 7, (IX+d), A  -  DD, CB, d, FF
InstructionInfo instructionInfoSET7__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 7, (IY+d), A  -  FD, CB, d, FF
InstructionInfo instructionInfoSET7__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 0, (IX+d), B  -  DD, CB, d, C0
InstructionInfo instructionInfoSET0__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// SET 1, (IX+d), B  -  DD, CB, d, C8
InstructionInfo instructionInfoSET1__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 1, (IY+d), B  -  FD, CB, d, C8
InstructionInfo instructionInfoSET1__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 2, (IX+d), B  -  DD, CB, d, D0
InstructionInfo instructionInfoSET2__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 2, (IY+d), B  -  FD, CB, d, D0
InstructionInfo instructionInfoSET2__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 3, (IX+d), B  -  DD, CB, d, D8
InstructionInfo instructionInfoSET3__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 3, (IY+d), B  -  FD, CB, d, D8
InstructionInfo instructionInfoSET3__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 4, (IX+d), B  -  DD, CB, d, E0
InstructionInfo instructionInfoSET4__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 4, (IY+d), B  -  FD, CB, d, E0
InstructionInfo instructionInfoSET4__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 5, (IX+d), B  -  DD, CB, d, E8
InstructionInfo instructionInfoSET5__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 5, (IY+d), B  -  FD, CB, d, E8
InstructionInfo instructionInfoSET5__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 6, (IX+d), B  -  DD, CB, d, F0
InstructionInfo instructionInfoSET6__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 6, (IY+d), B  -  FD, CB, d, F0
InstructionInfo instructionInfoSET6__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 7, (IX+d), B  -  DD, CB, d, F8
InstructionInfo instructionInfoSET7__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 7, (IY+d), B  -  FD, CB, d, F8
InstructionInfo instructionInfoSET7__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 0, (IX+d), C  -  DD, CB, d, C1
InstructionInfo instructionInfoSET0__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// SET 1, (IX+d), C  -  DD, CB, d, C9
InstructionInfo instructionInfoSET1__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 1, (IY+d), C  -  FD, CB, d, C9
InstructionInfo instructionInfoSET1__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 2, (IX+d), C  -  DD, CB, d, D1
InstructionInfo instructionInfoSET2__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 2, (IY+d), C  -  FD, CB, d, D1
InstructionInfo instructionInfoSET2__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 3, (IX+d), C  -  DD, CB, d, D9
InstructionInfo instructionInfoSET3__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 3, (IY+d), C  -  FD, CB, d, D9
InstructionInfo instructionInfoSET3__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 4, (IX+d), C  -  DD, CB, d, E1
InstructionInfo instructionInfoSET4__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 4, (IY+d), C  -  FD, CB, d, E1
InstructionInfo instructionInfoSET4__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 5, (IX+d), C  -  DD, CB, d, E9
InstructionInfo instructionInfoSET5__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 5, (IY+d), C  -  FD, CB, d, E9
InstructionInfo instructionInfoSET5__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 6, (IX+d), C  -  DD, CB, d, F1
InstructionInfo instructionInfoSET6__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 6, (IY+d), C  -  FD, CB, d, F1
InstructionInfo instructionInfoSET6__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 7, (IX+d), C  -  DD, CB, d, F9
InstructionInfo instructionInfoSET7__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 7, (IY+d), C  -  FD, CB, d, F9
InstructionInfo instructionInfoSET7__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 0, (IX+d), D  -  DD, CB, d, C2
InstructionInfo instructionInfoSET0__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// SET 1, (IX+d), D  -  DD, CB, d, CA
InstructionInfo instructionInfoSET1__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 1, (IY+d), D  -  FD, CB, d, CA
InstructionInfo instructionInfoSET1__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 2, (IX+d), D  -  DD, CB, d, D2
InstructionInfo instructionInfoSET2__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 2, (IY+d), D  -  FD, CB, d, D2
InstructionInfo instructionInfoSET2__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 3, (IX+d), D  -  DD, CB, d, DA
InstructionInfo instructionInfoSET3__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 3, (IY+d), D  -  FD, CB, d, DA
InstructionInfo instructionInfoSET3__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 4, (IX+d), D  -  DD, CB, d, E2
InstructionInfo instructionInfoSET4__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 4, (IY+d), D  -  FD, CB, d, E2
InstructionInfo instructionInfoSET4__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 5, (IX+d), D  -  DD, CB, d, EA
InstructionInfo instructionInfoSET5__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 5, (IY+d), D  -  FD, CB, d, EA
InstructionInfo instructionInfoSET5__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 6, (IX+d), D  -  DD, CB, d, F2
InstructionInfo instructionInfoSET6__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 6, (IY+d), D  -  FD, CB, d, F2
InstructionInfo instructionInfoSET6__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 7, (IX+d), D  -  DD, CB, d, FA
InstructionInfo instructionInfoSET7__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 7, (IY+d), D  -  FD, CB, d, FA
InstructionInfo instructionInfoSET7__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 0, (IX+d), E  -  DD, CB, d, C3
InstructionInfo instructionInfoSET0__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// SET 1, (IX+d), E  -  DD, CB, d, CB
InstructionInfo instructionInfoSET1__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 1, (IY+d), E  -  FD, CB, d, CB
InstructionInfo instructionInfoSET1__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 2, (IX+d), E  -  DD, CB, d, D3
InstructionInfo instructionInfoSET2__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 2, (IY+d), E  -  FD, CB, d, D3
InstructionInfo instructionInfoSET2__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 3, (IX+d), E  -  DD, CB, d, DB
InstructionInfo instructionInfoSET3__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 3, (IY+d), E  -  FD, CB, d, DB
InstructionInfo instructionInfoSET3__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 4, (IX+d), E  -  DD, CB, d, E3
InstructionInfo instructionInfoSET4__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 4, (IY+d), E  -  FD, CB, d, E3
InstructionInfo instructionInfoSET4__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 5, (IX+d), E  -  DD, CB, d, EB
InstructionInfo instructionInfoSET5__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 5, (IY+d), E  -  FD, CB, d, EB
InstructionInfo instructionInfoSET5__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 6, (IX+d), E  -  DD, CB, d, F3
InstructionInfo instructionInfoSET6__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 6, (IY+d), E  -  FD, CB, d, F3
InstructionInfo instructionInfoSET6__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 7, (IX+d), E  -  DD, CB, d, FB
InstructionInfo instructionInfoSET7__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 7, (IY+d), E  -  FD, CB, d, FB
InstructionInfo instructionInfoSET7__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 0, (IX+d), H  -  DD, CB, d, C4
InstructionInfo instructionInfoSET0__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// SET 1, (IX+d), H  -  DD, CB, d, CC
InstructionInfo instructionInfoSET1__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 1, (IY+d), H  -  FD, CB, d, CC
InstructionInfo instructionInfoSET1__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 2, (IX+d), H  -  DD, CB, d, D4
InstructionInfo instructionInfoSET2__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 2, (IY+d), H  -  FD, CB, d, D4
InstructionInfo instructionInfoSET2__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 3, (IX+d), H  -  DD, CB, d, DC
InstructionInfo instructionInfoSET3__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 3, (IY+d), H  -  FD, CB, d, DC
InstructionInfo instructionInfoSET3__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 4, (IX+d), H  -  DD, CB, d, E4
InstructionInfo instructionInfoSET4__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 4, (IY+d), H  -  FD, CB, d, E4
InstructionInfo instructionInfoSET4__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 5, (IX+d), H  -  DD, CB, d, EC
InstructionInfo instructionInfoSET5__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 5, (IY+d), H  -  FD, CB, d, EC
InstructionInfo instructionInfoSET5__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 6, (IX+d), H  -  DD, CB, d, F4
InstructionInfo instructionInfoSET6__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 6, (IY+d), H  -  FD, CB, d, F4
InstructionInfo instructionInfoSET6__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 7, (IX+d), H  -  DD, CB, d, FC
InstructionInfo instructionInfoSET7__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 7, (IY+d), H  -  FD, CB, d, FC
InstructionInfo instructionInfoSET7__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 0, (IX+d), L  -  DD, CB, d, C5
InstructionInfo instructionInfoSET0__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// SET 1, (IX+d), L  -  DD, CB, d, CD
InstructionInfo instructionInfoSET1__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 1, (IY+d), L  -  FD, CB, d, CD
InstructionInfo instructionInfoSET1__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// SET 2, (IX+d), L  -  DD, CB, d, D5
InstructionInfo instructionInfoSET2__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 2, (IY+d), L  -  FD, CB, d, D5
InstructionInfo instructionInfoSET2__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// SET 3, (IX+d), L  -  DD, CB, d, DD
InstructionInfo instructionInfoSET3__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 3, (IY+d), L  -  FD, CB, d, DD
InstructionInfo instructionInfoSET3__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// SET 4, (IX+d), L  -  DD, CB, d, E5
InstructionInfo instructionInfoSET4__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 4, (IY+d), L  -  FD, CB, d, E5
InstructionInfo instructionInfoSET4__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// SET 5, (IX+d), L  -  DD, CB, d, ED
InstructionInfo instructionInfoSET5__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 5, (IY+d), L  -  FD, CB, d, ED
InstructionInfo instructionInfoSET5__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// SET 6, (IX+d), L  -  DD, CB, d, F5
InstructionInfo instructionInfoSET6__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 6, (IY+d), L  -  FD, CB, d, F5
InstructionInfo instructionInfoSET6__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// SET 7, (IX+d), L  -  DD, CB, d, FD
InstructionInfo instructionInfoSET7__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// SET 7, (IY+d), L  -  FD, CB, d, FD
InstructionInfo instructionInfoSET7__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_SETb__ex_d__r_ex4_OD },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 0, A  -  CB, 87
InstructionInfo instructionInfoRES0_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 7 },
    }
};

// RES 1, A  -  CB, 8F
InstructionInfo instructionInfoRES1_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 7 },
    }
};

// RES 2, A  -  CB, 97
InstructionInfo instructionInfoRES2_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 7 },
    }
};

// RES 3, A  -  CB, 9F
InstructionInfo instructionInfoRES3_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 7 },
    }
};

// RES 4, A  -  CB, A7
InstructionInfo instructionInfoRES4_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 7 },
    }
};

// RES 5, A  -  CB, AF
InstructionInfo instructionInfoRES5_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 7 },
    }
};

// RES 6, A  -  CB, B7
InstructionInfo instructionInfoRES6_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 7 },
    }
};

// RES 7, A  -  CB, BF
InstructionInfo instructionInfoRES7_A_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 7 },
    }
};

// RES 0, B  -  CB, 80
InstructionInfo instructionInfoRES0_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 0 },
    }
};

// RES 1, B  -  CB, 88
InstructionInfo instructionInfoRES1_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 0 },
    }
};

// RES 2, B  -  CB, 90
InstructionInfo instructionInfoRES2_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 0 },
    }
};

// RES 3, B  -  CB, 98
InstructionInfo instructionInfoRES3_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 0 },
    }
};

// RES 4, B  -  CB, A0
InstructionInfo instructionInfoRES4_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 0 },
    }
};

// RES 5, B  -  CB, A8
InstructionInfo instructionInfoRES5_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 0 },
    }
};

// RES 6, B  -  CB, B0
InstructionInfo instructionInfoRES6_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 0 },
    }
};

// RES 7, B  -  CB, B8
InstructionInfo instructionInfoRES7_B_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 0 },
    }
};

// RES 0, C  -  CB, 81
InstructionInfo instructionInfoRES0_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 1 },
    }
};

// RES 1, C  -  CB, 89
InstructionInfo instructionInfoRES1_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 1 },
    }
};

// RES 2, C  -  CB, 91
InstructionInfo instructionInfoRES2_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 1 },
    }
};

// RES 3, C  -  CB, 99
InstructionInfo instructionInfoRES3_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 1 },
    }
};

// RES 4, C  -  CB, A1
InstructionInfo instructionInfoRES4_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 1 },
    }
};

// RES 5, C  -  CB, A9
InstructionInfo instructionInfoRES5_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 1 },
    }
};

// RES 6, C  -  CB, B1
InstructionInfo instructionInfoRES6_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 1 },
    }
};

// RES 7, C  -  CB, B9
InstructionInfo instructionInfoRES7_C_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 1 },
    }
};

// RES 0, D  -  CB, 82
InstructionInfo instructionInfoRES0_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 2 },
    }
};

// RES 1, D  -  CB, 8A
InstructionInfo instructionInfoRES1_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 2 },
    }
};

// RES 2, D  -  CB, 92
InstructionInfo instructionInfoRES2_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 2 },
    }
};

// RES 3, D  -  CB, 9A
InstructionInfo instructionInfoRES3_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 2 },
    }
};

// RES 4, D  -  CB, A2
InstructionInfo instructionInfoRES4_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 2 },
    }
};

// RES 5, D  -  CB, AA
InstructionInfo instructionInfoRES5_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 2 },
    }
};

// RES 6, D  -  CB, B2
InstructionInfo instructionInfoRES6_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 2 },
    }
};

// RES 7, D  -  CB, BA
InstructionInfo instructionInfoRES7_D_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 2 },
    }
};

// RES 0, E  -  CB, 83
InstructionInfo instructionInfoRES0_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 3 },
    }
};

// RES 1, E  -  CB, 8B
InstructionInfo instructionInfoRES1_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 3 },
    }
};

// RES 2, E  -  CB, 93
InstructionInfo instructionInfoRES2_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 3 },
    }
};

// RES 3, E  -  CB, 9B
InstructionInfo instructionInfoRES3_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 3 },
    }
};

// RES 4, E  -  CB, A3
InstructionInfo instructionInfoRES4_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 3 },
    }
};

// RES 5, E  -  CB, AB
InstructionInfo instructionInfoRES5_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 3 },
    }
};

// RES 6, E  -  CB, B3
InstructionInfo instructionInfoRES6_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 3 },
    }
};

// RES 7, E  -  CB, BB
InstructionInfo instructionInfoRES7_E_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 3 },
    }
};

// RES 0, H  -  CB, 84
InstructionInfo instructionInfoRES0_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 4 },
    }
};

// RES 1, H  -  CB, 8C
InstructionInfo instructionInfoRES1_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 4 },
    }
};

// RES 2, H  -  CB, 94
InstructionInfo instructionInfoRES2_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 4 },
    }
};

// RES 3, H  -  CB, 9C
InstructionInfo instructionInfoRES3_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 4 },
    }
};

// RES 4, H  -  CB, A4
InstructionInfo instructionInfoRES4_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 4 },
    }
};

// RES 5, H  -  CB, AC
InstructionInfo instructionInfoRES5_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 4 },
    }
};

// RES 6, H  -  CB, B4
InstructionInfo instructionInfoRES6_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 4 },
    }
};

// RES 7, H  -  CB, BC
InstructionInfo instructionInfoRES7_H_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 4 },
    }
};

// RES 0, L  -  CB, 85
InstructionInfo instructionInfoRES0_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::Registers8, 5 },
    }
};

// RES 1, L  -  CB, 8D
InstructionInfo instructionInfoRES1_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::Registers8, 5 },
    }
};

// RES 2, L  -  CB, 95
InstructionInfo instructionInfoRES2_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::Registers8, 5 },
    }
};

// RES 3, L  -  CB, 9D
InstructionInfo instructionInfoRES3_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::Registers8, 5 },
    }
};

// RES 4, L  -  CB, A5
InstructionInfo instructionInfoRES4_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::Registers8, 5 },
    }
};

// RES 5, L  -  CB, AD
InstructionInfo instructionInfoRES5_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::Registers8, 5 },
    }
};

// RES 6, L  -  CB, B5
InstructionInfo instructionInfoRES6_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::Registers8, 5 },
    }
};

// RES 7, L  -  CB, BD
InstructionInfo instructionInfoRES7_L_CB2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::Registers8, 5 },
    }
};

// RES 0, (HL)  -  CB, 86
InstructionInfo instructionInfoRES0__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// RES 1, (HL)  -  CB, 8E
InstructionInfo instructionInfoRES1__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 2, (HL)  -  CB, 96
InstructionInfo instructionInfoRES2__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 3, (HL)  -  CB, 9E
InstructionInfo instructionInfoRES3__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 4, (HL)  -  CB, A6
InstructionInfo instructionInfoRES4__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 5, (HL)  -  CB, AE
InstructionInfo instructionInfoRES5__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 6, (HL)  -  CB, B6
InstructionInfo instructionInfoRES6__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 7, (HL)  -  CB, BE
InstructionInfo instructionInfoRES7__HL__CB2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 0, (IX+d)  -  DD, CB, d, 86
InstructionInfo instructionInfoRES0__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// RES 0, (IY+d)  -  FD, CB, d, 86
InstructionInfo instructionInfoRES0__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// RES 1, (IX+d)  -  DD, CB, d, 8E
InstructionInfo instructionInfoRES1__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 1, (IY+d)  -  FD, CB, d, 8E
InstructionInfo instructionInfoRES1__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 2, (IX+d)  -  DD, CB, d, 96
InstructionInfo instructionInfoRES2__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 2, (IY+d)  -  FD, CB, d, 96
InstructionInfo instructionInfoRES2__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 3, (IX+d)  -  DD, CB, d, 9E
InstructionInfo instructionInfoRES3__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 3, (IY+d)  -  FD, CB, d, 9E
InstructionInfo instructionInfoRES3__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 4, (IX+d)  -  DD, CB, d, A6
InstructionInfo instructionInfoRES4__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 4, (IY+d)  -  FD, CB, d, A6
InstructionInfo instructionInfoRES4__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 5, (IX+d)  -  DD, CB, d, AE
InstructionInfo instructionInfoRES5__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 5, (IY+d)  -  FD, CB, d, AE
InstructionInfo instructionInfoRES5__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 6, (IX+d)  -  DD, CB, d, B6
InstructionInfo instructionInfoRES6__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 6, (IY+d)  -  FD, CB, d, B6
InstructionInfo instructionInfoRES6__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 7, (IX+d)  -  DD, CB, d, BE
InstructionInfo instructionInfoRES7__IX_d__DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 7, (IY+d)  -  FD, CB, d, BE
InstructionInfo instructionInfoRES7__IY_d__FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__ex4_OD },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 0, (IX+d), A  -  DD, CB, d, 87
InstructionInfo instructionInfoRES0__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// RES 1, (IX+d), A  -  DD, CB, d, 8F
InstructionInfo instructionInfoRES1__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 1, (IY+d), A  -  FD, CB, d, 8F
InstructionInfo instructionInfoRES1__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 2, (IX+d), A  -  DD, CB, d, 97
InstructionInfo instructionInfoRES2__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 2, (IY+d), A  -  FD, CB, d, 97
InstructionInfo instructionInfoRES2__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 3, (IX+d), A  -  DD, CB, d, 9F
InstructionInfo instructionInfoRES3__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 3, (IY+d), A  -  FD, CB, d, 9F
InstructionInfo instructionInfoRES3__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 4, (IX+d), A  -  DD, CB, d, A7
InstructionInfo instructionInfoRES4__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 4, (IY+d), A  -  FD, CB, d, A7
InstructionInfo instructionInfoRES4__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 5, (IX+d), A  -  DD, CB, d, AF
InstructionInfo instructionInfoRES5__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 5, (IY+d), A  -  FD, CB, d, AF
InstructionInfo instructionInfoRES5__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 6, (IX+d), A  -  DD, CB, d, B7
InstructionInfo instructionInfoRES6__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 6, (IY+d), A  -  FD, CB, d, B7
InstructionInfo instructionInfoRES6__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 7, (IX+d), A  -  DD, CB, d, BF
InstructionInfo instructionInfoRES7__IX_d__A_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 7, (IY+d), A  -  FD, CB, d, BF
InstructionInfo instructionInfoRES7__IY_d__A_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 0, (IX+d), B  -  DD, CB, d, 80
InstructionInfo instructionInfoRES0__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// RES 1, (IX+d), B  -  DD, CB, d, 88
InstructionInfo instructionInfoRES1__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 1, (IY+d), B  -  FD, CB, d, 88
InstructionInfo instructionInfoRES1__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 2, (IX+d), B  -  DD, CB, d, 90
InstructionInfo instructionInfoRES2__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 2, (IY+d), B  -  FD, CB, d, 90
InstructionInfo instructionInfoRES2__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 3, (IX+d), B  -  DD, CB, d, 98
InstructionInfo instructionInfoRES3__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 3, (IY+d), B  -  FD, CB, d, 98
InstructionInfo instructionInfoRES3__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 4, (IX+d), B  -  DD, CB, d, A0
InstructionInfo instructionInfoRES4__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 4, (IY+d), B  -  FD, CB, d, A0
InstructionInfo instructionInfoRES4__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 5, (IX+d), B  -  DD, CB, d, A8
InstructionInfo instructionInfoRES5__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 5, (IY+d), B  -  FD, CB, d, A8
InstructionInfo instructionInfoRES5__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 6, (IX+d), B  -  DD, CB, d, B0
InstructionInfo instructionInfoRES6__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 6, (IY+d), B  -  FD, CB, d, B0
InstructionInfo instructionInfoRES6__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 7, (IX+d), B  -  DD, CB, d, B8
InstructionInfo instructionInfoRES7__IX_d__B_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 7, (IY+d), B  -  FD, CB, d, B8
InstructionInfo instructionInfoRES7__IY_d__B_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 0, (IX+d), C  -  DD, CB, d, 81
InstructionInfo instructionInfoRES0__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// RES 1, (IX+d), C  -  DD, CB, d, 89
InstructionInfo instructionInfoRES1__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 1, (IY+d), C  -  FD, CB, d, 89
InstructionInfo instructionInfoRES1__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 2, (IX+d), C  -  DD, CB, d, 91
InstructionInfo instructionInfoRES2__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 2, (IY+d), C  -  FD, CB, d, 91
InstructionInfo instructionInfoRES2__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 3, (IX+d), C  -  DD, CB, d, 99
InstructionInfo instructionInfoRES3__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 3, (IY+d), C  -  FD, CB, d, 99
InstructionInfo instructionInfoRES3__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 4, (IX+d), C  -  DD, CB, d, A1
InstructionInfo instructionInfoRES4__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 4, (IY+d), C  -  FD, CB, d, A1
InstructionInfo instructionInfoRES4__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 5, (IX+d), C  -  DD, CB, d, A9
InstructionInfo instructionInfoRES5__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 5, (IY+d), C  -  FD, CB, d, A9
InstructionInfo instructionInfoRES5__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 6, (IX+d), C  -  DD, CB, d, B1
InstructionInfo instructionInfoRES6__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 6, (IY+d), C  -  FD, CB, d, B1
InstructionInfo instructionInfoRES6__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 7, (IX+d), C  -  DD, CB, d, B9
InstructionInfo instructionInfoRES7__IX_d__C_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 7, (IY+d), C  -  FD, CB, d, B9
InstructionInfo instructionInfoRES7__IY_d__C_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 0, (IX+d), D  -  DD, CB, d, 82
InstructionInfo instructionInfoRES0__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// RES 1, (IX+d), D  -  DD, CB, d, 8A
InstructionInfo instructionInfoRES1__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 1, (IY+d), D  -  FD, CB, d, 8A
InstructionInfo instructionInfoRES1__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 2, (IX+d), D  -  DD, CB, d, 92
InstructionInfo instructionInfoRES2__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 2, (IY+d), D  -  FD, CB, d, 92
InstructionInfo instructionInfoRES2__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 3, (IX+d), D  -  DD, CB, d, 9A
InstructionInfo instructionInfoRES3__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 3, (IY+d), D  -  FD, CB, d, 9A
InstructionInfo instructionInfoRES3__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 4, (IX+d), D  -  DD, CB, d, A2
InstructionInfo instructionInfoRES4__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 4, (IY+d), D  -  FD, CB, d, A2
InstructionInfo instructionInfoRES4__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 5, (IX+d), D  -  DD, CB, d, AA
InstructionInfo instructionInfoRES5__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 5, (IY+d), D  -  FD, CB, d, AA
InstructionInfo instructionInfoRES5__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 6, (IX+d), D  -  DD, CB, d, B2
InstructionInfo instructionInfoRES6__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 6, (IY+d), D  -  FD, CB, d, B2
InstructionInfo instructionInfoRES6__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 7, (IX+d), D  -  DD, CB, d, BA
InstructionInfo instructionInfoRES7__IX_d__D_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 7, (IY+d), D  -  FD, CB, d, BA
InstructionInfo instructionInfoRES7__IY_d__D_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 0, (IX+d), E  -  DD, CB, d, 83
InstructionInfo instructionInfoRES0__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// RES 1, (IX+d), E  -  DD, CB, d, 8B
InstructionInfo instructionInfoRES1__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 1, (IY+d), E  -  FD, CB, d, 8B
InstructionInfo instructionInfoRES1__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 2, (IX+d), E  -  DD, CB, d, 93
InstructionInfo instructionInfoRES2__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 2, (IY+d), E  -  FD, CB, d, 93
InstructionInfo instructionInfoRES2__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 3, (IX+d), E  -  DD, CB, d, 9B
InstructionInfo instructionInfoRES3__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 3, (IY+d), E  -  FD, CB, d, 9B
InstructionInfo instructionInfoRES3__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 4, (IX+d), E  -  DD, CB, d, A3
InstructionInfo instructionInfoRES4__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 4, (IY+d), E  -  FD, CB, d, A3
InstructionInfo instructionInfoRES4__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 5, (IX+d), E  -  DD, CB, d, AB
InstructionInfo instructionInfoRES5__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 5, (IY+d), E  -  FD, CB, d, AB
InstructionInfo instructionInfoRES5__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 6, (IX+d), E  -  DD, CB, d, B3
InstructionInfo instructionInfoRES6__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 6, (IY+d), E  -  FD, CB, d, B3
InstructionInfo instructionInfoRES6__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 7, (IX+d), E  -  DD, CB, d, BB
InstructionInfo instructionInfoRES7__IX_d__E_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 7, (IY+d), E  -  FD, CB, d, BB
InstructionInfo instructionInfoRES7__IY_d__E_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 0, (IX+d), H  -  DD, CB, d, 84
InstructionInfo instructionInfoRES0__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// RES 1, (IX+d), H  -  DD, CB, d, 8C
InstructionInfo instructionInfoRES1__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 1, (IY+d), H  -  FD, CB, d, 8C
InstructionInfo instructionInfoRES1__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 2, (IX+d), H  -  DD, CB, d, 94
InstructionInfo instructionInfoRES2__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 2, (IY+d), H  -  FD, CB, d, 94
InstructionInfo instructionInfoRES2__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 3, (IX+d), H  -  DD, CB, d, 9C
InstructionInfo instructionInfoRES3__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 3, (IY+d), H  -  FD, CB, d, 9C
InstructionInfo instructionInfoRES3__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 4, (IX+d), H  -  DD, CB, d, A4
InstructionInfo instructionInfoRES4__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 4, (IY+d), H  -  FD, CB, d, A4
InstructionInfo instructionInfoRES4__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 5, (IX+d), H  -  DD, CB, d, AC
InstructionInfo instructionInfoRES5__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 5, (IY+d), H  -  FD, CB, d, AC
InstructionInfo instructionInfoRES5__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 6, (IX+d), H  -  DD, CB, d, B4
InstructionInfo instructionInfoRES6__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 6, (IY+d), H  -  FD, CB, d, B4
InstructionInfo instructionInfoRES6__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 7, (IX+d), H  -  DD, CB, d, BC
InstructionInfo instructionInfoRES7__IX_d__H_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 7, (IY+d), H  -  FD, CB, d, BC
InstructionInfo instructionInfoRES7__IY_d__H_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 0, (IX+d), L  -  DD, CB, d, 85
InstructionInfo instructionInfoRES0__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 0 },
        { VariableType::None },
    }
};

// RES 1, (IX+d), L  -  DD, CB, d, 8D
InstructionInfo instructionInfoRES1__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 1, (IY+d), L  -  FD, CB, d, 8D
InstructionInfo instructionInfoRES1__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 1 },
        { VariableType::None },
    }
};

// RES 2, (IX+d), L  -  DD, CB, d, 95
InstructionInfo instructionInfoRES2__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 2, (IY+d), L  -  FD, CB, d, 95
InstructionInfo instructionInfoRES2__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 2 },
        { VariableType::None },
    }
};

// RES 3, (IX+d), L  -  DD, CB, d, 9D
InstructionInfo instructionInfoRES3__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 3, (IY+d), L  -  FD, CB, d, 9D
InstructionInfo instructionInfoRES3__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 3 },
        { VariableType::None },
    }
};

// RES 4, (IX+d), L  -  DD, CB, d, A5
InstructionInfo instructionInfoRES4__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 4, (IY+d), L  -  FD, CB, d, A5
InstructionInfo instructionInfoRES4__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 4 },
        { VariableType::None },
    }
};

// RES 5, (IX+d), L  -  DD, CB, d, AD
InstructionInfo instructionInfoRES5__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 5, (IY+d), L  -  FD, CB, d, AD
InstructionInfo instructionInfoRES5__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 5 },
        { VariableType::None },
    }
};

// RES 6, (IX+d), L  -  DD, CB, d, B5
InstructionInfo instructionInfoRES6__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 6, (IY+d), L  -  FD, CB, d, B5
InstructionInfo instructionInfoRES6__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 6 },
        { VariableType::None },
    }
};

// RES 7, (IX+d), L  -  DD, CB, d, BD
InstructionInfo instructionInfoRES7__IX_d__L_DD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// RES 7, (IY+d), L  -  FD, CB, d, BD
InstructionInfo instructionInfoRES7__IY_d__L_FD4 =
{
    6,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_RESb__ex_d__r_ex4_OD },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { VariableType::Bits8, 7 },
        { VariableType::None },
    }
};

// JP nn  -  C3, n, n
InstructionInfo instructionInfoJPnn_3 =
{
    3,
    0,
    {
        { 4, OnClock_JPnn_3_OF },
        { 3, OnClock_JPnn_3_ODl },
        { 3, OnClock_JPnn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// JP NZ, nn  -  C2, n, n
InstructionInfo instructionInfoJPNZ_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 0 },
        { VariableType::None },
    }
};

// JP Z, nn  -  CA, n, n
InstructionInfo instructionInfoJPZ_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 1 },
        { VariableType::None },
    }
};

// JP NC, nn  -  D2, n, n
InstructionInfo instructionInfoJPNC_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 2 },
        { VariableType::None },
    }
};

// JP C, nn  -  DA, n, n
InstructionInfo instructionInfoJPC_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 3 },
        { VariableType::None },
    }
};

// JP PO, nn  -  E2, n, n
InstructionInfo instructionInfoJPPO_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 4 },
        { VariableType::None },
    }
};

// JP PE, nn  -  EA, n, n
InstructionInfo instructionInfoJPPE_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 5 },
        { VariableType::None },
    }
};

// JP P, nn  -  F2, n, n
InstructionInfo instructionInfoJPP_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 6 },
        { VariableType::None },
    }
};

// JP M, nn  -  FA, n, n
InstructionInfo instructionInfoJPM_nn_3 =
{
    3,
    0,
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 7 },
        { VariableType::None },
    }
};

// JR e  -  18, e
InstructionInfo instructionInfoJRe_2 =
{
    3,
    0,
    {
        { 4, OnClock_JRe_2_OF },
        { 3, OnClock_JRe_2_OD },
        { 5, OnClock_JRe_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// JR NZ, e  -  20, e
InstructionInfo instructionInfoJRNZ_e_2 =
{
    3,
    2,
    {
        { 4, OnClock_JRj_e_2_OF },
        { 3, OnClock_JRj_e_2_OD },
        { 5, OnClock_JRj_e_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition4, 0 },
        { VariableType::None },
    }
};

// JR Z, e  -  28, e
InstructionInfo instructionInfoJRZ_e_2 =
{
    3,
    2,
    {
        { 4, OnClock_JRj_e_2_OF },
        { 3, OnClock_JRj_e_2_OD },
        { 5, OnClock_JRj_e_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition4, 1 },
        { VariableType::None },
    }
};

// JR NC, e  -  30, e
InstructionInfo instructionInfoJRNC_e_2 =
{
    3,
    2,
    {
        { 4, OnClock_JRj_e_2_OF },
        { 3, OnClock_JRj_e_2_OD },
        { 5, OnClock_JRj_e_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition4, 2 },
        { VariableType::None },
    }
};

// JR C, e  -  38, e
InstructionInfo instructionInfoJRC_e_2 =
{
    3,
    2,
    {
        { 4, OnClock_JRj_e_2_OF },
        { 3, OnClock_JRj_e_2_OD },
        { 5, OnClock_JRj_e_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition4, 3 },
        { VariableType::None },
    }
};

// JP HL  -  E9
InstructionInfo instructionInfoJPHL_1 =
{
    1,
    0,
    {
        { 4, OnClock_JPHL_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// JP IX  -  DD, E9
InstructionInfo instructionInfoJPIX_DD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_JPex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// JP IY  -  FD, E9
InstructionInfo instructionInfoJPIY_FD2 =
{
    2,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_JPex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// DJNZ e  -  10, e
InstructionInfo instructionInfoDJNZe_2 =
{
    3,
    2,
    {
        { 5, OnClock_DJNZe_2_OF },
        { 3, OnClock_DJNZe_2_OD },
        { 5, OnClock_DJNZe_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CALL nn  -  CD, n, n
InstructionInfo instructionInfoCALLnn_3 =
{
    5,
    0,
    {
        { 4, OnClock_CALLnn_3_OF },
        { 3, OnClock_CALLnn_3_ODl },
        { 4, OnClock_CALLnn_3_ODh },
        { 3, OnClock_CALLnn_3_SWh },
        { 3, OnClock_CALLnn_3_SWl },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// CALL NZ, nn  -  C4, n, n
InstructionInfo instructionInfoCALLNZ_nn_3 =
{
    5,
    3,
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 0 },
        { VariableType::None },
    }
};

// CALL Z, nn  -  CC, n, n
InstructionInfo instructionInfoCALLZ_nn_3 =
{
    5,
    3,
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 1 },
        { VariableType::None },
    }
};

// CALL NC, nn  -  D4, n, n
InstructionInfo instructionInfoCALLNC_nn_3 =
{
    5,
    3,
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 2 },
        { VariableType::None },
    }
};

// CALL C, nn  -  DC, n, n
InstructionInfo instructionInfoCALLC_nn_3 =
{
    5,
    3,
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 3 },
        { VariableType::None },
    }
};

// CALL PO, nn  -  E4, n, n
InstructionInfo instructionInfoCALLPO_nn_3 =
{
    5,
    3,
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 4 },
        { VariableType::None },
    }
};

// CALL PE, nn  -  EC, n, n
InstructionInfo instructionInfoCALLPE_nn_3 =
{
    5,
    3,
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 5 },
        { VariableType::None },
    }
};

// CALL P, nn  -  F4, n, n
InstructionInfo instructionInfoCALLP_nn_3 =
{
    5,
    3,
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 6 },
        { VariableType::None },
    }
};

// CALL M, nn  -  FC, n, n
InstructionInfo instructionInfoCALLM_nn_3 =
{
    5,
    3,
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 7 },
        { VariableType::None },
    }
};

// RET  -  C9
InstructionInfo instructionInfoRET_1 =
{
    3,
    0,
    {
        { 4, OnClock_RET_1_OF },
        { 3, OnClock_SRh },
        { 3, OnClock_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RET NZ  -  C0
InstructionInfo instructionInfoRETNZ_1 =
{
    3,
    1,
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 0 },
        { VariableType::None },
    }
};

// RET Z  -  C8
InstructionInfo instructionInfoRETZ_1 =
{
    3,
    1,
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 1 },
        { VariableType::None },
    }
};

// RET NC  -  D0
InstructionInfo instructionInfoRETNC_1 =
{
    3,
    1,
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 2 },
        { VariableType::None },
    }
};

// RET C  -  D8
InstructionInfo instructionInfoRETC_1 =
{
    3,
    1,
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 3 },
        { VariableType::None },
    }
};

// RET PO  -  E0
InstructionInfo instructionInfoRETPO_1 =
{
    3,
    1,
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 4 },
        { VariableType::None },
    }
};

// RET PE  -  E8
InstructionInfo instructionInfoRETPE_1 =
{
    3,
    1,
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 5 },
        { VariableType::None },
    }
};

// RET P  -  F0
InstructionInfo instructionInfoRETP_1 =
{
    3,
    1,
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 6 },
        { VariableType::None },
    }
};

// RET M  -  F8
InstructionInfo instructionInfoRETM_1 =
{
    3,
    1,
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Condition8, 7 },
        { VariableType::None },
    }
};

// RETI  -  ED, 4D
InstructionInfo instructionInfoRETI_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RETI_ED2_OF },
        { 3, OnClock_SRh },
        { 3, OnClock_SRl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RETN  -  ED, 45
InstructionInfo instructionInfoRETN_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_RETN_ED2_OF },
        { 3, OnClock_SRh },
        { 3, OnClock_SRl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// RST 00  -  C7
InstructionInfo instructionInfoRST00_1 =
{
    3,
    0,
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RstAddress, 0 },
        { VariableType::None },
    }
};

// RST 08  -  CF
InstructionInfo instructionInfoRST08_1 =
{
    3,
    0,
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RstAddress, 1 },
        { VariableType::None },
    }
};

// RST 10  -  D7
InstructionInfo instructionInfoRST10_1 =
{
    3,
    0,
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RstAddress, 2 },
        { VariableType::None },
    }
};

// RST 18  -  DF
InstructionInfo instructionInfoRST18_1 =
{
    3,
    0,
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RstAddress, 3 },
        { VariableType::None },
    }
};

// RST 20  -  E7
InstructionInfo instructionInfoRST20_1 =
{
    3,
    0,
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RstAddress, 4 },
        { VariableType::None },
    }
};

// RST 28  -  EF
InstructionInfo instructionInfoRST28_1 =
{
    3,
    0,
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RstAddress, 5 },
        { VariableType::None },
    }
};

// RST 30  -  F7
InstructionInfo instructionInfoRST30_1 =
{
    3,
    0,
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RstAddress, 6 },
        { VariableType::None },
    }
};

// RST 38  -  FF
InstructionInfo instructionInfoRST38_1 =
{
    3,
    0,
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::RstAddress, 7 },
        { VariableType::None },
    }
};

// IN A, (n)  -  DB, n
InstructionInfo instructionInfoINA__n__2 =
{
    3,
    0,
    {
        { 4, OnClock_INA__n__2_OF },
        { 3, OnClock_INA__n__2_OD },
        { 4, OnClock_INA__n__2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// IN A, (C)  -  ED, 78
InstructionInfo instructionInfoINA__C__ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// IN B, (C)  -  ED, 40
InstructionInfo instructionInfoINB__C__ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// IN C, (C)  -  ED, 48
InstructionInfo instructionInfoINC__C__ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// IN D, (C)  -  ED, 50
InstructionInfo instructionInfoIND__C__ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// IN E, (C)  -  ED, 58
InstructionInfo instructionInfoINE__C__ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// IN H, (C)  -  ED, 60
InstructionInfo instructionInfoINH__C__ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// IN L, (C)  -  ED, 68
InstructionInfo instructionInfoINL__C__ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// IN (C)  -  ED, 70
InstructionInfo instructionInfoIN_C__ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_IN_C__ED2_OF },
        { 4, OnClock_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// INI  -  ED, A2
InstructionInfo instructionInfoINI_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 5, OnClock_INI_ED2_OF },
        { 3, OnClock_PR },
        { 4, OnClock_INI_ED2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// INIR  -  ED, B2
InstructionInfo instructionInfoINIR_ED2 =
{
    5,
    4,
    {
        { 4, OnClock_OF },
        { 5, OnClock_INIR_ED2_OF },
        { 3, OnClock_PR },
        { 4, OnClock_INIR_ED2_MW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// IND  -  ED, AA
InstructionInfo instructionInfoIND_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 5, OnClock_IND_ED2_OF },
        { 3, OnClock_PR },
        { 4, OnClock_IND_ED2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// INDR  -  ED, BA
InstructionInfo instructionInfoINDR_ED2 =
{
    5,
    4,
    {
        { 4, OnClock_OF },
        { 5, OnClock_INDR_ED2_OF },
        { 3, OnClock_PR },
        { 4, OnClock_INDR_ED2_MW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// OUT (n), A  -  D3, n
InstructionInfo instructionInfoOUT_n__A_2 =
{
    3,
    0,
    {
        { 4, OnClock_OUT_n__A_2_OF },
        { 3, OnClock_OUT_n__A_2_OD },
        { 4, OnClock_OUT_n__A_2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// OUT (C), A  -  ED, 79
InstructionInfo instructionInfoOUT_C__A_ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 7 },
        { VariableType::None },
    }
};

// OUT (C), B  -  ED, 41
InstructionInfo instructionInfoOUT_C__B_ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 0 },
        { VariableType::None },
    }
};

// OUT (C), C  -  ED, 49
InstructionInfo instructionInfoOUT_C__C_ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 1 },
        { VariableType::None },
    }
};

// OUT (C), D  -  ED, 51
InstructionInfo instructionInfoOUT_C__D_ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 2 },
        { VariableType::None },
    }
};

// OUT (C), E  -  ED, 59
InstructionInfo instructionInfoOUT_C__E_ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 3 },
        { VariableType::None },
    }
};

// OUT (C), H  -  ED, 61
InstructionInfo instructionInfoOUT_C__H_ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 4 },
        { VariableType::None },
    }
};

// OUT (C), L  -  ED, 69
InstructionInfo instructionInfoOUT_C__L_ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::Registers8, 5 },
        { VariableType::None },
    }
};

// OUT (C), 0  -  ED, 71
InstructionInfo instructionInfoOUT_C__0_ED2 =
{
    3,
    0,
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__0_ED2_OF },
        { 4, OnClock_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// OUTI  -  ED, A3
InstructionInfo instructionInfoOUTI_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 5, OnClock_OUTI_ED2_OF },
        { 3, OnClock_MR },
        { 4, OnClock_PW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// OTIR  -  ED, B3
InstructionInfo instructionInfoOTIR_ED2 =
{
    5,
    4,
    {
        { 4, OnClock_OF },
        { 5, OnClock_OTIR_ED2_OF },
        { 3, OnClock_MR },
        { 4, OnClock_PW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// OUTD  -  ED, A3
InstructionInfo instructionInfoOUTD_ED2 =
{
    4,
    0,
    {
        { 4, OnClock_OF },
        { 5, OnClock_OUTD_ED2_OF },
        { 3, OnClock_MR },
        { 4, OnClock_PW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

// OTDR  -  ED, BB
InstructionInfo instructionInfoOTDR_ED2 =
{
    5,
    4,
    {
        { 4, OnClock_OF },
        { 5, OnClock_OTDR_ED2_OF },
        { 3, OnClock_MR },
        { 4, OnClock_PW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { VariableType::None },
        { VariableType::None },
    }
};

/**
 *  Generated Source Code
 *  Any changes you make will be lost when the code is regenerated.
 */

#include "InstructionsZ80.h"
#include "FunctionsZ80.h"

// Instructions for the Z80:

// LD A, A   -  LDA_A_1  -  7F
const InstructionInfo instructionInfoLDA_A_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {7} },
    }
};

// LD A, B   -  LDA_B_1  -  78
const InstructionInfo instructionInfoLDA_B_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {0} },
    }
};

// LD A, C   -  LDA_C_1  -  79
const InstructionInfo instructionInfoLDA_C_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {1} },
    }
};

// LD A, D   -  LDA_D_1  -  7A
const InstructionInfo instructionInfoLDA_D_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {2} },
    }
};

// LD A, E   -  LDA_E_1  -  7B
const InstructionInfo instructionInfoLDA_E_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {3} },
    }
};

// LD A, H   -  LDA_H_1  -  7C
const InstructionInfo instructionInfoLDA_H_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {4} },
    }
};

// LD A, L   -  LDA_L_1  -  7D
const InstructionInfo instructionInfoLDA_L_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {5} },
    }
};

// LD B, A   -  LDB_A_1  -  47
const InstructionInfo instructionInfoLDB_A_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {7} },
    }
};

// LD B, B   -  LDB_B_1  -  40
const InstructionInfo instructionInfoLDB_B_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {0} },
    }
};

// LD B, C   -  LDB_C_1  -  41
const InstructionInfo instructionInfoLDB_C_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {1} },
    }
};

// LD B, D   -  LDB_D_1  -  42
const InstructionInfo instructionInfoLDB_D_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {2} },
    }
};

// LD B, E   -  LDB_E_1  -  43
const InstructionInfo instructionInfoLDB_E_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {3} },
    }
};

// LD B, H   -  LDB_H_1  -  44
const InstructionInfo instructionInfoLDB_H_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {4} },
    }
};

// LD B, L   -  LDB_L_1  -  45
const InstructionInfo instructionInfoLDB_L_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {5} },
    }
};

// LD C, A   -  LDC_A_1  -  4F
const InstructionInfo instructionInfoLDC_A_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {7} },
    }
};

// LD C, B   -  LDC_B_1  -  48
const InstructionInfo instructionInfoLDC_B_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {0} },
    }
};

// LD C, C   -  LDC_C_1  -  49
const InstructionInfo instructionInfoLDC_C_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {1} },
    }
};

// LD C, D   -  LDC_D_1  -  4A
const InstructionInfo instructionInfoLDC_D_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {2} },
    }
};

// LD C, E   -  LDC_E_1  -  4B
const InstructionInfo instructionInfoLDC_E_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {3} },
    }
};

// LD C, H   -  LDC_H_1  -  4C
const InstructionInfo instructionInfoLDC_H_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {4} },
    }
};

// LD C, L   -  LDC_L_1  -  4D
const InstructionInfo instructionInfoLDC_L_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {5} },
    }
};

// LD D, A   -  LDD_A_1  -  57
const InstructionInfo instructionInfoLDD_A_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {7} },
    }
};

// LD D, B   -  LDD_B_1  -  50
const InstructionInfo instructionInfoLDD_B_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {0} },
    }
};

// LD D, C   -  LDD_C_1  -  51
const InstructionInfo instructionInfoLDD_C_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {1} },
    }
};

// LD D, D   -  LDD_D_1  -  52
const InstructionInfo instructionInfoLDD_D_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {2} },
    }
};

// LD D, E   -  LDD_E_1  -  53
const InstructionInfo instructionInfoLDD_E_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {3} },
    }
};

// LD D, H   -  LDD_H_1  -  54
const InstructionInfo instructionInfoLDD_H_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {4} },
    }
};

// LD D, L   -  LDD_L_1  -  55
const InstructionInfo instructionInfoLDD_L_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {5} },
    }
};

// LD E, A   -  LDE_A_1  -  5F
const InstructionInfo instructionInfoLDE_A_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {7} },
    }
};

// LD E, B   -  LDE_B_1  -  58
const InstructionInfo instructionInfoLDE_B_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {0} },
    }
};

// LD E, C   -  LDE_C_1  -  59
const InstructionInfo instructionInfoLDE_C_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {1} },
    }
};

// LD E, D   -  LDE_D_1  -  5A
const InstructionInfo instructionInfoLDE_D_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {2} },
    }
};

// LD E, E   -  LDE_E_1  -  5B
const InstructionInfo instructionInfoLDE_E_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {3} },
    }
};

// LD E, H   -  LDE_H_1  -  5C
const InstructionInfo instructionInfoLDE_H_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {4} },
    }
};

// LD E, L   -  LDE_L_1  -  5D
const InstructionInfo instructionInfoLDE_L_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {5} },
    }
};

// LD H, A   -  LDH_A_1  -  67
const InstructionInfo instructionInfoLDH_A_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {7} },
    }
};

// LD H, B   -  LDH_B_1  -  60
const InstructionInfo instructionInfoLDH_B_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {0} },
    }
};

// LD H, C   -  LDH_C_1  -  61
const InstructionInfo instructionInfoLDH_C_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {1} },
    }
};

// LD H, D   -  LDH_D_1  -  62
const InstructionInfo instructionInfoLDH_D_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {2} },
    }
};

// LD H, E   -  LDH_E_1  -  63
const InstructionInfo instructionInfoLDH_E_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {3} },
    }
};

// LD H, H   -  LDH_H_1  -  64
const InstructionInfo instructionInfoLDH_H_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {4} },
    }
};

// LD H, L   -  LDH_L_1  -  65
const InstructionInfo instructionInfoLDH_L_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {5} },
    }
};

// LD L, A   -  LDL_A_1  -  6F
const InstructionInfo instructionInfoLDL_A_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {7} },
    }
};

// LD L, B   -  LDL_B_1  -  68
const InstructionInfo instructionInfoLDL_B_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {0} },
    }
};

// LD L, C   -  LDL_C_1  -  69
const InstructionInfo instructionInfoLDL_C_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {1} },
    }
};

// LD L, D   -  LDL_D_1  -  6A
const InstructionInfo instructionInfoLDL_D_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {2} },
    }
};

// LD L, E   -  LDL_E_1  -  6B
const InstructionInfo instructionInfoLDL_E_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {3} },
    }
};

// LD L, H   -  LDL_H_1  -  6C
const InstructionInfo instructionInfoLDL_H_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {4} },
    }
};

// LD L, L   -  LDL_L_1  -  6D
const InstructionInfo instructionInfoLDL_L_1 =
{
    {
        { 4, OnClock_LDr_s_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {5} },
    }
};

// LD A, A   -  LDA_A_DD2  -  DD, 7F
const InstructionInfo instructionInfoLDA_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {7} },
    }
};

// LD A, B   -  LDA_B_DD2  -  DD, 78
const InstructionInfo instructionInfoLDA_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {0} },
    }
};

// LD A, C   -  LDA_C_DD2  -  DD, 79
const InstructionInfo instructionInfoLDA_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {1} },
    }
};

// LD A, D   -  LDA_D_DD2  -  DD, 7A
const InstructionInfo instructionInfoLDA_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {2} },
    }
};

// LD A, E   -  LDA_E_DD2  -  DD, 7B
const InstructionInfo instructionInfoLDA_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {3} },
    }
};

// LD A, IXh   -  LDA_IXh_DD2  -  DD, 7C
const InstructionInfo instructionInfoLDA_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {4} },
    }
};

// LD A, IXl   -  LDA_IXl_DD2  -  DD, 7D
const InstructionInfo instructionInfoLDA_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {5} },
    }
};

// LD B, A   -  LDB_A_DD2  -  DD, 47
const InstructionInfo instructionInfoLDB_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {7} },
    }
};

// LD B, B   -  LDB_B_DD2  -  DD, 40
const InstructionInfo instructionInfoLDB_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {0} },
    }
};

// LD B, C   -  LDB_C_DD2  -  DD, 41
const InstructionInfo instructionInfoLDB_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {1} },
    }
};

// LD B, D   -  LDB_D_DD2  -  DD, 42
const InstructionInfo instructionInfoLDB_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {2} },
    }
};

// LD B, E   -  LDB_E_DD2  -  DD, 43
const InstructionInfo instructionInfoLDB_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {3} },
    }
};

// LD B, IXh   -  LDB_IXh_DD2  -  DD, 44
const InstructionInfo instructionInfoLDB_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {4} },
    }
};

// LD B, IXl   -  LDB_IXl_DD2  -  DD, 45
const InstructionInfo instructionInfoLDB_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {5} },
    }
};

// LD C, A   -  LDC_A_DD2  -  DD, 4F
const InstructionInfo instructionInfoLDC_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {7} },
    }
};

// LD C, B   -  LDC_B_DD2  -  DD, 48
const InstructionInfo instructionInfoLDC_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {0} },
    }
};

// LD C, C   -  LDC_C_DD2  -  DD, 49
const InstructionInfo instructionInfoLDC_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {1} },
    }
};

// LD C, D   -  LDC_D_DD2  -  DD, 4A
const InstructionInfo instructionInfoLDC_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {2} },
    }
};

// LD C, E   -  LDC_E_DD2  -  DD, 4B
const InstructionInfo instructionInfoLDC_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {3} },
    }
};

// LD C, IXh   -  LDC_IXh_DD2  -  DD, 4C
const InstructionInfo instructionInfoLDC_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {4} },
    }
};

// LD C, IXl   -  LDC_IXl_DD2  -  DD, 4D
const InstructionInfo instructionInfoLDC_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {5} },
    }
};

// LD D, A   -  LDD_A_DD2  -  DD, 57
const InstructionInfo instructionInfoLDD_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {7} },
    }
};

// LD D, B   -  LDD_B_DD2  -  DD, 50
const InstructionInfo instructionInfoLDD_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {0} },
    }
};

// LD D, C   -  LDD_C_DD2  -  DD, 51
const InstructionInfo instructionInfoLDD_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {1} },
    }
};

// LD D, D   -  LDD_D_DD2  -  DD, 52
const InstructionInfo instructionInfoLDD_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {2} },
    }
};

// LD D, E   -  LDD_E_DD2  -  DD, 53
const InstructionInfo instructionInfoLDD_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {3} },
    }
};

// LD D, IXh   -  LDD_IXh_DD2  -  DD, 54
const InstructionInfo instructionInfoLDD_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {4} },
    }
};

// LD D, IXl   -  LDD_IXl_DD2  -  DD, 55
const InstructionInfo instructionInfoLDD_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {5} },
    }
};

// LD E, A   -  LDE_A_DD2  -  DD, 5F
const InstructionInfo instructionInfoLDE_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {7} },
    }
};

// LD E, B   -  LDE_B_DD2  -  DD, 58
const InstructionInfo instructionInfoLDE_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {0} },
    }
};

// LD E, C   -  LDE_C_DD2  -  DD, 59
const InstructionInfo instructionInfoLDE_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {1} },
    }
};

// LD E, D   -  LDE_D_DD2  -  DD, 5A
const InstructionInfo instructionInfoLDE_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {2} },
    }
};

// LD E, E   -  LDE_E_DD2  -  DD, 5B
const InstructionInfo instructionInfoLDE_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {3} },
    }
};

// LD E, IXh   -  LDE_IXh_DD2  -  DD, 5C
const InstructionInfo instructionInfoLDE_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {4} },
    }
};

// LD E, IXl   -  LDE_IXl_DD2  -  DD, 5D
const InstructionInfo instructionInfoLDE_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {5} },
    }
};

// LD IXh, A   -  LDIXh_A_DD2  -  DD, 67
const InstructionInfo instructionInfoLDIXh_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {7} },
    }
};

// LD IXh, B   -  LDIXh_B_DD2  -  DD, 60
const InstructionInfo instructionInfoLDIXh_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {0} },
    }
};

// LD IXh, C   -  LDIXh_C_DD2  -  DD, 61
const InstructionInfo instructionInfoLDIXh_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {1} },
    }
};

// LD IXh, D   -  LDIXh_D_DD2  -  DD, 62
const InstructionInfo instructionInfoLDIXh_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {2} },
    }
};

// LD IXh, E   -  LDIXh_E_DD2  -  DD, 63
const InstructionInfo instructionInfoLDIXh_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {3} },
    }
};

// LD IXh, IXh   -  LDIXh_IXh_DD2  -  DD, 64
const InstructionInfo instructionInfoLDIXh_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {4} },
    }
};

// LD IXh, IXl   -  LDIXh_IXl_DD2  -  DD, 65
const InstructionInfo instructionInfoLDIXh_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {5} },
    }
};

// LD IXl, A   -  LDIXl_A_DD2  -  DD, 6F
const InstructionInfo instructionInfoLDIXl_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {7} },
    }
};

// LD IXl, B   -  LDIXl_B_DD2  -  DD, 68
const InstructionInfo instructionInfoLDIXl_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {0} },
    }
};

// LD IXl, C   -  LDIXl_C_DD2  -  DD, 69
const InstructionInfo instructionInfoLDIXl_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {1} },
    }
};

// LD IXl, D   -  LDIXl_D_DD2  -  DD, 6A
const InstructionInfo instructionInfoLDIXl_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {2} },
    }
};

// LD IXl, E   -  LDIXl_E_DD2  -  DD, 6B
const InstructionInfo instructionInfoLDIXl_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {3} },
    }
};

// LD IXl, IXh   -  LDIXl_IXh_DD2  -  DD, 6C
const InstructionInfo instructionInfoLDIXl_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {4} },
    }
};

// LD IXl, IXl   -  LDIXl_IXl_DD2  -  DD, 6D
const InstructionInfo instructionInfoLDIXl_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_u_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {5} },
    }
};

// LD A, A   -  LDA_A_FD2  -  FD, 7F
const InstructionInfo instructionInfoLDA_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {7} },
    }
};

// LD A, B   -  LDA_B_FD2  -  FD, 78
const InstructionInfo instructionInfoLDA_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {0} },
    }
};

// LD A, C   -  LDA_C_FD2  -  FD, 79
const InstructionInfo instructionInfoLDA_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {1} },
    }
};

// LD A, D   -  LDA_D_FD2  -  FD, 7A
const InstructionInfo instructionInfoLDA_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {2} },
    }
};

// LD A, E   -  LDA_E_FD2  -  FD, 7B
const InstructionInfo instructionInfoLDA_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {3} },
    }
};

// LD A, IYh   -  LDA_IYh_FD2  -  FD, 7C
const InstructionInfo instructionInfoLDA_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {4} },
    }
};

// LD A, IYl   -  LDA_IYl_FD2  -  FD, 7D
const InstructionInfo instructionInfoLDA_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_Registers8, {5} },
    }
};

// LD B, A   -  LDB_A_FD2  -  FD, 47
const InstructionInfo instructionInfoLDB_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {7} },
    }
};

// LD B, B   -  LDB_B_FD2  -  FD, 40
const InstructionInfo instructionInfoLDB_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {0} },
    }
};

// LD B, C   -  LDB_C_FD2  -  FD, 41
const InstructionInfo instructionInfoLDB_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {1} },
    }
};

// LD B, D   -  LDB_D_FD2  -  FD, 42
const InstructionInfo instructionInfoLDB_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {2} },
    }
};

// LD B, E   -  LDB_E_FD2  -  FD, 43
const InstructionInfo instructionInfoLDB_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {3} },
    }
};

// LD B, IYh   -  LDB_IYh_FD2  -  FD, 44
const InstructionInfo instructionInfoLDB_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {4} },
    }
};

// LD B, IYl   -  LDB_IYl_FD2  -  FD, 45
const InstructionInfo instructionInfoLDB_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_Registers8, {5} },
    }
};

// LD C, A   -  LDC_A_FD2  -  FD, 4F
const InstructionInfo instructionInfoLDC_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {7} },
    }
};

// LD C, B   -  LDC_B_FD2  -  FD, 48
const InstructionInfo instructionInfoLDC_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {0} },
    }
};

// LD C, C   -  LDC_C_FD2  -  FD, 49
const InstructionInfo instructionInfoLDC_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {1} },
    }
};

// LD C, D   -  LDC_D_FD2  -  FD, 4A
const InstructionInfo instructionInfoLDC_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {2} },
    }
};

// LD C, E   -  LDC_E_FD2  -  FD, 4B
const InstructionInfo instructionInfoLDC_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {3} },
    }
};

// LD C, IYh   -  LDC_IYh_FD2  -  FD, 4C
const InstructionInfo instructionInfoLDC_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {4} },
    }
};

// LD C, IYl   -  LDC_IYl_FD2  -  FD, 4D
const InstructionInfo instructionInfoLDC_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_Registers8, {5} },
    }
};

// LD D, A   -  LDD_A_FD2  -  FD, 57
const InstructionInfo instructionInfoLDD_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {7} },
    }
};

// LD D, B   -  LDD_B_FD2  -  FD, 50
const InstructionInfo instructionInfoLDD_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {0} },
    }
};

// LD D, C   -  LDD_C_FD2  -  FD, 51
const InstructionInfo instructionInfoLDD_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {1} },
    }
};

// LD D, D   -  LDD_D_FD2  -  FD, 52
const InstructionInfo instructionInfoLDD_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {2} },
    }
};

// LD D, E   -  LDD_E_FD2  -  FD, 53
const InstructionInfo instructionInfoLDD_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {3} },
    }
};

// LD D, IYh   -  LDD_IYh_FD2  -  FD, 54
const InstructionInfo instructionInfoLDD_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {4} },
    }
};

// LD D, IYl   -  LDD_IYl_FD2  -  FD, 55
const InstructionInfo instructionInfoLDD_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_Registers8, {5} },
    }
};

// LD E, A   -  LDE_A_FD2  -  FD, 5F
const InstructionInfo instructionInfoLDE_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {7} },
    }
};

// LD E, B   -  LDE_B_FD2  -  FD, 58
const InstructionInfo instructionInfoLDE_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {0} },
    }
};

// LD E, C   -  LDE_C_FD2  -  FD, 59
const InstructionInfo instructionInfoLDE_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {1} },
    }
};

// LD E, D   -  LDE_D_FD2  -  FD, 5A
const InstructionInfo instructionInfoLDE_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {2} },
    }
};

// LD E, E   -  LDE_E_FD2  -  FD, 5B
const InstructionInfo instructionInfoLDE_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {3} },
    }
};

// LD E, IYh   -  LDE_IYh_FD2  -  FD, 5C
const InstructionInfo instructionInfoLDE_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {4} },
    }
};

// LD E, IYl   -  LDE_IYl_FD2  -  FD, 5D
const InstructionInfo instructionInfoLDE_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_Registers8, {5} },
    }
};

// LD IYh, A   -  LDIYh_A_FD2  -  FD, 67
const InstructionInfo instructionInfoLDIYh_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {7} },
    }
};

// LD IYh, B   -  LDIYh_B_FD2  -  FD, 60
const InstructionInfo instructionInfoLDIYh_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {0} },
    }
};

// LD IYh, C   -  LDIYh_C_FD2  -  FD, 61
const InstructionInfo instructionInfoLDIYh_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {1} },
    }
};

// LD IYh, D   -  LDIYh_D_FD2  -  FD, 62
const InstructionInfo instructionInfoLDIYh_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {2} },
    }
};

// LD IYh, E   -  LDIYh_E_FD2  -  FD, 63
const InstructionInfo instructionInfoLDIYh_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {3} },
    }
};

// LD IYh, IYh   -  LDIYh_IYh_FD2  -  FD, 64
const InstructionInfo instructionInfoLDIYh_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {4} },
    }
};

// LD IYh, IYl   -  LDIYh_IYl_FD2  -  FD, 65
const InstructionInfo instructionInfoLDIYh_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_Registers8, {5} },
    }
};

// LD IYl, A   -  LDIYl_A_FD2  -  FD, 6F
const InstructionInfo instructionInfoLDIYl_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {7} },
    }
};

// LD IYl, B   -  LDIYl_B_FD2  -  FD, 68
const InstructionInfo instructionInfoLDIYl_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {0} },
    }
};

// LD IYl, C   -  LDIYl_C_FD2  -  FD, 69
const InstructionInfo instructionInfoLDIYl_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {1} },
    }
};

// LD IYl, D   -  LDIYl_D_FD2  -  FD, 6A
const InstructionInfo instructionInfoLDIYl_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {2} },
    }
};

// LD IYl, E   -  LDIYl_E_FD2  -  FD, 6B
const InstructionInfo instructionInfoLDIYl_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {3} },
    }
};

// LD IYl, IYh   -  LDIYl_IYh_FD2  -  FD, 6C
const InstructionInfo instructionInfoLDIYl_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {4} },
    }
};

// LD IYl, IYl   -  LDIYl_IYl_FD2  -  FD, 6D
const InstructionInfo instructionInfoLDIYl_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_w_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_Registers8, {5} },
    }
};

// LD A, n   -  LDA_n_2  -  3E, n
const InstructionInfo instructionInfoLDA_n_2 =
{
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// LD B, n   -  LDB_n_2  -  06, n
const InstructionInfo instructionInfoLDB_n_2 =
{
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// LD C, n   -  LDC_n_2  -  0E, n
const InstructionInfo instructionInfoLDC_n_2 =
{
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// LD D, n   -  LDD_n_2  -  16, n
const InstructionInfo instructionInfoLDD_n_2 =
{
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// LD E, n   -  LDE_n_2  -  1E, n
const InstructionInfo instructionInfoLDE_n_2 =
{
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// LD H, n   -  LDH_n_2  -  26, n
const InstructionInfo instructionInfoLDH_n_2 =
{
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// LD L, n   -  LDL_n_2  -  2E, n
const InstructionInfo instructionInfoLDL_n_2 =
{
    {
        { 4, OnClock_LDr_n_2_OF },
        { 3, OnClock_LDr_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// LD A, n   -  LDA_n_DD3  -  DD, 3E, n
const InstructionInfo instructionInfoLDA_n_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// LD B, n   -  LDB_n_DD3  -  DD, 06, n
const InstructionInfo instructionInfoLDB_n_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// LD C, n   -  LDC_n_DD3  -  DD, 0E, n
const InstructionInfo instructionInfoLDC_n_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// LD D, n   -  LDD_n_DD3  -  DD, 16, n
const InstructionInfo instructionInfoLDD_n_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// LD E, n   -  LDE_n_DD3  -  DD, 1E, n
const InstructionInfo instructionInfoLDE_n_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// LD IXh, n   -  LDIXh_n_DD3  -  DD, 26, n
const InstructionInfo instructionInfoLDIXh_n_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// LD IXl, n   -  LDIXl_n_DD3  -  DD, 2E, n
const InstructionInfo instructionInfoLDIXl_n_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDt_n_DD3_OF },
        { 3, OnClock_LDt_n_DD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// LD A, n   -  LDA_n_FD3  -  FD, 3E, n
const InstructionInfo instructionInfoLDA_n_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// LD B, n   -  LDB_n_FD3  -  FD, 06, n
const InstructionInfo instructionInfoLDB_n_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// LD C, n   -  LDC_n_FD3  -  FD, 0E, n
const InstructionInfo instructionInfoLDC_n_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// LD D, n   -  LDD_n_FD3  -  FD, 16, n
const InstructionInfo instructionInfoLDD_n_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// LD E, n   -  LDE_n_FD3  -  FD, 1E, n
const InstructionInfo instructionInfoLDE_n_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// LD IYh, n   -  LDIYh_n_FD3  -  FD, 26, n
const InstructionInfo instructionInfoLDIYh_n_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// LD IYl, n   -  LDIYl_n_FD3  -  FD, 2E, n
const InstructionInfo instructionInfoLDIYl_n_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDv_n_FD3_OF },
        { 3, OnClock_LDv_n_FD3_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// LD A, (HL)   -  LDA__HL__1  -  7E
const InstructionInfo instructionInfoLDA__HL__1 =
{
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// LD B, (HL)   -  LDB__HL__1  -  46
const InstructionInfo instructionInfoLDB__HL__1 =
{
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// LD C, (HL)   -  LDC__HL__1  -  4E
const InstructionInfo instructionInfoLDC__HL__1 =
{
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// LD D, (HL)   -  LDD__HL__1  -  56
const InstructionInfo instructionInfoLDD__HL__1 =
{
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// LD E, (HL)   -  LDE__HL__1  -  5E
const InstructionInfo instructionInfoLDE__HL__1 =
{
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// LD H, (HL)   -  LDH__HL__1  -  66
const InstructionInfo instructionInfoLDH__HL__1 =
{
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// LD L, (HL)   -  LDL__HL__1  -  6E
const InstructionInfo instructionInfoLDL__HL__1 =
{
    {
        { 4, OnClock_LDr__HL__1_OF },
        { 3, OnClock_LDr__HL__1_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// LD A, (IX+d)   -  LDA__IX_d__DD3  -  DD, BE, d
const InstructionInfo instructionInfoLDA__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// LD A, (IY+d)   -  LDA__IY_d__FD3  -  FD, BE, d
const InstructionInfo instructionInfoLDA__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// LD B, (IX+d)   -  LDB__IX_d__DD3  -  DD, 86, d
const InstructionInfo instructionInfoLDB__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// LD B, (IY+d)   -  LDB__IY_d__FD3  -  FD, 86, d
const InstructionInfo instructionInfoLDB__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// LD C, (IX+d)   -  LDC__IX_d__DD3  -  DD, 8E, d
const InstructionInfo instructionInfoLDC__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// LD C, (IY+d)   -  LDC__IY_d__FD3  -  FD, 8E, d
const InstructionInfo instructionInfoLDC__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// LD D, (IX+d)   -  LDD__IX_d__DD3  -  DD, 96, d
const InstructionInfo instructionInfoLDD__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// LD D, (IY+d)   -  LDD__IY_d__FD3  -  FD, 96, d
const InstructionInfo instructionInfoLDD__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// LD E, (IX+d)   -  LDE__IX_d__DD3  -  DD, 9E, d
const InstructionInfo instructionInfoLDE__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// LD E, (IY+d)   -  LDE__IY_d__FD3  -  FD, 9E, d
const InstructionInfo instructionInfoLDE__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// LD H, (IX+d)   -  LDH__IX_d__DD3  -  DD, A6, d
const InstructionInfo instructionInfoLDH__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// LD H, (IY+d)   -  LDH__IY_d__FD3  -  FD, A6, d
const InstructionInfo instructionInfoLDH__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// LD L, (IX+d)   -  LDL__IX_d__DD3  -  DD, AE, d
const InstructionInfo instructionInfoLDL__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// LD L, (IY+d)   -  LDL__IY_d__FD3  -  FD, AE, d
const InstructionInfo instructionInfoLDL__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDr__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LDr__ex_d__ex3_AD },
        { 3, OnClock_LDr__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// LD (HL), A   -  LD_HL__A_1  -  77
const InstructionInfo instructionInfoLD_HL__A_1 =
{
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// LD (HL), B   -  LD_HL__B_1  -  70
const InstructionInfo instructionInfoLD_HL__B_1 =
{
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// LD (HL), C   -  LD_HL__C_1  -  71
const InstructionInfo instructionInfoLD_HL__C_1 =
{
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// LD (HL), D   -  LD_HL__D_1  -  72
const InstructionInfo instructionInfoLD_HL__D_1 =
{
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// LD (HL), E   -  LD_HL__E_1  -  73
const InstructionInfo instructionInfoLD_HL__E_1 =
{
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// LD (HL), H   -  LD_HL__H_1  -  74
const InstructionInfo instructionInfoLD_HL__H_1 =
{
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// LD (HL), L   -  LD_HL__L_1  -  75
const InstructionInfo instructionInfoLD_HL__L_1 =
{
    {
        { 4, OnClock_LD_HL__r_1_OF },
        { 3, OnClock_LD_HL__r_1_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// LD (IX+d), A   -  LD_IX_d__A_DD3  -  DD, 77, d
const InstructionInfo instructionInfoLD_IX_d__A_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// LD (IY+d), A   -  LD_IY_d__A_FD3  -  FD, 77, d
const InstructionInfo instructionInfoLD_IY_d__A_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// LD (IX+d), B   -  LD_IX_d__B_DD3  -  DD, 70, d
const InstructionInfo instructionInfoLD_IX_d__B_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// LD (IY+d), B   -  LD_IY_d__B_FD3  -  FD, 70, d
const InstructionInfo instructionInfoLD_IY_d__B_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// LD (IX+d), C   -  LD_IX_d__C_DD3  -  DD, 71, d
const InstructionInfo instructionInfoLD_IX_d__C_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// LD (IY+d), C   -  LD_IY_d__C_FD3  -  FD, 71, d
const InstructionInfo instructionInfoLD_IY_d__C_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// LD (IX+d), D   -  LD_IX_d__D_DD3  -  DD, 72, d
const InstructionInfo instructionInfoLD_IX_d__D_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// LD (IY+d), D   -  LD_IY_d__D_FD3  -  FD, 72, d
const InstructionInfo instructionInfoLD_IY_d__D_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// LD (IX+d), E   -  LD_IX_d__E_DD3  -  DD, 73, d
const InstructionInfo instructionInfoLD_IX_d__E_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// LD (IY+d), E   -  LD_IY_d__E_FD3  -  FD, 73, d
const InstructionInfo instructionInfoLD_IY_d__E_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// LD (IX+d), H   -  LD_IX_d__H_DD3  -  DD, 74, d
const InstructionInfo instructionInfoLD_IX_d__H_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// LD (IY+d), H   -  LD_IY_d__H_FD3  -  FD, 74, d
const InstructionInfo instructionInfoLD_IY_d__H_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// LD (IX+d), L   -  LD_IX_d__L_DD3  -  DD, 75, d
const InstructionInfo instructionInfoLD_IX_d__L_DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// LD (IY+d), L   -  LD_IY_d__L_FD3  -  FD, 75, d
const InstructionInfo instructionInfoLD_IY_d__L_FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__r_ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__r_ex3_AD },
        { 3, OnClock_LD_ex_d__r_ex3_MW },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// LD (HL), n   -  LD_HL__n_2  -  36, n
const InstructionInfo instructionInfoLD_HL__n_2 =
{
    {
        { 4, OnClock_LD_HL__n_2_OF },
        { 3, OnClock_LD_HL__n_2_OD },
        { 3, OnClock_LD_HL__n_2_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD (IX+d), n   -  LD_IX_d__n_DD4  -  DD, 36, d, n
const InstructionInfo instructionInfoLD_IX_d__n_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__n_ex4_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__n_ex4_FD },
        { 3, OnClock_LD_ex_d__n_ex4_MW },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD (IY+d), n   -  LD_IY_d__n_FD4  -  FD, 36, d, n
const InstructionInfo instructionInfoLD_IY_d__n_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_ex_d__n_ex4_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_LD_ex_d__n_ex4_FD },
        { 3, OnClock_LD_ex_d__n_ex4_MW },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD A, (BC)   -  LDA__BC__1  -  0A
const InstructionInfo instructionInfoLDA__BC__1 =
{
    {
        { 4, OnClock_LDA__BC__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD A, (DE)   -  LDA__DE__1  -  1A
const InstructionInfo instructionInfoLDA__DE__1 =
{
    {
        { 4, OnClock_LDA__DE__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD A, (nn)   -  LDA__nn__3  -  3A, n, n
const InstructionInfo instructionInfoLDA__nn__3 =
{
    {
        { 4, OnClock_LDA__nn__3_OF },
        { 3, OnClock_LDA__nn__3_ODl },
        { 3, OnClock_LDA__nn__3_ODh },
        { 3, OnClock_LDA__nn__3_MR },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD (BC), A   -  LD_BC__A_1  -  02
const InstructionInfo instructionInfoLD_BC__A_1 =
{
    {
        { 4, OnClock_LD_BC__A_1_OF },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD (DE), A   -  LD_DE__A_1  -  12
const InstructionInfo instructionInfoLD_DE__A_1 =
{
    {
        { 4, OnClock_LD_DE__A_1_OF },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD (nn), A   -  LD_nn__A_3  -  32, n, n
const InstructionInfo instructionInfoLD_nn__A_3 =
{
    {
        { 4, OnClock_LD_nn__A_3_OF },
        { 3, OnClock_LD_nn__A_3_ODl },
        { 3, OnClock_LD_nn__A_3_ODh },
        { 3, OnClock_LD_nn__A_3_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD A, I   -  LDA_I_ED2  -  ED, 57
const InstructionInfo instructionInfoLDA_I_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_LDA_I_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD A, R   -  LDA_R_ED2  -  ED, 5F
const InstructionInfo instructionInfoLDA_R_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_LDA_R_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD I, A   -  LDI_A_ED2  -  ED, 47
const InstructionInfo instructionInfoLDI_A_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_LDI_A_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD R, A   -  LDR_A_ED2  -  ED, 4F
const InstructionInfo instructionInfoLDR_A_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_LDR_A_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD BC, nn   -  LDBC_nn_3  -  01, n, n
const InstructionInfo instructionInfoLDBC_nn_3 =
{
    {
        { 4, OnClock_LDp_nn_3_OF },
        { 3, OnClock_LDp_nn_3_ODl },
        { 3, OnClock_LDp_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {0} },
        { Type_None, {0} },
    }
};

// LD DE, nn   -  LDDE_nn_3  -  11, n, n
const InstructionInfo instructionInfoLDDE_nn_3 =
{
    {
        { 4, OnClock_LDp_nn_3_OF },
        { 3, OnClock_LDp_nn_3_ODl },
        { 3, OnClock_LDp_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {1} },
        { Type_None, {0} },
    }
};

// LD HL, nn   -  LDHL_nn_3  -  21, n, n
const InstructionInfo instructionInfoLDHL_nn_3 =
{
    {
        { 4, OnClock_LDp_nn_3_OF },
        { 3, OnClock_LDp_nn_3_ODl },
        { 3, OnClock_LDp_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {2} },
        { Type_None, {0} },
    }
};

// LD SP, nn   -  LDSP_nn_3  -  31, n, n
const InstructionInfo instructionInfoLDSP_nn_3 =
{
    {
        { 4, OnClock_LDp_nn_3_OF },
        { 3, OnClock_LDp_nn_3_ODl },
        { 3, OnClock_LDp_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {3} },
        { Type_None, {0} },
    }
};

// LD IX, nn   -  LDIX_nn_DD4  -  DD, 21, n, n
const InstructionInfo instructionInfoLDIX_nn_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDex_nn_ex4_OF },
        { 3, OnClock_LDex_nn_ex4_ODl },
        { 3, OnClock_LDex_nn_ex4_ODh },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD IY, nn   -  LDIY_nn_FD4  -  FD, 21, n, n
const InstructionInfo instructionInfoLDIY_nn_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDex_nn_ex4_OF },
        { 3, OnClock_LDex_nn_ex4_ODl },
        { 3, OnClock_LDex_nn_ex4_ODh },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD HL, (nn)   -  LDHL__nn__3  -  2A, n, n
const InstructionInfo instructionInfoLDHL__nn__3 =
{
    {
        { 4, OnClock_LDHL__nn__3_OF },
        { 3, OnClock_LDHL__nn__3_ODl },
        { 3, OnClock_LDHL__nn__3_ODh },
        { 3, OnClock_LDHL__nn__3_MRl },
        { 3, OnClock_LDHL__nn__3_MRh },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD BC, (nn)   -  LDBC__nn__ED4  -  ED, 4B, n, n
const InstructionInfo instructionInfoLDBC__nn__ED4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDp__nn__ED4_OF },
        { 3, OnClock_LDp__nn__ED4_ODl },
        { 3, OnClock_LDp__nn__ED4_ODh },
        { 3, OnClock_LDp__nn__ED4_MWl },
        { 3, OnClock_LDp__nn__ED4_MRh },
    },
    {
        { Type_RegistersSP16, {0} },
        { Type_None, {0} },
    }
};

// LD DE, (nn)   -  LDDE__nn__ED4  -  ED, 5B, n, n
const InstructionInfo instructionInfoLDDE__nn__ED4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDp__nn__ED4_OF },
        { 3, OnClock_LDp__nn__ED4_ODl },
        { 3, OnClock_LDp__nn__ED4_ODh },
        { 3, OnClock_LDp__nn__ED4_MWl },
        { 3, OnClock_LDp__nn__ED4_MRh },
    },
    {
        { Type_RegistersSP16, {1} },
        { Type_None, {0} },
    }
};

// LD HL, (nn)   -  LDHL__nn__ED4  -  ED, 6B, n, n
const InstructionInfo instructionInfoLDHL__nn__ED4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDp__nn__ED4_OF },
        { 3, OnClock_LDp__nn__ED4_ODl },
        { 3, OnClock_LDp__nn__ED4_ODh },
        { 3, OnClock_LDp__nn__ED4_MWl },
        { 3, OnClock_LDp__nn__ED4_MRh },
    },
    {
        { Type_RegistersSP16, {2} },
        { Type_None, {0} },
    }
};

// LD SP, (nn)   -  LDSP__nn__ED4  -  ED, 7B, n, n
const InstructionInfo instructionInfoLDSP__nn__ED4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDp__nn__ED4_OF },
        { 3, OnClock_LDp__nn__ED4_ODl },
        { 3, OnClock_LDp__nn__ED4_ODh },
        { 3, OnClock_LDp__nn__ED4_MWl },
        { 3, OnClock_LDp__nn__ED4_MRh },
    },
    {
        { Type_RegistersSP16, {3} },
        { Type_None, {0} },
    }
};

// LD IX, (nn)   -  LDIX__nn__DD4  -  DD, 2A, n, n
const InstructionInfo instructionInfoLDIX__nn__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDex__nn__ex4_OF },
        { 3, OnClock_LDex__nn__ex4_ODl },
        { 3, OnClock_LDex__nn__ex4_ODh },
        { 3, OnClock_LDex__nn__ex4_MRl },
        { 3, OnClock_LDex__nn__ex4_MRh },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD IY, (nn)   -  LDIY__nn__FD4  -  FD, 2A, n, n
const InstructionInfo instructionInfoLDIY__nn__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDex__nn__ex4_OF },
        { 3, OnClock_LDex__nn__ex4_ODl },
        { 3, OnClock_LDex__nn__ex4_ODh },
        { 3, OnClock_LDex__nn__ex4_MRl },
        { 3, OnClock_LDex__nn__ex4_MRh },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD (nn), HL   -  LD_nn__HL_3  -  22, n, n
const InstructionInfo instructionInfoLD_nn__HL_3 =
{
    {
        { 4, OnClock_LD_nn__HL_3_OF },
        { 3, OnClock_LD_nn__HL_3_ODl },
        { 3, OnClock_LD_nn__HL_3_ODh },
        { 3, OnClock_LD_nn__HL_3_MWl },
        { 3, OnClock_LD_nn__HL_3_MWh },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD (nn), BC   -  LD_nn__BC_ED4  -  ED, 43, n, n
const InstructionInfo instructionInfoLD_nn__BC_ED4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__p_ED4_OF },
        { 3, OnClock_LD_nn__p_ED4_ODl },
        { 3, OnClock_LD_nn__p_ED4_ODh },
        { 3, OnClock_LD_nn__p_ED4_MWl },
        { 3, OnClock_LD_nn__p_ED4_MWh },
    },
    {
        { Type_RegistersSP16, {0} },
        { Type_None, {0} },
    }
};

// LD (nn), DE   -  LD_nn__DE_ED4  -  ED, 53, n, n
const InstructionInfo instructionInfoLD_nn__DE_ED4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__p_ED4_OF },
        { 3, OnClock_LD_nn__p_ED4_ODl },
        { 3, OnClock_LD_nn__p_ED4_ODh },
        { 3, OnClock_LD_nn__p_ED4_MWl },
        { 3, OnClock_LD_nn__p_ED4_MWh },
    },
    {
        { Type_RegistersSP16, {1} },
        { Type_None, {0} },
    }
};

// LD (nn), HL   -  LD_nn__HL_ED4  -  ED, 63, n, n
const InstructionInfo instructionInfoLD_nn__HL_ED4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__p_ED4_OF },
        { 3, OnClock_LD_nn__p_ED4_ODl },
        { 3, OnClock_LD_nn__p_ED4_ODh },
        { 3, OnClock_LD_nn__p_ED4_MWl },
        { 3, OnClock_LD_nn__p_ED4_MWh },
    },
    {
        { Type_RegistersSP16, {2} },
        { Type_None, {0} },
    }
};

// LD (nn), SP   -  LD_nn__SP_ED4  -  ED, 73, n, n
const InstructionInfo instructionInfoLD_nn__SP_ED4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__p_ED4_OF },
        { 3, OnClock_LD_nn__p_ED4_ODl },
        { 3, OnClock_LD_nn__p_ED4_ODh },
        { 3, OnClock_LD_nn__p_ED4_MWl },
        { 3, OnClock_LD_nn__p_ED4_MWh },
    },
    {
        { Type_RegistersSP16, {3} },
        { Type_None, {0} },
    }
};

// LD (nn), IX   -  LD_nn__IX_DD4  -  DD, 22, n, n
const InstructionInfo instructionInfoLD_nn__IX_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__ex_ex4_OF },
        { 3, OnClock_LD_nn__ex_ex4_ODl },
        { 3, OnClock_LD_nn__ex_ex4_ODh },
        { 3, OnClock_LD_nn__ex_ex4_MWl },
        { 3, OnClock_LD_nn__ex_ex4_MWh },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD (nn), IY   -  LD_nn__IY_FD4  -  FD, 22, n, n
const InstructionInfo instructionInfoLD_nn__IY_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LD_nn__ex_ex4_OF },
        { 3, OnClock_LD_nn__ex_ex4_ODl },
        { 3, OnClock_LD_nn__ex_ex4_ODh },
        { 3, OnClock_LD_nn__ex_ex4_MWl },
        { 3, OnClock_LD_nn__ex_ex4_MWh },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD SP, HL   -  LDSP_HL_1  -  F9
const InstructionInfo instructionInfoLDSP_HL_1 =
{
    {
        { 6, OnClock_LDSP_HL_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD SP, IX   -  LDSP_IX_DD2  -  DD, F9
const InstructionInfo instructionInfoLDSP_IX_DD2 =
{
    {
        { 4, OnClock_OF },
        { 6, OnClock_LDSP_ex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LD SP, IY   -  LDSP_IY_FD2  -  FD, F9
const InstructionInfo instructionInfoLDSP_IY_FD2 =
{
    {
        { 4, OnClock_OF },
        { 6, OnClock_LDSP_ex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// PUSH BC   -  PUSHBC_1  -  C5
const InstructionInfo instructionInfoPUSHBC_1 =
{
    {
        { 5, OnClock_PUSHq_1_OF },
        { 3, OnClock_PUSHq_1_SWh },
        { 3, OnClock_PUSHq_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers16, {0} },
        { Type_None, {0} },
    }
};

// PUSH DE   -  PUSHDE_1  -  D5
const InstructionInfo instructionInfoPUSHDE_1 =
{
    {
        { 5, OnClock_PUSHq_1_OF },
        { 3, OnClock_PUSHq_1_SWh },
        { 3, OnClock_PUSHq_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers16, {1} },
        { Type_None, {0} },
    }
};

// PUSH HL   -  PUSHHL_1  -  E5
const InstructionInfo instructionInfoPUSHHL_1 =
{
    {
        { 5, OnClock_PUSHq_1_OF },
        { 3, OnClock_PUSHq_1_SWh },
        { 3, OnClock_PUSHq_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers16, {2} },
        { Type_None, {0} },
    }
};

// PUSH AF   -  PUSHAF_1  -  F5
const InstructionInfo instructionInfoPUSHAF_1 =
{
    {
        { 5, OnClock_PUSHq_1_OF },
        { 3, OnClock_PUSHq_1_SWh },
        { 3, OnClock_PUSHq_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers16, {3} },
        { Type_None, {0} },
    }
};

// PUSH IX   -  PUSHIX_DD2  -  DD, E5
const InstructionInfo instructionInfoPUSHIX_DD2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_PUSHex_ex2_OF },
        { 3, OnClock_PUSHex_ex2_SWh },
        { 3, OnClock_PUSHex_ex2_SWl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// PUSH IY   -  PUSHIY_FD2  -  FD, E5
const InstructionInfo instructionInfoPUSHIY_FD2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_PUSHex_ex2_OF },
        { 3, OnClock_PUSHex_ex2_SWh },
        { 3, OnClock_PUSHex_ex2_SWl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// POP BC   -  POPBC_1  -  C1
const InstructionInfo instructionInfoPOPBC_1 =
{
    {
        { 4, OnClock_POPq_1_OF },
        { 3, OnClock_POPq_1_SRh },
        { 3, OnClock_POPq_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers16, {0} },
        { Type_None, {0} },
    }
};

// POP DE   -  POPDE_1  -  D1
const InstructionInfo instructionInfoPOPDE_1 =
{
    {
        { 4, OnClock_POPq_1_OF },
        { 3, OnClock_POPq_1_SRh },
        { 3, OnClock_POPq_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers16, {1} },
        { Type_None, {0} },
    }
};

// POP HL   -  POPHL_1  -  E1
const InstructionInfo instructionInfoPOPHL_1 =
{
    {
        { 4, OnClock_POPq_1_OF },
        { 3, OnClock_POPq_1_SRh },
        { 3, OnClock_POPq_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers16, {2} },
        { Type_None, {0} },
    }
};

// POP AF   -  POPAF_1  -  F1
const InstructionInfo instructionInfoPOPAF_1 =
{
    {
        { 4, OnClock_POPq_1_OF },
        { 3, OnClock_POPq_1_SRh },
        { 3, OnClock_POPq_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers16, {3} },
        { Type_None, {0} },
    }
};

// POP IX   -  POPIX_DD2  -  DD, E1
const InstructionInfo instructionInfoPOPIX_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_POPex_ex2_OF },
        { 3, OnClock_POPex_ex2_SRh },
        { 3, OnClock_POPex_ex2_SRl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// POP IY   -  POPIY_FD2  -  FD, E1
const InstructionInfo instructionInfoPOPIY_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_POPex_ex2_OF },
        { 3, OnClock_POPex_ex2_SRh },
        { 3, OnClock_POPex_ex2_SRl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// EX DE, HL   -  EXDE_HL_1  -  EB
const InstructionInfo instructionInfoEXDE_HL_1 =
{
    {
        { 4, OnClock_EXDE_HL_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// EX AF, AF'   -  EXAF_AF2_1  -  08
const InstructionInfo instructionInfoEXAF_AF2_1 =
{
    {
        { 4, OnClock_EXAF_AF2_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// EXX   -  EXX_1  -  D9
const InstructionInfo instructionInfoEXX_1 =
{
    {
        { 4, OnClock_EXX_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// EX (SP), HL   -  EX_SP__HL_1  -  E3
const InstructionInfo instructionInfoEX_SP__HL_1 =
{
    {
        { 4, OnClock_EX_SP__HL_1_OF },
        { 3, OnClock_SRh },
        { 4, OnClock_EX_SP__HL_1_SRl },
        { 3, OnClock_SWh },
        { 5, OnClock_EX_SP__HL_1_SWl },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// EX (SP), IX   -  EX_SP__IX_DD2  -  DD, E3
const InstructionInfo instructionInfoEX_SP__IX_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_EX_SP__ex_ex2_OF },
        { 3, OnClock_EX_SP__ex_ex2_SRh },
        { 4, OnClock_EX_SP__ex_ex2_SRl },
        { 3, OnClock_EX_SP__ex_ex2_SWh },
        { 5, OnClock_EX_SP__ex_ex2_SWl },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// EX (SP), IY   -  EX_SP__IY_FD2  -  FD, E3
const InstructionInfo instructionInfoEX_SP__IY_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_EX_SP__ex_ex2_OF },
        { 3, OnClock_EX_SP__ex_ex2_SRh },
        { 4, OnClock_EX_SP__ex_ex2_SRl },
        { 3, OnClock_EX_SP__ex_ex2_SWh },
        { 5, OnClock_EX_SP__ex_ex2_SWl },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LDI   -  LDI_ED2  -  ED, A0
const InstructionInfo instructionInfoLDI_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDI_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_LDI_ED2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LDIR   -  LDIR_ED2  -  ED, B0
const InstructionInfo instructionInfoLDIR_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDIR_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_LDIR_ED2_MW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LDD   -  LDD_ED2  -  ED, A8
const InstructionInfo instructionInfoLDD_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDD_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_LDD_ED2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// LDDR   -  LDDR_ED2  -  ED, B8
const InstructionInfo instructionInfoLDDR_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_LDDR_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_LDDR_ED2_MW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CPI   -  CPI_ED2  -  ED, A1
const InstructionInfo instructionInfoCPI_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPI_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_CPI_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CPIR   -  CPIR_ED2  -  ED, B1
const InstructionInfo instructionInfoCPIR_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPIR_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_CPIR_ED2_OP },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CPD   -  CPD_ED2  -  ED, A9
const InstructionInfo instructionInfoCPD_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPD_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_CPD_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CPDR   -  CPDR_ED2  -  ED, B9
const InstructionInfo instructionInfoCPDR_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPDR_ED2_OF },
        { 3, OnClock_MR },
        { 5, OnClock_CPDR_ED2_OP },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// ADD A, A   -  ADDA_A_1  -  87
const InstructionInfo instructionInfoADDA_A_1 =
{
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// ADD A, B   -  ADDA_B_1  -  80
const InstructionInfo instructionInfoADDA_B_1 =
{
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// ADD A, C   -  ADDA_C_1  -  81
const InstructionInfo instructionInfoADDA_C_1 =
{
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// ADD A, D   -  ADDA_D_1  -  82
const InstructionInfo instructionInfoADDA_D_1 =
{
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// ADD A, E   -  ADDA_E_1  -  83
const InstructionInfo instructionInfoADDA_E_1 =
{
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// ADD A, H   -  ADDA_H_1  -  84
const InstructionInfo instructionInfoADDA_H_1 =
{
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// ADD A, L   -  ADDA_L_1  -  85
const InstructionInfo instructionInfoADDA_L_1 =
{
    {
        { 4, OnClock_ADDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// ADD A, A   -  ADDA_A_DD2  -  DD, 87
const InstructionInfo instructionInfoADDA_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// ADD A, B   -  ADDA_B_DD2  -  DD, 80
const InstructionInfo instructionInfoADDA_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// ADD A, C   -  ADDA_C_DD2  -  DD, 81
const InstructionInfo instructionInfoADDA_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// ADD A, D   -  ADDA_D_DD2  -  DD, 82
const InstructionInfo instructionInfoADDA_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// ADD A, E   -  ADDA_E_DD2  -  DD, 83
const InstructionInfo instructionInfoADDA_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// ADD A, IXh   -  ADDA_IXh_DD2  -  DD, 84
const InstructionInfo instructionInfoADDA_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// ADD A, IXl   -  ADDA_IXl_DD2  -  DD, 85
const InstructionInfo instructionInfoADDA_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// ADD A, A   -  ADDA_A_FD2  -  FD, 87
const InstructionInfo instructionInfoADDA_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// ADD A, B   -  ADDA_B_FD2  -  FD, 80
const InstructionInfo instructionInfoADDA_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// ADD A, C   -  ADDA_C_FD2  -  FD, 81
const InstructionInfo instructionInfoADDA_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// ADD A, D   -  ADDA_D_FD2  -  FD, 82
const InstructionInfo instructionInfoADDA_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// ADD A, E   -  ADDA_E_FD2  -  FD, 83
const InstructionInfo instructionInfoADDA_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// ADD A, IYh   -  ADDA_IYh_FD2  -  FD, 84
const InstructionInfo instructionInfoADDA_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// ADD A, IYl   -  ADDA_IYl_FD2  -  FD, 85
const InstructionInfo instructionInfoADDA_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// ADD A, n   -  ADDA_n_2  -  C6, n
const InstructionInfo instructionInfoADDA_n_2 =
{
    {
        { 4, OnClock_ADDA_n_2_OF },
        { 3, OnClock_ADDA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// ADD A, (HL)   -  ADDA__HL__1  -  86
const InstructionInfo instructionInfoADDA__HL__1 =
{
    {
        { 4, OnClock_ADDA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// ADD A, (IX+d)   -  ADDA__IX_d__DD3  -  DD, 86, d
const InstructionInfo instructionInfoADDA__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_ADDA__ex_d__ex3_AD },
        { 3, OnClock_ADDA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// ADD A, (IY+d)   -  ADDA__IY_d__FD3  -  FD, 86, d
const InstructionInfo instructionInfoADDA__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_ADDA__ex_d__ex3_AD },
        { 3, OnClock_ADDA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// ADC A, A   -  ADCA_A_1  -  8F
const InstructionInfo instructionInfoADCA_A_1 =
{
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// ADC A, B   -  ADCA_B_1  -  88
const InstructionInfo instructionInfoADCA_B_1 =
{
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// ADC A, C   -  ADCA_C_1  -  89
const InstructionInfo instructionInfoADCA_C_1 =
{
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// ADC A, D   -  ADCA_D_1  -  8A
const InstructionInfo instructionInfoADCA_D_1 =
{
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// ADC A, E   -  ADCA_E_1  -  8B
const InstructionInfo instructionInfoADCA_E_1 =
{
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// ADC A, H   -  ADCA_H_1  -  8C
const InstructionInfo instructionInfoADCA_H_1 =
{
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// ADC A, L   -  ADCA_L_1  -  8D
const InstructionInfo instructionInfoADCA_L_1 =
{
    {
        { 4, OnClock_ADCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// ADC A, A   -  ADCA_A_DD2  -  DD, 8F
const InstructionInfo instructionInfoADCA_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// ADC A, B   -  ADCA_B_DD2  -  DD, 88
const InstructionInfo instructionInfoADCA_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// ADC A, C   -  ADCA_C_DD2  -  DD, 89
const InstructionInfo instructionInfoADCA_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// ADC A, D   -  ADCA_D_DD2  -  DD, 8A
const InstructionInfo instructionInfoADCA_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// ADC A, E   -  ADCA_E_DD2  -  DD, 8B
const InstructionInfo instructionInfoADCA_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// ADC A, IXh   -  ADCA_IXh_DD2  -  DD, 8C
const InstructionInfo instructionInfoADCA_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// ADC A, IXl   -  ADCA_IXl_DD2  -  DD, 8D
const InstructionInfo instructionInfoADCA_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// ADC A, A   -  ADCA_A_FD2  -  FD, 8F
const InstructionInfo instructionInfoADCA_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// ADC A, B   -  ADCA_B_FD2  -  FD, 88
const InstructionInfo instructionInfoADCA_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// ADC A, C   -  ADCA_C_FD2  -  FD, 89
const InstructionInfo instructionInfoADCA_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// ADC A, D   -  ADCA_D_FD2  -  FD, 8A
const InstructionInfo instructionInfoADCA_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// ADC A, E   -  ADCA_E_FD2  -  FD, 8B
const InstructionInfo instructionInfoADCA_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// ADC A, IYh   -  ADCA_IYh_FD2  -  FD, 8C
const InstructionInfo instructionInfoADCA_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// ADC A, IYl   -  ADCA_IYl_FD2  -  FD, 8D
const InstructionInfo instructionInfoADCA_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// ADC A, n   -  ADCA_n_2  -  CE, n
const InstructionInfo instructionInfoADCA_n_2 =
{
    {
        { 4, OnClock_ADCA_n_2_OF },
        { 3, OnClock_ADCA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// ADC A, (HL)   -  ADCA__HL__1  -  8E
const InstructionInfo instructionInfoADCA__HL__1 =
{
    {
        { 4, OnClock_ADCA__HL__1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// ADC A, (IX+d)   -  ADCA__IX_d__DD3  -  DD, 8E, d
const InstructionInfo instructionInfoADCA__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_ADCA__ex_d__ex3_AD },
        { 3, OnClock_ADCA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// ADC A, (IY+d)   -  ADCA__IY_d__FD3  -  FD, 8E, d
const InstructionInfo instructionInfoADCA__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_ADCA__ex_d__ex3_AD },
        { 3, OnClock_ADCA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SUB A, A   -  SUBA_A_1  -  97
const InstructionInfo instructionInfoSUBA_A_1 =
{
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SUB A, B   -  SUBA_B_1  -  90
const InstructionInfo instructionInfoSUBA_B_1 =
{
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SUB A, C   -  SUBA_C_1  -  91
const InstructionInfo instructionInfoSUBA_C_1 =
{
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SUB A, D   -  SUBA_D_1  -  92
const InstructionInfo instructionInfoSUBA_D_1 =
{
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SUB A, E   -  SUBA_E_1  -  93
const InstructionInfo instructionInfoSUBA_E_1 =
{
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SUB A, H   -  SUBA_H_1  -  94
const InstructionInfo instructionInfoSUBA_H_1 =
{
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SUB A, L   -  SUBA_L_1  -  95
const InstructionInfo instructionInfoSUBA_L_1 =
{
    {
        { 4, OnClock_SUBA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SUB A, A   -  SUBA_A_DD2  -  DD, 97
const InstructionInfo instructionInfoSUBA_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SUB A, B   -  SUBA_B_DD2  -  DD, 90
const InstructionInfo instructionInfoSUBA_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SUB A, C   -  SUBA_C_DD2  -  DD, 91
const InstructionInfo instructionInfoSUBA_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SUB A, D   -  SUBA_D_DD2  -  DD, 92
const InstructionInfo instructionInfoSUBA_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SUB A, E   -  SUBA_E_DD2  -  DD, 93
const InstructionInfo instructionInfoSUBA_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SUB A, IXh   -  SUBA_IXh_DD2  -  DD, 94
const InstructionInfo instructionInfoSUBA_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SUB A, IXl   -  SUBA_IXl_DD2  -  DD, 95
const InstructionInfo instructionInfoSUBA_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SUB A, A   -  SUBA_A_FD2  -  FD, 97
const InstructionInfo instructionInfoSUBA_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SUB A, B   -  SUBA_B_FD2  -  FD, 90
const InstructionInfo instructionInfoSUBA_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SUB A, C   -  SUBA_C_FD2  -  FD, 91
const InstructionInfo instructionInfoSUBA_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SUB A, D   -  SUBA_D_FD2  -  FD, 92
const InstructionInfo instructionInfoSUBA_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SUB A, E   -  SUBA_E_FD2  -  FD, 93
const InstructionInfo instructionInfoSUBA_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SUB A, IYh   -  SUBA_IYh_FD2  -  FD, 94
const InstructionInfo instructionInfoSUBA_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SUB A, IYl   -  SUBA_IYl_FD2  -  FD, 95
const InstructionInfo instructionInfoSUBA_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SUB A, n   -  SUBA_n_2  -  8E, n
const InstructionInfo instructionInfoSUBA_n_2 =
{
    {
        { 4, OnClock_SUBA_n_2_OF },
        { 3, OnClock_SUBA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SUB A, (HL)   -  SUBA__HL__1  -  96
const InstructionInfo instructionInfoSUBA__HL__1 =
{
    {
        { 4, OnClock_SUBA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SUB A, (IX+d)   -  SUBA__IX_d__DD3  -  DD, 96, d
const InstructionInfo instructionInfoSUBA__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SUBA__ex_d__ex3_AD },
        { 3, OnClock_SUBA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SUB A, (IY+d)   -  SUBA__IY_d__FD3  -  FD, 96, d
const InstructionInfo instructionInfoSUBA__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SUBA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SUBA__ex_d__ex3_AD },
        { 3, OnClock_SUBA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SBC A, A   -  SBCA_A_1  -  9F
const InstructionInfo instructionInfoSBCA_A_1 =
{
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SBC A, B   -  SBCA_B_1  -  98
const InstructionInfo instructionInfoSBCA_B_1 =
{
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SBC A, C   -  SBCA_C_1  -  99
const InstructionInfo instructionInfoSBCA_C_1 =
{
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SBC A, D   -  SBCA_D_1  -  9A
const InstructionInfo instructionInfoSBCA_D_1 =
{
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SBC A, E   -  SBCA_E_1  -  9B
const InstructionInfo instructionInfoSBCA_E_1 =
{
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SBC A, H   -  SBCA_H_1  -  9C
const InstructionInfo instructionInfoSBCA_H_1 =
{
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SBC A, L   -  SBCA_L_1  -  9D
const InstructionInfo instructionInfoSBCA_L_1 =
{
    {
        { 4, OnClock_SBCA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SBC A, A   -  SBCA_A_DD2  -  DD, 9F
const InstructionInfo instructionInfoSBCA_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SBC A, B   -  SBCA_B_DD2  -  DD, 98
const InstructionInfo instructionInfoSBCA_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SBC A, C   -  SBCA_C_DD2  -  DD, 99
const InstructionInfo instructionInfoSBCA_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SBC A, D   -  SBCA_D_DD2  -  DD, 9A
const InstructionInfo instructionInfoSBCA_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SBC A, E   -  SBCA_E_DD2  -  DD, 9B
const InstructionInfo instructionInfoSBCA_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SBC A, IXh   -  SBCA_IXh_DD2  -  DD, 9C
const InstructionInfo instructionInfoSBCA_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SBC A, IXl   -  SBCA_IXl_DD2  -  DD, 9D
const InstructionInfo instructionInfoSBCA_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SBC A, A   -  SBCA_A_FD2  -  FD, 9F
const InstructionInfo instructionInfoSBCA_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SBC A, B   -  SBCA_B_FD2  -  FD, 98
const InstructionInfo instructionInfoSBCA_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SBC A, C   -  SBCA_C_FD2  -  FD, 99
const InstructionInfo instructionInfoSBCA_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SBC A, D   -  SBCA_D_FD2  -  FD, 9A
const InstructionInfo instructionInfoSBCA_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SBC A, E   -  SBCA_E_FD2  -  FD, 9B
const InstructionInfo instructionInfoSBCA_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SBC A, IYh   -  SBCA_IYh_FD2  -  FD, 9C
const InstructionInfo instructionInfoSBCA_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SBC A, IYl   -  SBCA_IYl_FD2  -  FD, 9D
const InstructionInfo instructionInfoSBCA_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SBC A, n   -  SBCA_n_2  -  DE, n
const InstructionInfo instructionInfoSBCA_n_2 =
{
    {
        { 4, OnClock_SBCA_n_2_OF },
        { 3, OnClock_SBCA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SBC A, (HL)   -  SBCA__HL__1  -  9E
const InstructionInfo instructionInfoSBCA__HL__1 =
{
    {
        { 4, OnClock_SBCA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SBC A, (IX+d)   -  SBCA__IX_d__DD3  -  DD, 9E, d
const InstructionInfo instructionInfoSBCA__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SBCA__ex_d__ex3_AD },
        { 3, OnClock_SBCA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SBC A, (IY+d)   -  SBCA__IY_d__FD3  -  FD, 9E, d
const InstructionInfo instructionInfoSBCA__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SBCA__ex_d__ex3_AD },
        { 3, OnClock_SBCA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// AND A, A   -  ANDA_A_1  -  A7
const InstructionInfo instructionInfoANDA_A_1 =
{
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// AND A, B   -  ANDA_B_1  -  A0
const InstructionInfo instructionInfoANDA_B_1 =
{
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// AND A, C   -  ANDA_C_1  -  A1
const InstructionInfo instructionInfoANDA_C_1 =
{
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// AND A, D   -  ANDA_D_1  -  A2
const InstructionInfo instructionInfoANDA_D_1 =
{
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// AND A, E   -  ANDA_E_1  -  A3
const InstructionInfo instructionInfoANDA_E_1 =
{
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// AND A, H   -  ANDA_H_1  -  A4
const InstructionInfo instructionInfoANDA_H_1 =
{
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// AND A, L   -  ANDA_L_1  -  A5
const InstructionInfo instructionInfoANDA_L_1 =
{
    {
        { 4, OnClock_ANDA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// AND A, A   -  ANDA_A_DD2  -  DD, A7
const InstructionInfo instructionInfoANDA_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// AND A, B   -  ANDA_B_DD2  -  DD, A0
const InstructionInfo instructionInfoANDA_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// AND A, C   -  ANDA_C_DD2  -  DD, A1
const InstructionInfo instructionInfoANDA_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// AND A, D   -  ANDA_D_DD2  -  DD, A2
const InstructionInfo instructionInfoANDA_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// AND A, E   -  ANDA_E_DD2  -  DD, A3
const InstructionInfo instructionInfoANDA_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// AND A, IXh   -  ANDA_IXh_DD2  -  DD, A4
const InstructionInfo instructionInfoANDA_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// AND A, IXl   -  ANDA_IXl_DD2  -  DD, A5
const InstructionInfo instructionInfoANDA_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// AND A, A   -  ANDA_A_FD2  -  FD, A7
const InstructionInfo instructionInfoANDA_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// AND A, B   -  ANDA_B_FD2  -  FD, A0
const InstructionInfo instructionInfoANDA_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// AND A, C   -  ANDA_C_FD2  -  FD, A1
const InstructionInfo instructionInfoANDA_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// AND A, D   -  ANDA_D_FD2  -  FD, A2
const InstructionInfo instructionInfoANDA_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// AND A, E   -  ANDA_E_FD2  -  FD, A3
const InstructionInfo instructionInfoANDA_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// AND A, IYh   -  ANDA_IYh_FD2  -  FD, A4
const InstructionInfo instructionInfoANDA_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// AND A, IYl   -  ANDA_IYl_FD2  -  FD, A5
const InstructionInfo instructionInfoANDA_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// AND A, n   -  ANDA_n_2  -  E6, n
const InstructionInfo instructionInfoANDA_n_2 =
{
    {
        { 4, OnClock_ANDA_n_2_OF },
        { 3, OnClock_ANDA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// AND A, (HL)   -  ANDA__HL__1  -  A6
const InstructionInfo instructionInfoANDA__HL__1 =
{
    {
        { 4, OnClock_ANDA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// AND A, (IX+d)   -  ANDA__IX_d__DD3  -  DD, A6, d
const InstructionInfo instructionInfoANDA__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_ANDA__ex_d__ex3_AD },
        { 3, OnClock_ANDA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// AND A, (IY+d)   -  ANDA__IY_d__FD3  -  FD, A6, d
const InstructionInfo instructionInfoANDA__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ANDA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_ANDA__ex_d__ex3_AD },
        { 3, OnClock_ANDA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// OR A, A   -  ORA_A_1  -  B7
const InstructionInfo instructionInfoORA_A_1 =
{
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// OR A, B   -  ORA_B_1  -  B0
const InstructionInfo instructionInfoORA_B_1 =
{
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// OR A, C   -  ORA_C_1  -  B1
const InstructionInfo instructionInfoORA_C_1 =
{
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// OR A, D   -  ORA_D_1  -  B2
const InstructionInfo instructionInfoORA_D_1 =
{
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// OR A, E   -  ORA_E_1  -  B3
const InstructionInfo instructionInfoORA_E_1 =
{
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// OR A, H   -  ORA_H_1  -  B4
const InstructionInfo instructionInfoORA_H_1 =
{
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// OR A, L   -  ORA_L_1  -  B5
const InstructionInfo instructionInfoORA_L_1 =
{
    {
        { 4, OnClock_ORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// OR A, A   -  ORA_A_DD2  -  DD, B7
const InstructionInfo instructionInfoORA_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// OR A, B   -  ORA_B_DD2  -  DD, B0
const InstructionInfo instructionInfoORA_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// OR A, C   -  ORA_C_DD2  -  DD, B1
const InstructionInfo instructionInfoORA_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// OR A, D   -  ORA_D_DD2  -  DD, B2
const InstructionInfo instructionInfoORA_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// OR A, E   -  ORA_E_DD2  -  DD, B3
const InstructionInfo instructionInfoORA_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// OR A, IXh   -  ORA_IXh_DD2  -  DD, B4
const InstructionInfo instructionInfoORA_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// OR A, IXl   -  ORA_IXl_DD2  -  DD, B5
const InstructionInfo instructionInfoORA_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// OR A, A   -  ORA_A_FD2  -  FD, B7
const InstructionInfo instructionInfoORA_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// OR A, B   -  ORA_B_FD2  -  FD, B0
const InstructionInfo instructionInfoORA_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// OR A, C   -  ORA_C_FD2  -  FD, B1
const InstructionInfo instructionInfoORA_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// OR A, D   -  ORA_D_FD2  -  FD, B2
const InstructionInfo instructionInfoORA_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// OR A, E   -  ORA_E_FD2  -  FD, B3
const InstructionInfo instructionInfoORA_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// OR A, IYh   -  ORA_IYh_FD2  -  FD, B4
const InstructionInfo instructionInfoORA_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// OR A, IYl   -  ORA_IYl_FD2  -  FD, B5
const InstructionInfo instructionInfoORA_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// OR A, n   -  ORA_n_2  -  F6, n
const InstructionInfo instructionInfoORA_n_2 =
{
    {
        { 4, OnClock_ORA_n_2_OF },
        { 3, OnClock_ORA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// OR A, (HL)   -  ORA__HL__1  -  B6
const InstructionInfo instructionInfoORA__HL__1 =
{
    {
        { 4, OnClock_ORA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// OR A, (IX+d)   -  ORA__IX_d__DD3  -  DD, B6, d
const InstructionInfo instructionInfoORA__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_ORA__ex_d__ex3_AD },
        { 3, OnClock_ORA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// OR A, (IY+d)   -  ORA__IY_d__FD3  -  FD, B6, d
const InstructionInfo instructionInfoORA__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ORA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_ORA__ex_d__ex3_AD },
        { 3, OnClock_ORA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// XOR A, A   -  XORA_A_1  -  AF
const InstructionInfo instructionInfoXORA_A_1 =
{
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// XOR A, B   -  XORA_B_1  -  A8
const InstructionInfo instructionInfoXORA_B_1 =
{
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// XOR A, C   -  XORA_C_1  -  A9
const InstructionInfo instructionInfoXORA_C_1 =
{
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// XOR A, D   -  XORA_D_1  -  AA
const InstructionInfo instructionInfoXORA_D_1 =
{
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// XOR A, E   -  XORA_E_1  -  AB
const InstructionInfo instructionInfoXORA_E_1 =
{
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// XOR A, H   -  XORA_H_1  -  AC
const InstructionInfo instructionInfoXORA_H_1 =
{
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// XOR A, L   -  XORA_L_1  -  AD
const InstructionInfo instructionInfoXORA_L_1 =
{
    {
        { 4, OnClock_XORA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// XOR A, A   -  XORA_A_DD2  -  DD, AF
const InstructionInfo instructionInfoXORA_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// XOR A, B   -  XORA_B_DD2  -  DD, A8
const InstructionInfo instructionInfoXORA_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// XOR A, C   -  XORA_C_DD2  -  DD, A9
const InstructionInfo instructionInfoXORA_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// XOR A, D   -  XORA_D_DD2  -  DD, AA
const InstructionInfo instructionInfoXORA_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// XOR A, E   -  XORA_E_DD2  -  DD, AB
const InstructionInfo instructionInfoXORA_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// XOR A, IXh   -  XORA_IXh_DD2  -  DD, AC
const InstructionInfo instructionInfoXORA_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// XOR A, IXl   -  XORA_IXl_DD2  -  DD, AD
const InstructionInfo instructionInfoXORA_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// XOR A, A   -  XORA_A_FD2  -  FD, AF
const InstructionInfo instructionInfoXORA_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// XOR A, B   -  XORA_B_FD2  -  FD, A8
const InstructionInfo instructionInfoXORA_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// XOR A, C   -  XORA_C_FD2  -  FD, A9
const InstructionInfo instructionInfoXORA_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// XOR A, D   -  XORA_D_FD2  -  FD, AA
const InstructionInfo instructionInfoXORA_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// XOR A, E   -  XORA_E_FD2  -  FD, AB
const InstructionInfo instructionInfoXORA_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// XOR A, IYh   -  XORA_IYh_FD2  -  FD, AC
const InstructionInfo instructionInfoXORA_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// XOR A, IYl   -  XORA_IYl_FD2  -  FD, AD
const InstructionInfo instructionInfoXORA_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// XOR A, n   -  XORA_n_2  -  EE, n
const InstructionInfo instructionInfoXORA_n_2 =
{
    {
        { 4, OnClock_XORA_n_2_OF },
        { 3, OnClock_XORA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// XOR A, (HL)   -  XORA__HL__1  -  AE
const InstructionInfo instructionInfoXORA__HL__1 =
{
    {
        { 4, OnClock_XORA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// XOR A, (IX+d)   -  XORA__IX_d__DD3  -  DD, AE, d
const InstructionInfo instructionInfoXORA__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_XORA__ex_d__ex3_AD },
        { 3, OnClock_XORA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// XOR A, (IY+d)   -  XORA__IY_d__FD3  -  FD, AE, d
const InstructionInfo instructionInfoXORA__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_XORA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_XORA__ex_d__ex3_AD },
        { 3, OnClock_XORA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CP A, A   -  CPA_A_1  -  BF
const InstructionInfo instructionInfoCPA_A_1 =
{
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// CP A, B   -  CPA_B_1  -  B8
const InstructionInfo instructionInfoCPA_B_1 =
{
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// CP A, C   -  CPA_C_1  -  B9
const InstructionInfo instructionInfoCPA_C_1 =
{
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// CP A, D   -  CPA_D_1  -  BA
const InstructionInfo instructionInfoCPA_D_1 =
{
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// CP A, E   -  CPA_E_1  -  BB
const InstructionInfo instructionInfoCPA_E_1 =
{
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// CP A, H   -  CPA_H_1  -  BC
const InstructionInfo instructionInfoCPA_H_1 =
{
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// CP A, L   -  CPA_L_1  -  BD
const InstructionInfo instructionInfoCPA_L_1 =
{
    {
        { 4, OnClock_CPA_r_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// CP A, A   -  CPA_A_DD2  -  DD, BF
const InstructionInfo instructionInfoCPA_A_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// CP A, B   -  CPA_B_DD2  -  DD, B8
const InstructionInfo instructionInfoCPA_B_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// CP A, C   -  CPA_C_DD2  -  DD, B9
const InstructionInfo instructionInfoCPA_C_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// CP A, D   -  CPA_D_DD2  -  DD, BA
const InstructionInfo instructionInfoCPA_D_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// CP A, E   -  CPA_E_DD2  -  DD, BB
const InstructionInfo instructionInfoCPA_E_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// CP A, IXh   -  CPA_IXh_DD2  -  DD, BC
const InstructionInfo instructionInfoCPA_IXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// CP A, IXl   -  CPA_IXl_DD2  -  DD, BD
const InstructionInfo instructionInfoCPA_IXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_t_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// CP A, A   -  CPA_A_FD2  -  FD, BF
const InstructionInfo instructionInfoCPA_A_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// CP A, B   -  CPA_B_FD2  -  FD, B8
const InstructionInfo instructionInfoCPA_B_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// CP A, C   -  CPA_C_FD2  -  FD, B9
const InstructionInfo instructionInfoCPA_C_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// CP A, D   -  CPA_D_FD2  -  FD, BA
const InstructionInfo instructionInfoCPA_D_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// CP A, E   -  CPA_E_FD2  -  FD, BB
const InstructionInfo instructionInfoCPA_E_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// CP A, IYh   -  CPA_IYh_FD2  -  FD, BC
const InstructionInfo instructionInfoCPA_IYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// CP A, IYl   -  CPA_IYl_FD2  -  FD, BD
const InstructionInfo instructionInfoCPA_IYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA_v_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// CP A, n   -  CPA_n_2  -  FE, n
const InstructionInfo instructionInfoCPA_n_2 =
{
    {
        { 4, OnClock_CPA_n_2_OF },
        { 3, OnClock_CPA_n_2_OD },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CP A, (HL)   -  CPA__HL__1  -  BE
const InstructionInfo instructionInfoCPA__HL__1 =
{
    {
        { 4, OnClock_CPA__HL__1_OF },
        { 3, OnClock_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CP A, (IX+d)   -  CPA__IX_d__DD3  -  DD, BE, d
const InstructionInfo instructionInfoCPA__IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_CPA__ex_d__ex3_AD },
        { 3, OnClock_CPA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CP A, (IY+d)   -  CPA__IY_d__FD3  -  FD, BE, d
const InstructionInfo instructionInfoCPA__IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_CPA__ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_CPA__ex_d__ex3_AD },
        { 3, OnClock_CPA__ex_d__ex3_MR },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// INC A   -  INCA_1  -  3C
const InstructionInfo instructionInfoINCA_1 =
{
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// INC B   -  INCB_1  -  04
const InstructionInfo instructionInfoINCB_1 =
{
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// INC C   -  INCC_1  -  0C
const InstructionInfo instructionInfoINCC_1 =
{
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// INC D   -  INCD_1  -  14
const InstructionInfo instructionInfoINCD_1 =
{
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// INC E   -  INCE_1  -  1C
const InstructionInfo instructionInfoINCE_1 =
{
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// INC H   -  INCH_1  -  24
const InstructionInfo instructionInfoINCH_1 =
{
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// INC L   -  INCL_1  -  2C
const InstructionInfo instructionInfoINCL_1 =
{
    {
        { 4, OnClock_INCr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// INC A   -  INCA_DD2  -  DD, 3C
const InstructionInfo instructionInfoINCA_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// INC B   -  INCB_DD2  -  DD, 04
const InstructionInfo instructionInfoINCB_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// INC C   -  INCC_DD2  -  DD, 0C
const InstructionInfo instructionInfoINCC_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// INC D   -  INCD_DD2  -  DD, 14
const InstructionInfo instructionInfoINCD_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// INC E   -  INCE_DD2  -  DD, 1C
const InstructionInfo instructionInfoINCE_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// INC IXh   -  INCIXh_DD2  -  DD, 24
const InstructionInfo instructionInfoINCIXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// INC IXl   -  INCIXl_DD2  -  DD, 2C
const InstructionInfo instructionInfoINCIXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// INC A   -  INCA_FD2  -  FD, 3C
const InstructionInfo instructionInfoINCA_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// INC B   -  INCB_FD2  -  FD, 04
const InstructionInfo instructionInfoINCB_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// INC C   -  INCC_FD2  -  FD, 0C
const InstructionInfo instructionInfoINCC_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// INC D   -  INCD_FD2  -  FD, 14
const InstructionInfo instructionInfoINCD_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// INC E   -  INCE_FD2  -  FD, 1C
const InstructionInfo instructionInfoINCE_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// INC IYh   -  INCIYh_FD2  -  FD, 24
const InstructionInfo instructionInfoINCIYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// INC IYl   -  INCIYl_FD2  -  FD, 2C
const InstructionInfo instructionInfoINCIYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INCv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// INC (HL)   -  INC_HL__1  -  34
const InstructionInfo instructionInfoINC_HL__1 =
{
    {
        { 4, OnClock_INC_HL__1_OF },
        { 4, OnClock_INC_HL__1_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// INC (IX+d)   -  INC_IX_d__DD3  -  DD, 34, d
const InstructionInfo instructionInfoINC_IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INC_ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_INC_ex_d__ex3_AD },
        { 4, OnClock_INC_ex_d__ex3_MR },
        { 3, OnClock_INC_ex_d__ex3_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// INC (IY+d)   -  INC_IY_d__FD3  -  FD, 34, d
const InstructionInfo instructionInfoINC_IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INC_ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_INC_ex_d__ex3_AD },
        { 4, OnClock_INC_ex_d__ex3_MR },
        { 3, OnClock_INC_ex_d__ex3_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// DEC A   -  DECA_1  -  3D
const InstructionInfo instructionInfoDECA_1 =
{
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// DEC B   -  DECB_1  -  05
const InstructionInfo instructionInfoDECB_1 =
{
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// DEC C   -  DECC_1  -  0D
const InstructionInfo instructionInfoDECC_1 =
{
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// DEC D   -  DECD_1  -  15
const InstructionInfo instructionInfoDECD_1 =
{
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// DEC E   -  DECE_1  -  1D
const InstructionInfo instructionInfoDECE_1 =
{
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// DEC H   -  DECH_1  -  25
const InstructionInfo instructionInfoDECH_1 =
{
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// DEC L   -  DECL_1  -  2D
const InstructionInfo instructionInfoDECL_1 =
{
    {
        { 4, OnClock_DECr_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// DEC A   -  DECA_DD2  -  DD, 3D
const InstructionInfo instructionInfoDECA_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// DEC B   -  DECB_DD2  -  DD, 05
const InstructionInfo instructionInfoDECB_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// DEC C   -  DECC_DD2  -  DD, 0D
const InstructionInfo instructionInfoDECC_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// DEC D   -  DECD_DD2  -  DD, 15
const InstructionInfo instructionInfoDECD_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// DEC E   -  DECE_DD2  -  DD, 1D
const InstructionInfo instructionInfoDECE_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// DEC IXh   -  DECIXh_DD2  -  DD, 25
const InstructionInfo instructionInfoDECIXh_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// DEC IXl   -  DECIXl_DD2  -  DD, 2D
const InstructionInfo instructionInfoDECIXl_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECt_DD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// DEC A   -  DECA_FD2  -  FD, 3D
const InstructionInfo instructionInfoDECA_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// DEC B   -  DECB_FD2  -  FD, 05
const InstructionInfo instructionInfoDECB_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// DEC C   -  DECC_FD2  -  FD, 0D
const InstructionInfo instructionInfoDECC_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// DEC D   -  DECD_FD2  -  FD, 15
const InstructionInfo instructionInfoDECD_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// DEC E   -  DECE_FD2  -  FD, 1D
const InstructionInfo instructionInfoDECE_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// DEC IYh   -  DECIYh_FD2  -  FD, 25
const InstructionInfo instructionInfoDECIYh_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// DEC IYl   -  DECIYl_FD2  -  FD, 2D
const InstructionInfo instructionInfoDECIYl_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DECv_FD2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// DEC (HL)   -  DEC_HL__1  -  35
const InstructionInfo instructionInfoDEC_HL__1 =
{
    {
        { 4, OnClock_DEC_HL__1_OF },
        { 4, OnClock_DEC_HL__1_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// DEC (IX+d)   -  DEC_IX_d__DD3  -  DD, 35, d
const InstructionInfo instructionInfoDEC_IX_d__DD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DEC_ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_DEC_ex_d__ex3_AD },
        { 4, OnClock_DEC_ex_d__ex3_MR },
        { 3, OnClock_DEC_ex_d__ex3_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// DEC (IY+d)   -  DEC_IY_d__FD3  -  FD, 35, d
const InstructionInfo instructionInfoDEC_IY_d__FD3 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_DEC_ex_d__ex3_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_DEC_ex_d__ex3_AD },
        { 4, OnClock_DEC_ex_d__ex3_MR },
        { 3, OnClock_DEC_ex_d__ex3_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// DAA   -  DAA_1  -  27
const InstructionInfo instructionInfoDAA_1 =
{
    {
        { 4, OnClock_DAA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CPL A   -  CPLA_1  -  2F
const InstructionInfo instructionInfoCPLA_1 =
{
    {
        { 4, OnClock_CPLA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// NEG   -  NEG_ED2  -  ED, 44
const InstructionInfo instructionInfoNEG_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_NEG_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CCF   -  CCF_1  -  3F
const InstructionInfo instructionInfoCCF_1 =
{
    {
        { 4, OnClock_CCF_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SCF   -  SCF_1  -  37
const InstructionInfo instructionInfoSCF_1 =
{
    {
        { 4, OnClock_SCF_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// NOP   -  NOP_1  -  00
const InstructionInfo instructionInfoNOP_1 =
{
    {
        { 4, OnClock_NOP_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// HALT   -  HALT_1  -  76
const InstructionInfo instructionInfoHALT_1 =
{
    {
        { 4, OnClock_HALT_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// DI   -  DI_1  -  F3
const InstructionInfo instructionInfoDI_1 =
{
    {
        { 4, OnClock_DI_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// EI   -  EI_1  -  FB
const InstructionInfo instructionInfoEI_1 =
{
    {
        { 4, OnClock_EI_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// IM0   -  IM0_ED2  -  ED, 46
const InstructionInfo instructionInfoIM0_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_IM0_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// IM1   -  IM1_ED2  -  ED, 56
const InstructionInfo instructionInfoIM1_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_IM1_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// IM2   -  IM2_ED2  -  ED, 5E
const InstructionInfo instructionInfoIM2_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_IM2_ED2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// ADD HL, BC   -  ADDHL_BC_1  -  09
const InstructionInfo instructionInfoADDHL_BC_1 =
{
    {
        { 4, OnClock_ADDHL_p_1_OF },
        { 4, OnClock_ADDHL_p_1_OP },
        { 3, OnClock_ADDHL_p_1_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {0} },
        { Type_None, {0} },
    }
};

// ADD HL, DE   -  ADDHL_DE_1  -  19
const InstructionInfo instructionInfoADDHL_DE_1 =
{
    {
        { 4, OnClock_ADDHL_p_1_OF },
        { 4, OnClock_ADDHL_p_1_OP },
        { 3, OnClock_ADDHL_p_1_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {1} },
        { Type_None, {0} },
    }
};

// ADD HL, HL   -  ADDHL_HL_1  -  29
const InstructionInfo instructionInfoADDHL_HL_1 =
{
    {
        { 4, OnClock_ADDHL_p_1_OF },
        { 4, OnClock_ADDHL_p_1_OP },
        { 3, OnClock_ADDHL_p_1_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {2} },
        { Type_None, {0} },
    }
};

// ADD HL, SP   -  ADDHL_SP_1  -  39
const InstructionInfo instructionInfoADDHL_SP_1 =
{
    {
        { 4, OnClock_ADDHL_p_1_OF },
        { 4, OnClock_ADDHL_p_1_OP },
        { 3, OnClock_ADDHL_p_1_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {3} },
        { Type_None, {0} },
    }
};

// ADD IX, BC   -  ADDIX_BC_DD2  -  DD, 09
const InstructionInfo instructionInfoADDIX_BC_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIX_m_DD2_OF },
        { 4, OnClock_ADDIX_m_DD2_OP },
        { 3, OnClock_ADDIX_m_DD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {0} },
        { Type_None, {0} },
    }
};

// ADD IX, DE   -  ADDIX_DE_DD2  -  DD, 19
const InstructionInfo instructionInfoADDIX_DE_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIX_m_DD2_OF },
        { 4, OnClock_ADDIX_m_DD2_OP },
        { 3, OnClock_ADDIX_m_DD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {1} },
        { Type_None, {0} },
    }
};

// ADD IX, IX   -  ADDIX_IX_DD2  -  DD, 29
const InstructionInfo instructionInfoADDIX_IX_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIX_m_DD2_OF },
        { 4, OnClock_ADDIX_m_DD2_OP },
        { 3, OnClock_ADDIX_m_DD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {2} },
        { Type_None, {0} },
    }
};

// ADD IX, SP   -  ADDIX_SP_DD2  -  DD, 39
const InstructionInfo instructionInfoADDIX_SP_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIX_m_DD2_OF },
        { 4, OnClock_ADDIX_m_DD2_OP },
        { 3, OnClock_ADDIX_m_DD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {3} },
        { Type_None, {0} },
    }
};

// ADD IY, BC   -  ADDIY_BC_FD2  -  FD, 09
const InstructionInfo instructionInfoADDIY_BC_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIY_o_FD2_OF },
        { 4, OnClock_ADDIY_o_FD2_OP },
        { 3, OnClock_ADDIY_o_FD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {0} },
        { Type_None, {0} },
    }
};

// ADD IY, DE   -  ADDIY_DE_FD2  -  FD, 19
const InstructionInfo instructionInfoADDIY_DE_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIY_o_FD2_OF },
        { 4, OnClock_ADDIY_o_FD2_OP },
        { 3, OnClock_ADDIY_o_FD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {1} },
        { Type_None, {0} },
    }
};

// ADD IY, IY   -  ADDIY_IY_FD2  -  FD, 29
const InstructionInfo instructionInfoADDIY_IY_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIY_o_FD2_OF },
        { 4, OnClock_ADDIY_o_FD2_OP },
        { 3, OnClock_ADDIY_o_FD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {2} },
        { Type_None, {0} },
    }
};

// ADD IY, SP   -  ADDIY_SP_FD2  -  FD, 39
const InstructionInfo instructionInfoADDIY_SP_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADDIY_o_FD2_OF },
        { 4, OnClock_ADDIY_o_FD2_OP },
        { 3, OnClock_ADDIY_o_FD2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {3} },
        { Type_None, {0} },
    }
};

// ADC HL, BC   -  ADCHL_BC_ED2  -  ED, 4A
const InstructionInfo instructionInfoADCHL_BC_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCHL_p_ED2_OF },
        { 4, OnClock_ADCHL_p_ED2_OP },
        { 3, OnClock_ADCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {0} },
        { Type_None, {0} },
    }
};

// ADC HL, DE   -  ADCHL_DE_ED2  -  ED, 5A
const InstructionInfo instructionInfoADCHL_DE_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCHL_p_ED2_OF },
        { 4, OnClock_ADCHL_p_ED2_OP },
        { 3, OnClock_ADCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {1} },
        { Type_None, {0} },
    }
};

// ADC HL, HL   -  ADCHL_HL_ED2  -  ED, 6A
const InstructionInfo instructionInfoADCHL_HL_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCHL_p_ED2_OF },
        { 4, OnClock_ADCHL_p_ED2_OP },
        { 3, OnClock_ADCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {2} },
        { Type_None, {0} },
    }
};

// ADC HL, SP   -  ADCHL_SP_ED2  -  ED, 7A
const InstructionInfo instructionInfoADCHL_SP_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_ADCHL_p_ED2_OF },
        { 4, OnClock_ADCHL_p_ED2_OP },
        { 3, OnClock_ADCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {3} },
        { Type_None, {0} },
    }
};

// SBC HL, BC   -  SBCHL_BC_ED2  -  ED, 42
const InstructionInfo instructionInfoSBCHL_BC_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCHL_p_ED2_OF },
        { 4, OnClock_SBCHL_p_ED2_OP },
        { 3, OnClock_SBCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {0} },
        { Type_None, {0} },
    }
};

// SBC HL, DE   -  SBCHL_DE_ED2  -  ED, 52
const InstructionInfo instructionInfoSBCHL_DE_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCHL_p_ED2_OF },
        { 4, OnClock_SBCHL_p_ED2_OP },
        { 3, OnClock_SBCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {1} },
        { Type_None, {0} },
    }
};

// SBC HL, HL   -  SBCHL_HL_ED2  -  ED, 62
const InstructionInfo instructionInfoSBCHL_HL_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCHL_p_ED2_OF },
        { 4, OnClock_SBCHL_p_ED2_OP },
        { 3, OnClock_SBCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {2} },
        { Type_None, {0} },
    }
};

// SBC HL, SP   -  SBCHL_SP_ED2  -  ED, 72
const InstructionInfo instructionInfoSBCHL_SP_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SBCHL_p_ED2_OF },
        { 4, OnClock_SBCHL_p_ED2_OP },
        { 3, OnClock_SBCHL_p_ED2_OP },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {3} },
        { Type_None, {0} },
    }
};

// INC BC   -  INCBC_1  -  03
const InstructionInfo instructionInfoINCBC_1 =
{
    {
        { 6, OnClock_INCp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {0} },
        { Type_None, {0} },
    }
};

// INC DE   -  INCDE_1  -  13
const InstructionInfo instructionInfoINCDE_1 =
{
    {
        { 6, OnClock_INCp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {1} },
        { Type_None, {0} },
    }
};

// INC HL   -  INCHL_1  -  23
const InstructionInfo instructionInfoINCHL_1 =
{
    {
        { 6, OnClock_INCp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {2} },
        { Type_None, {0} },
    }
};

// INC SP   -  INCSP_1  -  33
const InstructionInfo instructionInfoINCSP_1 =
{
    {
        { 6, OnClock_INCp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {3} },
        { Type_None, {0} },
    }
};

// INC IX   -  INCIX_DD2  -  DD, 23
const InstructionInfo instructionInfoINCIX_DD2 =
{
    {
        { 4, OnClock_OF },
        { 6, OnClock_INCex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// INC IY   -  INCIY_FD2  -  FD, 23
const InstructionInfo instructionInfoINCIY_FD2 =
{
    {
        { 4, OnClock_OF },
        { 6, OnClock_INCex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// DEC BC   -  DECBC_1  -  0B
const InstructionInfo instructionInfoDECBC_1 =
{
    {
        { 6, OnClock_DECp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {0} },
        { Type_None, {0} },
    }
};

// DEC DE   -  DECDE_1  -  1B
const InstructionInfo instructionInfoDECDE_1 =
{
    {
        { 6, OnClock_DECp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {1} },
        { Type_None, {0} },
    }
};

// DEC HL   -  DECHL_1  -  2B
const InstructionInfo instructionInfoDECHL_1 =
{
    {
        { 6, OnClock_DECp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {2} },
        { Type_None, {0} },
    }
};

// DEC SP   -  DECSP_1  -  3B
const InstructionInfo instructionInfoDECSP_1 =
{
    {
        { 6, OnClock_DECp_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RegistersSP16, {3} },
        { Type_None, {0} },
    }
};

// DEC IX   -  DECIX_DD2  -  DD, 2B
const InstructionInfo instructionInfoDECIX_DD2 =
{
    {
        { 4, OnClock_OF },
        { 6, OnClock_DECex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// DEC IY   -  DECIY_FD2  -  FD, 2B
const InstructionInfo instructionInfoDECIY_FD2 =
{
    {
        { 4, OnClock_OF },
        { 6, OnClock_DECex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RLCA   -  RLCA_1  -  07
const InstructionInfo instructionInfoRLCA_1 =
{
    {
        { 4, OnClock_RLCA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RLA   -  RLA_1  -  17
const InstructionInfo instructionInfoRLA_1 =
{
    {
        { 4, OnClock_RLA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RRCA   -  RRCA_1  -  0F
const InstructionInfo instructionInfoRRCA_1 =
{
    {
        { 4, OnClock_RRCA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RRA   -  RRA_1  -  1F
const InstructionInfo instructionInfoRRA_1 =
{
    {
        { 4, OnClock_RRA_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RLC A   -  RLCA_CB2  -  CB, 07
const InstructionInfo instructionInfoRLCA_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RLC B   -  RLCB_CB2  -  CB, 00
const InstructionInfo instructionInfoRLCB_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RLC C   -  RLCC_CB2  -  CB, 01
const InstructionInfo instructionInfoRLCC_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RLC D   -  RLCD_CB2  -  CB, 02
const InstructionInfo instructionInfoRLCD_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RLC E   -  RLCE_CB2  -  CB, 03
const InstructionInfo instructionInfoRLCE_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RLC H   -  RLCH_CB2  -  CB, 04
const InstructionInfo instructionInfoRLCH_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RLC L   -  RLCL_CB2  -  CB, 05
const InstructionInfo instructionInfoRLCL_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RLC (HL)   -  RLC_HL__CB2  -  CB, 06
const InstructionInfo instructionInfoRLC_HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLC_HL__CB2_OF },
        { 4, OnClock_RLC_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RLC (IX+d)   -  RLC_IX_d__DD4  -  DD, CB, d, 06
const InstructionInfo instructionInfoRLC_IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__ex4_FD },
        { 4, OnClock_RLC_ex_d__ex4_MR },
        { 3, OnClock_RLC_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RLC (IY+d)   -  RLC_IY_d__FD4  -  FD, CB, d, 06
const InstructionInfo instructionInfoRLC_IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__ex4_FD },
        { 4, OnClock_RLC_ex_d__ex4_MR },
        { 3, OnClock_RLC_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RLC (IX+d), A   -  RLC_IX_d__A_DD4  -  DD, CB, d, 07
const InstructionInfo instructionInfoRLC_IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RLC (IY+d), A   -  RLC_IY_d__A_FD4  -  FD, CB, d, 07
const InstructionInfo instructionInfoRLC_IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RLC (IX+d), B   -  RLC_IX_d__B_DD4  -  DD, CB, d, 00
const InstructionInfo instructionInfoRLC_IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RLC (IY+d), B   -  RLC_IY_d__B_FD4  -  FD, CB, d, 00
const InstructionInfo instructionInfoRLC_IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RLC (IX+d), C   -  RLC_IX_d__C_DD4  -  DD, CB, d, 01
const InstructionInfo instructionInfoRLC_IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RLC (IY+d), C   -  RLC_IY_d__C_FD4  -  FD, CB, d, 01
const InstructionInfo instructionInfoRLC_IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RLC (IX+d), D   -  RLC_IX_d__D_DD4  -  DD, CB, d, 02
const InstructionInfo instructionInfoRLC_IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RLC (IY+d), D   -  RLC_IY_d__D_FD4  -  FD, CB, d, 02
const InstructionInfo instructionInfoRLC_IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RLC (IX+d), E   -  RLC_IX_d__E_DD4  -  DD, CB, d, 03
const InstructionInfo instructionInfoRLC_IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RLC (IY+d), E   -  RLC_IY_d__E_FD4  -  FD, CB, d, 03
const InstructionInfo instructionInfoRLC_IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RLC (IX+d), H   -  RLC_IX_d__H_DD4  -  DD, CB, d, 04
const InstructionInfo instructionInfoRLC_IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RLC (IY+d), H   -  RLC_IY_d__H_FD4  -  FD, CB, d, 04
const InstructionInfo instructionInfoRLC_IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RLC (IX+d), L   -  RLC_IX_d__L_DD4  -  DD, CB, d, 05
const InstructionInfo instructionInfoRLC_IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RLC (IY+d), L   -  RLC_IY_d__L_FD4  -  FD, CB, d, 05
const InstructionInfo instructionInfoRLC_IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RLC_ex_d__r_ex4_FD },
        { 4, OnClock_RLC_ex_d__r_ex4_MR },
        { 3, OnClock_RLC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RL A   -  RLA_CB2  -  CB, 17
const InstructionInfo instructionInfoRLA_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RL B   -  RLB_CB2  -  CB, 10
const InstructionInfo instructionInfoRLB_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RL C   -  RLC_CB2  -  CB, 11
const InstructionInfo instructionInfoRLC_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RL D   -  RLD_CB2  -  CB, 12
const InstructionInfo instructionInfoRLD_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RL E   -  RLE_CB2  -  CB, 13
const InstructionInfo instructionInfoRLE_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RL H   -  RLH_CB2  -  CB, 14
const InstructionInfo instructionInfoRLH_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RL L   -  RLL_CB2  -  CB, 15
const InstructionInfo instructionInfoRLL_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RL (HL)   -  RL_HL__CB2  -  CB, 16
const InstructionInfo instructionInfoRL_HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RL_HL__CB2_OF },
        { 4, OnClock_RL_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RL (IX+d)   -  RL_IX_d__DD4  -  DD, CB, d, 16
const InstructionInfo instructionInfoRL_IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__ex4_FD },
        { 4, OnClock_RL_ex_d__ex4_MR },
        { 3, OnClock_RL_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RL (IY+d)   -  RL_IY_d__FD4  -  FD, CB, d, 16
const InstructionInfo instructionInfoRL_IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__ex4_FD },
        { 4, OnClock_RL_ex_d__ex4_MR },
        { 3, OnClock_RL_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RL (IX+d), A   -  RL_IX_d__A_DD4  -  DD, CB, d, 17
const InstructionInfo instructionInfoRL_IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RL (IY+d), A   -  RL_IY_d__A_FD4  -  FD, CB, d, 17
const InstructionInfo instructionInfoRL_IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RL (IX+d), B   -  RL_IX_d__B_DD4  -  DD, CB, d, 10
const InstructionInfo instructionInfoRL_IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RL (IY+d), B   -  RL_IY_d__B_FD4  -  FD, CB, d, 10
const InstructionInfo instructionInfoRL_IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RL (IX+d), C   -  RL_IX_d__C_DD4  -  DD, CB, d, 11
const InstructionInfo instructionInfoRL_IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RL (IY+d), C   -  RL_IY_d__C_FD4  -  FD, CB, d, 11
const InstructionInfo instructionInfoRL_IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RL (IX+d), D   -  RL_IX_d__D_DD4  -  DD, CB, d, 12
const InstructionInfo instructionInfoRL_IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RL (IY+d), D   -  RL_IY_d__D_FD4  -  FD, CB, d, 12
const InstructionInfo instructionInfoRL_IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RL (IX+d), E   -  RL_IX_d__E_DD4  -  DD, CB, d, 13
const InstructionInfo instructionInfoRL_IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RL (IY+d), E   -  RL_IY_d__E_FD4  -  FD, CB, d, 13
const InstructionInfo instructionInfoRL_IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RL (IX+d), H   -  RL_IX_d__H_DD4  -  DD, CB, d, 14
const InstructionInfo instructionInfoRL_IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RL (IY+d), H   -  RL_IY_d__H_FD4  -  FD, CB, d, 14
const InstructionInfo instructionInfoRL_IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RL (IX+d), L   -  RL_IX_d__L_DD4  -  DD, CB, d, 15
const InstructionInfo instructionInfoRL_IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RL (IY+d), L   -  RL_IY_d__L_FD4  -  FD, CB, d, 15
const InstructionInfo instructionInfoRL_IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RL_ex_d__r_ex4_FD },
        { 4, OnClock_RL_ex_d__r_ex4_MR },
        { 3, OnClock_RL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RRC A   -  RRCA_CB2  -  CB, 0F
const InstructionInfo instructionInfoRRCA_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RRC B   -  RRCB_CB2  -  CB, 08
const InstructionInfo instructionInfoRRCB_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RRC C   -  RRCC_CB2  -  CB, 09
const InstructionInfo instructionInfoRRCC_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RRC D   -  RRCD_CB2  -  CB, 0A
const InstructionInfo instructionInfoRRCD_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RRC E   -  RRCE_CB2  -  CB, 0B
const InstructionInfo instructionInfoRRCE_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RRC H   -  RRCH_CB2  -  CB, 0C
const InstructionInfo instructionInfoRRCH_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RRC L   -  RRCL_CB2  -  CB, 0D
const InstructionInfo instructionInfoRRCL_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRCr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RRC (HL)   -  RRC_HL__CB2  -  CB, 0E
const InstructionInfo instructionInfoRRC_HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRC_HL__CB2_OF },
        { 4, OnClock_RRC_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RRC (IX+d)   -  RRC_IX_d__DD4  -  DD, CB, d, 0E
const InstructionInfo instructionInfoRRC_IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__ex4_FD },
        { 4, OnClock_RRC_ex_d__ex4_MR },
        { 3, OnClock_RRC_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RRC (IY+d)   -  RRC_IY_d__FD4  -  FD, CB, d, 0E
const InstructionInfo instructionInfoRRC_IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__ex4_FD },
        { 4, OnClock_RRC_ex_d__ex4_MR },
        { 3, OnClock_RRC_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RRC (IX+d), A   -  RRC_IX_d__A_DD4  -  DD, CB, d, 0F
const InstructionInfo instructionInfoRRC_IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RRC (IY+d), A   -  RRC_IY_d__A_FD4  -  FD, CB, d, 0F
const InstructionInfo instructionInfoRRC_IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RRC (IX+d), B   -  RRC_IX_d__B_DD4  -  DD, CB, d, 08
const InstructionInfo instructionInfoRRC_IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RRC (IY+d), B   -  RRC_IY_d__B_FD4  -  FD, CB, d, 08
const InstructionInfo instructionInfoRRC_IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RRC (IX+d), C   -  RRC_IX_d__C_DD4  -  DD, CB, d, 09
const InstructionInfo instructionInfoRRC_IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RRC (IY+d), C   -  RRC_IY_d__C_FD4  -  FD, CB, d, 09
const InstructionInfo instructionInfoRRC_IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RRC (IX+d), D   -  RRC_IX_d__D_DD4  -  DD, CB, d, 0A
const InstructionInfo instructionInfoRRC_IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RRC (IY+d), D   -  RRC_IY_d__D_FD4  -  FD, CB, d, 0A
const InstructionInfo instructionInfoRRC_IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RRC (IX+d), E   -  RRC_IX_d__E_DD4  -  DD, CB, d, 0B
const InstructionInfo instructionInfoRRC_IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RRC (IY+d), E   -  RRC_IY_d__E_FD4  -  FD, CB, d, 0B
const InstructionInfo instructionInfoRRC_IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RRC (IX+d), H   -  RRC_IX_d__H_DD4  -  DD, CB, d, 0C
const InstructionInfo instructionInfoRRC_IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RRC (IY+d), H   -  RRC_IY_d__H_FD4  -  FD, CB, d, 0C
const InstructionInfo instructionInfoRRC_IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RRC (IX+d), L   -  RRC_IX_d__L_DD4  -  DD, CB, d, 0D
const InstructionInfo instructionInfoRRC_IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RRC (IY+d), L   -  RRC_IY_d__L_FD4  -  FD, CB, d, 0D
const InstructionInfo instructionInfoRRC_IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RRC_ex_d__r_ex4_FD },
        { 4, OnClock_RRC_ex_d__r_ex4_MR },
        { 3, OnClock_RRC_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RR A   -  RRA_CB2  -  CB, 1F
const InstructionInfo instructionInfoRRA_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RR B   -  RRB_CB2  -  CB, 18
const InstructionInfo instructionInfoRRB_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RR C   -  RRC_CB2  -  CB, 19
const InstructionInfo instructionInfoRRC_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RR D   -  RRD_CB2  -  CB, 1A
const InstructionInfo instructionInfoRRD_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RR E   -  RRE_CB2  -  CB, 1B
const InstructionInfo instructionInfoRRE_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RR H   -  RRH_CB2  -  CB, 1C
const InstructionInfo instructionInfoRRH_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RR L   -  RRL_CB2  -  CB, 1D
const InstructionInfo instructionInfoRRL_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RR (HL)   -  RR_HL__CB2  -  CB, 1E
const InstructionInfo instructionInfoRR_HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RR_HL__CB2_OF },
        { 4, OnClock_RR_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RR (IX+d)   -  RR_IX_d__DD4  -  DD, CB, d, 1E
const InstructionInfo instructionInfoRR_IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__ex4_FD },
        { 4, OnClock_RR_ex_d__ex4_MR },
        { 3, OnClock_RR_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RR (IY+d)   -  RR_IY_d__FD4  -  FD, CB, d, 1E
const InstructionInfo instructionInfoRR_IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__ex4_FD },
        { 4, OnClock_RR_ex_d__ex4_MR },
        { 3, OnClock_RR_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RR (IX+d), A   -  RR_IX_d__A_DD4  -  DD, CB, d, 1F
const InstructionInfo instructionInfoRR_IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RR (IY+d), A   -  RR_IY_d__A_FD4  -  FD, CB, d, 1F
const InstructionInfo instructionInfoRR_IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// RR (IX+d), B   -  RR_IX_d__B_DD4  -  DD, CB, d, 18
const InstructionInfo instructionInfoRR_IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RR (IY+d), B   -  RR_IY_d__B_FD4  -  FD, CB, d, 18
const InstructionInfo instructionInfoRR_IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// RR (IX+d), C   -  RR_IX_d__C_DD4  -  DD, CB, d, 19
const InstructionInfo instructionInfoRR_IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RR (IY+d), C   -  RR_IY_d__C_FD4  -  FD, CB, d, 19
const InstructionInfo instructionInfoRR_IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// RR (IX+d), D   -  RR_IX_d__D_DD4  -  DD, CB, d, 1A
const InstructionInfo instructionInfoRR_IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RR (IY+d), D   -  RR_IY_d__D_FD4  -  FD, CB, d, 1A
const InstructionInfo instructionInfoRR_IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// RR (IX+d), E   -  RR_IX_d__E_DD4  -  DD, CB, d, 1B
const InstructionInfo instructionInfoRR_IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RR (IY+d), E   -  RR_IY_d__E_FD4  -  FD, CB, d, 1B
const InstructionInfo instructionInfoRR_IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// RR (IX+d), H   -  RR_IX_d__H_DD4  -  DD, CB, d, 1C
const InstructionInfo instructionInfoRR_IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RR (IY+d), H   -  RR_IY_d__H_FD4  -  FD, CB, d, 1C
const InstructionInfo instructionInfoRR_IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// RR (IX+d), L   -  RR_IX_d__L_DD4  -  DD, CB, d, 1D
const InstructionInfo instructionInfoRR_IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RR (IY+d), L   -  RR_IY_d__L_FD4  -  FD, CB, d, 1D
const InstructionInfo instructionInfoRR_IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RR_ex_d__r_ex4_FD },
        { 4, OnClock_RR_ex_d__r_ex4_MR },
        { 3, OnClock_RR_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SLA A   -  SLAA_CB2  -  CB, 27
const InstructionInfo instructionInfoSLAA_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SLA B   -  SLAB_CB2  -  CB, 20
const InstructionInfo instructionInfoSLAB_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SLA C   -  SLAC_CB2  -  CB, 21
const InstructionInfo instructionInfoSLAC_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SLA D   -  SLAD_CB2  -  CB, 22
const InstructionInfo instructionInfoSLAD_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SLA E   -  SLAE_CB2  -  CB, 23
const InstructionInfo instructionInfoSLAE_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SLA H   -  SLAH_CB2  -  CB, 24
const InstructionInfo instructionInfoSLAH_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SLA L   -  SLAL_CB2  -  CB, 25
const InstructionInfo instructionInfoSLAL_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SLA (HL)   -  SLA_HL__CB2  -  CB, 26
const InstructionInfo instructionInfoSLA_HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLA_HL__CB2_OF },
        { 4, OnClock_SLA_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SLA (IX+d)   -  SLA_IX_d__DD4  -  DD, CB, d, 26
const InstructionInfo instructionInfoSLA_IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__ex4_FD },
        { 4, OnClock_SLA_ex_d__ex4_MR },
        { 3, OnClock_SLA_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SLA (IY+d)   -  SLA_IY_d__FD4  -  FD, CB, d, 26
const InstructionInfo instructionInfoSLA_IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__ex4_FD },
        { 4, OnClock_SLA_ex_d__ex4_MR },
        { 3, OnClock_SLA_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SLA (IX+d), A   -  SLA_IX_d__A_DD4  -  DD, CB, d, 27
const InstructionInfo instructionInfoSLA_IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SLA (IY+d), A   -  SLA_IY_d__A_FD4  -  FD, CB, d, 27
const InstructionInfo instructionInfoSLA_IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SLA (IX+d), B   -  SLA_IX_d__B_DD4  -  DD, CB, d, 20
const InstructionInfo instructionInfoSLA_IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SLA (IY+d), B   -  SLA_IY_d__B_FD4  -  FD, CB, d, 20
const InstructionInfo instructionInfoSLA_IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SLA (IX+d), C   -  SLA_IX_d__C_DD4  -  DD, CB, d, 21
const InstructionInfo instructionInfoSLA_IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SLA (IY+d), C   -  SLA_IY_d__C_FD4  -  FD, CB, d, 21
const InstructionInfo instructionInfoSLA_IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SLA (IX+d), D   -  SLA_IX_d__D_DD4  -  DD, CB, d, 22
const InstructionInfo instructionInfoSLA_IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SLA (IY+d), D   -  SLA_IY_d__D_FD4  -  FD, CB, d, 22
const InstructionInfo instructionInfoSLA_IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SLA (IX+d), E   -  SLA_IX_d__E_DD4  -  DD, CB, d, 23
const InstructionInfo instructionInfoSLA_IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SLA (IY+d), E   -  SLA_IY_d__E_FD4  -  FD, CB, d, 23
const InstructionInfo instructionInfoSLA_IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SLA (IX+d), H   -  SLA_IX_d__H_DD4  -  DD, CB, d, 24
const InstructionInfo instructionInfoSLA_IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SLA (IY+d), H   -  SLA_IY_d__H_FD4  -  FD, CB, d, 24
const InstructionInfo instructionInfoSLA_IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SLA (IX+d), L   -  SLA_IX_d__L_DD4  -  DD, CB, d, 25
const InstructionInfo instructionInfoSLA_IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SLA (IY+d), L   -  SLA_IY_d__L_FD4  -  FD, CB, d, 25
const InstructionInfo instructionInfoSLA_IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLA_ex_d__r_ex4_FD },
        { 4, OnClock_SLA_ex_d__r_ex4_MR },
        { 3, OnClock_SLA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SLL A   -  SLLA_CB2  -  CB, 37
const InstructionInfo instructionInfoSLLA_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SLL B   -  SLLB_CB2  -  CB, 30
const InstructionInfo instructionInfoSLLB_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SLL C   -  SLLC_CB2  -  CB, 31
const InstructionInfo instructionInfoSLLC_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SLL D   -  SLLD_CB2  -  CB, 32
const InstructionInfo instructionInfoSLLD_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SLL E   -  SLLE_CB2  -  CB, 33
const InstructionInfo instructionInfoSLLE_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SLL H   -  SLLH_CB2  -  CB, 34
const InstructionInfo instructionInfoSLLH_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SLL L   -  SLLL_CB2  -  CB, 35
const InstructionInfo instructionInfoSLLL_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SLL (HL)   -  SLL_HL__CB2  -  CB, 36
const InstructionInfo instructionInfoSLL_HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SLL_HL__CB2_OF },
        { 4, OnClock_SLL_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SLL (IX+d)   -  SLL_IX_d__DD4  -  DD, CB, d, 36
const InstructionInfo instructionInfoSLL_IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__ex4_FD },
        { 4, OnClock_SLL_ex_d__ex4_MR },
        { 3, OnClock_SLL_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SLL (IY+d)   -  SLL_IY_d__FD4  -  FD, CB, d, 36
const InstructionInfo instructionInfoSLL_IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__ex4_FD },
        { 4, OnClock_SLL_ex_d__ex4_MR },
        { 3, OnClock_SLL_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SLL (IX+d), A   -  SLL_IX_d__A_DD4  -  DD, CB, d, 37
const InstructionInfo instructionInfoSLL_IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SLL (IY+d), A   -  SLL_IY_d__A_FD4  -  FD, CB, d, 37
const InstructionInfo instructionInfoSLL_IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SLL (IX+d), B   -  SLL_IX_d__B_DD4  -  DD, CB, d, 30
const InstructionInfo instructionInfoSLL_IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SLL (IY+d), B   -  SLL_IY_d__B_FD4  -  FD, CB, d, 30
const InstructionInfo instructionInfoSLL_IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SLL (IX+d), C   -  SLL_IX_d__C_DD4  -  DD, CB, d, 31
const InstructionInfo instructionInfoSLL_IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SLL (IY+d), C   -  SLL_IY_d__C_FD4  -  FD, CB, d, 31
const InstructionInfo instructionInfoSLL_IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SLL (IX+d), D   -  SLL_IX_d__D_DD4  -  DD, CB, d, 32
const InstructionInfo instructionInfoSLL_IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SLL (IY+d), D   -  SLL_IY_d__D_FD4  -  FD, CB, d, 32
const InstructionInfo instructionInfoSLL_IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SLL (IX+d), E   -  SLL_IX_d__E_DD4  -  DD, CB, d, 33
const InstructionInfo instructionInfoSLL_IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SLL (IY+d), E   -  SLL_IY_d__E_FD4  -  FD, CB, d, 33
const InstructionInfo instructionInfoSLL_IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SLL (IX+d), H   -  SLL_IX_d__H_DD4  -  DD, CB, d, 34
const InstructionInfo instructionInfoSLL_IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SLL (IY+d), H   -  SLL_IY_d__H_FD4  -  FD, CB, d, 34
const InstructionInfo instructionInfoSLL_IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SLL (IX+d), L   -  SLL_IX_d__L_DD4  -  DD, CB, d, 35
const InstructionInfo instructionInfoSLL_IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SLL (IY+d), L   -  SLL_IY_d__L_FD4  -  FD, CB, d, 35
const InstructionInfo instructionInfoSLL_IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SLL_ex_d__r_ex4_FD },
        { 4, OnClock_SLL_ex_d__r_ex4_MR },
        { 3, OnClock_SLL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SRA A   -  SRAA_CB2  -  CB, 2F
const InstructionInfo instructionInfoSRAA_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SRA B   -  SRAB_CB2  -  CB, 28
const InstructionInfo instructionInfoSRAB_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SRA C   -  SRAC_CB2  -  CB, 29
const InstructionInfo instructionInfoSRAC_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SRA D   -  SRAD_CB2  -  CB, 2A
const InstructionInfo instructionInfoSRAD_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SRA E   -  SRAE_CB2  -  CB, 2B
const InstructionInfo instructionInfoSRAE_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SRA H   -  SRAH_CB2  -  CB, 2C
const InstructionInfo instructionInfoSRAH_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SRA L   -  SRAL_CB2  -  CB, 2D
const InstructionInfo instructionInfoSRAL_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRAr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SRA (HL)   -  SRA_HL__CB2  -  CB, 2E
const InstructionInfo instructionInfoSRA_HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRA_HL__CB2_OF },
        { 4, OnClock_SRA_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SRA (IX+d)   -  SRA_IX_d__DD4  -  DD, CB, d, 2E
const InstructionInfo instructionInfoSRA_IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__ex4_FD },
        { 4, OnClock_SRA_ex_d__ex4_MR },
        { 3, OnClock_SRA_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SRA (IY+d)   -  SRA_IY_d__FD4  -  FD, CB, d, 2E
const InstructionInfo instructionInfoSRA_IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__ex4_FD },
        { 4, OnClock_SRA_ex_d__ex4_MR },
        { 3, OnClock_SRA_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SRA (IX+d), A   -  SRA_IX_d__A_DD4  -  DD, CB, d, 2F
const InstructionInfo instructionInfoSRA_IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SRA (IY+d), A   -  SRA_IY_d__A_FD4  -  FD, CB, d, 2F
const InstructionInfo instructionInfoSRA_IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SRA (IX+d), B   -  SRA_IX_d__B_DD4  -  DD, CB, d, 28
const InstructionInfo instructionInfoSRA_IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SRA (IY+d), B   -  SRA_IY_d__B_FD4  -  FD, CB, d, 28
const InstructionInfo instructionInfoSRA_IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SRA (IX+d), C   -  SRA_IX_d__C_DD4  -  DD, CB, d, 29
const InstructionInfo instructionInfoSRA_IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SRA (IY+d), C   -  SRA_IY_d__C_FD4  -  FD, CB, d, 29
const InstructionInfo instructionInfoSRA_IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SRA (IX+d), D   -  SRA_IX_d__D_DD4  -  DD, CB, d, 2A
const InstructionInfo instructionInfoSRA_IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SRA (IY+d), D   -  SRA_IY_d__D_FD4  -  FD, CB, d, 2A
const InstructionInfo instructionInfoSRA_IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SRA (IX+d), E   -  SRA_IX_d__E_DD4  -  DD, CB, d, 2B
const InstructionInfo instructionInfoSRA_IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SRA (IY+d), E   -  SRA_IY_d__E_FD4  -  FD, CB, d, 2B
const InstructionInfo instructionInfoSRA_IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SRA (IX+d), H   -  SRA_IX_d__H_DD4  -  DD, CB, d, 2C
const InstructionInfo instructionInfoSRA_IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SRA (IY+d), H   -  SRA_IY_d__H_FD4  -  FD, CB, d, 2C
const InstructionInfo instructionInfoSRA_IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SRA (IX+d), L   -  SRA_IX_d__L_DD4  -  DD, CB, d, 2D
const InstructionInfo instructionInfoSRA_IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SRA (IY+d), L   -  SRA_IY_d__L_FD4  -  FD, CB, d, 2D
const InstructionInfo instructionInfoSRA_IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRA_ex_d__r_ex4_FD },
        { 4, OnClock_SRA_ex_d__r_ex4_MR },
        { 3, OnClock_SRA_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SRL A   -  SRLA_CB2  -  CB, 3F
const InstructionInfo instructionInfoSRLA_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SRL B   -  SRLB_CB2  -  CB, 38
const InstructionInfo instructionInfoSRLB_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SRL C   -  SRLC_CB2  -  CB, 39
const InstructionInfo instructionInfoSRLC_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SRL D   -  SRLD_CB2  -  CB, 3A
const InstructionInfo instructionInfoSRLD_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SRL E   -  SRLE_CB2  -  CB, 3B
const InstructionInfo instructionInfoSRLE_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SRL H   -  SRLH_CB2  -  CB, 3C
const InstructionInfo instructionInfoSRLH_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SRL L   -  SRLL_CB2  -  CB, 3D
const InstructionInfo instructionInfoSRLL_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRLr_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SRL (HL)   -  SRL_HL__CB2  -  CB, 3E
const InstructionInfo instructionInfoSRL_HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SRL_HL__CB2_OF },
        { 4, OnClock_SRL_HL__CB2_MR },
        { 3, OnClock_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SRL (IX+d)   -  SRL_IX_d__DD4  -  DD, CB, d, 3E
const InstructionInfo instructionInfoSRL_IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__ex4_FD },
        { 4, OnClock_SRL_ex_d__ex4_MR },
        { 3, OnClock_SRL_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SRL (IY+d)   -  SRL_IY_d__FD4  -  FD, CB, d, 3E
const InstructionInfo instructionInfoSRL_IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__ex4_FD },
        { 4, OnClock_SRL_ex_d__ex4_MR },
        { 3, OnClock_SRL_ex_d__ex4_MW },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// SRL (IX+d), A   -  SRL_IX_d__A_DD4  -  DD, CB, d, 3F
const InstructionInfo instructionInfoSRL_IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SRL (IY+d), A   -  SRL_IY_d__A_FD4  -  FD, CB, d, 3F
const InstructionInfo instructionInfoSRL_IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// SRL (IX+d), B   -  SRL_IX_d__B_DD4  -  DD, CB, d, 38
const InstructionInfo instructionInfoSRL_IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SRL (IY+d), B   -  SRL_IY_d__B_FD4  -  FD, CB, d, 38
const InstructionInfo instructionInfoSRL_IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// SRL (IX+d), C   -  SRL_IX_d__C_DD4  -  DD, CB, d, 39
const InstructionInfo instructionInfoSRL_IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SRL (IY+d), C   -  SRL_IY_d__C_FD4  -  FD, CB, d, 39
const InstructionInfo instructionInfoSRL_IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// SRL (IX+d), D   -  SRL_IX_d__D_DD4  -  DD, CB, d, 3A
const InstructionInfo instructionInfoSRL_IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SRL (IY+d), D   -  SRL_IY_d__D_FD4  -  FD, CB, d, 3A
const InstructionInfo instructionInfoSRL_IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// SRL (IX+d), E   -  SRL_IX_d__E_DD4  -  DD, CB, d, 3B
const InstructionInfo instructionInfoSRL_IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SRL (IY+d), E   -  SRL_IY_d__E_FD4  -  FD, CB, d, 3B
const InstructionInfo instructionInfoSRL_IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// SRL (IX+d), H   -  SRL_IX_d__H_DD4  -  DD, CB, d, 3C
const InstructionInfo instructionInfoSRL_IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SRL (IY+d), H   -  SRL_IY_d__H_FD4  -  FD, CB, d, 3C
const InstructionInfo instructionInfoSRL_IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// SRL (IX+d), L   -  SRL_IX_d__L_DD4  -  DD, CB, d, 3D
const InstructionInfo instructionInfoSRL_IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// SRL (IY+d), L   -  SRL_IY_d__L_FD4  -  FD, CB, d, 3D
const InstructionInfo instructionInfoSRL_IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SRL_ex_d__r_ex4_FD },
        { 4, OnClock_SRL_ex_d__r_ex4_MR },
        { 3, OnClock_SRL_ex_d__r_ex4_MW },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// RLD A   -  RLDA_ED2  -  ED, 6F
const InstructionInfo instructionInfoRLDA_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RLDA_ED2_OF },
        { 3, OnClock_RLDA_ED2_OP },
        { 4, OnClock_RLDA_ED2_OP },
        { 3, OnClock_RLDA_ED2_OP },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RRD A   -  RRDA_ED2  -  ED, 67
const InstructionInfo instructionInfoRRDA_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RRDA_ED2_OF },
        { 3, OnClock_RRDA_ED2_OP },
        { 4, OnClock_RRDA_ED2_OP },
        { 3, OnClock_RRDA_ED2_OP },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// BIT 0, A   -  BIT0_A_CB2  -  CB, 47
const InstructionInfo instructionInfoBIT0_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {7} },
    }
};

// BIT 1, A   -  BIT1_A_CB2  -  CB, 4F
const InstructionInfo instructionInfoBIT1_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {7} },
    }
};

// BIT 2, A   -  BIT2_A_CB2  -  CB, 57
const InstructionInfo instructionInfoBIT2_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {7} },
    }
};

// BIT 3, A   -  BIT3_A_CB2  -  CB, 5F
const InstructionInfo instructionInfoBIT3_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {7} },
    }
};

// BIT 4, A   -  BIT4_A_CB2  -  CB, 67
const InstructionInfo instructionInfoBIT4_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {7} },
    }
};

// BIT 5, A   -  BIT5_A_CB2  -  CB, 6F
const InstructionInfo instructionInfoBIT5_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {7} },
    }
};

// BIT 6, A   -  BIT6_A_CB2  -  CB, 77
const InstructionInfo instructionInfoBIT6_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {7} },
    }
};

// BIT 7, A   -  BIT7_A_CB2  -  CB, 7F
const InstructionInfo instructionInfoBIT7_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {7} },
    }
};

// BIT 0, B   -  BIT0_B_CB2  -  CB, 40
const InstructionInfo instructionInfoBIT0_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {0} },
    }
};

// BIT 1, B   -  BIT1_B_CB2  -  CB, 48
const InstructionInfo instructionInfoBIT1_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {0} },
    }
};

// BIT 2, B   -  BIT2_B_CB2  -  CB, 50
const InstructionInfo instructionInfoBIT2_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {0} },
    }
};

// BIT 3, B   -  BIT3_B_CB2  -  CB, 58
const InstructionInfo instructionInfoBIT3_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {0} },
    }
};

// BIT 4, B   -  BIT4_B_CB2  -  CB, 60
const InstructionInfo instructionInfoBIT4_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {0} },
    }
};

// BIT 5, B   -  BIT5_B_CB2  -  CB, 68
const InstructionInfo instructionInfoBIT5_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {0} },
    }
};

// BIT 6, B   -  BIT6_B_CB2  -  CB, 70
const InstructionInfo instructionInfoBIT6_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {0} },
    }
};

// BIT 7, B   -  BIT7_B_CB2  -  CB, 78
const InstructionInfo instructionInfoBIT7_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {0} },
    }
};

// BIT 0, C   -  BIT0_C_CB2  -  CB, 41
const InstructionInfo instructionInfoBIT0_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {1} },
    }
};

// BIT 1, C   -  BIT1_C_CB2  -  CB, 49
const InstructionInfo instructionInfoBIT1_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {1} },
    }
};

// BIT 2, C   -  BIT2_C_CB2  -  CB, 51
const InstructionInfo instructionInfoBIT2_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {1} },
    }
};

// BIT 3, C   -  BIT3_C_CB2  -  CB, 59
const InstructionInfo instructionInfoBIT3_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {1} },
    }
};

// BIT 4, C   -  BIT4_C_CB2  -  CB, 61
const InstructionInfo instructionInfoBIT4_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {1} },
    }
};

// BIT 5, C   -  BIT5_C_CB2  -  CB, 69
const InstructionInfo instructionInfoBIT5_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {1} },
    }
};

// BIT 6, C   -  BIT6_C_CB2  -  CB, 71
const InstructionInfo instructionInfoBIT6_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {1} },
    }
};

// BIT 7, C   -  BIT7_C_CB2  -  CB, 79
const InstructionInfo instructionInfoBIT7_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {1} },
    }
};

// BIT 0, D   -  BIT0_D_CB2  -  CB, 42
const InstructionInfo instructionInfoBIT0_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {2} },
    }
};

// BIT 1, D   -  BIT1_D_CB2  -  CB, 4A
const InstructionInfo instructionInfoBIT1_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {2} },
    }
};

// BIT 2, D   -  BIT2_D_CB2  -  CB, 52
const InstructionInfo instructionInfoBIT2_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {2} },
    }
};

// BIT 3, D   -  BIT3_D_CB2  -  CB, 5A
const InstructionInfo instructionInfoBIT3_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {2} },
    }
};

// BIT 4, D   -  BIT4_D_CB2  -  CB, 62
const InstructionInfo instructionInfoBIT4_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {2} },
    }
};

// BIT 5, D   -  BIT5_D_CB2  -  CB, 6A
const InstructionInfo instructionInfoBIT5_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {2} },
    }
};

// BIT 6, D   -  BIT6_D_CB2  -  CB, 72
const InstructionInfo instructionInfoBIT6_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {2} },
    }
};

// BIT 7, D   -  BIT7_D_CB2  -  CB, 7A
const InstructionInfo instructionInfoBIT7_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {2} },
    }
};

// BIT 0, E   -  BIT0_E_CB2  -  CB, 43
const InstructionInfo instructionInfoBIT0_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {3} },
    }
};

// BIT 1, E   -  BIT1_E_CB2  -  CB, 4B
const InstructionInfo instructionInfoBIT1_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {3} },
    }
};

// BIT 2, E   -  BIT2_E_CB2  -  CB, 53
const InstructionInfo instructionInfoBIT2_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {3} },
    }
};

// BIT 3, E   -  BIT3_E_CB2  -  CB, 5B
const InstructionInfo instructionInfoBIT3_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {3} },
    }
};

// BIT 4, E   -  BIT4_E_CB2  -  CB, 63
const InstructionInfo instructionInfoBIT4_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {3} },
    }
};

// BIT 5, E   -  BIT5_E_CB2  -  CB, 6B
const InstructionInfo instructionInfoBIT5_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {3} },
    }
};

// BIT 6, E   -  BIT6_E_CB2  -  CB, 73
const InstructionInfo instructionInfoBIT6_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {3} },
    }
};

// BIT 7, E   -  BIT7_E_CB2  -  CB, 7B
const InstructionInfo instructionInfoBIT7_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {3} },
    }
};

// BIT 0, H   -  BIT0_H_CB2  -  CB, 44
const InstructionInfo instructionInfoBIT0_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {4} },
    }
};

// BIT 1, H   -  BIT1_H_CB2  -  CB, 4C
const InstructionInfo instructionInfoBIT1_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {4} },
    }
};

// BIT 2, H   -  BIT2_H_CB2  -  CB, 54
const InstructionInfo instructionInfoBIT2_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {4} },
    }
};

// BIT 3, H   -  BIT3_H_CB2  -  CB, 5C
const InstructionInfo instructionInfoBIT3_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {4} },
    }
};

// BIT 4, H   -  BIT4_H_CB2  -  CB, 64
const InstructionInfo instructionInfoBIT4_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {4} },
    }
};

// BIT 5, H   -  BIT5_H_CB2  -  CB, 6C
const InstructionInfo instructionInfoBIT5_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {4} },
    }
};

// BIT 6, H   -  BIT6_H_CB2  -  CB, 74
const InstructionInfo instructionInfoBIT6_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {4} },
    }
};

// BIT 7, H   -  BIT7_H_CB2  -  CB, 7C
const InstructionInfo instructionInfoBIT7_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {4} },
    }
};

// BIT 0, L   -  BIT0_L_CB2  -  CB, 45
const InstructionInfo instructionInfoBIT0_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {5} },
    }
};

// BIT 1, L   -  BIT1_L_CB2  -  CB, 4D
const InstructionInfo instructionInfoBIT1_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {5} },
    }
};

// BIT 2, L   -  BIT2_L_CB2  -  CB, 55
const InstructionInfo instructionInfoBIT2_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {5} },
    }
};

// BIT 3, L   -  BIT3_L_CB2  -  CB, 5D
const InstructionInfo instructionInfoBIT3_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {5} },
    }
};

// BIT 4, L   -  BIT4_L_CB2  -  CB, 65
const InstructionInfo instructionInfoBIT4_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {5} },
    }
};

// BIT 5, L   -  BIT5_L_CB2  -  CB, 6D
const InstructionInfo instructionInfoBIT5_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {5} },
    }
};

// BIT 6, L   -  BIT6_L_CB2  -  CB, 75
const InstructionInfo instructionInfoBIT6_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {5} },
    }
};

// BIT 7, L   -  BIT7_L_CB2  -  CB, 7D
const InstructionInfo instructionInfoBIT7_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {5} },
    }
};

// BIT 0, (HL)   -  BIT0__HL__CB2  -  CB, 46
const InstructionInfo instructionInfoBIT0__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_None, {0} },
    }
};

// BIT 1, (HL)   -  BIT1__HL__CB2  -  CB, 4E
const InstructionInfo instructionInfoBIT1__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_None, {0} },
    }
};

// BIT 2, (HL)   -  BIT2__HL__CB2  -  CB, 56
const InstructionInfo instructionInfoBIT2__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_None, {0} },
    }
};

// BIT 3, (HL)   -  BIT3__HL__CB2  -  CB, 5E
const InstructionInfo instructionInfoBIT3__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_None, {0} },
    }
};

// BIT 4, (HL)   -  BIT4__HL__CB2  -  CB, 66
const InstructionInfo instructionInfoBIT4__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_None, {0} },
    }
};

// BIT 5, (HL)   -  BIT5__HL__CB2  -  CB, 6E
const InstructionInfo instructionInfoBIT5__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_None, {0} },
    }
};

// BIT 6, (HL)   -  BIT6__HL__CB2  -  CB, 76
const InstructionInfo instructionInfoBIT6__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_None, {0} },
    }
};

// BIT 7, (HL)   -  BIT7__HL__CB2  -  CB, 7E
const InstructionInfo instructionInfoBIT7__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_BITb__HL__CB2_OF },
        { 4, OnClock_BITb__HL__CB2_MR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_None, {0} },
    }
};

// BIT 0, (IX+d)   -  BIT0__IX_d__DD4  -  DD, CB, d, 46
const InstructionInfo instructionInfoBIT0__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_None, {0} },
    }
};

// BIT 0, (IY+d)   -  BIT0__IY_d__FD4  -  FD, CB, d, 46
const InstructionInfo instructionInfoBIT0__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_None, {0} },
    }
};

// BIT 1, (IX+d)   -  BIT1__IX_d__DD4  -  DD, CB, d, 4E
const InstructionInfo instructionInfoBIT1__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_None, {0} },
    }
};

// BIT 1, (IY+d)   -  BIT1__IY_d__FD4  -  FD, CB, d, 4E
const InstructionInfo instructionInfoBIT1__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_None, {0} },
    }
};

// BIT 2, (IX+d)   -  BIT2__IX_d__DD4  -  DD, CB, d, 56
const InstructionInfo instructionInfoBIT2__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_None, {0} },
    }
};

// BIT 2, (IY+d)   -  BIT2__IY_d__FD4  -  FD, CB, d, 56
const InstructionInfo instructionInfoBIT2__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_None, {0} },
    }
};

// BIT 3, (IX+d)   -  BIT3__IX_d__DD4  -  DD, CB, d, 5E
const InstructionInfo instructionInfoBIT3__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_None, {0} },
    }
};

// BIT 3, (IY+d)   -  BIT3__IY_d__FD4  -  FD, CB, d, 5E
const InstructionInfo instructionInfoBIT3__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_None, {0} },
    }
};

// BIT 4, (IX+d)   -  BIT4__IX_d__DD4  -  DD, CB, d, 66
const InstructionInfo instructionInfoBIT4__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_None, {0} },
    }
};

// BIT 4, (IY+d)   -  BIT4__IY_d__FD4  -  FD, CB, d, 66
const InstructionInfo instructionInfoBIT4__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_None, {0} },
    }
};

// BIT 5, (IX+d)   -  BIT5__IX_d__DD4  -  DD, CB, d, 6E
const InstructionInfo instructionInfoBIT5__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_None, {0} },
    }
};

// BIT 5, (IY+d)   -  BIT5__IY_d__FD4  -  FD, CB, d, 6E
const InstructionInfo instructionInfoBIT5__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_None, {0} },
    }
};

// BIT 6, (IX+d)   -  BIT6__IX_d__DD4  -  DD, CB, d, 76
const InstructionInfo instructionInfoBIT6__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_None, {0} },
    }
};

// BIT 6, (IY+d)   -  BIT6__IY_d__FD4  -  FD, CB, d, 76
const InstructionInfo instructionInfoBIT6__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_None, {0} },
    }
};

// BIT 7, (IX+d)   -  BIT7__IX_d__DD4  -  DD, CB, d, 7E
const InstructionInfo instructionInfoBIT7__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_None, {0} },
    }
};

// BIT 7, (IY+d)   -  BIT7__IY_d__FD4  -  FD, CB, d, 7E
const InstructionInfo instructionInfoBIT7__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_BITb__ex_d__ex4_FD },
        { 4, OnClock_BITb__ex_d__ex4_MR },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_None, {0} },
    }
};

// SET 0, A   -  SET0_A_CB2  -  CB, C7
const InstructionInfo instructionInfoSET0_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {7} },
    }
};

// SET 1, A   -  SET1_A_CB2  -  CB, CF
const InstructionInfo instructionInfoSET1_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {7} },
    }
};

// SET 2, A   -  SET2_A_CB2  -  CB, D7
const InstructionInfo instructionInfoSET2_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {7} },
    }
};

// SET 3, A   -  SET3_A_CB2  -  CB, DF
const InstructionInfo instructionInfoSET3_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {7} },
    }
};

// SET 4, A   -  SET4_A_CB2  -  CB, E7
const InstructionInfo instructionInfoSET4_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {7} },
    }
};

// SET 5, A   -  SET5_A_CB2  -  CB, EF
const InstructionInfo instructionInfoSET5_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {7} },
    }
};

// SET 6, A   -  SET6_A_CB2  -  CB, F7
const InstructionInfo instructionInfoSET6_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {7} },
    }
};

// SET 7, A   -  SET7_A_CB2  -  CB, FF
const InstructionInfo instructionInfoSET7_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {7} },
    }
};

// SET 0, B   -  SET0_B_CB2  -  CB, C0
const InstructionInfo instructionInfoSET0_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {0} },
    }
};

// SET 1, B   -  SET1_B_CB2  -  CB, C8
const InstructionInfo instructionInfoSET1_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {0} },
    }
};

// SET 2, B   -  SET2_B_CB2  -  CB, D0
const InstructionInfo instructionInfoSET2_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {0} },
    }
};

// SET 3, B   -  SET3_B_CB2  -  CB, D8
const InstructionInfo instructionInfoSET3_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {0} },
    }
};

// SET 4, B   -  SET4_B_CB2  -  CB, E0
const InstructionInfo instructionInfoSET4_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {0} },
    }
};

// SET 5, B   -  SET5_B_CB2  -  CB, E8
const InstructionInfo instructionInfoSET5_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {0} },
    }
};

// SET 6, B   -  SET6_B_CB2  -  CB, F0
const InstructionInfo instructionInfoSET6_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {0} },
    }
};

// SET 7, B   -  SET7_B_CB2  -  CB, F8
const InstructionInfo instructionInfoSET7_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {0} },
    }
};

// SET 0, C   -  SET0_C_CB2  -  CB, C1
const InstructionInfo instructionInfoSET0_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {1} },
    }
};

// SET 1, C   -  SET1_C_CB2  -  CB, C9
const InstructionInfo instructionInfoSET1_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {1} },
    }
};

// SET 2, C   -  SET2_C_CB2  -  CB, D1
const InstructionInfo instructionInfoSET2_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {1} },
    }
};

// SET 3, C   -  SET3_C_CB2  -  CB, D9
const InstructionInfo instructionInfoSET3_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {1} },
    }
};

// SET 4, C   -  SET4_C_CB2  -  CB, E1
const InstructionInfo instructionInfoSET4_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {1} },
    }
};

// SET 5, C   -  SET5_C_CB2  -  CB, E9
const InstructionInfo instructionInfoSET5_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {1} },
    }
};

// SET 6, C   -  SET6_C_CB2  -  CB, F1
const InstructionInfo instructionInfoSET6_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {1} },
    }
};

// SET 7, C   -  SET7_C_CB2  -  CB, F9
const InstructionInfo instructionInfoSET7_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {1} },
    }
};

// SET 0, D   -  SET0_D_CB2  -  CB, C2
const InstructionInfo instructionInfoSET0_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {2} },
    }
};

// SET 1, D   -  SET1_D_CB2  -  CB, CA
const InstructionInfo instructionInfoSET1_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {2} },
    }
};

// SET 2, D   -  SET2_D_CB2  -  CB, D2
const InstructionInfo instructionInfoSET2_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {2} },
    }
};

// SET 3, D   -  SET3_D_CB2  -  CB, DA
const InstructionInfo instructionInfoSET3_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {2} },
    }
};

// SET 4, D   -  SET4_D_CB2  -  CB, E2
const InstructionInfo instructionInfoSET4_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {2} },
    }
};

// SET 5, D   -  SET5_D_CB2  -  CB, EA
const InstructionInfo instructionInfoSET5_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {2} },
    }
};

// SET 6, D   -  SET6_D_CB2  -  CB, F2
const InstructionInfo instructionInfoSET6_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {2} },
    }
};

// SET 7, D   -  SET7_D_CB2  -  CB, FA
const InstructionInfo instructionInfoSET7_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {2} },
    }
};

// SET 0, E   -  SET0_E_CB2  -  CB, C3
const InstructionInfo instructionInfoSET0_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {3} },
    }
};

// SET 1, E   -  SET1_E_CB2  -  CB, CB
const InstructionInfo instructionInfoSET1_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {3} },
    }
};

// SET 2, E   -  SET2_E_CB2  -  CB, D3
const InstructionInfo instructionInfoSET2_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {3} },
    }
};

// SET 3, E   -  SET3_E_CB2  -  CB, DB
const InstructionInfo instructionInfoSET3_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {3} },
    }
};

// SET 4, E   -  SET4_E_CB2  -  CB, E3
const InstructionInfo instructionInfoSET4_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {3} },
    }
};

// SET 5, E   -  SET5_E_CB2  -  CB, EB
const InstructionInfo instructionInfoSET5_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {3} },
    }
};

// SET 6, E   -  SET6_E_CB2  -  CB, F3
const InstructionInfo instructionInfoSET6_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {3} },
    }
};

// SET 7, E   -  SET7_E_CB2  -  CB, FB
const InstructionInfo instructionInfoSET7_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {3} },
    }
};

// SET 0, H   -  SET0_H_CB2  -  CB, C4
const InstructionInfo instructionInfoSET0_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {4} },
    }
};

// SET 1, H   -  SET1_H_CB2  -  CB, CC
const InstructionInfo instructionInfoSET1_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {4} },
    }
};

// SET 2, H   -  SET2_H_CB2  -  CB, D4
const InstructionInfo instructionInfoSET2_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {4} },
    }
};

// SET 3, H   -  SET3_H_CB2  -  CB, DC
const InstructionInfo instructionInfoSET3_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {4} },
    }
};

// SET 4, H   -  SET4_H_CB2  -  CB, E4
const InstructionInfo instructionInfoSET4_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {4} },
    }
};

// SET 5, H   -  SET5_H_CB2  -  CB, EC
const InstructionInfo instructionInfoSET5_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {4} },
    }
};

// SET 6, H   -  SET6_H_CB2  -  CB, F4
const InstructionInfo instructionInfoSET6_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {4} },
    }
};

// SET 7, H   -  SET7_H_CB2  -  CB, FC
const InstructionInfo instructionInfoSET7_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {4} },
    }
};

// SET 0, L   -  SET0_L_CB2  -  CB, C5
const InstructionInfo instructionInfoSET0_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {5} },
    }
};

// SET 1, L   -  SET1_L_CB2  -  CB, CD
const InstructionInfo instructionInfoSET1_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {5} },
    }
};

// SET 2, L   -  SET2_L_CB2  -  CB, D5
const InstructionInfo instructionInfoSET2_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {5} },
    }
};

// SET 3, L   -  SET3_L_CB2  -  CB, DD
const InstructionInfo instructionInfoSET3_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {5} },
    }
};

// SET 4, L   -  SET4_L_CB2  -  CB, E5
const InstructionInfo instructionInfoSET4_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {5} },
    }
};

// SET 5, L   -  SET5_L_CB2  -  CB, ED
const InstructionInfo instructionInfoSET5_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {5} },
    }
};

// SET 6, L   -  SET6_L_CB2  -  CB, F5
const InstructionInfo instructionInfoSET6_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {5} },
    }
};

// SET 7, L   -  SET7_L_CB2  -  CB, FD
const InstructionInfo instructionInfoSET7_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {5} },
    }
};

// SET 0, (HL)   -  SET0__HL__CB2  -  CB, C6
const InstructionInfo instructionInfoSET0__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_None, {0} },
    }
};

// SET 1, (HL)   -  SET1__HL__CB2  -  CB, CE
const InstructionInfo instructionInfoSET1__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_None, {0} },
    }
};

// SET 2, (HL)   -  SET2__HL__CB2  -  CB, D6
const InstructionInfo instructionInfoSET2__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_None, {0} },
    }
};

// SET 3, (HL)   -  SET3__HL__CB2  -  CB, DE
const InstructionInfo instructionInfoSET3__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_None, {0} },
    }
};

// SET 4, (HL)   -  SET4__HL__CB2  -  CB, E6
const InstructionInfo instructionInfoSET4__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_None, {0} },
    }
};

// SET 5, (HL)   -  SET5__HL__CB2  -  CB, EE
const InstructionInfo instructionInfoSET5__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_None, {0} },
    }
};

// SET 6, (HL)   -  SET6__HL__CB2  -  CB, F6
const InstructionInfo instructionInfoSET6__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_None, {0} },
    }
};

// SET 7, (HL)   -  SET7__HL__CB2  -  CB, FE
const InstructionInfo instructionInfoSET7__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_SETb__HL__CB2_OF },
        { 4, OnClock_SETb__HL__CB2_MR },
        { 3, OnClock_SETb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_None, {0} },
    }
};

// SET 0, (IX+d)   -  SET0__IX_d__DD4  -  DD, CB, d, C6
const InstructionInfo instructionInfoSET0__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_None, {0} },
    }
};

// SET 0, (IY+d)   -  SET0__IY_d__FD4  -  FD, CB, d, C6
const InstructionInfo instructionInfoSET0__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_None, {0} },
    }
};

// SET 1, (IX+d)   -  SET1__IX_d__DD4  -  DD, CB, d, CE
const InstructionInfo instructionInfoSET1__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_None, {0} },
    }
};

// SET 1, (IY+d)   -  SET1__IY_d__FD4  -  FD, CB, d, CE
const InstructionInfo instructionInfoSET1__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_None, {0} },
    }
};

// SET 2, (IX+d)   -  SET2__IX_d__DD4  -  DD, CB, d, D6
const InstructionInfo instructionInfoSET2__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_None, {0} },
    }
};

// SET 2, (IY+d)   -  SET2__IY_d__FD4  -  FD, CB, d, D6
const InstructionInfo instructionInfoSET2__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_None, {0} },
    }
};

// SET 3, (IX+d)   -  SET3__IX_d__DD4  -  DD, CB, d, DE
const InstructionInfo instructionInfoSET3__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_None, {0} },
    }
};

// SET 3, (IY+d)   -  SET3__IY_d__FD4  -  FD, CB, d, DE
const InstructionInfo instructionInfoSET3__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_None, {0} },
    }
};

// SET 4, (IX+d)   -  SET4__IX_d__DD4  -  DD, CB, d, E6
const InstructionInfo instructionInfoSET4__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_None, {0} },
    }
};

// SET 4, (IY+d)   -  SET4__IY_d__FD4  -  FD, CB, d, E6
const InstructionInfo instructionInfoSET4__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_None, {0} },
    }
};

// SET 5, (IX+d)   -  SET5__IX_d__DD4  -  DD, CB, d, EE
const InstructionInfo instructionInfoSET5__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_None, {0} },
    }
};

// SET 5, (IY+d)   -  SET5__IY_d__FD4  -  FD, CB, d, EE
const InstructionInfo instructionInfoSET5__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_None, {0} },
    }
};

// SET 6, (IX+d)   -  SET6__IX_d__DD4  -  DD, CB, d, F6
const InstructionInfo instructionInfoSET6__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_None, {0} },
    }
};

// SET 6, (IY+d)   -  SET6__IY_d__FD4  -  FD, CB, d, F6
const InstructionInfo instructionInfoSET6__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_None, {0} },
    }
};

// SET 7, (IX+d)   -  SET7__IX_d__DD4  -  DD, CB, d, FE
const InstructionInfo instructionInfoSET7__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_None, {0} },
    }
};

// SET 7, (IY+d)   -  SET7__IY_d__FD4  -  FD, CB, d, FE
const InstructionInfo instructionInfoSET7__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__ex4_FD },
        { 4, OnClock_SETb__ex_d__ex4_MR },
        { 3, OnClock_SETb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_None, {0} },
    }
};

// SET 0, (IX+d), A   -  SET0__IX_d__A_DD4  -  DD, CB, d, C7
const InstructionInfo instructionInfoSET0__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {7} },
    }
};

// SET 0, (IY+d), A   -  SET0__IY_d__A_FD4  -  FD, CB, d, C7
const InstructionInfo instructionInfoSET0__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {7} },
    }
};

// SET 1, (IX+d), A   -  SET1__IX_d__A_DD4  -  DD, CB, d, CF
const InstructionInfo instructionInfoSET1__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {7} },
    }
};

// SET 1, (IY+d), A   -  SET1__IY_d__A_FD4  -  FD, CB, d, CF
const InstructionInfo instructionInfoSET1__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {7} },
    }
};

// SET 2, (IX+d), A   -  SET2__IX_d__A_DD4  -  DD, CB, d, D7
const InstructionInfo instructionInfoSET2__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {7} },
    }
};

// SET 2, (IY+d), A   -  SET2__IY_d__A_FD4  -  FD, CB, d, D7
const InstructionInfo instructionInfoSET2__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {7} },
    }
};

// SET 3, (IX+d), A   -  SET3__IX_d__A_DD4  -  DD, CB, d, DF
const InstructionInfo instructionInfoSET3__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {7} },
    }
};

// SET 3, (IY+d), A   -  SET3__IY_d__A_FD4  -  FD, CB, d, DF
const InstructionInfo instructionInfoSET3__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {7} },
    }
};

// SET 4, (IX+d), A   -  SET4__IX_d__A_DD4  -  DD, CB, d, E7
const InstructionInfo instructionInfoSET4__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {7} },
    }
};

// SET 4, (IY+d), A   -  SET4__IY_d__A_FD4  -  FD, CB, d, E7
const InstructionInfo instructionInfoSET4__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {7} },
    }
};

// SET 5, (IX+d), A   -  SET5__IX_d__A_DD4  -  DD, CB, d, EF
const InstructionInfo instructionInfoSET5__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {7} },
    }
};

// SET 5, (IY+d), A   -  SET5__IY_d__A_FD4  -  FD, CB, d, EF
const InstructionInfo instructionInfoSET5__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {7} },
    }
};

// SET 6, (IX+d), A   -  SET6__IX_d__A_DD4  -  DD, CB, d, F7
const InstructionInfo instructionInfoSET6__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {7} },
    }
};

// SET 6, (IY+d), A   -  SET6__IY_d__A_FD4  -  FD, CB, d, F7
const InstructionInfo instructionInfoSET6__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {7} },
    }
};

// SET 7, (IX+d), A   -  SET7__IX_d__A_DD4  -  DD, CB, d, FF
const InstructionInfo instructionInfoSET7__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {7} },
    }
};

// SET 7, (IY+d), A   -  SET7__IY_d__A_FD4  -  FD, CB, d, FF
const InstructionInfo instructionInfoSET7__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {7} },
    }
};

// SET 0, (IX+d), B   -  SET0__IX_d__B_DD4  -  DD, CB, d, C0
const InstructionInfo instructionInfoSET0__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {0} },
    }
};

// SET 0, (IY+d), B   -  SET0__IY_d__B_FD4  -  FD, CB, d, C0
const InstructionInfo instructionInfoSET0__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {0} },
    }
};

// SET 1, (IX+d), B   -  SET1__IX_d__B_DD4  -  DD, CB, d, C8
const InstructionInfo instructionInfoSET1__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {0} },
    }
};

// SET 1, (IY+d), B   -  SET1__IY_d__B_FD4  -  FD, CB, d, C8
const InstructionInfo instructionInfoSET1__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {0} },
    }
};

// SET 2, (IX+d), B   -  SET2__IX_d__B_DD4  -  DD, CB, d, D0
const InstructionInfo instructionInfoSET2__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {0} },
    }
};

// SET 2, (IY+d), B   -  SET2__IY_d__B_FD4  -  FD, CB, d, D0
const InstructionInfo instructionInfoSET2__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {0} },
    }
};

// SET 3, (IX+d), B   -  SET3__IX_d__B_DD4  -  DD, CB, d, D8
const InstructionInfo instructionInfoSET3__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {0} },
    }
};

// SET 3, (IY+d), B   -  SET3__IY_d__B_FD4  -  FD, CB, d, D8
const InstructionInfo instructionInfoSET3__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {0} },
    }
};

// SET 4, (IX+d), B   -  SET4__IX_d__B_DD4  -  DD, CB, d, E0
const InstructionInfo instructionInfoSET4__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {0} },
    }
};

// SET 4, (IY+d), B   -  SET4__IY_d__B_FD4  -  FD, CB, d, E0
const InstructionInfo instructionInfoSET4__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {0} },
    }
};

// SET 5, (IX+d), B   -  SET5__IX_d__B_DD4  -  DD, CB, d, E8
const InstructionInfo instructionInfoSET5__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {0} },
    }
};

// SET 5, (IY+d), B   -  SET5__IY_d__B_FD4  -  FD, CB, d, E8
const InstructionInfo instructionInfoSET5__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {0} },
    }
};

// SET 6, (IX+d), B   -  SET6__IX_d__B_DD4  -  DD, CB, d, F0
const InstructionInfo instructionInfoSET6__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {0} },
    }
};

// SET 6, (IY+d), B   -  SET6__IY_d__B_FD4  -  FD, CB, d, F0
const InstructionInfo instructionInfoSET6__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {0} },
    }
};

// SET 7, (IX+d), B   -  SET7__IX_d__B_DD4  -  DD, CB, d, F8
const InstructionInfo instructionInfoSET7__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {0} },
    }
};

// SET 7, (IY+d), B   -  SET7__IY_d__B_FD4  -  FD, CB, d, F8
const InstructionInfo instructionInfoSET7__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {0} },
    }
};

// SET 0, (IX+d), C   -  SET0__IX_d__C_DD4  -  DD, CB, d, C1
const InstructionInfo instructionInfoSET0__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {1} },
    }
};

// SET 0, (IY+d), C   -  SET0__IY_d__C_FD4  -  FD, CB, d, C1
const InstructionInfo instructionInfoSET0__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {1} },
    }
};

// SET 1, (IX+d), C   -  SET1__IX_d__C_DD4  -  DD, CB, d, C9
const InstructionInfo instructionInfoSET1__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {1} },
    }
};

// SET 1, (IY+d), C   -  SET1__IY_d__C_FD4  -  FD, CB, d, C9
const InstructionInfo instructionInfoSET1__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {1} },
    }
};

// SET 2, (IX+d), C   -  SET2__IX_d__C_DD4  -  DD, CB, d, D1
const InstructionInfo instructionInfoSET2__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {1} },
    }
};

// SET 2, (IY+d), C   -  SET2__IY_d__C_FD4  -  FD, CB, d, D1
const InstructionInfo instructionInfoSET2__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {1} },
    }
};

// SET 3, (IX+d), C   -  SET3__IX_d__C_DD4  -  DD, CB, d, D9
const InstructionInfo instructionInfoSET3__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {1} },
    }
};

// SET 3, (IY+d), C   -  SET3__IY_d__C_FD4  -  FD, CB, d, D9
const InstructionInfo instructionInfoSET3__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {1} },
    }
};

// SET 4, (IX+d), C   -  SET4__IX_d__C_DD4  -  DD, CB, d, E1
const InstructionInfo instructionInfoSET4__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {1} },
    }
};

// SET 4, (IY+d), C   -  SET4__IY_d__C_FD4  -  FD, CB, d, E1
const InstructionInfo instructionInfoSET4__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {1} },
    }
};

// SET 5, (IX+d), C   -  SET5__IX_d__C_DD4  -  DD, CB, d, E9
const InstructionInfo instructionInfoSET5__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {1} },
    }
};

// SET 5, (IY+d), C   -  SET5__IY_d__C_FD4  -  FD, CB, d, E9
const InstructionInfo instructionInfoSET5__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {1} },
    }
};

// SET 6, (IX+d), C   -  SET6__IX_d__C_DD4  -  DD, CB, d, F1
const InstructionInfo instructionInfoSET6__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {1} },
    }
};

// SET 6, (IY+d), C   -  SET6__IY_d__C_FD4  -  FD, CB, d, F1
const InstructionInfo instructionInfoSET6__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {1} },
    }
};

// SET 7, (IX+d), C   -  SET7__IX_d__C_DD4  -  DD, CB, d, F9
const InstructionInfo instructionInfoSET7__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {1} },
    }
};

// SET 7, (IY+d), C   -  SET7__IY_d__C_FD4  -  FD, CB, d, F9
const InstructionInfo instructionInfoSET7__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {1} },
    }
};

// SET 0, (IX+d), D   -  SET0__IX_d__D_DD4  -  DD, CB, d, C2
const InstructionInfo instructionInfoSET0__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {2} },
    }
};

// SET 0, (IY+d), D   -  SET0__IY_d__D_FD4  -  FD, CB, d, C2
const InstructionInfo instructionInfoSET0__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {2} },
    }
};

// SET 1, (IX+d), D   -  SET1__IX_d__D_DD4  -  DD, CB, d, CA
const InstructionInfo instructionInfoSET1__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {2} },
    }
};

// SET 1, (IY+d), D   -  SET1__IY_d__D_FD4  -  FD, CB, d, CA
const InstructionInfo instructionInfoSET1__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {2} },
    }
};

// SET 2, (IX+d), D   -  SET2__IX_d__D_DD4  -  DD, CB, d, D2
const InstructionInfo instructionInfoSET2__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {2} },
    }
};

// SET 2, (IY+d), D   -  SET2__IY_d__D_FD4  -  FD, CB, d, D2
const InstructionInfo instructionInfoSET2__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {2} },
    }
};

// SET 3, (IX+d), D   -  SET3__IX_d__D_DD4  -  DD, CB, d, DA
const InstructionInfo instructionInfoSET3__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {2} },
    }
};

// SET 3, (IY+d), D   -  SET3__IY_d__D_FD4  -  FD, CB, d, DA
const InstructionInfo instructionInfoSET3__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {2} },
    }
};

// SET 4, (IX+d), D   -  SET4__IX_d__D_DD4  -  DD, CB, d, E2
const InstructionInfo instructionInfoSET4__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {2} },
    }
};

// SET 4, (IY+d), D   -  SET4__IY_d__D_FD4  -  FD, CB, d, E2
const InstructionInfo instructionInfoSET4__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {2} },
    }
};

// SET 5, (IX+d), D   -  SET5__IX_d__D_DD4  -  DD, CB, d, EA
const InstructionInfo instructionInfoSET5__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {2} },
    }
};

// SET 5, (IY+d), D   -  SET5__IY_d__D_FD4  -  FD, CB, d, EA
const InstructionInfo instructionInfoSET5__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {2} },
    }
};

// SET 6, (IX+d), D   -  SET6__IX_d__D_DD4  -  DD, CB, d, F2
const InstructionInfo instructionInfoSET6__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {2} },
    }
};

// SET 6, (IY+d), D   -  SET6__IY_d__D_FD4  -  FD, CB, d, F2
const InstructionInfo instructionInfoSET6__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {2} },
    }
};

// SET 7, (IX+d), D   -  SET7__IX_d__D_DD4  -  DD, CB, d, FA
const InstructionInfo instructionInfoSET7__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {2} },
    }
};

// SET 7, (IY+d), D   -  SET7__IY_d__D_FD4  -  FD, CB, d, FA
const InstructionInfo instructionInfoSET7__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {2} },
    }
};

// SET 0, (IX+d), E   -  SET0__IX_d__E_DD4  -  DD, CB, d, C3
const InstructionInfo instructionInfoSET0__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {3} },
    }
};

// SET 0, (IY+d), E   -  SET0__IY_d__E_FD4  -  FD, CB, d, C3
const InstructionInfo instructionInfoSET0__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {3} },
    }
};

// SET 1, (IX+d), E   -  SET1__IX_d__E_DD4  -  DD, CB, d, CB
const InstructionInfo instructionInfoSET1__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {3} },
    }
};

// SET 1, (IY+d), E   -  SET1__IY_d__E_FD4  -  FD, CB, d, CB
const InstructionInfo instructionInfoSET1__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {3} },
    }
};

// SET 2, (IX+d), E   -  SET2__IX_d__E_DD4  -  DD, CB, d, D3
const InstructionInfo instructionInfoSET2__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {3} },
    }
};

// SET 2, (IY+d), E   -  SET2__IY_d__E_FD4  -  FD, CB, d, D3
const InstructionInfo instructionInfoSET2__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {3} },
    }
};

// SET 3, (IX+d), E   -  SET3__IX_d__E_DD4  -  DD, CB, d, DB
const InstructionInfo instructionInfoSET3__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {3} },
    }
};

// SET 3, (IY+d), E   -  SET3__IY_d__E_FD4  -  FD, CB, d, DB
const InstructionInfo instructionInfoSET3__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {3} },
    }
};

// SET 4, (IX+d), E   -  SET4__IX_d__E_DD4  -  DD, CB, d, E3
const InstructionInfo instructionInfoSET4__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {3} },
    }
};

// SET 4, (IY+d), E   -  SET4__IY_d__E_FD4  -  FD, CB, d, E3
const InstructionInfo instructionInfoSET4__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {3} },
    }
};

// SET 5, (IX+d), E   -  SET5__IX_d__E_DD4  -  DD, CB, d, EB
const InstructionInfo instructionInfoSET5__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {3} },
    }
};

// SET 5, (IY+d), E   -  SET5__IY_d__E_FD4  -  FD, CB, d, EB
const InstructionInfo instructionInfoSET5__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {3} },
    }
};

// SET 6, (IX+d), E   -  SET6__IX_d__E_DD4  -  DD, CB, d, F3
const InstructionInfo instructionInfoSET6__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {3} },
    }
};

// SET 6, (IY+d), E   -  SET6__IY_d__E_FD4  -  FD, CB, d, F3
const InstructionInfo instructionInfoSET6__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {3} },
    }
};

// SET 7, (IX+d), E   -  SET7__IX_d__E_DD4  -  DD, CB, d, FB
const InstructionInfo instructionInfoSET7__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {3} },
    }
};

// SET 7, (IY+d), E   -  SET7__IY_d__E_FD4  -  FD, CB, d, FB
const InstructionInfo instructionInfoSET7__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {3} },
    }
};

// SET 0, (IX+d), H   -  SET0__IX_d__H_DD4  -  DD, CB, d, C4
const InstructionInfo instructionInfoSET0__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {4} },
    }
};

// SET 0, (IY+d), H   -  SET0__IY_d__H_FD4  -  FD, CB, d, C4
const InstructionInfo instructionInfoSET0__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {4} },
    }
};

// SET 1, (IX+d), H   -  SET1__IX_d__H_DD4  -  DD, CB, d, CC
const InstructionInfo instructionInfoSET1__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {4} },
    }
};

// SET 1, (IY+d), H   -  SET1__IY_d__H_FD4  -  FD, CB, d, CC
const InstructionInfo instructionInfoSET1__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {4} },
    }
};

// SET 2, (IX+d), H   -  SET2__IX_d__H_DD4  -  DD, CB, d, D4
const InstructionInfo instructionInfoSET2__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {4} },
    }
};

// SET 2, (IY+d), H   -  SET2__IY_d__H_FD4  -  FD, CB, d, D4
const InstructionInfo instructionInfoSET2__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {4} },
    }
};

// SET 3, (IX+d), H   -  SET3__IX_d__H_DD4  -  DD, CB, d, DC
const InstructionInfo instructionInfoSET3__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {4} },
    }
};

// SET 3, (IY+d), H   -  SET3__IY_d__H_FD4  -  FD, CB, d, DC
const InstructionInfo instructionInfoSET3__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {4} },
    }
};

// SET 4, (IX+d), H   -  SET4__IX_d__H_DD4  -  DD, CB, d, E4
const InstructionInfo instructionInfoSET4__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {4} },
    }
};

// SET 4, (IY+d), H   -  SET4__IY_d__H_FD4  -  FD, CB, d, E4
const InstructionInfo instructionInfoSET4__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {4} },
    }
};

// SET 5, (IX+d), H   -  SET5__IX_d__H_DD4  -  DD, CB, d, EC
const InstructionInfo instructionInfoSET5__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {4} },
    }
};

// SET 5, (IY+d), H   -  SET5__IY_d__H_FD4  -  FD, CB, d, EC
const InstructionInfo instructionInfoSET5__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {4} },
    }
};

// SET 6, (IX+d), H   -  SET6__IX_d__H_DD4  -  DD, CB, d, F4
const InstructionInfo instructionInfoSET6__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {4} },
    }
};

// SET 6, (IY+d), H   -  SET6__IY_d__H_FD4  -  FD, CB, d, F4
const InstructionInfo instructionInfoSET6__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {4} },
    }
};

// SET 7, (IX+d), H   -  SET7__IX_d__H_DD4  -  DD, CB, d, FC
const InstructionInfo instructionInfoSET7__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {4} },
    }
};

// SET 7, (IY+d), H   -  SET7__IY_d__H_FD4  -  FD, CB, d, FC
const InstructionInfo instructionInfoSET7__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {4} },
    }
};

// SET 0, (IX+d), L   -  SET0__IX_d__L_DD4  -  DD, CB, d, C5
const InstructionInfo instructionInfoSET0__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {5} },
    }
};

// SET 0, (IY+d), L   -  SET0__IY_d__L_FD4  -  FD, CB, d, C5
const InstructionInfo instructionInfoSET0__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {5} },
    }
};

// SET 1, (IX+d), L   -  SET1__IX_d__L_DD4  -  DD, CB, d, CD
const InstructionInfo instructionInfoSET1__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {5} },
    }
};

// SET 1, (IY+d), L   -  SET1__IY_d__L_FD4  -  FD, CB, d, CD
const InstructionInfo instructionInfoSET1__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {5} },
    }
};

// SET 2, (IX+d), L   -  SET2__IX_d__L_DD4  -  DD, CB, d, D5
const InstructionInfo instructionInfoSET2__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {5} },
    }
};

// SET 2, (IY+d), L   -  SET2__IY_d__L_FD4  -  FD, CB, d, D5
const InstructionInfo instructionInfoSET2__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {5} },
    }
};

// SET 3, (IX+d), L   -  SET3__IX_d__L_DD4  -  DD, CB, d, DD
const InstructionInfo instructionInfoSET3__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {5} },
    }
};

// SET 3, (IY+d), L   -  SET3__IY_d__L_FD4  -  FD, CB, d, DD
const InstructionInfo instructionInfoSET3__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {5} },
    }
};

// SET 4, (IX+d), L   -  SET4__IX_d__L_DD4  -  DD, CB, d, E5
const InstructionInfo instructionInfoSET4__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {5} },
    }
};

// SET 4, (IY+d), L   -  SET4__IY_d__L_FD4  -  FD, CB, d, E5
const InstructionInfo instructionInfoSET4__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {5} },
    }
};

// SET 5, (IX+d), L   -  SET5__IX_d__L_DD4  -  DD, CB, d, ED
const InstructionInfo instructionInfoSET5__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {5} },
    }
};

// SET 5, (IY+d), L   -  SET5__IY_d__L_FD4  -  FD, CB, d, ED
const InstructionInfo instructionInfoSET5__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {5} },
    }
};

// SET 6, (IX+d), L   -  SET6__IX_d__L_DD4  -  DD, CB, d, F5
const InstructionInfo instructionInfoSET6__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {5} },
    }
};

// SET 6, (IY+d), L   -  SET6__IY_d__L_FD4  -  FD, CB, d, F5
const InstructionInfo instructionInfoSET6__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {5} },
    }
};

// SET 7, (IX+d), L   -  SET7__IX_d__L_DD4  -  DD, CB, d, FD
const InstructionInfo instructionInfoSET7__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {5} },
    }
};

// SET 7, (IY+d), L   -  SET7__IY_d__L_FD4  -  FD, CB, d, FD
const InstructionInfo instructionInfoSET7__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_SETb__ex_d__r_ex4_FD },
        { 4, OnClock_SETb__ex_d__r_ex4_MR },
        { 3, OnClock_SETb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {5} },
    }
};

// RES 0, A   -  RES0_A_CB2  -  CB, 87
const InstructionInfo instructionInfoRES0_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {7} },
    }
};

// RES 1, A   -  RES1_A_CB2  -  CB, 8F
const InstructionInfo instructionInfoRES1_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {7} },
    }
};

// RES 2, A   -  RES2_A_CB2  -  CB, 97
const InstructionInfo instructionInfoRES2_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {7} },
    }
};

// RES 3, A   -  RES3_A_CB2  -  CB, 9F
const InstructionInfo instructionInfoRES3_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {7} },
    }
};

// RES 4, A   -  RES4_A_CB2  -  CB, A7
const InstructionInfo instructionInfoRES4_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {7} },
    }
};

// RES 5, A   -  RES5_A_CB2  -  CB, AF
const InstructionInfo instructionInfoRES5_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {7} },
    }
};

// RES 6, A   -  RES6_A_CB2  -  CB, B7
const InstructionInfo instructionInfoRES6_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {7} },
    }
};

// RES 7, A   -  RES7_A_CB2  -  CB, BF
const InstructionInfo instructionInfoRES7_A_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {7} },
    }
};

// RES 0, B   -  RES0_B_CB2  -  CB, 80
const InstructionInfo instructionInfoRES0_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {0} },
    }
};

// RES 1, B   -  RES1_B_CB2  -  CB, 88
const InstructionInfo instructionInfoRES1_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {0} },
    }
};

// RES 2, B   -  RES2_B_CB2  -  CB, 90
const InstructionInfo instructionInfoRES2_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {0} },
    }
};

// RES 3, B   -  RES3_B_CB2  -  CB, 98
const InstructionInfo instructionInfoRES3_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {0} },
    }
};

// RES 4, B   -  RES4_B_CB2  -  CB, A0
const InstructionInfo instructionInfoRES4_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {0} },
    }
};

// RES 5, B   -  RES5_B_CB2  -  CB, A8
const InstructionInfo instructionInfoRES5_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {0} },
    }
};

// RES 6, B   -  RES6_B_CB2  -  CB, B0
const InstructionInfo instructionInfoRES6_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {0} },
    }
};

// RES 7, B   -  RES7_B_CB2  -  CB, B8
const InstructionInfo instructionInfoRES7_B_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {0} },
    }
};

// RES 0, C   -  RES0_C_CB2  -  CB, 81
const InstructionInfo instructionInfoRES0_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {1} },
    }
};

// RES 1, C   -  RES1_C_CB2  -  CB, 89
const InstructionInfo instructionInfoRES1_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {1} },
    }
};

// RES 2, C   -  RES2_C_CB2  -  CB, 91
const InstructionInfo instructionInfoRES2_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {1} },
    }
};

// RES 3, C   -  RES3_C_CB2  -  CB, 99
const InstructionInfo instructionInfoRES3_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {1} },
    }
};

// RES 4, C   -  RES4_C_CB2  -  CB, A1
const InstructionInfo instructionInfoRES4_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {1} },
    }
};

// RES 5, C   -  RES5_C_CB2  -  CB, A9
const InstructionInfo instructionInfoRES5_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {1} },
    }
};

// RES 6, C   -  RES6_C_CB2  -  CB, B1
const InstructionInfo instructionInfoRES6_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {1} },
    }
};

// RES 7, C   -  RES7_C_CB2  -  CB, B9
const InstructionInfo instructionInfoRES7_C_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {1} },
    }
};

// RES 0, D   -  RES0_D_CB2  -  CB, 82
const InstructionInfo instructionInfoRES0_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {2} },
    }
};

// RES 1, D   -  RES1_D_CB2  -  CB, 8A
const InstructionInfo instructionInfoRES1_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {2} },
    }
};

// RES 2, D   -  RES2_D_CB2  -  CB, 92
const InstructionInfo instructionInfoRES2_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {2} },
    }
};

// RES 3, D   -  RES3_D_CB2  -  CB, 9A
const InstructionInfo instructionInfoRES3_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {2} },
    }
};

// RES 4, D   -  RES4_D_CB2  -  CB, A2
const InstructionInfo instructionInfoRES4_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {2} },
    }
};

// RES 5, D   -  RES5_D_CB2  -  CB, AA
const InstructionInfo instructionInfoRES5_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {2} },
    }
};

// RES 6, D   -  RES6_D_CB2  -  CB, B2
const InstructionInfo instructionInfoRES6_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {2} },
    }
};

// RES 7, D   -  RES7_D_CB2  -  CB, BA
const InstructionInfo instructionInfoRES7_D_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {2} },
    }
};

// RES 0, E   -  RES0_E_CB2  -  CB, 83
const InstructionInfo instructionInfoRES0_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {3} },
    }
};

// RES 1, E   -  RES1_E_CB2  -  CB, 8B
const InstructionInfo instructionInfoRES1_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {3} },
    }
};

// RES 2, E   -  RES2_E_CB2  -  CB, 93
const InstructionInfo instructionInfoRES2_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {3} },
    }
};

// RES 3, E   -  RES3_E_CB2  -  CB, 9B
const InstructionInfo instructionInfoRES3_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {3} },
    }
};

// RES 4, E   -  RES4_E_CB2  -  CB, A3
const InstructionInfo instructionInfoRES4_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {3} },
    }
};

// RES 5, E   -  RES5_E_CB2  -  CB, AB
const InstructionInfo instructionInfoRES5_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {3} },
    }
};

// RES 6, E   -  RES6_E_CB2  -  CB, B3
const InstructionInfo instructionInfoRES6_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {3} },
    }
};

// RES 7, E   -  RES7_E_CB2  -  CB, BB
const InstructionInfo instructionInfoRES7_E_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {3} },
    }
};

// RES 0, H   -  RES0_H_CB2  -  CB, 84
const InstructionInfo instructionInfoRES0_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {4} },
    }
};

// RES 1, H   -  RES1_H_CB2  -  CB, 8C
const InstructionInfo instructionInfoRES1_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {4} },
    }
};

// RES 2, H   -  RES2_H_CB2  -  CB, 94
const InstructionInfo instructionInfoRES2_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {4} },
    }
};

// RES 3, H   -  RES3_H_CB2  -  CB, 9C
const InstructionInfo instructionInfoRES3_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {4} },
    }
};

// RES 4, H   -  RES4_H_CB2  -  CB, A4
const InstructionInfo instructionInfoRES4_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {4} },
    }
};

// RES 5, H   -  RES5_H_CB2  -  CB, AC
const InstructionInfo instructionInfoRES5_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {4} },
    }
};

// RES 6, H   -  RES6_H_CB2  -  CB, B4
const InstructionInfo instructionInfoRES6_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {4} },
    }
};

// RES 7, H   -  RES7_H_CB2  -  CB, BC
const InstructionInfo instructionInfoRES7_H_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {4} },
    }
};

// RES 0, L   -  RES0_L_CB2  -  CB, 85
const InstructionInfo instructionInfoRES0_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {5} },
    }
};

// RES 1, L   -  RES1_L_CB2  -  CB, 8D
const InstructionInfo instructionInfoRES1_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {5} },
    }
};

// RES 2, L   -  RES2_L_CB2  -  CB, 95
const InstructionInfo instructionInfoRES2_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {5} },
    }
};

// RES 3, L   -  RES3_L_CB2  -  CB, 9D
const InstructionInfo instructionInfoRES3_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {5} },
    }
};

// RES 4, L   -  RES4_L_CB2  -  CB, A5
const InstructionInfo instructionInfoRES4_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {5} },
    }
};

// RES 5, L   -  RES5_L_CB2  -  CB, AD
const InstructionInfo instructionInfoRES5_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {5} },
    }
};

// RES 6, L   -  RES6_L_CB2  -  CB, B5
const InstructionInfo instructionInfoRES6_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {5} },
    }
};

// RES 7, L   -  RES7_L_CB2  -  CB, BD
const InstructionInfo instructionInfoRES7_L_CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb_r_CB2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {5} },
    }
};

// RES 0, (HL)   -  RES0__HL__CB2  -  CB, 86
const InstructionInfo instructionInfoRES0__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {0} },
        { Type_None, {0} },
    }
};

// RES 1, (HL)   -  RES1__HL__CB2  -  CB, 8E
const InstructionInfo instructionInfoRES1__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {1} },
        { Type_None, {0} },
    }
};

// RES 2, (HL)   -  RES2__HL__CB2  -  CB, 96
const InstructionInfo instructionInfoRES2__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {2} },
        { Type_None, {0} },
    }
};

// RES 3, (HL)   -  RES3__HL__CB2  -  CB, 9E
const InstructionInfo instructionInfoRES3__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {3} },
        { Type_None, {0} },
    }
};

// RES 4, (HL)   -  RES4__HL__CB2  -  CB, A6
const InstructionInfo instructionInfoRES4__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {4} },
        { Type_None, {0} },
    }
};

// RES 5, (HL)   -  RES5__HL__CB2  -  CB, AE
const InstructionInfo instructionInfoRES5__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {5} },
        { Type_None, {0} },
    }
};

// RES 6, (HL)   -  RES6__HL__CB2  -  CB, B6
const InstructionInfo instructionInfoRES6__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {6} },
        { Type_None, {0} },
    }
};

// RES 7, (HL)   -  RES7__HL__CB2  -  CB, BE
const InstructionInfo instructionInfoRES7__HL__CB2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RESb__HL__CB2_OF },
        { 4, OnClock_RESb__HL__CB2_MR },
        { 3, OnClock_RESb__HL__CB2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Bits8, {7} },
        { Type_None, {0} },
    }
};

// RES 0, (IX+d)   -  RES0__IX_d__DD4  -  DD, CB, d, 86
const InstructionInfo instructionInfoRES0__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_None, {0} },
    }
};

// RES 0, (IY+d)   -  RES0__IY_d__FD4  -  FD, CB, d, 86
const InstructionInfo instructionInfoRES0__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_None, {0} },
    }
};

// RES 1, (IX+d)   -  RES1__IX_d__DD4  -  DD, CB, d, 8E
const InstructionInfo instructionInfoRES1__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_None, {0} },
    }
};

// RES 1, (IY+d)   -  RES1__IY_d__FD4  -  FD, CB, d, 8E
const InstructionInfo instructionInfoRES1__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_None, {0} },
    }
};

// RES 2, (IX+d)   -  RES2__IX_d__DD4  -  DD, CB, d, 96
const InstructionInfo instructionInfoRES2__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_None, {0} },
    }
};

// RES 2, (IY+d)   -  RES2__IY_d__FD4  -  FD, CB, d, 96
const InstructionInfo instructionInfoRES2__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_None, {0} },
    }
};

// RES 3, (IX+d)   -  RES3__IX_d__DD4  -  DD, CB, d, 9E
const InstructionInfo instructionInfoRES3__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_None, {0} },
    }
};

// RES 3, (IY+d)   -  RES3__IY_d__FD4  -  FD, CB, d, 9E
const InstructionInfo instructionInfoRES3__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_None, {0} },
    }
};

// RES 4, (IX+d)   -  RES4__IX_d__DD4  -  DD, CB, d, A6
const InstructionInfo instructionInfoRES4__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_None, {0} },
    }
};

// RES 4, (IY+d)   -  RES4__IY_d__FD4  -  FD, CB, d, A6
const InstructionInfo instructionInfoRES4__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_None, {0} },
    }
};

// RES 5, (IX+d)   -  RES5__IX_d__DD4  -  DD, CB, d, AE
const InstructionInfo instructionInfoRES5__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_None, {0} },
    }
};

// RES 5, (IY+d)   -  RES5__IY_d__FD4  -  FD, CB, d, AE
const InstructionInfo instructionInfoRES5__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_None, {0} },
    }
};

// RES 6, (IX+d)   -  RES6__IX_d__DD4  -  DD, CB, d, B6
const InstructionInfo instructionInfoRES6__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_None, {0} },
    }
};

// RES 6, (IY+d)   -  RES6__IY_d__FD4  -  FD, CB, d, B6
const InstructionInfo instructionInfoRES6__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_None, {0} },
    }
};

// RES 7, (IX+d)   -  RES7__IX_d__DD4  -  DD, CB, d, BE
const InstructionInfo instructionInfoRES7__IX_d__DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_None, {0} },
    }
};

// RES 7, (IY+d)   -  RES7__IY_d__FD4  -  FD, CB, d, BE
const InstructionInfo instructionInfoRES7__IY_d__FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__ex4_FD },
        { 4, OnClock_RESb__ex_d__ex4_MR },
        { 3, OnClock_RESb__ex_d__ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_None, {0} },
    }
};

// RES 0, (IX+d), A   -  RES0__IX_d__A_DD4  -  DD, CB, d, 87
const InstructionInfo instructionInfoRES0__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {7} },
    }
};

// RES 0, (IY+d), A   -  RES0__IY_d__A_FD4  -  FD, CB, d, 87
const InstructionInfo instructionInfoRES0__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {7} },
    }
};

// RES 1, (IX+d), A   -  RES1__IX_d__A_DD4  -  DD, CB, d, 8F
const InstructionInfo instructionInfoRES1__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {7} },
    }
};

// RES 1, (IY+d), A   -  RES1__IY_d__A_FD4  -  FD, CB, d, 8F
const InstructionInfo instructionInfoRES1__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {7} },
    }
};

// RES 2, (IX+d), A   -  RES2__IX_d__A_DD4  -  DD, CB, d, 97
const InstructionInfo instructionInfoRES2__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {7} },
    }
};

// RES 2, (IY+d), A   -  RES2__IY_d__A_FD4  -  FD, CB, d, 97
const InstructionInfo instructionInfoRES2__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {7} },
    }
};

// RES 3, (IX+d), A   -  RES3__IX_d__A_DD4  -  DD, CB, d, 9F
const InstructionInfo instructionInfoRES3__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {7} },
    }
};

// RES 3, (IY+d), A   -  RES3__IY_d__A_FD4  -  FD, CB, d, 9F
const InstructionInfo instructionInfoRES3__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {7} },
    }
};

// RES 4, (IX+d), A   -  RES4__IX_d__A_DD4  -  DD, CB, d, A7
const InstructionInfo instructionInfoRES4__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {7} },
    }
};

// RES 4, (IY+d), A   -  RES4__IY_d__A_FD4  -  FD, CB, d, A7
const InstructionInfo instructionInfoRES4__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {7} },
    }
};

// RES 5, (IX+d), A   -  RES5__IX_d__A_DD4  -  DD, CB, d, AF
const InstructionInfo instructionInfoRES5__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {7} },
    }
};

// RES 5, (IY+d), A   -  RES5__IY_d__A_FD4  -  FD, CB, d, AF
const InstructionInfo instructionInfoRES5__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {7} },
    }
};

// RES 6, (IX+d), A   -  RES6__IX_d__A_DD4  -  DD, CB, d, B7
const InstructionInfo instructionInfoRES6__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {7} },
    }
};

// RES 6, (IY+d), A   -  RES6__IY_d__A_FD4  -  FD, CB, d, B7
const InstructionInfo instructionInfoRES6__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {7} },
    }
};

// RES 7, (IX+d), A   -  RES7__IX_d__A_DD4  -  DD, CB, d, BF
const InstructionInfo instructionInfoRES7__IX_d__A_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {7} },
    }
};

// RES 7, (IY+d), A   -  RES7__IY_d__A_FD4  -  FD, CB, d, BF
const InstructionInfo instructionInfoRES7__IY_d__A_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {7} },
    }
};

// RES 0, (IX+d), B   -  RES0__IX_d__B_DD4  -  DD, CB, d, 80
const InstructionInfo instructionInfoRES0__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {0} },
    }
};

// RES 0, (IY+d), B   -  RES0__IY_d__B_FD4  -  FD, CB, d, 80
const InstructionInfo instructionInfoRES0__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {0} },
    }
};

// RES 1, (IX+d), B   -  RES1__IX_d__B_DD4  -  DD, CB, d, 88
const InstructionInfo instructionInfoRES1__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {0} },
    }
};

// RES 1, (IY+d), B   -  RES1__IY_d__B_FD4  -  FD, CB, d, 88
const InstructionInfo instructionInfoRES1__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {0} },
    }
};

// RES 2, (IX+d), B   -  RES2__IX_d__B_DD4  -  DD, CB, d, 90
const InstructionInfo instructionInfoRES2__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {0} },
    }
};

// RES 2, (IY+d), B   -  RES2__IY_d__B_FD4  -  FD, CB, d, 90
const InstructionInfo instructionInfoRES2__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {0} },
    }
};

// RES 3, (IX+d), B   -  RES3__IX_d__B_DD4  -  DD, CB, d, 98
const InstructionInfo instructionInfoRES3__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {0} },
    }
};

// RES 3, (IY+d), B   -  RES3__IY_d__B_FD4  -  FD, CB, d, 98
const InstructionInfo instructionInfoRES3__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {0} },
    }
};

// RES 4, (IX+d), B   -  RES4__IX_d__B_DD4  -  DD, CB, d, A0
const InstructionInfo instructionInfoRES4__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {0} },
    }
};

// RES 4, (IY+d), B   -  RES4__IY_d__B_FD4  -  FD, CB, d, A0
const InstructionInfo instructionInfoRES4__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {0} },
    }
};

// RES 5, (IX+d), B   -  RES5__IX_d__B_DD4  -  DD, CB, d, A8
const InstructionInfo instructionInfoRES5__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {0} },
    }
};

// RES 5, (IY+d), B   -  RES5__IY_d__B_FD4  -  FD, CB, d, A8
const InstructionInfo instructionInfoRES5__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {0} },
    }
};

// RES 6, (IX+d), B   -  RES6__IX_d__B_DD4  -  DD, CB, d, B0
const InstructionInfo instructionInfoRES6__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {0} },
    }
};

// RES 6, (IY+d), B   -  RES6__IY_d__B_FD4  -  FD, CB, d, B0
const InstructionInfo instructionInfoRES6__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {0} },
    }
};

// RES 7, (IX+d), B   -  RES7__IX_d__B_DD4  -  DD, CB, d, B8
const InstructionInfo instructionInfoRES7__IX_d__B_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {0} },
    }
};

// RES 7, (IY+d), B   -  RES7__IY_d__B_FD4  -  FD, CB, d, B8
const InstructionInfo instructionInfoRES7__IY_d__B_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {0} },
    }
};

// RES 0, (IX+d), C   -  RES0__IX_d__C_DD4  -  DD, CB, d, 81
const InstructionInfo instructionInfoRES0__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {1} },
    }
};

// RES 0, (IY+d), C   -  RES0__IY_d__C_FD4  -  FD, CB, d, 81
const InstructionInfo instructionInfoRES0__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {1} },
    }
};

// RES 1, (IX+d), C   -  RES1__IX_d__C_DD4  -  DD, CB, d, 89
const InstructionInfo instructionInfoRES1__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {1} },
    }
};

// RES 1, (IY+d), C   -  RES1__IY_d__C_FD4  -  FD, CB, d, 89
const InstructionInfo instructionInfoRES1__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {1} },
    }
};

// RES 2, (IX+d), C   -  RES2__IX_d__C_DD4  -  DD, CB, d, 91
const InstructionInfo instructionInfoRES2__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {1} },
    }
};

// RES 2, (IY+d), C   -  RES2__IY_d__C_FD4  -  FD, CB, d, 91
const InstructionInfo instructionInfoRES2__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {1} },
    }
};

// RES 3, (IX+d), C   -  RES3__IX_d__C_DD4  -  DD, CB, d, 99
const InstructionInfo instructionInfoRES3__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {1} },
    }
};

// RES 3, (IY+d), C   -  RES3__IY_d__C_FD4  -  FD, CB, d, 99
const InstructionInfo instructionInfoRES3__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {1} },
    }
};

// RES 4, (IX+d), C   -  RES4__IX_d__C_DD4  -  DD, CB, d, A1
const InstructionInfo instructionInfoRES4__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {1} },
    }
};

// RES 4, (IY+d), C   -  RES4__IY_d__C_FD4  -  FD, CB, d, A1
const InstructionInfo instructionInfoRES4__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {1} },
    }
};

// RES 5, (IX+d), C   -  RES5__IX_d__C_DD4  -  DD, CB, d, A9
const InstructionInfo instructionInfoRES5__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {1} },
    }
};

// RES 5, (IY+d), C   -  RES5__IY_d__C_FD4  -  FD, CB, d, A9
const InstructionInfo instructionInfoRES5__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {1} },
    }
};

// RES 6, (IX+d), C   -  RES6__IX_d__C_DD4  -  DD, CB, d, B1
const InstructionInfo instructionInfoRES6__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {1} },
    }
};

// RES 6, (IY+d), C   -  RES6__IY_d__C_FD4  -  FD, CB, d, B1
const InstructionInfo instructionInfoRES6__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {1} },
    }
};

// RES 7, (IX+d), C   -  RES7__IX_d__C_DD4  -  DD, CB, d, B9
const InstructionInfo instructionInfoRES7__IX_d__C_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {1} },
    }
};

// RES 7, (IY+d), C   -  RES7__IY_d__C_FD4  -  FD, CB, d, B9
const InstructionInfo instructionInfoRES7__IY_d__C_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {1} },
    }
};

// RES 0, (IX+d), D   -  RES0__IX_d__D_DD4  -  DD, CB, d, 82
const InstructionInfo instructionInfoRES0__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {2} },
    }
};

// RES 0, (IY+d), D   -  RES0__IY_d__D_FD4  -  FD, CB, d, 82
const InstructionInfo instructionInfoRES0__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {2} },
    }
};

// RES 1, (IX+d), D   -  RES1__IX_d__D_DD4  -  DD, CB, d, 8A
const InstructionInfo instructionInfoRES1__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {2} },
    }
};

// RES 1, (IY+d), D   -  RES1__IY_d__D_FD4  -  FD, CB, d, 8A
const InstructionInfo instructionInfoRES1__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {2} },
    }
};

// RES 2, (IX+d), D   -  RES2__IX_d__D_DD4  -  DD, CB, d, 92
const InstructionInfo instructionInfoRES2__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {2} },
    }
};

// RES 2, (IY+d), D   -  RES2__IY_d__D_FD4  -  FD, CB, d, 92
const InstructionInfo instructionInfoRES2__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {2} },
    }
};

// RES 3, (IX+d), D   -  RES3__IX_d__D_DD4  -  DD, CB, d, 9A
const InstructionInfo instructionInfoRES3__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {2} },
    }
};

// RES 3, (IY+d), D   -  RES3__IY_d__D_FD4  -  FD, CB, d, 9A
const InstructionInfo instructionInfoRES3__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {2} },
    }
};

// RES 4, (IX+d), D   -  RES4__IX_d__D_DD4  -  DD, CB, d, A2
const InstructionInfo instructionInfoRES4__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {2} },
    }
};

// RES 4, (IY+d), D   -  RES4__IY_d__D_FD4  -  FD, CB, d, A2
const InstructionInfo instructionInfoRES4__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {2} },
    }
};

// RES 5, (IX+d), D   -  RES5__IX_d__D_DD4  -  DD, CB, d, AA
const InstructionInfo instructionInfoRES5__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {2} },
    }
};

// RES 5, (IY+d), D   -  RES5__IY_d__D_FD4  -  FD, CB, d, AA
const InstructionInfo instructionInfoRES5__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {2} },
    }
};

// RES 6, (IX+d), D   -  RES6__IX_d__D_DD4  -  DD, CB, d, B2
const InstructionInfo instructionInfoRES6__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {2} },
    }
};

// RES 6, (IY+d), D   -  RES6__IY_d__D_FD4  -  FD, CB, d, B2
const InstructionInfo instructionInfoRES6__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {2} },
    }
};

// RES 7, (IX+d), D   -  RES7__IX_d__D_DD4  -  DD, CB, d, BA
const InstructionInfo instructionInfoRES7__IX_d__D_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {2} },
    }
};

// RES 7, (IY+d), D   -  RES7__IY_d__D_FD4  -  FD, CB, d, BA
const InstructionInfo instructionInfoRES7__IY_d__D_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {2} },
    }
};

// RES 0, (IX+d), E   -  RES0__IX_d__E_DD4  -  DD, CB, d, 83
const InstructionInfo instructionInfoRES0__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {3} },
    }
};

// RES 0, (IY+d), E   -  RES0__IY_d__E_FD4  -  FD, CB, d, 83
const InstructionInfo instructionInfoRES0__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {3} },
    }
};

// RES 1, (IX+d), E   -  RES1__IX_d__E_DD4  -  DD, CB, d, 8B
const InstructionInfo instructionInfoRES1__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {3} },
    }
};

// RES 1, (IY+d), E   -  RES1__IY_d__E_FD4  -  FD, CB, d, 8B
const InstructionInfo instructionInfoRES1__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {3} },
    }
};

// RES 2, (IX+d), E   -  RES2__IX_d__E_DD4  -  DD, CB, d, 93
const InstructionInfo instructionInfoRES2__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {3} },
    }
};

// RES 2, (IY+d), E   -  RES2__IY_d__E_FD4  -  FD, CB, d, 93
const InstructionInfo instructionInfoRES2__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {3} },
    }
};

// RES 3, (IX+d), E   -  RES3__IX_d__E_DD4  -  DD, CB, d, 9B
const InstructionInfo instructionInfoRES3__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {3} },
    }
};

// RES 3, (IY+d), E   -  RES3__IY_d__E_FD4  -  FD, CB, d, 9B
const InstructionInfo instructionInfoRES3__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {3} },
    }
};

// RES 4, (IX+d), E   -  RES4__IX_d__E_DD4  -  DD, CB, d, A3
const InstructionInfo instructionInfoRES4__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {3} },
    }
};

// RES 4, (IY+d), E   -  RES4__IY_d__E_FD4  -  FD, CB, d, A3
const InstructionInfo instructionInfoRES4__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {3} },
    }
};

// RES 5, (IX+d), E   -  RES5__IX_d__E_DD4  -  DD, CB, d, AB
const InstructionInfo instructionInfoRES5__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {3} },
    }
};

// RES 5, (IY+d), E   -  RES5__IY_d__E_FD4  -  FD, CB, d, AB
const InstructionInfo instructionInfoRES5__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {3} },
    }
};

// RES 6, (IX+d), E   -  RES6__IX_d__E_DD4  -  DD, CB, d, B3
const InstructionInfo instructionInfoRES6__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {3} },
    }
};

// RES 6, (IY+d), E   -  RES6__IY_d__E_FD4  -  FD, CB, d, B3
const InstructionInfo instructionInfoRES6__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {3} },
    }
};

// RES 7, (IX+d), E   -  RES7__IX_d__E_DD4  -  DD, CB, d, BB
const InstructionInfo instructionInfoRES7__IX_d__E_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {3} },
    }
};

// RES 7, (IY+d), E   -  RES7__IY_d__E_FD4  -  FD, CB, d, BB
const InstructionInfo instructionInfoRES7__IY_d__E_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {3} },
    }
};

// RES 0, (IX+d), H   -  RES0__IX_d__H_DD4  -  DD, CB, d, 84
const InstructionInfo instructionInfoRES0__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {4} },
    }
};

// RES 0, (IY+d), H   -  RES0__IY_d__H_FD4  -  FD, CB, d, 84
const InstructionInfo instructionInfoRES0__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {4} },
    }
};

// RES 1, (IX+d), H   -  RES1__IX_d__H_DD4  -  DD, CB, d, 8C
const InstructionInfo instructionInfoRES1__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {4} },
    }
};

// RES 1, (IY+d), H   -  RES1__IY_d__H_FD4  -  FD, CB, d, 8C
const InstructionInfo instructionInfoRES1__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {4} },
    }
};

// RES 2, (IX+d), H   -  RES2__IX_d__H_DD4  -  DD, CB, d, 94
const InstructionInfo instructionInfoRES2__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {4} },
    }
};

// RES 2, (IY+d), H   -  RES2__IY_d__H_FD4  -  FD, CB, d, 94
const InstructionInfo instructionInfoRES2__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {4} },
    }
};

// RES 3, (IX+d), H   -  RES3__IX_d__H_DD4  -  DD, CB, d, 9C
const InstructionInfo instructionInfoRES3__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {4} },
    }
};

// RES 3, (IY+d), H   -  RES3__IY_d__H_FD4  -  FD, CB, d, 9C
const InstructionInfo instructionInfoRES3__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {4} },
    }
};

// RES 4, (IX+d), H   -  RES4__IX_d__H_DD4  -  DD, CB, d, A4
const InstructionInfo instructionInfoRES4__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {4} },
    }
};

// RES 4, (IY+d), H   -  RES4__IY_d__H_FD4  -  FD, CB, d, A4
const InstructionInfo instructionInfoRES4__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {4} },
    }
};

// RES 5, (IX+d), H   -  RES5__IX_d__H_DD4  -  DD, CB, d, AC
const InstructionInfo instructionInfoRES5__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {4} },
    }
};

// RES 5, (IY+d), H   -  RES5__IY_d__H_FD4  -  FD, CB, d, AC
const InstructionInfo instructionInfoRES5__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {4} },
    }
};

// RES 6, (IX+d), H   -  RES6__IX_d__H_DD4  -  DD, CB, d, B4
const InstructionInfo instructionInfoRES6__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {4} },
    }
};

// RES 6, (IY+d), H   -  RES6__IY_d__H_FD4  -  FD, CB, d, B4
const InstructionInfo instructionInfoRES6__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {4} },
    }
};

// RES 7, (IX+d), H   -  RES7__IX_d__H_DD4  -  DD, CB, d, BC
const InstructionInfo instructionInfoRES7__IX_d__H_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {4} },
    }
};

// RES 7, (IY+d), H   -  RES7__IY_d__H_FD4  -  FD, CB, d, BC
const InstructionInfo instructionInfoRES7__IY_d__H_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {4} },
    }
};

// RES 0, (IX+d), L   -  RES0__IX_d__L_DD4  -  DD, CB, d, 85
const InstructionInfo instructionInfoRES0__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {5} },
    }
};

// RES 0, (IY+d), L   -  RES0__IY_d__L_FD4  -  FD, CB, d, 85
const InstructionInfo instructionInfoRES0__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {0} },
        { Type_Registers8, {5} },
    }
};

// RES 1, (IX+d), L   -  RES1__IX_d__L_DD4  -  DD, CB, d, 8D
const InstructionInfo instructionInfoRES1__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {5} },
    }
};

// RES 1, (IY+d), L   -  RES1__IY_d__L_FD4  -  FD, CB, d, 8D
const InstructionInfo instructionInfoRES1__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {1} },
        { Type_Registers8, {5} },
    }
};

// RES 2, (IX+d), L   -  RES2__IX_d__L_DD4  -  DD, CB, d, 95
const InstructionInfo instructionInfoRES2__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {5} },
    }
};

// RES 2, (IY+d), L   -  RES2__IY_d__L_FD4  -  FD, CB, d, 95
const InstructionInfo instructionInfoRES2__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {2} },
        { Type_Registers8, {5} },
    }
};

// RES 3, (IX+d), L   -  RES3__IX_d__L_DD4  -  DD, CB, d, 9D
const InstructionInfo instructionInfoRES3__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {5} },
    }
};

// RES 3, (IY+d), L   -  RES3__IY_d__L_FD4  -  FD, CB, d, 9D
const InstructionInfo instructionInfoRES3__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {3} },
        { Type_Registers8, {5} },
    }
};

// RES 4, (IX+d), L   -  RES4__IX_d__L_DD4  -  DD, CB, d, A5
const InstructionInfo instructionInfoRES4__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {5} },
    }
};

// RES 4, (IY+d), L   -  RES4__IY_d__L_FD4  -  FD, CB, d, A5
const InstructionInfo instructionInfoRES4__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {4} },
        { Type_Registers8, {5} },
    }
};

// RES 5, (IX+d), L   -  RES5__IX_d__L_DD4  -  DD, CB, d, AD
const InstructionInfo instructionInfoRES5__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {5} },
    }
};

// RES 5, (IY+d), L   -  RES5__IY_d__L_FD4  -  FD, CB, d, AD
const InstructionInfo instructionInfoRES5__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {5} },
        { Type_Registers8, {5} },
    }
};

// RES 6, (IX+d), L   -  RES6__IX_d__L_DD4  -  DD, CB, d, B5
const InstructionInfo instructionInfoRES6__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {5} },
    }
};

// RES 6, (IY+d), L   -  RES6__IY_d__L_FD4  -  FD, CB, d, B5
const InstructionInfo instructionInfoRES6__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {6} },
        { Type_Registers8, {5} },
    }
};

// RES 7, (IX+d), L   -  RES7__IX_d__L_DD4  -  DD, CB, d, BD
const InstructionInfo instructionInfoRES7__IX_d__L_DD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {5} },
    }
};

// RES 7, (IY+d), L   -  RES7__IY_d__L_FD4  -  FD, CB, d, BD
const InstructionInfo instructionInfoRES7__IY_d__L_FD4 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OF },
        { 3, OnClock_ODd },
        { 5, OnClock_RESb__ex_d__r_ex4_FD },
        { 4, OnClock_RESb__ex_d__r_ex4_MR },
        { 3, OnClock_RESb__ex_d__r_ex4_MW },
    },
    {
        { Type_Bits8, {7} },
        { Type_Registers8, {5} },
    }
};

// JP nn   -  JPnn_3  -  C3, n, n
const InstructionInfo instructionInfoJPnn_3 =
{
    {
        { 4, OnClock_JPnn_3_OF },
        { 3, OnClock_JPnn_3_ODl },
        { 3, OnClock_JPnn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// JP NZ, nn   -  JPNZ_nn_3  -  C2, n, n
const InstructionInfo instructionInfoJPNZ_nn_3 =
{
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {0} },
        { Type_None, {0} },
    }
};

// JP Z, nn   -  JPZ_nn_3  -  CA, n, n
const InstructionInfo instructionInfoJPZ_nn_3 =
{
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {1} },
        { Type_None, {0} },
    }
};

// JP NC, nn   -  JPNC_nn_3  -  D2, n, n
const InstructionInfo instructionInfoJPNC_nn_3 =
{
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {2} },
        { Type_None, {0} },
    }
};

// JP C, nn   -  JPC_nn_3  -  DA, n, n
const InstructionInfo instructionInfoJPC_nn_3 =
{
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {3} },
        { Type_None, {0} },
    }
};

// JP PO, nn   -  JPPO_nn_3  -  E2, n, n
const InstructionInfo instructionInfoJPPO_nn_3 =
{
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {4} },
        { Type_None, {0} },
    }
};

// JP PE, nn   -  JPPE_nn_3  -  EA, n, n
const InstructionInfo instructionInfoJPPE_nn_3 =
{
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {5} },
        { Type_None, {0} },
    }
};

// JP P, nn   -  JPP_nn_3  -  F2, n, n
const InstructionInfo instructionInfoJPP_nn_3 =
{
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {6} },
        { Type_None, {0} },
    }
};

// JP M, nn   -  JPM_nn_3  -  FA, n, n
const InstructionInfo instructionInfoJPM_nn_3 =
{
    {
        { 4, OnClock_JPc_nn_3_OF },
        { 3, OnClock_JPc_nn_3_ODl },
        { 3, OnClock_JPc_nn_3_ODh },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {7} },
        { Type_None, {0} },
    }
};

// JR e   -  JRe_2  -  18, e
const InstructionInfo instructionInfoJRe_2 =
{
    {
        { 4, OnClock_JRe_2_OF },
        { 3, OnClock_JRe_2_OD },
        { 5, OnClock_JRe_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// JR NZ, e   -  JRNZ_e_2  -  20, e
const InstructionInfo instructionInfoJRNZ_e_2 =
{
    {
        { 4, OnClock_JRj_e_2_OF },
        { 3, OnClock_JRj_e_2_OD },
        { 5, OnClock_JRj_e_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition4, {0} },
        { Type_None, {0} },
    }
};

// JR Z, e   -  JRZ_e_2  -  28, e
const InstructionInfo instructionInfoJRZ_e_2 =
{
    {
        { 4, OnClock_JRj_e_2_OF },
        { 3, OnClock_JRj_e_2_OD },
        { 5, OnClock_JRj_e_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition4, {1} },
        { Type_None, {0} },
    }
};

// JR NC, e   -  JRNC_e_2  -  30, e
const InstructionInfo instructionInfoJRNC_e_2 =
{
    {
        { 4, OnClock_JRj_e_2_OF },
        { 3, OnClock_JRj_e_2_OD },
        { 5, OnClock_JRj_e_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition4, {2} },
        { Type_None, {0} },
    }
};

// JR C, e   -  JRC_e_2  -  38, e
const InstructionInfo instructionInfoJRC_e_2 =
{
    {
        { 4, OnClock_JRj_e_2_OF },
        { 3, OnClock_JRj_e_2_OD },
        { 5, OnClock_JRj_e_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition4, {3} },
        { Type_None, {0} },
    }
};

// JP HL   -  JPHL_1  -  E9
const InstructionInfo instructionInfoJPHL_1 =
{
    {
        { 4, OnClock_JPHL_1_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// JP IX   -  JPIX_DD2  -  DD, E9
const InstructionInfo instructionInfoJPIX_DD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_JPex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// JP IY   -  JPIY_FD2  -  FD, E9
const InstructionInfo instructionInfoJPIY_FD2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_JPex_ex2_OF },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// DJNZ e   -  DJNZe_2  -  10, e
const InstructionInfo instructionInfoDJNZe_2 =
{
    {
        { 5, OnClock_DJNZe_2_OF },
        { 3, OnClock_DJNZe_2_OD },
        { 5, OnClock_DJNZe_2_OP },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CALL nn   -  CALLnn_3  -  CD, n, n
const InstructionInfo instructionInfoCALLnn_3 =
{
    {
        { 4, OnClock_CALLnn_3_OF },
        { 3, OnClock_CALLnn_3_ODl },
        { 4, OnClock_CALLnn_3_ODh },
        { 3, OnClock_CALLnn_3_SWh },
        { 3, OnClock_CALLnn_3_SWl },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// CALL NZ, nn   -  CALLNZ_nn_3  -  C4, n, n
const InstructionInfo instructionInfoCALLNZ_nn_3 =
{
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {0} },
        { Type_None, {0} },
    }
};

// CALL Z, nn   -  CALLZ_nn_3  -  CC, n, n
const InstructionInfo instructionInfoCALLZ_nn_3 =
{
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {1} },
        { Type_None, {0} },
    }
};

// CALL NC, nn   -  CALLNC_nn_3  -  D4, n, n
const InstructionInfo instructionInfoCALLNC_nn_3 =
{
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {2} },
        { Type_None, {0} },
    }
};

// CALL C, nn   -  CALLC_nn_3  -  DC, n, n
const InstructionInfo instructionInfoCALLC_nn_3 =
{
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {3} },
        { Type_None, {0} },
    }
};

// CALL PO, nn   -  CALLPO_nn_3  -  E4, n, n
const InstructionInfo instructionInfoCALLPO_nn_3 =
{
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {4} },
        { Type_None, {0} },
    }
};

// CALL PE, nn   -  CALLPE_nn_3  -  EC, n, n
const InstructionInfo instructionInfoCALLPE_nn_3 =
{
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {5} },
        { Type_None, {0} },
    }
};

// CALL P, nn   -  CALLP_nn_3  -  F4, n, n
const InstructionInfo instructionInfoCALLP_nn_3 =
{
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {6} },
        { Type_None, {0} },
    }
};

// CALL M, nn   -  CALLM_nn_3  -  FC, n, n
const InstructionInfo instructionInfoCALLM_nn_3 =
{
    {
        { 4, OnClock_CALLc_nn_3_OF },
        { 3, OnClock_CALLc_nn_3_ODl },
        { 4, OnClock_CALLc_nn_3_ODh },
        { 3, OnClock_CALLc_nn_3_SWh },
        { 3, OnClock_CALLc_nn_3_SWl },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {7} },
        { Type_None, {0} },
    }
};

// RET   -  RET_1  -  C9
const InstructionInfo instructionInfoRET_1 =
{
    {
        { 4, OnClock_RET_1_OF },
        { 3, OnClock_SRh },
        { 3, OnClock_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RET NZ   -  RETNZ_1  -  C0
const InstructionInfo instructionInfoRETNZ_1 =
{
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {0} },
        { Type_None, {0} },
    }
};

// RET Z   -  RETZ_1  -  C8
const InstructionInfo instructionInfoRETZ_1 =
{
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {1} },
        { Type_None, {0} },
    }
};

// RET NC   -  RETNC_1  -  D0
const InstructionInfo instructionInfoRETNC_1 =
{
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {2} },
        { Type_None, {0} },
    }
};

// RET C   -  RETC_1  -  D8
const InstructionInfo instructionInfoRETC_1 =
{
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {3} },
        { Type_None, {0} },
    }
};

// RET PO   -  RETPO_1  -  E0
const InstructionInfo instructionInfoRETPO_1 =
{
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {4} },
        { Type_None, {0} },
    }
};

// RET PE   -  RETPE_1  -  E8
const InstructionInfo instructionInfoRETPE_1 =
{
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {5} },
        { Type_None, {0} },
    }
};

// RET P   -  RETP_1  -  F0
const InstructionInfo instructionInfoRETP_1 =
{
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {6} },
        { Type_None, {0} },
    }
};

// RET M   -  RETM_1  -  F8
const InstructionInfo instructionInfoRETM_1 =
{
    {
        { 5, OnClock_RETc_1_OF },
        { 3, OnClock_RETc_1_SRh },
        { 3, OnClock_RETc_1_SRl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Condition8, {7} },
        { Type_None, {0} },
    }
};

// RETI   -  RETI_ED2  -  ED, 4D
const InstructionInfo instructionInfoRETI_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RETI_ED2_OF },
        { 3, OnClock_SRh },
        { 3, OnClock_SRl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RETN   -  RETN_ED2  -  ED, 45
const InstructionInfo instructionInfoRETN_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_RETN_ED2_OF },
        { 3, OnClock_SRh },
        { 3, OnClock_SRl },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// RST 00   -  RST00_1  -  C7
const InstructionInfo instructionInfoRST00_1 =
{
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RstAddress, {0} },
        { Type_None, {0} },
    }
};

// RST 08   -  RST08_1  -  CF
const InstructionInfo instructionInfoRST08_1 =
{
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RstAddress, {1} },
        { Type_None, {0} },
    }
};

// RST 10   -  RST10_1  -  D7
const InstructionInfo instructionInfoRST10_1 =
{
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RstAddress, {2} },
        { Type_None, {0} },
    }
};

// RST 18   -  RST18_1  -  DF
const InstructionInfo instructionInfoRST18_1 =
{
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RstAddress, {3} },
        { Type_None, {0} },
    }
};

// RST 20   -  RST20_1  -  E7
const InstructionInfo instructionInfoRST20_1 =
{
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RstAddress, {4} },
        { Type_None, {0} },
    }
};

// RST 28   -  RST28_1  -  EF
const InstructionInfo instructionInfoRST28_1 =
{
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RstAddress, {5} },
        { Type_None, {0} },
    }
};

// RST 30   -  RST30_1  -  F7
const InstructionInfo instructionInfoRST30_1 =
{
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RstAddress, {6} },
        { Type_None, {0} },
    }
};

// RST 38   -  RST38_1  -  FF
const InstructionInfo instructionInfoRST38_1 =
{
    {
        { 5, OnClock_RSTi_1_OF },
        { 3, OnClock_RSTi_1_SWh },
        { 3, OnClock_RSTi_1_SWl },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_RstAddress, {7} },
        { Type_None, {0} },
    }
};

// IN A, (n)   -  INA__n__2  -  DB, n
const InstructionInfo instructionInfoINA__n__2 =
{
    {
        { 4, OnClock_INA__n__2_OF },
        { 3, OnClock_INA__n__2_OD },
        { 4, OnClock_INA__n__2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// IN A, (C)   -  INA__C__ED2  -  ED, 78
const InstructionInfo instructionInfoINA__C__ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// IN B, (C)   -  INB__C__ED2  -  ED, 40
const InstructionInfo instructionInfoINB__C__ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// IN C, (C)   -  INC__C__ED2  -  ED, 48
const InstructionInfo instructionInfoINC__C__ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// IN D, (C)   -  IND__C__ED2  -  ED, 50
const InstructionInfo instructionInfoIND__C__ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// IN E, (C)   -  INE__C__ED2  -  ED, 58
const InstructionInfo instructionInfoINE__C__ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// IN H, (C)   -  INH__C__ED2  -  ED, 60
const InstructionInfo instructionInfoINH__C__ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// IN L, (C)   -  INL__C__ED2  -  ED, 68
const InstructionInfo instructionInfoINL__C__ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_INr__C__ED2_OF },
        { 4, OnClock_INr__C__ED2_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// IN (C)   -  IN_C__ED2  -  ED, 70
const InstructionInfo instructionInfoIN_C__ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_IN_C__ED2_OF },
        { 4, OnClock_PR },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// INI   -  INI_ED2  -  ED, A2
const InstructionInfo instructionInfoINI_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_INI_ED2_OF },
        { 3, OnClock_PR },
        { 4, OnClock_INI_ED2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// INIR   -  INIR_ED2  -  ED, B2
const InstructionInfo instructionInfoINIR_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_INIR_ED2_OF },
        { 3, OnClock_PR },
        { 4, OnClock_INIR_ED2_MW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// IND   -  IND_ED2  -  ED, AA
const InstructionInfo instructionInfoIND_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_IND_ED2_OF },
        { 3, OnClock_PR },
        { 4, OnClock_IND_ED2_MW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// INDR   -  INDR_ED2  -  ED, BA
const InstructionInfo instructionInfoINDR_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_INDR_ED2_OF },
        { 3, OnClock_PR },
        { 4, OnClock_INDR_ED2_MW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// OUT (n), A   -  OUT_n__A_2  -  D3, n
const InstructionInfo instructionInfoOUT_n__A_2 =
{
    {
        { 4, OnClock_OUT_n__A_2_OF },
        { 3, OnClock_OUT_n__A_2_OD },
        { 4, OnClock_OUT_n__A_2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// OUT (C), A   -  OUT_C__A_ED2  -  ED, 79
const InstructionInfo instructionInfoOUT_C__A_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {7} },
        { Type_None, {0} },
    }
};

// OUT (C), B   -  OUT_C__B_ED2  -  ED, 41
const InstructionInfo instructionInfoOUT_C__B_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {0} },
        { Type_None, {0} },
    }
};

// OUT (C), C   -  OUT_C__C_ED2  -  ED, 49
const InstructionInfo instructionInfoOUT_C__C_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {1} },
        { Type_None, {0} },
    }
};

// OUT (C), D   -  OUT_C__D_ED2  -  ED, 51
const InstructionInfo instructionInfoOUT_C__D_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {2} },
        { Type_None, {0} },
    }
};

// OUT (C), E   -  OUT_C__E_ED2  -  ED, 59
const InstructionInfo instructionInfoOUT_C__E_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {3} },
        { Type_None, {0} },
    }
};

// OUT (C), H   -  OUT_C__H_ED2  -  ED, 61
const InstructionInfo instructionInfoOUT_C__H_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {4} },
        { Type_None, {0} },
    }
};

// OUT (C), L   -  OUT_C__L_ED2  -  ED, 69
const InstructionInfo instructionInfoOUT_C__L_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__r_ED2_OF },
        { 4, OnClock_OUT_C__r_ED2_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_Registers8, {5} },
        { Type_None, {0} },
    }
};

// OUT (C), 0   -  OUT_C__0_ED2  -  ED, 71
const InstructionInfo instructionInfoOUT_C__0_ED2 =
{
    {
        { 4, OnClock_OF },
        { 4, OnClock_OUT_C__0_ED2_OF },
        { 4, OnClock_PW },
        { 0, nullptr },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// OUTI   -  OUTI_ED2  -  ED, A3
const InstructionInfo instructionInfoOUTI_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_OUTI_ED2_OF },
        { 3, OnClock_MR },
        { 4, OnClock_PW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// OTIR   -  OTIR_ED2  -  ED, B3
const InstructionInfo instructionInfoOTIR_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_OTIR_ED2_OF },
        { 3, OnClock_MR },
        { 4, OnClock_PW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// OUTD   -  OUTD_ED2  -  ED, A3
const InstructionInfo instructionInfoOUTD_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_OUTD_ED2_OF },
        { 3, OnClock_MR },
        { 4, OnClock_PW },
        { 0, nullptr },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

// OTDR   -  OTDR_ED2  -  ED, BB
const InstructionInfo instructionInfoOTDR_ED2 =
{
    {
        { 4, OnClock_OF },
        { 5, OnClock_OTDR_ED2_OF },
        { 3, OnClock_MR },
        { 4, OnClock_PW },
        { 5, OnClock_PCd },
        { 0, nullptr },
    },
    {
        { Type_None, {0} },
        { Type_None, {0} },
    }
};

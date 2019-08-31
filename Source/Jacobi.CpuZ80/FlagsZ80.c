/**
 *  Generated Source Code
 *  Any changes you make will be lost when the code is regenerated.
 */

#include "FlagsZ80.h"


#ifdef __cplusplus
extern "C" {
#endif

// Flag operations for the Z80:
extern void AssignFlags_Xah3Yah5()
{
    SetFlag(Flag_X, AddressHi_Bit3());
    SetFlag(Flag_Y, AddressHi_Bit5());
    
}

extern void AssignFlags_H0N0PiSd7Zdz()
{
    SetFlag(Flag_S, Data_Bit7());
    SetFlag(Flag_Z, Data_IsZero());
    SetFlag(Flag_H, Reset());
    SetFlag(Flag_PV, IFF2_Value());
    SetFlag(Flag_N, Reset());
    
}

extern void AssignFlags_H0N0PBCX_LDflagY_LDflag()
{
    SetFlag(Flag_H, Reset());
    SetFlag(Flag_PV, BC_IsNotZero());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_X, X_LDflag());
    SetFlag(Flag_Y, Y_LDflag());
    
}

extern void AssignFlags_Hb4N1PBCSd7X_CPflagY_CPflagZdz()
{
    SetFlag(Flag_S, Data_Bit7());
    SetFlag(Flag_Z, Data_IsZero());
    SetFlag(Flag_H, Borrow_Bit4());
    SetFlag(Flag_PV, BC_IsNotZero());
    SetFlag(Flag_N, Set());
    SetFlag(Flag_X, X_CPflag());
    SetFlag(Flag_Y, Y_CPflag());
    
}

extern void AssignFlags_Cc7Hc3N0Sr7VroXr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Carry_Bit3());
    SetFlag(Flag_PV, Result_Overflows());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_C, Carry_Bit7());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_Cb8Hb4N1Sr7VroXr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Borrow_Bit4());
    SetFlag(Flag_PV, Result_Overflows());
    SetFlag(Flag_N, Set());
    SetFlag(Flag_C, Borrow_Bit8());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_C0H1N0Sr7VroXr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Set());
    SetFlag(Flag_PV, Result_Overflows());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_C, Reset());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_C0H0N0Sr7VroXr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Reset());
    SetFlag(Flag_PV, Result_Overflows());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_C, Reset());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_C0H0N0PrpSr7Xr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Reset());
    SetFlag(Flag_PV, Result_ParityIsEven());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_C, Reset());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_Cb8Hb4N1PrpSr7Xr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Borrow_Bit4());
    SetFlag(Flag_PV, Result_ParityIsEven());
    SetFlag(Flag_N, Set());
    SetFlag(Flag_C, Borrow_Bit8());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_Hc3N0Sr7V80Xr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Carry_Bit3());
    SetFlag(Flag_PV, Result_IsValue80());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_Hb4N1Sr7V7FXr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Borrow_Bit4());
    SetFlag(Flag_PV, Result_IsValue7F());
    SetFlag(Flag_N, Set());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_C_DAAflagH_DAAflagPrpSr7Xr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, H_DAAflag());
    SetFlag(Flag_PV, Result_ParityIsEven());
    SetFlag(Flag_C, C_DAAflag());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_H1N1Xr3Yr5()
{
    SetFlag(Flag_H, Set());
    SetFlag(Flag_N, Set());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_CFFHb4N1Sr7V7FXr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Borrow_Bit4());
    SetFlag(Flag_PV, Result_IsValue7F());
    SetFlag(Flag_N, Set());
    SetFlag(Flag_C, Result_IsValueFF());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_HcN0Xr3Yr5()
{
    SetFlag(Flag_H, CarryFlag());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_C1H0N0Xr3Yr5()
{
    SetFlag(Flag_H, Reset());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_C, Set());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_Cc15Hc11N0Xr3Yr5()
{
    SetFlag(Flag_H, Carry_Bit11());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_C, Carry_Bit15());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_Cc15Hc11N0Sr15VroXr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit15());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Carry_Bit11());
    SetFlag(Flag_PV, Result_Overflows());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_C, Carry_Bit15());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_Cb16Hb12N1Sr15VroXr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit15());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Borrow_Bit12());
    SetFlag(Flag_PV, Result_Overflows());
    SetFlag(Flag_N, Set());
    SetFlag(Flag_C, Borrow_Bit16());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_H0N0Xr3Yr5()
{
    SetFlag(Flag_H, Reset());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_H0N0PrpSr7Xr3Yr5Zrz()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Reset());
    SetFlag(Flag_PV, Result_ParityIsEven());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_H0N0PrpS0Xr3Yr5Zrz()
{
    SetFlag(Flag_S, Reset());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Reset());
    SetFlag(Flag_PV, Result_ParityIsEven());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_H1N0PrzS_BITflagX_BITflagY_BITflagZrz()
{
    SetFlag(Flag_S, S_BITflag());
    SetFlag(Flag_Z, Result_IsZero());
    SetFlag(Flag_H, Set());
    SetFlag(Flag_PV, Result_IsZero());
    SetFlag(Flag_N, Reset());
    SetFlag(Flag_X, X_BITflag());
    SetFlag(Flag_Y, Y_BITflag());
    
}

extern void AssignFlags_C_INIflagH_INIflagNd7P_INIFlagSr7Xr3Yr5Z_INIflag()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Z_INIflag());
    SetFlag(Flag_H, H_INIflag());
    SetFlag(Flag_PV, P_INIFlag());
    SetFlag(Flag_N, Data_Bit7());
    SetFlag(Flag_C, C_INIflag());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_C_INDflagH_INDflagNd7P_INDFlagSr7Xr3Yr5Z_INDflag()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Z_INDflag());
    SetFlag(Flag_H, H_INDflag());
    SetFlag(Flag_PV, P_INDFlag());
    SetFlag(Flag_N, Data_Bit7());
    SetFlag(Flag_C, C_INDflag());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}

extern void AssignFlags_C_OUTflagH_OUTflagNd7P_OUTFlagSr7Xr3Yr5Z_OUTflag()
{
    SetFlag(Flag_S, Result_Bit7());
    SetFlag(Flag_Z, Z_OUTflag());
    SetFlag(Flag_H, H_OUTflag());
    SetFlag(Flag_PV, P_OUTFlag());
    SetFlag(Flag_N, Data_Bit7());
    SetFlag(Flag_C, C_OUTflag());
    SetFlag(Flag_X, Result_Bit3());
    SetFlag(Flag_Y, Result_Bit5());
    
}


#ifdef __cplusplus
}
#endif


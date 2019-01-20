/**
 *  Generated Source Code
 *  Any changes you make will be lost when the code is regenerated.
 */

#include "InstructionInfo.h"

// Instructions for the Z80:
// LD A, A  -  7F
extern InstructionInfo instructionInfoLDAA;

// LD A, B  -  78
extern InstructionInfo instructionInfoLDAB;

// LD A, C  -  79
extern InstructionInfo instructionInfoLDAC;

// LD A, D  -  7A
extern InstructionInfo instructionInfoLDAD;

// LD A, E  -  7B
extern InstructionInfo instructionInfoLDAE;

// LD A, H  -  7C
extern InstructionInfo instructionInfoLDAH;

// LD A, L  -  7D
extern InstructionInfo instructionInfoLDAL;

// LD B, A  -  47
extern InstructionInfo instructionInfoLDBA;

// LD B, B  -  40
extern InstructionInfo instructionInfoLDBB;

// LD B, C  -  41
extern InstructionInfo instructionInfoLDBC;

// LD B, D  -  42
extern InstructionInfo instructionInfoLDBD;

// LD B, E  -  43
extern InstructionInfo instructionInfoLDBE;

// LD B, H  -  44
extern InstructionInfo instructionInfoLDBH;

// LD B, L  -  45
extern InstructionInfo instructionInfoLDBL;

// LD C, A  -  4F
extern InstructionInfo instructionInfoLDCA;

// LD C, B  -  48
extern InstructionInfo instructionInfoLDCB;

// LD C, C  -  49
extern InstructionInfo instructionInfoLDCC;

// LD C, D  -  4A
extern InstructionInfo instructionInfoLDCD;

// LD C, E  -  4B
extern InstructionInfo instructionInfoLDCE;

// LD C, H  -  4C
extern InstructionInfo instructionInfoLDCH;

// LD C, L  -  4D
extern InstructionInfo instructionInfoLDCL;

// LD D, A  -  57
extern InstructionInfo instructionInfoLDDA;

// LD D, B  -  50
extern InstructionInfo instructionInfoLDDB;

// LD D, C  -  51
extern InstructionInfo instructionInfoLDDC;

// LD D, D  -  52
extern InstructionInfo instructionInfoLDDD;

// LD D, E  -  53
extern InstructionInfo instructionInfoLDDE;

// LD D, H  -  54
extern InstructionInfo instructionInfoLDDH;

// LD D, L  -  55
extern InstructionInfo instructionInfoLDDL;

// LD E, A  -  5F
extern InstructionInfo instructionInfoLDEA;

// LD E, B  -  58
extern InstructionInfo instructionInfoLDEB;

// LD E, C  -  59
extern InstructionInfo instructionInfoLDEC;

// LD E, D  -  5A
extern InstructionInfo instructionInfoLDED;

// LD E, E  -  5B
extern InstructionInfo instructionInfoLDEE;

// LD E, H  -  5C
extern InstructionInfo instructionInfoLDEH;

// LD E, L  -  5D
extern InstructionInfo instructionInfoLDEL;

// LD H, A  -  67
extern InstructionInfo instructionInfoLDHA;

// LD H, B  -  60
extern InstructionInfo instructionInfoLDHB;

// LD H, C  -  61
extern InstructionInfo instructionInfoLDHC;

// LD H, D  -  62
extern InstructionInfo instructionInfoLDHD;

// LD H, E  -  63
extern InstructionInfo instructionInfoLDHE;

// LD H, H  -  64
extern InstructionInfo instructionInfoLDHH;

// LD H, L  -  65
extern InstructionInfo instructionInfoLDHL;

// LD L, A  -  6F
extern InstructionInfo instructionInfoLDLA;

// LD L, B  -  68
extern InstructionInfo instructionInfoLDLB;

// LD L, C  -  69
extern InstructionInfo instructionInfoLDLC;

// LD L, D  -  6A
extern InstructionInfo instructionInfoLDLD;

// LD L, E  -  6B
extern InstructionInfo instructionInfoLDLE;

// LD L, H  -  6C
extern InstructionInfo instructionInfoLDLH;

// LD L, L  -  6D
extern InstructionInfo instructionInfoLDLL;

// LD A, n  -  3E, n
extern InstructionInfo instructionInfoLDAn;

// LD B, n  -  06, n
extern InstructionInfo instructionInfoLDBn;

// LD C, n  -  0E, n
extern InstructionInfo instructionInfoLDCn;

// LD D, n  -  16, n
extern InstructionInfo instructionInfoLDDn;

// LD E, n  -  1E, n
extern InstructionInfo instructionInfoLDEn;

// LD H, n  -  26, n
extern InstructionInfo instructionInfoLDHn;

// LD L, n  -  2E, n
extern InstructionInfo instructionInfoLDLn;

// LD A, (HL)  -  7E
extern InstructionInfo instructionInfoLDAHL;

// LD B, (HL)  -  46
extern InstructionInfo instructionInfoLDBHL;

// LD C, (HL)  -  4E
extern InstructionInfo instructionInfoLDCHL;

// LD D, (HL)  -  56
extern InstructionInfo instructionInfoLDDHL;

// LD E, (HL)  -  5E
extern InstructionInfo instructionInfoLDEHL;

// LD H, (HL)  -  66
extern InstructionInfo instructionInfoLDHHL;

// LD L, (HL)  -  6E
extern InstructionInfo instructionInfoLDLHL;

// LD A, (IX+d)  -  DD, 7E, d
extern InstructionInfo instructionInfoLDAIXd;

// LD A, (IY+d)  -  FD, 7E, d
extern InstructionInfo instructionInfoLDAIYd;

// LD B, (IX+d)  -  DD, 46, d
extern InstructionInfo instructionInfoLDBIXd;

// LD B, (IY+d)  -  FD, 46, d
extern InstructionInfo instructionInfoLDBIYd;

// LD C, (IX+d)  -  DD, 4E, d
extern InstructionInfo instructionInfoLDCIXd;

// LD C, (IY+d)  -  FD, 4E, d
extern InstructionInfo instructionInfoLDCIYd;

// LD D, (IX+d)  -  DD, 56, d
extern InstructionInfo instructionInfoLDDIXd;

// LD D, (IY+d)  -  FD, 56, d
extern InstructionInfo instructionInfoLDDIYd;

// LD E, (IX+d)  -  DD, 5E, d
extern InstructionInfo instructionInfoLDEIXd;

// LD E, (IY+d)  -  FD, 5E, d
extern InstructionInfo instructionInfoLDEIYd;

// LD H, (IX+d)  -  DD, 66, d
extern InstructionInfo instructionInfoLDHIXd;

// LD H, (IY+d)  -  FD, 66, d
extern InstructionInfo instructionInfoLDHIYd;

// LD L, (IX+d)  -  DD, 6E, d
extern InstructionInfo instructionInfoLDLIXd;

// LD L, (IY+d)  -  FD, 6E, d
extern InstructionInfo instructionInfoLDLIYd;

// LD (HL), A  -  77
extern InstructionInfo instructionInfoLDHLA;

// LD (HL), B  -  70
extern InstructionInfo instructionInfoLDHLB;

// LD (HL), C  -  71
extern InstructionInfo instructionInfoLDHLC;

// LD (HL), D  -  72
extern InstructionInfo instructionInfoLDHLD;

// LD (HL), E  -  73
extern InstructionInfo instructionInfoLDHLE;

// LD (HL), H  -  74
extern InstructionInfo instructionInfoLDHLH;

// LD (HL), L  -  75
extern InstructionInfo instructionInfoLDHLL;

// LD (IX+d), A  -  DD, 77, d
extern InstructionInfo instructionInfoLDIXdA;

// LD (IY+d), A  -  FD, 77, d
extern InstructionInfo instructionInfoLDIYdA;

// LD (IX+d), B  -  DD, 70, d
extern InstructionInfo instructionInfoLDIXdB;

// LD (IY+d), B  -  FD, 70, d
extern InstructionInfo instructionInfoLDIYdB;

// LD (IX+d), C  -  DD, 71, d
extern InstructionInfo instructionInfoLDIXdC;

// LD (IY+d), C  -  FD, 71, d
extern InstructionInfo instructionInfoLDIYdC;

// LD (IX+d), D  -  DD, 72, d
extern InstructionInfo instructionInfoLDIXdD;

// LD (IY+d), D  -  FD, 72, d
extern InstructionInfo instructionInfoLDIYdD;

// LD (IX+d), E  -  DD, 73, d
extern InstructionInfo instructionInfoLDIXdE;

// LD (IY+d), E  -  FD, 73, d
extern InstructionInfo instructionInfoLDIYdE;

// LD (IX+d), H  -  DD, 74, d
extern InstructionInfo instructionInfoLDIXdH;

// LD (IY+d), H  -  FD, 74, d
extern InstructionInfo instructionInfoLDIYdH;

// LD (IX+d), L  -  DD, 75, d
extern InstructionInfo instructionInfoLDIXdL;

// LD (IY+d), L  -  FD, 75, d
extern InstructionInfo instructionInfoLDIYdL;

// LD (HL), n  -  36, n
extern InstructionInfo instructionInfoLDHLn;

// LD (IX+d), n  -  DD, 36, d, n
extern InstructionInfo instructionInfoLDIXdn;

// LD (IY+d), n  -  FD, 36, d, n
extern InstructionInfo instructionInfoLDIYdn;

// LD A, (BC)  -  0A
extern InstructionInfo instructionInfoLDABC;

// LD A, (DE)  -  1A
extern InstructionInfo instructionInfoLDADE;

// LD A, (nn)  -  3A, n, n
extern InstructionInfo instructionInfoLDAnn;

// LD (BC), A  -  02
extern InstructionInfo instructionInfoLDBCA;

// LD (DE), A  -  12
extern InstructionInfo instructionInfoLDDEA;

// LD (nn), A  -  32, n, n
extern InstructionInfo instructionInfoLDnnA;

// LD A, I  -  ED, 57
extern InstructionInfo instructionInfoLDAI;

// LD A, R  -  ED, 5F
extern InstructionInfo instructionInfoLDAR;

// LD I, A  -  ED, 47
extern InstructionInfo instructionInfoLDIA;

// LD R, A  -  ED, 4F
extern InstructionInfo instructionInfoLDRA;

// LD BC, nn  -  01, n, n
extern InstructionInfo instructionInfoLDBCnn;

// LD DE, nn  -  11, n, n
extern InstructionInfo instructionInfoLDDEnn;

// LD HL, nn  -  21, n, n
extern InstructionInfo instructionInfoLDHLnn;

// LD SP, nn  -  31, n, n
extern InstructionInfo instructionInfoLDSPnn;

// LD IX, nn  -  DD, 21, n, n
extern InstructionInfo instructionInfoLDIXnn;

// LD IY, nn  -  FD, 21, n, n
extern InstructionInfo instructionInfoLDIYnn;

// LD HL, (nn)  -  2A, n, n
extern InstructionInfo instructionInfoLDHLnn;

// LD BC, (nn)  -  ED, 4B, n, n
extern InstructionInfo instructionInfoLDBCnn;

// LD DE, (nn)  -  ED, 5B, n, n
extern InstructionInfo instructionInfoLDDEnn;

// LD HL, (nn)  -  ED, 6B, n, n
extern InstructionInfo instructionInfoLDHLnn;

// LD SP, (nn)  -  ED, 7B, n, n
extern InstructionInfo instructionInfoLDSPnn;

// LD IX, (nn)  -  DD, 2A, n, n
extern InstructionInfo instructionInfoLDIXnn;

// LD IY, (nn)  -  FD, 2A, n, n
extern InstructionInfo instructionInfoLDIYnn;

// LD (nn), HL  -  22, n, n
extern InstructionInfo instructionInfoLDnnHL;

// LD (nn), BC  -  ED, 43, n, n
extern InstructionInfo instructionInfoLDnnBC;

// LD (nn), DE  -  ED, 53, n, n
extern InstructionInfo instructionInfoLDnnDE;

// LD (nn), HL  -  ED, 63, n, n
extern InstructionInfo instructionInfoLDnnHL;

// LD (nn), SP  -  ED, 73, n, n
extern InstructionInfo instructionInfoLDnnSP;

// LD (nn), IX  -  DD, 22, n, n
extern InstructionInfo instructionInfoLDnnIX;

// LD (nn), IY  -  FD, 22, n, n
extern InstructionInfo instructionInfoLDnnIY;

// LD SP, HL  -  F9
extern InstructionInfo instructionInfoLDSPHL;

// LD SP, IX  -  DD, F9
extern InstructionInfo instructionInfoLDSPIX;

// LD SP, IY  -  FD, F9
extern InstructionInfo instructionInfoLDSPIY;

// PUSH BC  -  C5
extern InstructionInfo instructionInfoPUSHBC;

// PUSH DE  -  D5
extern InstructionInfo instructionInfoPUSHDE;

// PUSH HL  -  E5
extern InstructionInfo instructionInfoPUSHHL;

// PUSH AF  -  F5
extern InstructionInfo instructionInfoPUSHAF;

// PUSH IX  -  DD, E5
extern InstructionInfo instructionInfoPUSHIX;

// PUSH IY  -  FD, E5
extern InstructionInfo instructionInfoPUSHIY;

// POP BC  -  C1
extern InstructionInfo instructionInfoPOPBC;

// POP DE  -  D1
extern InstructionInfo instructionInfoPOPDE;

// POP HL  -  E1
extern InstructionInfo instructionInfoPOPHL;

// POP AF  -  F1
extern InstructionInfo instructionInfoPOPAF;

// POP IX  -  DD, E1
extern InstructionInfo instructionInfoPOPIX;

// POP IY  -  FD, E1
extern InstructionInfo instructionInfoPOPIY;

// EX DE, HL  -  EB
extern InstructionInfo instructionInfoEXDEHL;

// EX AF, AF'  -  08
extern InstructionInfo instructionInfoEXAFAF;

// EXX  -  D9
extern InstructionInfo instructionInfoEXX;

// EX (SP), HL  -  E3
extern InstructionInfo instructionInfoEXSPHL;

// EX (SP), IX  -  DD, E3
extern InstructionInfo instructionInfoEXSPIX;

// EX (SP), IY  -  FD, E3
extern InstructionInfo instructionInfoEXSPIY;

// LDI  -  ED, A0
extern InstructionInfo instructionInfoLDI;

// LDIR  -  ED, B0
extern InstructionInfo instructionInfoLDIR;

// LDD  -  ED, A8
extern InstructionInfo instructionInfoLDD;

// LDDR  -  ED, B8
extern InstructionInfo instructionInfoLDDR;

// CPI  -  ED, A1
extern InstructionInfo instructionInfoCPI;

// CPIR  -  ED, B1
extern InstructionInfo instructionInfoCPIR;

// CPD  -  ED, A9
extern InstructionInfo instructionInfoCPD;

// CPDR  -  ED, B9
extern InstructionInfo instructionInfoCPDR;

// ADD A, A  -  87
extern InstructionInfo instructionInfoADDAA;

// ADD A, B  -  80
extern InstructionInfo instructionInfoADDAB;

// ADD A, C  -  81
extern InstructionInfo instructionInfoADDAC;

// ADD A, D  -  82
extern InstructionInfo instructionInfoADDAD;

// ADD A, E  -  83
extern InstructionInfo instructionInfoADDAE;

// ADD A, H  -  84
extern InstructionInfo instructionInfoADDAH;

// ADD A, L  -  85
extern InstructionInfo instructionInfoADDAL;

// ADD A, n  -  C6, n
extern InstructionInfo instructionInfoADDAn;

// ADD A, (HL)  -  86
extern InstructionInfo instructionInfoADDAHL;

// ADD A, (IX+d)  -  DD, 86, d
extern InstructionInfo instructionInfoADDAIXd;

// ADD A, (IY+d)  -  FD, 86, d
extern InstructionInfo instructionInfoADDAIYd;

// ADC A, A  -  8F
extern InstructionInfo instructionInfoADCAA;

// ADC A, B  -  88
extern InstructionInfo instructionInfoADCAB;

// ADC A, C  -  89
extern InstructionInfo instructionInfoADCAC;

// ADC A, D  -  8A
extern InstructionInfo instructionInfoADCAD;

// ADC A, E  -  8B
extern InstructionInfo instructionInfoADCAE;

// ADC A, H  -  8C
extern InstructionInfo instructionInfoADCAH;

// ADC A, L  -  8D
extern InstructionInfo instructionInfoADCAL;

// ADC A, n  -  CE, n
extern InstructionInfo instructionInfoADCAn;

// ADC A, (HL)  -  8E
extern InstructionInfo instructionInfoADCAHL;

// ADC A, (IX+d)  -  DD, 8E, d
extern InstructionInfo instructionInfoADCAIXd;

// ADC A, (IY+d)  -  FD, 8E, d
extern InstructionInfo instructionInfoADCAIYd;

// SUB A, A  -  97
extern InstructionInfo instructionInfoSUBAA;

// SUB A, B  -  90
extern InstructionInfo instructionInfoSUBAB;

// SUB A, C  -  91
extern InstructionInfo instructionInfoSUBAC;

// SUB A, D  -  92
extern InstructionInfo instructionInfoSUBAD;

// SUB A, E  -  93
extern InstructionInfo instructionInfoSUBAE;

// SUB A, H  -  94
extern InstructionInfo instructionInfoSUBAH;

// SUB A, L  -  95
extern InstructionInfo instructionInfoSUBAL;

// SUB A, n  -  8E, n
extern InstructionInfo instructionInfoSUBAn;

// SUB A, (HL)  -  96
extern InstructionInfo instructionInfoSUBAHL;

// SUB A, (IX+d)  -  DD, 96, d
extern InstructionInfo instructionInfoSUBAIXd;

// SUB A, (IY+d)  -  FD, 96, d
extern InstructionInfo instructionInfoSUBAIYd;

// SBC A, A  -  9F
extern InstructionInfo instructionInfoSBCAA;

// SBC A, B  -  98
extern InstructionInfo instructionInfoSBCAB;

// SBC A, C  -  99
extern InstructionInfo instructionInfoSBCAC;

// SBC A, D  -  9A
extern InstructionInfo instructionInfoSBCAD;

// SBC A, E  -  9B
extern InstructionInfo instructionInfoSBCAE;

// SBC A, H  -  9C
extern InstructionInfo instructionInfoSBCAH;

// SBC A, L  -  9D
extern InstructionInfo instructionInfoSBCAL;

// SBC A, n  -  DE, n
extern InstructionInfo instructionInfoSBCAn;

// SBC A, (HL)  -  9E
extern InstructionInfo instructionInfoSBCAHL;

// SBC A, (IX+d)  -  DD, 9E, d
extern InstructionInfo instructionInfoSBCAIXd;

// SBC A, (IY+d)  -  FD, 9E, d
extern InstructionInfo instructionInfoSBCAIYd;

// AND A, A  -  A7
extern InstructionInfo instructionInfoANDAA;

// AND A, B  -  A0
extern InstructionInfo instructionInfoANDAB;

// AND A, C  -  A1
extern InstructionInfo instructionInfoANDAC;

// AND A, D  -  A2
extern InstructionInfo instructionInfoANDAD;

// AND A, E  -  A3
extern InstructionInfo instructionInfoANDAE;

// AND A, H  -  A4
extern InstructionInfo instructionInfoANDAH;

// AND A, L  -  A5
extern InstructionInfo instructionInfoANDAL;

// AND A, n  -  E6, n
extern InstructionInfo instructionInfoANDAn;

// AND A, (HL)  -  A6
extern InstructionInfo instructionInfoANDAHL;

// AND A, (IX+d)  -  DD, A6, d
extern InstructionInfo instructionInfoANDAIXd;

// AND A, (IY+d)  -  FD, A6, d
extern InstructionInfo instructionInfoANDAIYd;

// OR A, A  -  B7
extern InstructionInfo instructionInfoORAA;

// OR A, B  -  B0
extern InstructionInfo instructionInfoORAB;

// OR A, C  -  B1
extern InstructionInfo instructionInfoORAC;

// OR A, D  -  B2
extern InstructionInfo instructionInfoORAD;

// OR A, E  -  B3
extern InstructionInfo instructionInfoORAE;

// OR A, H  -  B4
extern InstructionInfo instructionInfoORAH;

// OR A, L  -  B5
extern InstructionInfo instructionInfoORAL;

// OR A, n  -  F6, n
extern InstructionInfo instructionInfoORAn;

// OR A, (HL)  -  B6
extern InstructionInfo instructionInfoORAHL;

// OR A, (IX+d)  -  DD, B6, d
extern InstructionInfo instructionInfoORAIXd;

// OR A, (IY+d)  -  FD, B6, d
extern InstructionInfo instructionInfoORAIYd;

// XOR A, A  -  AF
extern InstructionInfo instructionInfoXORAA;

// XOR A, B  -  A8
extern InstructionInfo instructionInfoXORAB;

// XOR A, C  -  A9
extern InstructionInfo instructionInfoXORAC;

// XOR A, D  -  AA
extern InstructionInfo instructionInfoXORAD;

// XOR A, E  -  AB
extern InstructionInfo instructionInfoXORAE;

// XOR A, H  -  AC
extern InstructionInfo instructionInfoXORAH;

// XOR A, L  -  AD
extern InstructionInfo instructionInfoXORAL;

// XOR A, n  -  EE, n
extern InstructionInfo instructionInfoXORAn;

// XOR A, (HL)  -  AE
extern InstructionInfo instructionInfoXORAHL;

// XOR A, (IX+d)  -  DD, AE, d
extern InstructionInfo instructionInfoXORAIXd;

// XOR A, (IY+d)  -  FD, AE, d
extern InstructionInfo instructionInfoXORAIYd;

// CP A, A  -  BF
extern InstructionInfo instructionInfoCPAA;

// CP A, B  -  B8
extern InstructionInfo instructionInfoCPAB;

// CP A, C  -  B9
extern InstructionInfo instructionInfoCPAC;

// CP A, D  -  BA
extern InstructionInfo instructionInfoCPAD;

// CP A, E  -  BB
extern InstructionInfo instructionInfoCPAE;

// CP A, H  -  BC
extern InstructionInfo instructionInfoCPAH;

// CP A, L  -  BD
extern InstructionInfo instructionInfoCPAL;

// CP A, n  -  FE, n
extern InstructionInfo instructionInfoCPAn;

// CP A, (HL)  -  BE
extern InstructionInfo instructionInfoCPAHL;

// CP A, (IX+d)  -  DD, BE, d
extern InstructionInfo instructionInfoCPAIXd;

// CP A, (IY+d)  -  FD, BE, d
extern InstructionInfo instructionInfoCPAIYd;

// INC A  -  3C
extern InstructionInfo instructionInfoINCA;

// INC B  -  04
extern InstructionInfo instructionInfoINCB;

// INC C  -  0C
extern InstructionInfo instructionInfoINCC;

// INC D  -  14
extern InstructionInfo instructionInfoINCD;

// INC E  -  1C
extern InstructionInfo instructionInfoINCE;

// INC H  -  24
extern InstructionInfo instructionInfoINCH;

// INC L  -  2C
extern InstructionInfo instructionInfoINCL;

// INC (HL)  -  34
extern InstructionInfo instructionInfoINCHL;

// INC (IX+d)  -  DD, 34, d
extern InstructionInfo instructionInfoINCIXd;

// INC (IY+d)  -  FD, 34, d
extern InstructionInfo instructionInfoINCIYd;

// DEC A  -  3D
extern InstructionInfo instructionInfoDECA;

// DEC B  -  05
extern InstructionInfo instructionInfoDECB;

// DEC C  -  0D
extern InstructionInfo instructionInfoDECC;

// DEC D  -  15
extern InstructionInfo instructionInfoDECD;

// DEC E  -  1D
extern InstructionInfo instructionInfoDECE;

// DEC H  -  25
extern InstructionInfo instructionInfoDECH;

// DEC L  -  2D
extern InstructionInfo instructionInfoDECL;

// DEC (HL)  -  35
extern InstructionInfo instructionInfoDECHL;

// DEC (IX+d)  -  DD, 35, d
extern InstructionInfo instructionInfoDECIXd;

// DEC (IY+d)  -  FD, 35, d
extern InstructionInfo instructionInfoDECIYd;

// DAA  -  27
extern InstructionInfo instructionInfoDAA;

// CPL A  -  2F
extern InstructionInfo instructionInfoCPLA;

// NEG  -  ED, 44
extern InstructionInfo instructionInfoNEG;

// CCF  -  3F
extern InstructionInfo instructionInfoCCF;

// SCF  -  37
extern InstructionInfo instructionInfoSCF;

// NOP  -  00
extern InstructionInfo instructionInfoNOP;

// HALT  -  76
extern InstructionInfo instructionInfoHALT;

// DI  -  F3
extern InstructionInfo instructionInfoDI;

// EI  -  FB
extern InstructionInfo instructionInfoEI;

// IM0  -  ED, 46
extern InstructionInfo instructionInfoIM0;

// IM1  -  ED, 56
extern InstructionInfo instructionInfoIM1;

// IM2  -  ED, 5E
extern InstructionInfo instructionInfoIM2;

// ADD HL, BC  -  09
extern InstructionInfo instructionInfoADDHLBC;

// ADD HL, DE  -  19
extern InstructionInfo instructionInfoADDHLDE;

// ADD HL, HL  -  29
extern InstructionInfo instructionInfoADDHLHL;

// ADD HL, SP  -  39
extern InstructionInfo instructionInfoADDHLSP;

// ADD IX, BC  -  DD, 09
extern InstructionInfo instructionInfoADDIXBC;

// ADD IX, DE  -  DD, 19
extern InstructionInfo instructionInfoADDIXDE;

// ADD IX, IX  -  DD, 29
extern InstructionInfo instructionInfoADDIXIX;

// ADD IX, SP  -  DD, 39
extern InstructionInfo instructionInfoADDIXSP;

// ADD IY, BC  -  FD, 09
extern InstructionInfo instructionInfoADDIYBC;

// ADD IY, DE  -  FD, 19
extern InstructionInfo instructionInfoADDIYDE;

// ADD IY, IY  -  FD, 29
extern InstructionInfo instructionInfoADDIYIY;

// ADD IY, SP  -  FD, 39
extern InstructionInfo instructionInfoADDIYSP;

// ADC HL, BC  -  ED, 4A
extern InstructionInfo instructionInfoADCHLBC;

// ADC HL, DE  -  ED, 5A
extern InstructionInfo instructionInfoADCHLDE;

// ADC HL, HL  -  ED, 6A
extern InstructionInfo instructionInfoADCHLHL;

// ADC HL, SP  -  ED, 7A
extern InstructionInfo instructionInfoADCHLSP;

// SBC HL, BC  -  ED, 42
extern InstructionInfo instructionInfoSBCHLBC;

// SBC HL, DE  -  ED, 52
extern InstructionInfo instructionInfoSBCHLDE;

// SBC HL, HL  -  ED, 62
extern InstructionInfo instructionInfoSBCHLHL;

// SBC HL, SP  -  ED, 72
extern InstructionInfo instructionInfoSBCHLSP;

// INC BC  -  03
extern InstructionInfo instructionInfoINCBC;

// INC DE  -  13
extern InstructionInfo instructionInfoINCDE;

// INC HL  -  23
extern InstructionInfo instructionInfoINCHL;

// INC SP  -  33
extern InstructionInfo instructionInfoINCSP;

// INC IX  -  DD, 23
extern InstructionInfo instructionInfoINCIX;

// INC IY  -  FD, 23
extern InstructionInfo instructionInfoINCIY;

// DEC BC  -  0B
extern InstructionInfo instructionInfoDECBC;

// DEC DE  -  1B
extern InstructionInfo instructionInfoDECDE;

// DEC HL  -  2B
extern InstructionInfo instructionInfoDECHL;

// DEC SP  -  3B
extern InstructionInfo instructionInfoDECSP;

// DEC IX  -  DD, 2B
extern InstructionInfo instructionInfoDECIX;

// DEC IY  -  FD, 2B
extern InstructionInfo instructionInfoDECIY;

// RLCA  -  07
extern InstructionInfo instructionInfoRLCA;

// RLA  -  17
extern InstructionInfo instructionInfoRLA;

// RRCA  -  0F
extern InstructionInfo instructionInfoRRCA;

// RRA  -  1F
extern InstructionInfo instructionInfoRRA;

// RLC A  -  CB, 07
extern InstructionInfo instructionInfoRLCA;

// RLC B  -  CB, 00
extern InstructionInfo instructionInfoRLCB;

// RLC C  -  CB, 01
extern InstructionInfo instructionInfoRLCC;

// RLC D  -  CB, 02
extern InstructionInfo instructionInfoRLCD;

// RLC E  -  CB, 03
extern InstructionInfo instructionInfoRLCE;

// RLC H  -  CB, 04
extern InstructionInfo instructionInfoRLCH;

// RLC L  -  CB, 05
extern InstructionInfo instructionInfoRLCL;

// RLC (HL)  -  CB, 06
extern InstructionInfo instructionInfoRLCHL;

// RLC (IX+d)  -  DD, CB, d, 06
extern InstructionInfo instructionInfoRLCIXd;

// RLC (IY+d)  -  FD, CB, d, 06
extern InstructionInfo instructionInfoRLCIYd;

// RL A  -  CB, 17
extern InstructionInfo instructionInfoRLA;

// RL B  -  CB, 10
extern InstructionInfo instructionInfoRLB;

// RL C  -  CB, 11
extern InstructionInfo instructionInfoRLC;

// RL D  -  CB, 12
extern InstructionInfo instructionInfoRLD;

// RL E  -  CB, 13
extern InstructionInfo instructionInfoRLE;

// RL H  -  CB, 14
extern InstructionInfo instructionInfoRLH;

// RL L  -  CB, 15
extern InstructionInfo instructionInfoRLL;

// RL (HL)  -  CB, 16
extern InstructionInfo instructionInfoRLHL;

// RL (IX+d)  -  DD, CB, d, 16
extern InstructionInfo instructionInfoRLIXd;

// RL (IY+d)  -  FD, CB, d, 16
extern InstructionInfo instructionInfoRLIYd;

// RRC A  -  CB, 0F
extern InstructionInfo instructionInfoRRCA;

// RRC B  -  CB, 08
extern InstructionInfo instructionInfoRRCB;

// RRC C  -  CB, 09
extern InstructionInfo instructionInfoRRCC;

// RRC D  -  CB, 0A
extern InstructionInfo instructionInfoRRCD;

// RRC E  -  CB, 0B
extern InstructionInfo instructionInfoRRCE;

// RRC H  -  CB, 0C
extern InstructionInfo instructionInfoRRCH;

// RRC L  -  CB, 0D
extern InstructionInfo instructionInfoRRCL;

// RRC (HL)  -  CB, 0E
extern InstructionInfo instructionInfoRRCHL;

// RRC (IX+d)  -  DD, CB, d, 0E
extern InstructionInfo instructionInfoRRCIXd;

// RRC (IY+d)  -  FD, CB, d, 0E
extern InstructionInfo instructionInfoRRCIYd;

// RR A  -  CB, 1F
extern InstructionInfo instructionInfoRRA;

// RR B  -  CB, 18
extern InstructionInfo instructionInfoRRB;

// RR C  -  CB, 19
extern InstructionInfo instructionInfoRRC;

// RR D  -  CB, 1A
extern InstructionInfo instructionInfoRRD;

// RR E  -  CB, 1B
extern InstructionInfo instructionInfoRRE;

// RR H  -  CB, 1C
extern InstructionInfo instructionInfoRRH;

// RR L  -  CB, 1D
extern InstructionInfo instructionInfoRRL;

// RR (HL)  -  CB, 1E
extern InstructionInfo instructionInfoRRHL;

// RR (IX+d)  -  DD, CB, d, 1E
extern InstructionInfo instructionInfoRRIXd;

// RR (IY+d)  -  FD, CB, d, 1E
extern InstructionInfo instructionInfoRRIYd;

// SLA A  -  CB, 27
extern InstructionInfo instructionInfoSLAA;

// SLA B  -  CB, 20
extern InstructionInfo instructionInfoSLAB;

// SLA C  -  CB, 21
extern InstructionInfo instructionInfoSLAC;

// SLA D  -  CB, 22
extern InstructionInfo instructionInfoSLAD;

// SLA E  -  CB, 23
extern InstructionInfo instructionInfoSLAE;

// SLA H  -  CB, 24
extern InstructionInfo instructionInfoSLAH;

// SLA L  -  CB, 25
extern InstructionInfo instructionInfoSLAL;

// SLA (HL)  -  CB, 26
extern InstructionInfo instructionInfoSLAHL;

// SLA (IX+d)  -  DD, CB, d, 26
extern InstructionInfo instructionInfoSLAIXd;

// SLA (IY+d)  -  FD, CB, d, 26
extern InstructionInfo instructionInfoSLAIYd;

// SRA A  -  CB, 2F
extern InstructionInfo instructionInfoSRAA;

// SRA B  -  CB, 28
extern InstructionInfo instructionInfoSRAB;

// SRA C  -  CB, 29
extern InstructionInfo instructionInfoSRAC;

// SRA D  -  CB, 2A
extern InstructionInfo instructionInfoSRAD;

// SRA E  -  CB, 2B
extern InstructionInfo instructionInfoSRAE;

// SRA H  -  CB, 2C
extern InstructionInfo instructionInfoSRAH;

// SRA L  -  CB, 2D
extern InstructionInfo instructionInfoSRAL;

// SRA (HL)  -  CB, 2E
extern InstructionInfo instructionInfoSRAHL;

// SRA (IX+d)  -  DD, CB, d, 2E
extern InstructionInfo instructionInfoSRAIXd;

// SRA (IY+d)  -  FD, CB, d, 2E
extern InstructionInfo instructionInfoSRAIYd;

// SRL A  -  CB, 3F
extern InstructionInfo instructionInfoSRLA;

// SRL B  -  CB, 38
extern InstructionInfo instructionInfoSRLB;

// SRL C  -  CB, 39
extern InstructionInfo instructionInfoSRLC;

// SRL D  -  CB, 3A
extern InstructionInfo instructionInfoSRLD;

// SRL E  -  CB, 3B
extern InstructionInfo instructionInfoSRLE;

// SRL H  -  CB, 3C
extern InstructionInfo instructionInfoSRLH;

// SRL L  -  CB, 3D
extern InstructionInfo instructionInfoSRLL;

// SRL (HL)  -  CB, 3E
extern InstructionInfo instructionInfoSRLHL;

// SRL (IX+d)  -  DD, CB, d, 3E
extern InstructionInfo instructionInfoSRLIXd;

// SRL (IY+d)  -  FD, CB, d, 3E
extern InstructionInfo instructionInfoSRLIYd;

// RLD A  -  ED, 6F
extern InstructionInfo instructionInfoRLDA;

// RRD A  -  ED, 67
extern InstructionInfo instructionInfoRRDA;

// BIT 0, A  -  CB, 47
extern InstructionInfo instructionInfoBIT0A;

// BIT 1, A  -  CB, 4F
extern InstructionInfo instructionInfoBIT1A;

// BIT 2, A  -  CB, 57
extern InstructionInfo instructionInfoBIT2A;

// BIT 3, A  -  CB, 5F
extern InstructionInfo instructionInfoBIT3A;

// BIT 4, A  -  CB, 67
extern InstructionInfo instructionInfoBIT4A;

// BIT 5, A  -  CB, 6F
extern InstructionInfo instructionInfoBIT5A;

// BIT 6, A  -  CB, 77
extern InstructionInfo instructionInfoBIT6A;

// BIT 7, A  -  CB, 7F
extern InstructionInfo instructionInfoBIT7A;

// BIT 0, B  -  CB, 40
extern InstructionInfo instructionInfoBIT0B;

// BIT 1, B  -  CB, 48
extern InstructionInfo instructionInfoBIT1B;

// BIT 2, B  -  CB, 50
extern InstructionInfo instructionInfoBIT2B;

// BIT 3, B  -  CB, 58
extern InstructionInfo instructionInfoBIT3B;

// BIT 4, B  -  CB, 60
extern InstructionInfo instructionInfoBIT4B;

// BIT 5, B  -  CB, 68
extern InstructionInfo instructionInfoBIT5B;

// BIT 6, B  -  CB, 70
extern InstructionInfo instructionInfoBIT6B;

// BIT 7, B  -  CB, 78
extern InstructionInfo instructionInfoBIT7B;

// BIT 0, C  -  CB, 41
extern InstructionInfo instructionInfoBIT0C;

// BIT 1, C  -  CB, 49
extern InstructionInfo instructionInfoBIT1C;

// BIT 2, C  -  CB, 51
extern InstructionInfo instructionInfoBIT2C;

// BIT 3, C  -  CB, 59
extern InstructionInfo instructionInfoBIT3C;

// BIT 4, C  -  CB, 61
extern InstructionInfo instructionInfoBIT4C;

// BIT 5, C  -  CB, 69
extern InstructionInfo instructionInfoBIT5C;

// BIT 6, C  -  CB, 71
extern InstructionInfo instructionInfoBIT6C;

// BIT 7, C  -  CB, 79
extern InstructionInfo instructionInfoBIT7C;

// BIT 0, D  -  CB, 42
extern InstructionInfo instructionInfoBIT0D;

// BIT 1, D  -  CB, 4A
extern InstructionInfo instructionInfoBIT1D;

// BIT 2, D  -  CB, 52
extern InstructionInfo instructionInfoBIT2D;

// BIT 3, D  -  CB, 5A
extern InstructionInfo instructionInfoBIT3D;

// BIT 4, D  -  CB, 62
extern InstructionInfo instructionInfoBIT4D;

// BIT 5, D  -  CB, 6A
extern InstructionInfo instructionInfoBIT5D;

// BIT 6, D  -  CB, 72
extern InstructionInfo instructionInfoBIT6D;

// BIT 7, D  -  CB, 7A
extern InstructionInfo instructionInfoBIT7D;

// BIT 0, E  -  CB, 43
extern InstructionInfo instructionInfoBIT0E;

// BIT 1, E  -  CB, 4B
extern InstructionInfo instructionInfoBIT1E;

// BIT 2, E  -  CB, 53
extern InstructionInfo instructionInfoBIT2E;

// BIT 3, E  -  CB, 5B
extern InstructionInfo instructionInfoBIT3E;

// BIT 4, E  -  CB, 63
extern InstructionInfo instructionInfoBIT4E;

// BIT 5, E  -  CB, 6B
extern InstructionInfo instructionInfoBIT5E;

// BIT 6, E  -  CB, 73
extern InstructionInfo instructionInfoBIT6E;

// BIT 7, E  -  CB, 7B
extern InstructionInfo instructionInfoBIT7E;

// BIT 0, H  -  CB, 44
extern InstructionInfo instructionInfoBIT0H;

// BIT 1, H  -  CB, 4C
extern InstructionInfo instructionInfoBIT1H;

// BIT 2, H  -  CB, 54
extern InstructionInfo instructionInfoBIT2H;

// BIT 3, H  -  CB, 5C
extern InstructionInfo instructionInfoBIT3H;

// BIT 4, H  -  CB, 64
extern InstructionInfo instructionInfoBIT4H;

// BIT 5, H  -  CB, 6C
extern InstructionInfo instructionInfoBIT5H;

// BIT 6, H  -  CB, 74
extern InstructionInfo instructionInfoBIT6H;

// BIT 7, H  -  CB, 7C
extern InstructionInfo instructionInfoBIT7H;

// BIT 0, L  -  CB, 45
extern InstructionInfo instructionInfoBIT0L;

// BIT 1, L  -  CB, 4D
extern InstructionInfo instructionInfoBIT1L;

// BIT 2, L  -  CB, 55
extern InstructionInfo instructionInfoBIT2L;

// BIT 3, L  -  CB, 5D
extern InstructionInfo instructionInfoBIT3L;

// BIT 4, L  -  CB, 65
extern InstructionInfo instructionInfoBIT4L;

// BIT 5, L  -  CB, 6D
extern InstructionInfo instructionInfoBIT5L;

// BIT 6, L  -  CB, 75
extern InstructionInfo instructionInfoBIT6L;

// BIT 7, L  -  CB, 7D
extern InstructionInfo instructionInfoBIT7L;

// BIT 0, (HL)  -  CB, 46
extern InstructionInfo instructionInfoBIT0HL;

// BIT 1, (HL)  -  CB, 4E
extern InstructionInfo instructionInfoBIT1HL;

// BIT 2, (HL)  -  CB, 56
extern InstructionInfo instructionInfoBIT2HL;

// BIT 3, (HL)  -  CB, 5E
extern InstructionInfo instructionInfoBIT3HL;

// BIT 4, (HL)  -  CB, 66
extern InstructionInfo instructionInfoBIT4HL;

// BIT 5, (HL)  -  CB, 6E
extern InstructionInfo instructionInfoBIT5HL;

// BIT 6, (HL)  -  CB, 76
extern InstructionInfo instructionInfoBIT6HL;

// BIT 7, (HL)  -  CB, 7E
extern InstructionInfo instructionInfoBIT7HL;

// BIT 0, (IX+d)  -  DD, CB, d, 46
extern InstructionInfo instructionInfoBIT0IXd;

// BIT 1, (IX+d)  -  DD, CB, d, 4E
extern InstructionInfo instructionInfoBIT1IXd;

// BIT 2, (IX+d)  -  DD, CB, d, 56
extern InstructionInfo instructionInfoBIT2IXd;

// BIT 3, (IX+d)  -  DD, CB, d, 5E
extern InstructionInfo instructionInfoBIT3IXd;

// BIT 4, (IX+d)  -  DD, CB, d, 66
extern InstructionInfo instructionInfoBIT4IXd;

// BIT 5, (IX+d)  -  DD, CB, d, 6E
extern InstructionInfo instructionInfoBIT5IXd;

// BIT 6, (IX+d)  -  DD, CB, d, 76
extern InstructionInfo instructionInfoBIT6IXd;

// BIT 7, (IX+d)  -  DD, CB, d, 7E
extern InstructionInfo instructionInfoBIT7IXd;

// BIT 0, (IY+d)  -  FD, CB, d, 46
extern InstructionInfo instructionInfoBIT0IYd;

// BIT 1, (IY+d)  -  FD, CB, d, 4E
extern InstructionInfo instructionInfoBIT1IYd;

// BIT 2, (IY+d)  -  FD, CB, d, 56
extern InstructionInfo instructionInfoBIT2IYd;

// BIT 3, (IY+d)  -  FD, CB, d, 5E
extern InstructionInfo instructionInfoBIT3IYd;

// BIT 4, (IY+d)  -  FD, CB, d, 66
extern InstructionInfo instructionInfoBIT4IYd;

// BIT 5, (IY+d)  -  FD, CB, d, 6E
extern InstructionInfo instructionInfoBIT5IYd;

// BIT 6, (IY+d)  -  FD, CB, d, 76
extern InstructionInfo instructionInfoBIT6IYd;

// BIT 7, (IY+d)  -  FD, CB, d, 7E
extern InstructionInfo instructionInfoBIT7IYd;

// SET 0, A  -  CB, C7
extern InstructionInfo instructionInfoSET0A;

// SET 1, A  -  CB, CF
extern InstructionInfo instructionInfoSET1A;

// SET 2, A  -  CB, D7
extern InstructionInfo instructionInfoSET2A;

// SET 3, A  -  CB, DF
extern InstructionInfo instructionInfoSET3A;

// SET 4, A  -  CB, E7
extern InstructionInfo instructionInfoSET4A;

// SET 5, A  -  CB, EF
extern InstructionInfo instructionInfoSET5A;

// SET 6, A  -  CB, F7
extern InstructionInfo instructionInfoSET6A;

// SET 7, A  -  CB, FF
extern InstructionInfo instructionInfoSET7A;

// SET 0, B  -  CB, C0
extern InstructionInfo instructionInfoSET0B;

// SET 1, B  -  CB, C8
extern InstructionInfo instructionInfoSET1B;

// SET 2, B  -  CB, D0
extern InstructionInfo instructionInfoSET2B;

// SET 3, B  -  CB, D8
extern InstructionInfo instructionInfoSET3B;

// SET 4, B  -  CB, E0
extern InstructionInfo instructionInfoSET4B;

// SET 5, B  -  CB, E8
extern InstructionInfo instructionInfoSET5B;

// SET 6, B  -  CB, F0
extern InstructionInfo instructionInfoSET6B;

// SET 7, B  -  CB, F8
extern InstructionInfo instructionInfoSET7B;

// SET 0, C  -  CB, C1
extern InstructionInfo instructionInfoSET0C;

// SET 1, C  -  CB, C9
extern InstructionInfo instructionInfoSET1C;

// SET 2, C  -  CB, D1
extern InstructionInfo instructionInfoSET2C;

// SET 3, C  -  CB, D9
extern InstructionInfo instructionInfoSET3C;

// SET 4, C  -  CB, E1
extern InstructionInfo instructionInfoSET4C;

// SET 5, C  -  CB, E9
extern InstructionInfo instructionInfoSET5C;

// SET 6, C  -  CB, F1
extern InstructionInfo instructionInfoSET6C;

// SET 7, C  -  CB, F9
extern InstructionInfo instructionInfoSET7C;

// SET 0, D  -  CB, C2
extern InstructionInfo instructionInfoSET0D;

// SET 1, D  -  CB, CA
extern InstructionInfo instructionInfoSET1D;

// SET 2, D  -  CB, D2
extern InstructionInfo instructionInfoSET2D;

// SET 3, D  -  CB, DA
extern InstructionInfo instructionInfoSET3D;

// SET 4, D  -  CB, E2
extern InstructionInfo instructionInfoSET4D;

// SET 5, D  -  CB, EA
extern InstructionInfo instructionInfoSET5D;

// SET 6, D  -  CB, F2
extern InstructionInfo instructionInfoSET6D;

// SET 7, D  -  CB, FA
extern InstructionInfo instructionInfoSET7D;

// SET 0, E  -  CB, C3
extern InstructionInfo instructionInfoSET0E;

// SET 1, E  -  CB, CB
extern InstructionInfo instructionInfoSET1E;

// SET 2, E  -  CB, D3
extern InstructionInfo instructionInfoSET2E;

// SET 3, E  -  CB, DB
extern InstructionInfo instructionInfoSET3E;

// SET 4, E  -  CB, E3
extern InstructionInfo instructionInfoSET4E;

// SET 5, E  -  CB, EB
extern InstructionInfo instructionInfoSET5E;

// SET 6, E  -  CB, F3
extern InstructionInfo instructionInfoSET6E;

// SET 7, E  -  CB, FB
extern InstructionInfo instructionInfoSET7E;

// SET 0, H  -  CB, C4
extern InstructionInfo instructionInfoSET0H;

// SET 1, H  -  CB, CC
extern InstructionInfo instructionInfoSET1H;

// SET 2, H  -  CB, D4
extern InstructionInfo instructionInfoSET2H;

// SET 3, H  -  CB, DC
extern InstructionInfo instructionInfoSET3H;

// SET 4, H  -  CB, E4
extern InstructionInfo instructionInfoSET4H;

// SET 5, H  -  CB, EC
extern InstructionInfo instructionInfoSET5H;

// SET 6, H  -  CB, F4
extern InstructionInfo instructionInfoSET6H;

// SET 7, H  -  CB, FC
extern InstructionInfo instructionInfoSET7H;

// SET 0, L  -  CB, C5
extern InstructionInfo instructionInfoSET0L;

// SET 1, L  -  CB, CD
extern InstructionInfo instructionInfoSET1L;

// SET 2, L  -  CB, D5
extern InstructionInfo instructionInfoSET2L;

// SET 3, L  -  CB, DD
extern InstructionInfo instructionInfoSET3L;

// SET 4, L  -  CB, E5
extern InstructionInfo instructionInfoSET4L;

// SET 5, L  -  CB, ED
extern InstructionInfo instructionInfoSET5L;

// SET 6, L  -  CB, F5
extern InstructionInfo instructionInfoSET6L;

// SET 7, L  -  CB, FD
extern InstructionInfo instructionInfoSET7L;

// SET 0, (HL)  -  CB, C6
extern InstructionInfo instructionInfoSET0HL;

// SET 1, (HL)  -  CB, CE
extern InstructionInfo instructionInfoSET1HL;

// SET 2, (HL)  -  CB, D6
extern InstructionInfo instructionInfoSET2HL;

// SET 3, (HL)  -  CB, DE
extern InstructionInfo instructionInfoSET3HL;

// SET 4, (HL)  -  CB, E6
extern InstructionInfo instructionInfoSET4HL;

// SET 5, (HL)  -  CB, EE
extern InstructionInfo instructionInfoSET5HL;

// SET 6, (HL)  -  CB, F6
extern InstructionInfo instructionInfoSET6HL;

// SET 7, (HL)  -  CB, FE
extern InstructionInfo instructionInfoSET7HL;

// SET 0, (IX+d)  -  DD, CB, d, C6
extern InstructionInfo instructionInfoSET0IXd;

// SET 1, (IX+d)  -  DD, CB, d, CE
extern InstructionInfo instructionInfoSET1IXd;

// SET 2, (IX+d)  -  DD, CB, d, D6
extern InstructionInfo instructionInfoSET2IXd;

// SET 3, (IX+d)  -  DD, CB, d, DE
extern InstructionInfo instructionInfoSET3IXd;

// SET 4, (IX+d)  -  DD, CB, d, E6
extern InstructionInfo instructionInfoSET4IXd;

// SET 5, (IX+d)  -  DD, CB, d, EE
extern InstructionInfo instructionInfoSET5IXd;

// SET 6, (IX+d)  -  DD, CB, d, F6
extern InstructionInfo instructionInfoSET6IXd;

// SET 7, (IX+d)  -  DD, CB, d, FE
extern InstructionInfo instructionInfoSET7IXd;

// SET 0, (IY+d)  -  FD, CB, d, C6
extern InstructionInfo instructionInfoSET0IYd;

// SET 1, (IY+d)  -  FD, CB, d, CE
extern InstructionInfo instructionInfoSET1IYd;

// SET 2, (IY+d)  -  FD, CB, d, D6
extern InstructionInfo instructionInfoSET2IYd;

// SET 3, (IY+d)  -  FD, CB, d, DE
extern InstructionInfo instructionInfoSET3IYd;

// SET 4, (IY+d)  -  FD, CB, d, E6
extern InstructionInfo instructionInfoSET4IYd;

// SET 5, (IY+d)  -  FD, CB, d, EE
extern InstructionInfo instructionInfoSET5IYd;

// SET 6, (IY+d)  -  FD, CB, d, F6
extern InstructionInfo instructionInfoSET6IYd;

// SET 7, (IY+d)  -  FD, CB, d, FE
extern InstructionInfo instructionInfoSET7IYd;

// RES 0, A  -  CB, 87
extern InstructionInfo instructionInfoRES0A;

// RES 1, A  -  CB, 8F
extern InstructionInfo instructionInfoRES1A;

// RES 2, A  -  CB, 97
extern InstructionInfo instructionInfoRES2A;

// RES 3, A  -  CB, 9F
extern InstructionInfo instructionInfoRES3A;

// RES 4, A  -  CB, A7
extern InstructionInfo instructionInfoRES4A;

// RES 5, A  -  CB, AF
extern InstructionInfo instructionInfoRES5A;

// RES 6, A  -  CB, B7
extern InstructionInfo instructionInfoRES6A;

// RES 7, A  -  CB, BF
extern InstructionInfo instructionInfoRES7A;

// RES 0, B  -  CB, 80
extern InstructionInfo instructionInfoRES0B;

// RES 1, B  -  CB, 88
extern InstructionInfo instructionInfoRES1B;

// RES 2, B  -  CB, 90
extern InstructionInfo instructionInfoRES2B;

// RES 3, B  -  CB, 98
extern InstructionInfo instructionInfoRES3B;

// RES 4, B  -  CB, A0
extern InstructionInfo instructionInfoRES4B;

// RES 5, B  -  CB, A8
extern InstructionInfo instructionInfoRES5B;

// RES 6, B  -  CB, B0
extern InstructionInfo instructionInfoRES6B;

// RES 7, B  -  CB, B8
extern InstructionInfo instructionInfoRES7B;

// RES 0, C  -  CB, 81
extern InstructionInfo instructionInfoRES0C;

// RES 1, C  -  CB, 89
extern InstructionInfo instructionInfoRES1C;

// RES 2, C  -  CB, 91
extern InstructionInfo instructionInfoRES2C;

// RES 3, C  -  CB, 99
extern InstructionInfo instructionInfoRES3C;

// RES 4, C  -  CB, A1
extern InstructionInfo instructionInfoRES4C;

// RES 5, C  -  CB, A9
extern InstructionInfo instructionInfoRES5C;

// RES 6, C  -  CB, B1
extern InstructionInfo instructionInfoRES6C;

// RES 7, C  -  CB, B9
extern InstructionInfo instructionInfoRES7C;

// RES 0, D  -  CB, 82
extern InstructionInfo instructionInfoRES0D;

// RES 1, D  -  CB, 8A
extern InstructionInfo instructionInfoRES1D;

// RES 2, D  -  CB, 92
extern InstructionInfo instructionInfoRES2D;

// RES 3, D  -  CB, 9A
extern InstructionInfo instructionInfoRES3D;

// RES 4, D  -  CB, A2
extern InstructionInfo instructionInfoRES4D;

// RES 5, D  -  CB, AA
extern InstructionInfo instructionInfoRES5D;

// RES 6, D  -  CB, B2
extern InstructionInfo instructionInfoRES6D;

// RES 7, D  -  CB, BA
extern InstructionInfo instructionInfoRES7D;

// RES 0, E  -  CB, 83
extern InstructionInfo instructionInfoRES0E;

// RES 1, E  -  CB, 8B
extern InstructionInfo instructionInfoRES1E;

// RES 2, E  -  CB, 93
extern InstructionInfo instructionInfoRES2E;

// RES 3, E  -  CB, 9B
extern InstructionInfo instructionInfoRES3E;

// RES 4, E  -  CB, A3
extern InstructionInfo instructionInfoRES4E;

// RES 5, E  -  CB, AB
extern InstructionInfo instructionInfoRES5E;

// RES 6, E  -  CB, B3
extern InstructionInfo instructionInfoRES6E;

// RES 7, E  -  CB, BB
extern InstructionInfo instructionInfoRES7E;

// RES 0, H  -  CB, 84
extern InstructionInfo instructionInfoRES0H;

// RES 1, H  -  CB, 8C
extern InstructionInfo instructionInfoRES1H;

// RES 2, H  -  CB, 94
extern InstructionInfo instructionInfoRES2H;

// RES 3, H  -  CB, 9C
extern InstructionInfo instructionInfoRES3H;

// RES 4, H  -  CB, A4
extern InstructionInfo instructionInfoRES4H;

// RES 5, H  -  CB, AC
extern InstructionInfo instructionInfoRES5H;

// RES 6, H  -  CB, B4
extern InstructionInfo instructionInfoRES6H;

// RES 7, H  -  CB, BC
extern InstructionInfo instructionInfoRES7H;

// RES 0, L  -  CB, 85
extern InstructionInfo instructionInfoRES0L;

// RES 1, L  -  CB, 8D
extern InstructionInfo instructionInfoRES1L;

// RES 2, L  -  CB, 95
extern InstructionInfo instructionInfoRES2L;

// RES 3, L  -  CB, 9D
extern InstructionInfo instructionInfoRES3L;

// RES 4, L  -  CB, A5
extern InstructionInfo instructionInfoRES4L;

// RES 5, L  -  CB, AD
extern InstructionInfo instructionInfoRES5L;

// RES 6, L  -  CB, B5
extern InstructionInfo instructionInfoRES6L;

// RES 7, L  -  CB, BD
extern InstructionInfo instructionInfoRES7L;

// RES 0, (HL)  -  CB, 86
extern InstructionInfo instructionInfoRES0HL;

// RES 1, (HL)  -  CB, 8E
extern InstructionInfo instructionInfoRES1HL;

// RES 2, (HL)  -  CB, 96
extern InstructionInfo instructionInfoRES2HL;

// RES 3, (HL)  -  CB, 9E
extern InstructionInfo instructionInfoRES3HL;

// RES 4, (HL)  -  CB, A6
extern InstructionInfo instructionInfoRES4HL;

// RES 5, (HL)  -  CB, AE
extern InstructionInfo instructionInfoRES5HL;

// RES 6, (HL)  -  CB, B6
extern InstructionInfo instructionInfoRES6HL;

// RES 7, (HL)  -  CB, BE
extern InstructionInfo instructionInfoRES7HL;

// RES 0, (IX+d)  -  DD, CB, d, 86
extern InstructionInfo instructionInfoRES0IXd;

// RES 1, (IX+d)  -  DD, CB, d, 8E
extern InstructionInfo instructionInfoRES1IXd;

// RES 2, (IX+d)  -  DD, CB, d, 96
extern InstructionInfo instructionInfoRES2IXd;

// RES 3, (IX+d)  -  DD, CB, d, 9E
extern InstructionInfo instructionInfoRES3IXd;

// RES 4, (IX+d)  -  DD, CB, d, A6
extern InstructionInfo instructionInfoRES4IXd;

// RES 5, (IX+d)  -  DD, CB, d, AE
extern InstructionInfo instructionInfoRES5IXd;

// RES 6, (IX+d)  -  DD, CB, d, B6
extern InstructionInfo instructionInfoRES6IXd;

// RES 7, (IX+d)  -  DD, CB, d, BE
extern InstructionInfo instructionInfoRES7IXd;

// RES 0, (IY+d)  -  FD, CB, d, 86
extern InstructionInfo instructionInfoRES0IYd;

// RES 1, (IY+d)  -  FD, CB, d, 8E
extern InstructionInfo instructionInfoRES1IYd;

// RES 2, (IY+d)  -  FD, CB, d, 96
extern InstructionInfo instructionInfoRES2IYd;

// RES 3, (IY+d)  -  FD, CB, d, 9E
extern InstructionInfo instructionInfoRES3IYd;

// RES 4, (IY+d)  -  FD, CB, d, A6
extern InstructionInfo instructionInfoRES4IYd;

// RES 5, (IY+d)  -  FD, CB, d, AE
extern InstructionInfo instructionInfoRES5IYd;

// RES 6, (IY+d)  -  FD, CB, d, B6
extern InstructionInfo instructionInfoRES6IYd;

// RES 7, (IY+d)  -  FD, CB, d, BE
extern InstructionInfo instructionInfoRES7IYd;

// JP nn  -  C3, n, n
extern InstructionInfo instructionInfoJPnn;

// JP NZ, nn  -  C2, n, n
extern InstructionInfo instructionInfoJPNZnn;

// JP Z, nn  -  CA, n, n
extern InstructionInfo instructionInfoJPZnn;

// JP NC, nn  -  D2, n, n
extern InstructionInfo instructionInfoJPNCnn;

// JP C, nn  -  DA, n, n
extern InstructionInfo instructionInfoJPCnn;

// JP PO, nn  -  E2, n, n
extern InstructionInfo instructionInfoJPPOnn;

// JP PE, nn  -  EA, n, n
extern InstructionInfo instructionInfoJPPEnn;

// JP P, nn  -  F2, n, n
extern InstructionInfo instructionInfoJPPnn;

// JP M, nn  -  FA, n, n
extern InstructionInfo instructionInfoJPMnn;

// JR e  -  18, e
extern InstructionInfo instructionInfoJRe;

// JR NZ, e  -  20, e
extern InstructionInfo instructionInfoJRNZe;

// JR Z, e  -  28, e
extern InstructionInfo instructionInfoJRZe;

// JR NC, e  -  30, e
extern InstructionInfo instructionInfoJRNCe;

// JR C, e  -  38, e
extern InstructionInfo instructionInfoJRCe;

// JP HL  -  E9
extern InstructionInfo instructionInfoJPHL;

// JP IX  -  DD, E9
extern InstructionInfo instructionInfoJPIX;

// JP IY  -  FD, E9
extern InstructionInfo instructionInfoJPIY;

// DJNZ e  -  10, e
extern InstructionInfo instructionInfoDJNZe;

// CALL nn  -  CD, n, n
extern InstructionInfo instructionInfoCALLnn;

// CALL NZ, nn  -  C4, n, n
extern InstructionInfo instructionInfoCALLNZnn;

// CALL Z, nn  -  CC, n, n
extern InstructionInfo instructionInfoCALLZnn;

// CALL NC, nn  -  D4, n, n
extern InstructionInfo instructionInfoCALLNCnn;

// CALL C, nn  -  DC, n, n
extern InstructionInfo instructionInfoCALLCnn;

// CALL PO, nn  -  E4, n, n
extern InstructionInfo instructionInfoCALLPOnn;

// CALL PE, nn  -  EC, n, n
extern InstructionInfo instructionInfoCALLPEnn;

// CALL P, nn  -  F4, n, n
extern InstructionInfo instructionInfoCALLPnn;

// CALL M, nn  -  FC, n, n
extern InstructionInfo instructionInfoCALLMnn;

// RET  -  C9
extern InstructionInfo instructionInfoRET;

// RET NZ  -  C0
extern InstructionInfo instructionInfoRETNZ;

// RET Z  -  C8
extern InstructionInfo instructionInfoRETZ;

// RET NC  -  D0
extern InstructionInfo instructionInfoRETNC;

// RET C  -  D8
extern InstructionInfo instructionInfoRETC;

// RET PO  -  E0
extern InstructionInfo instructionInfoRETPO;

// RET PE  -  E8
extern InstructionInfo instructionInfoRETPE;

// RET P  -  F0
extern InstructionInfo instructionInfoRETP;

// RET M  -  F8
extern InstructionInfo instructionInfoRETM;

// RETI  -  ED, 4D
extern InstructionInfo instructionInfoRETI;

// RETN  -  ED, 45
extern InstructionInfo instructionInfoRETN;

// RST 00  -  C7
extern InstructionInfo instructionInfoRST00;

// RST 08  -  CF
extern InstructionInfo instructionInfoRST08;

// RST 10  -  D7
extern InstructionInfo instructionInfoRST10;

// RST 18  -  DF
extern InstructionInfo instructionInfoRST18;

// RST 20  -  E7
extern InstructionInfo instructionInfoRST20;

// RST 28  -  EF
extern InstructionInfo instructionInfoRST28;

// RST 30  -  F7
extern InstructionInfo instructionInfoRST30;

// RST 38  -  FF
extern InstructionInfo instructionInfoRST38;

// IN A, (n)  -  DB, n
extern InstructionInfo instructionInfoINAn;

// IN A, (C)  -  ED, 78
extern InstructionInfo instructionInfoINAC;

// IN B, (C)  -  ED, 40
extern InstructionInfo instructionInfoINBC;

// IN C, (C)  -  ED, 48
extern InstructionInfo instructionInfoINCC;

// IN D, (C)  -  ED, 50
extern InstructionInfo instructionInfoINDC;

// IN E, (C)  -  ED, 58
extern InstructionInfo instructionInfoINEC;

// IN H, (C)  -  ED, 60
extern InstructionInfo instructionInfoINHC;

// IN L, (C)  -  ED, 68
extern InstructionInfo instructionInfoINLC;

// INI  -  ED, A2
extern InstructionInfo instructionInfoINI;

// INIR  -  ED, B2
extern InstructionInfo instructionInfoINIR;

// IND  -  ED, AA
extern InstructionInfo instructionInfoIND;

// INDR  -  ED, BA
extern InstructionInfo instructionInfoINDR;

// OUT (n), A  -  D3, n
extern InstructionInfo instructionInfoOUTnA;

// OUT (C), A  -  ED, 79
extern InstructionInfo instructionInfoOUTCA;

// OUT (C), B  -  ED, 41
extern InstructionInfo instructionInfoOUTCB;

// OUT (C), C  -  ED, 49
extern InstructionInfo instructionInfoOUTCC;

// OUT (C), D  -  ED, 51
extern InstructionInfo instructionInfoOUTCD;

// OUT (C), E  -  ED, 59
extern InstructionInfo instructionInfoOUTCE;

// OUT (C), H  -  ED, 61
extern InstructionInfo instructionInfoOUTCH;

// OUT (C), L  -  ED, 69
extern InstructionInfo instructionInfoOUTCL;

// OUTI  -  ED, A3
extern InstructionInfo instructionInfoOUTI;

// OTIR  -  ED, B3
extern InstructionInfo instructionInfoOTIR;

// OUTD  -  ED, A3
extern InstructionInfo instructionInfoOUTD;

// OTDR  -  ED, BB
extern InstructionInfo instructionInfoOTDR;


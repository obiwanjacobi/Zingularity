/**
 *  Generated Source Code
 *  Any changes you make will be lost when the code is regenerated.
 */

// Instructions for the Z80:
// LD A, A  -  7F
// LD A, B  -  78
// LD A, C  -  79
// LD A, D  -  7A
// LD A, E  -  7B
// LD A, H  -  7C
// LD A, L  -  7D
// LD B, A  -  47
// LD B, B  -  40
// LD B, C  -  41
// LD B, D  -  42
// LD B, E  -  43
// LD B, H  -  44
// LD B, L  -  45
// LD C, A  -  4F
// LD C, B  -  48
// LD C, C  -  49
// LD C, D  -  4A
// LD C, E  -  4B
// LD C, H  -  4C
// LD C, L  -  4D
// LD D, A  -  57
// LD D, B  -  50
// LD D, C  -  51
// LD D, D  -  52
// LD D, E  -  53
// LD D, H  -  54
// LD D, L  -  55
// LD E, A  -  5F
// LD E, B  -  58
// LD E, C  -  59
// LD E, D  -  5A
// LD E, E  -  5B
// LD E, H  -  5C
// LD E, L  -  5D
// LD H, A  -  67
// LD H, B  -  60
// LD H, C  -  61
// LD H, D  -  62
// LD H, E  -  63
// LD H, H  -  64
// LD H, L  -  65
// LD L, A  -  6F
// LD L, B  -  68
// LD L, C  -  69
// LD L, D  -  6A
// LD L, E  -  6B
// LD L, H  -  6C
// LD L, L  -  6D
// LD A, n  -  3E, n
// LD B, n  -  06, n
// LD C, n  -  0E, n
// LD D, n  -  16, n
// LD E, n  -  1E, n
// LD H, n  -  26, n
// LD L, n  -  2E, n
// LD A, (HL)  -  7E
// LD B, (HL)  -  46
// LD C, (HL)  -  4E
// LD D, (HL)  -  56
// LD E, (HL)  -  5E
// LD H, (HL)  -  66
// LD L, (HL)  -  6E
// LD A, (IX+d)  -  DD, 7E, d
// LD A, (IY+d)  -  FD, 7E, d
// LD B, (IX+d)  -  DD, 46, d
// LD B, (IY+d)  -  FD, 46, d
// LD C, (IX+d)  -  DD, 4E, d
// LD C, (IY+d)  -  FD, 4E, d
// LD D, (IX+d)  -  DD, 56, d
// LD D, (IY+d)  -  FD, 56, d
// LD E, (IX+d)  -  DD, 5E, d
// LD E, (IY+d)  -  FD, 5E, d
// LD H, (IX+d)  -  DD, 66, d
// LD H, (IY+d)  -  FD, 66, d
// LD L, (IX+d)  -  DD, 6E, d
// LD L, (IY+d)  -  FD, 6E, d
// LD (HL), A  -  77
// LD (HL), B  -  70
// LD (HL), C  -  71
// LD (HL), D  -  72
// LD (HL), E  -  73
// LD (HL), H  -  74
// LD (HL), L  -  75
// LD (IX+d), A  -  DD, 77, d
// LD (IY+d), A  -  FD, 77, d
// LD (IX+d), B  -  DD, 70, d
// LD (IY+d), B  -  FD, 70, d
// LD (IX+d), C  -  DD, 71, d
// LD (IY+d), C  -  FD, 71, d
// LD (IX+d), D  -  DD, 72, d
// LD (IY+d), D  -  FD, 72, d
// LD (IX+d), E  -  DD, 73, d
// LD (IY+d), E  -  FD, 73, d
// LD (IX+d), H  -  DD, 74, d
// LD (IY+d), H  -  FD, 74, d
// LD (IX+d), L  -  DD, 75, d
// LD (IY+d), L  -  FD, 75, d
// LD (HL), n  -  36, n
// LD (IX+d), n  -  DD, 36, d, n
// LD (IY+d), n  -  FD, 36, d, n
// LD A, (BC)  -  0A
// LD A, (DE)  -  1A
// LD A, (nn)  -  3A, n, n
// LD (BC), A  -  02
// LD (DE), A  -  12
// LD (nn), A  -  32, n, n
// LD A, I  -  ED, 57
// LD A, R  -  ED, 5F
// LD I, A  -  ED, 47
// LD R, A  -  ED, 4F
// LD BC, nn  -  01, n, n
// LD DE, nn  -  11, n, n
// LD HL, nn  -  21, n, n
// LD SP, nn  -  31, n, n
// LD IX, nn  -  DD, 21, n, n
// LD IY, nn  -  FD, 21, n, n
// LD HL, (nn)  -  2A, n, n
// LD BC, (nn)  -  ED, 4B, n, n
// LD DE, (nn)  -  ED, 5B, n, n
// LD HL, (nn)  -  ED, 6B, n, n
// LD SP, (nn)  -  ED, 7B, n, n
// LD IX, (nn)  -  DD, 2A, n, n
// LD IY, (nn)  -  FD, 2A, n, n
// LD (nn), HL  -  22, n, n
// LD (nn), BC  -  ED, 43, n, n
// LD (nn), DE  -  ED, 53, n, n
// LD (nn), HL  -  ED, 63, n, n
// LD (nn), SP  -  ED, 73, n, n
// LD (nn), IX  -  DD, 22, n, n
// LD (nn), IY  -  FD, 22, n, n
// LD SP, HL  -  F9
// LD SP, IX  -  DD, F9
// LD SP, IY  -  FD, F9
// PUSH BC  -  C5
// PUSH DE  -  D5
// PUSH HL  -  E5
// PUSH AF  -  F5
// PUSH IX  -  DD, E5
// PUSH IY  -  FD, E5
// POP BC  -  C1
// POP DE  -  D1
// POP HL  -  E1
// POP AF  -  F1
// POP IX  -  DD, E1
// POP IY  -  FD, E1
// EX DE, HL  -  EB
// EX AF, AF'  -  08
// EXX  -  D9
// EX (SP), HL  -  E3
// EX (SP), IX  -  DD, E3
// EX (SP), IY  -  FD, E3
// LDI  -  ED, A0
// LDIR  -  ED, B0
// LDD  -  ED, A8
// LDDR  -  ED, B8
// CPI  -  ED, A1
// CPIR  -  ED, B1
// CPD  -  ED, A9
// CPDR  -  ED, B9
// ADD A, A  -  87
// ADD A, B  -  80
// ADD A, C  -  81
// ADD A, D  -  82
// ADD A, E  -  83
// ADD A, H  -  84
// ADD A, L  -  85
// ADD A, n  -  C6, n
// ADD A, (HL)  -  86
// ADD A, (IX+d)  -  DD, 86, d
// ADD A, (IY+d)  -  FD, 86, d
// ADD A, A  -  8F
// ADD A, B  -  88
// ADD A, C  -  89
// ADD A, D  -  8A
// ADD A, E  -  8B
// ADD A, H  -  8C
// ADD A, L  -  8D
// ADD A, n  -  CE, n
// ADD A, (HL)  -  8E
// ADD A, (IX+d)  -  DD, 8E, d
// ADD A, (IY+d)  -  FD, 8E, d
// SUB A, A  -  97
// SUB A, B  -  90
// SUB A, C  -  91
// SUB A, D  -  92
// SUB A, E  -  93
// SUB A, H  -  94
// SUB A, L  -  95
// SUB A, n  -  8E, n
// SUB A, (HL)  -  96
// SUB A, (IX+d)  -  DD, 96, d
// SUB A, (IY+d)  -  FD, 96, d
// SBC A, A  -  9F
// SBC A, B  -  98
// SBC A, C  -  99
// SBC A, D  -  9A
// SBC A, E  -  9B
// SBC A, H  -  9C
// SBC A, L  -  9D
// SBC A, n  -  DE, n
// SBC A, (HL)  -  9E
// SBC A, (IX+d)  -  DD, 9E, d
// SBC A, (IY+d)  -  FD, 9E, d
// AND A, A  -  A7
// AND A, B  -  A0
// AND A, C  -  A1
// AND A, D  -  A2
// AND A, E  -  A3
// AND A, H  -  A4
// AND A, L  -  A5
// AND A, n  -  E6, n
// AND A, (HL)  -  A6
// AND A, (IX+d)  -  DD, A6, d
// AND A, (IY+d)  -  FD, A6, d
// OR A, A  -  B7
// OR A, B  -  B0
// OR A, C  -  B1
// OR A, D  -  B2
// OR A, E  -  B3
// OR A, H  -  B4
// OR A, L  -  B5
// OR A, n  -  F6, n
// OR A, (HL)  -  B6
// OR A, (IX+d)  -  DD, B6, d
// OR A, (IY+d)  -  FD, B6, d
// XOR A, A  -  AF
// XOR A, B  -  A8
// XOR A, C  -  A9
// XOR A, D  -  AA
// XOR A, E  -  AB
// XOR A, H  -  AC
// XOR A, L  -  AD
// XOR A, n  -  EE, n
// XOR A, (HL)  -  AE
// XOR A, (IX+d)  -  DD, AE, d
// XOR A, (IY+d)  -  FD, AE, d
// CP A, A  -  BF
// CP A, B  -  B8
// CP A, C  -  B9
// CP A, D  -  BA
// CP A, E  -  BB
// CP A, H  -  BC
// CP A, L  -  BD
// CP A, n  -  FE, n
// CP A, (HL)  -  BE
// CP A, (IX+d)  -  DD, BE, d
// CP A, (IY+d)  -  FD, BE, d
// INC A  -  3C
// INC B  -  04
// INC C  -  0C
// INC D  -  14
// INC E  -  1C
// INC H  -  24
// INC L  -  2C
// INC (HL)  -  34
// INC (IX+d)  -  DD, 34, d
// INC (IY+d)  -  FD, 34, d
// DEC A  -  3D
// DEC B  -  05
// DEC C  -  0D
// DEC D  -  15
// DEC E  -  1D
// DEC H  -  25
// DEC L  -  2D
// DEC (HL)  -  35
// DEC (IX+d)  -  DD, 35, d
// DEC (IY+d)  -  FD, 35, d
// DAA  -  27
// CPL A  -  2F
// NEG  -  ED, 44
// CCF  -  3F
// SCF  -  37
// NOP  -  00
// HALT  -  76
// DI  -  F3
// EI  -  FB
// IM0  -  ED, 46
// IM1  -  ED, 56
// IM2  -  ED, 5E
// ADD HL, BC  -  09
// ADD HL, DE  -  19
// ADD HL, HL  -  29
// ADD HL, SP  -  39
// ADD IX, BC  -  DD, 09
// ADD IX, DE  -  DD, 19
// ADD IX, IX  -  DD, 29
// ADD IX, SP  -  DD, 39
// ADD IY, BC  -  FD, 09
// ADD IY, DE  -  FD, 19
// ADD IY, IY  -  FD, 29
// ADD IY, SP  -  FD, 39
// ADC HL, BC  -  ED, 4A
// ADC HL, DE  -  ED, 5A
// ADC HL, HL  -  ED, 6A
// ADC HL, SP  -  ED, 7A
// SBC HL, BC  -  ED, 42
// SBC HL, DE  -  ED, 52
// SBC HL, HL  -  ED, 62
// SBC HL, SP  -  ED, 72
// INC BC  -  03
// INC DE  -  13
// INC HL  -  23
// INC SP  -  33
// INC IX  -  DD, 23
// INC IY  -  FD, 23
// DEC BC  -  0B
// DEC DE  -  1B
// DEC HL  -  2B
// DEC SP  -  3B
// DEC IX  -  DD, 2B
// DEC IY  -  FD, 2B
// RLCA  -  07
// RLA  -  17
// RRCA  -  0F
// RRA  -  1F
// RLC A  -  CB, 07
// RLC B  -  CB, 00
// RLC C  -  CB, 01
// RLC D  -  CB, 02
// RLC E  -  CB, 03
// RLC H  -  CB, 04
// RLC L  -  CB, 05
// RLC (HL)  -  CB, 06
// RLC (IX+d)  -  DD, CB, d, 06
// RLC (IY+d)  -  FD, CB, d, 06
// RL A  -  CB, 17
// RL B  -  CB, 10
// RL C  -  CB, 11
// RL D  -  CB, 12
// RL E  -  CB, 13
// RL H  -  CB, 14
// RL L  -  CB, 15
// RL (HL)  -  CB, 16
// RL (IX+d)  -  DD, CB, d, 16
// RL (IY+d)  -  FD, CB, d, 16
// RRC A  -  CB, 0F
// RRC B  -  CB, 08
// RRC C  -  CB, 09
// RRC D  -  CB, 0A
// RRC E  -  CB, 0B
// RRC H  -  CB, 0C
// RRC L  -  CB, 0D
// RRC (HL)  -  CB, 0E
// RRC (IX+d)  -  DD, CB, d, 0E
// RRC (IY+d)  -  FD, CB, d, 0E
// RR A  -  CB, 1F
// RR B  -  CB, 18
// RR C  -  CB, 19
// RR D  -  CB, 1A
// RR E  -  CB, 1B
// RR H  -  CB, 1C
// RR L  -  CB, 1D
// RR (HL)  -  CB, 1E
// RR (IX+d)  -  DD, CB, d, 1E
// RR (IY+d)  -  FD, CB, d, 1E
// SLA A  -  CB, 27
// SLA B  -  CB, 20
// SLA C  -  CB, 21
// SLA D  -  CB, 22
// SLA E  -  CB, 23
// SLA H  -  CB, 24
// SLA L  -  CB, 25
// SLA (HL)  -  CB, 26
// SLA (IX+d)  -  DD, CB, d, 26
// SLA (IY+d)  -  FD, CB, d, 26
// SRA A  -  CB, 2F
// SRA B  -  CB, 28
// SRA C  -  CB, 29
// SRA D  -  CB, 2A
// SRA E  -  CB, 2B
// SRA H  -  CB, 2C
// SRA L  -  CB, 2D
// SRA (HL)  -  CB, 2E
// SRA (IX+d)  -  DD, CB, d, 2E
// SRA (IY+d)  -  FD, CB, d, 2E
// SRL A  -  CB, 3F
// SRL B  -  CB, 38
// SRL C  -  CB, 39
// SRL D  -  CB, 3A
// SRL E  -  CB, 3B
// SRL H  -  CB, 3C
// SRL L  -  CB, 3D
// SRL (HL)  -  CB, 3E
// SRL (IX+d)  -  DD, CB, d, 3E
// SRL (IY+d)  -  FD, CB, d, 3E
// RLD A  -  ED, 6F
// RRD A  -  ED, 67
// BIT 0, A  -  CB, 47
// BIT 1, A  -  CB, 4F
// BIT 2, A  -  CB, 57
// BIT 3, A  -  CB, 5F
// BIT 4, A  -  CB, 67
// BIT 5, A  -  CB, 6F
// BIT 6, A  -  CB, 77
// BIT 7, A  -  CB, 7F
// BIT 0, B  -  CB, 40
// BIT 1, B  -  CB, 48
// BIT 2, B  -  CB, 50
// BIT 3, B  -  CB, 58
// BIT 4, B  -  CB, 60
// BIT 5, B  -  CB, 68
// BIT 6, B  -  CB, 70
// BIT 7, B  -  CB, 78
// BIT 0, C  -  CB, 41
// BIT 1, C  -  CB, 49
// BIT 2, C  -  CB, 51
// BIT 3, C  -  CB, 59
// BIT 4, C  -  CB, 61
// BIT 5, C  -  CB, 69
// BIT 6, C  -  CB, 71
// BIT 7, C  -  CB, 79
// BIT 0, D  -  CB, 42
// BIT 1, D  -  CB, 4A
// BIT 2, D  -  CB, 52
// BIT 3, D  -  CB, 5A
// BIT 4, D  -  CB, 62
// BIT 5, D  -  CB, 6A
// BIT 6, D  -  CB, 72
// BIT 7, D  -  CB, 7A
// BIT 0, E  -  CB, 43
// BIT 1, E  -  CB, 4B
// BIT 2, E  -  CB, 53
// BIT 3, E  -  CB, 5B
// BIT 4, E  -  CB, 63
// BIT 5, E  -  CB, 6B
// BIT 6, E  -  CB, 73
// BIT 7, E  -  CB, 7B
// BIT 0, H  -  CB, 44
// BIT 1, H  -  CB, 4C
// BIT 2, H  -  CB, 54
// BIT 3, H  -  CB, 5C
// BIT 4, H  -  CB, 64
// BIT 5, H  -  CB, 6C
// BIT 6, H  -  CB, 74
// BIT 7, H  -  CB, 7C
// BIT 0, L  -  CB, 45
// BIT 1, L  -  CB, 4D
// BIT 2, L  -  CB, 55
// BIT 3, L  -  CB, 5D
// BIT 4, L  -  CB, 65
// BIT 5, L  -  CB, 6D
// BIT 6, L  -  CB, 75
// BIT 7, L  -  CB, 7D
// BIT 0, (HL)  -  CB, 46
// BIT 1, (HL)  -  CB, 4E
// BIT 2, (HL)  -  CB, 56
// BIT 3, (HL)  -  CB, 5E
// BIT 4, (HL)  -  CB, 66
// BIT 5, (HL)  -  CB, 6E
// BIT 6, (HL)  -  CB, 76
// BIT 7, (HL)  -  CB, 7E
// BIT 0, (IX+d)  -  DD, CB, d, 46
// BIT 1, (IX+d)  -  DD, CB, d, 4E
// BIT 2, (IX+d)  -  DD, CB, d, 56
// BIT 3, (IX+d)  -  DD, CB, d, 5E
// BIT 4, (IX+d)  -  DD, CB, d, 66
// BIT 5, (IX+d)  -  DD, CB, d, 6E
// BIT 6, (IX+d)  -  DD, CB, d, 76
// BIT 7, (IX+d)  -  DD, CB, d, 7E
// BIT 0, (IY+d)  -  FD, CB, d, 46
// BIT 1, (IY+d)  -  FD, CB, d, 4E
// BIT 2, (IY+d)  -  FD, CB, d, 56
// BIT 3, (IY+d)  -  FD, CB, d, 5E
// BIT 4, (IY+d)  -  FD, CB, d, 66
// BIT 5, (IY+d)  -  FD, CB, d, 6E
// BIT 6, (IY+d)  -  FD, CB, d, 76
// BIT 7, (IY+d)  -  FD, CB, d, 7E
// SET 0, A  -  CB, C7
// SET 1, A  -  CB, CF
// SET 2, A  -  CB, D7
// SET 3, A  -  CB, DF
// SET 4, A  -  CB, E7
// SET 5, A  -  CB, EF
// SET 6, A  -  CB, F7
// SET 7, A  -  CB, FF
// SET 0, B  -  CB, C0
// SET 1, B  -  CB, C8
// SET 2, B  -  CB, D0
// SET 3, B  -  CB, D8
// SET 4, B  -  CB, E0
// SET 5, B  -  CB, E8
// SET 6, B  -  CB, F0
// SET 7, B  -  CB, F8
// SET 0, C  -  CB, C1
// SET 1, C  -  CB, C9
// SET 2, C  -  CB, D1
// SET 3, C  -  CB, D9
// SET 4, C  -  CB, E1
// SET 5, C  -  CB, E9
// SET 6, C  -  CB, F1
// SET 7, C  -  CB, F9
// SET 0, D  -  CB, C2
// SET 1, D  -  CB, CA
// SET 2, D  -  CB, D2
// SET 3, D  -  CB, DA
// SET 4, D  -  CB, E2
// SET 5, D  -  CB, EA
// SET 6, D  -  CB, F2
// SET 7, D  -  CB, FA
// SET 0, E  -  CB, C3
// SET 1, E  -  CB, CB
// SET 2, E  -  CB, D3
// SET 3, E  -  CB, DB
// SET 4, E  -  CB, E3
// SET 5, E  -  CB, EB
// SET 6, E  -  CB, F3
// SET 7, E  -  CB, FB
// SET 0, H  -  CB, C4
// SET 1, H  -  CB, CC
// SET 2, H  -  CB, D4
// SET 3, H  -  CB, DC
// SET 4, H  -  CB, E4
// SET 5, H  -  CB, EC
// SET 6, H  -  CB, F4
// SET 7, H  -  CB, FC
// SET 0, L  -  CB, C5
// SET 1, L  -  CB, CD
// SET 2, L  -  CB, D5
// SET 3, L  -  CB, DD
// SET 4, L  -  CB, E5
// SET 5, L  -  CB, ED
// SET 6, L  -  CB, F5
// SET 7, L  -  CB, FD
// SET 0, (HL)  -  CB, C6
// SET 1, (HL)  -  CB, CE
// SET 2, (HL)  -  CB, D6
// SET 3, (HL)  -  CB, DE
// SET 4, (HL)  -  CB, E6
// SET 5, (HL)  -  CB, EE
// SET 6, (HL)  -  CB, F6
// SET 7, (HL)  -  CB, FE
// SET 0, (IX+d)  -  DD, CB, d, C6
// SET 1, (IX+d)  -  DD, CB, d, CE
// SET 2, (IX+d)  -  DD, CB, d, D6
// SET 3, (IX+d)  -  DD, CB, d, DE
// SET 4, (IX+d)  -  DD, CB, d, E6
// SET 5, (IX+d)  -  DD, CB, d, EE
// SET 6, (IX+d)  -  DD, CB, d, F6
// SET 7, (IX+d)  -  DD, CB, d, FE
// SET 0, (IY+d)  -  FD, CB, d, C6
// SET 1, (IY+d)  -  FD, CB, d, CE
// SET 2, (IY+d)  -  FD, CB, d, D6
// SET 3, (IY+d)  -  FD, CB, d, DE
// SET 4, (IY+d)  -  FD, CB, d, E6
// SET 5, (IY+d)  -  FD, CB, d, EE
// SET 6, (IY+d)  -  FD, CB, d, F6
// SET 7, (IY+d)  -  FD, CB, d, FE
// RES 0, A  -  CB, 87
// RES 1, A  -  CB, 8F
// RES 2, A  -  CB, 97
// RES 3, A  -  CB, 9F
// RES 4, A  -  CB, A7
// RES 5, A  -  CB, AF
// RES 6, A  -  CB, B7
// RES 7, A  -  CB, BF
// RES 0, B  -  CB, 80
// RES 1, B  -  CB, 88
// RES 2, B  -  CB, 90
// RES 3, B  -  CB, 98
// RES 4, B  -  CB, A0
// RES 5, B  -  CB, A8
// RES 6, B  -  CB, B0
// RES 7, B  -  CB, B8
// RES 0, C  -  CB, 81
// RES 1, C  -  CB, 89
// RES 2, C  -  CB, 91
// RES 3, C  -  CB, 99
// RES 4, C  -  CB, A1
// RES 5, C  -  CB, A9
// RES 6, C  -  CB, B1
// RES 7, C  -  CB, B9
// RES 0, D  -  CB, 82
// RES 1, D  -  CB, 8A
// RES 2, D  -  CB, 92
// RES 3, D  -  CB, 9A
// RES 4, D  -  CB, A2
// RES 5, D  -  CB, AA
// RES 6, D  -  CB, B2
// RES 7, D  -  CB, BA
// RES 0, E  -  CB, 83
// RES 1, E  -  CB, 8B
// RES 2, E  -  CB, 93
// RES 3, E  -  CB, 9B
// RES 4, E  -  CB, A3
// RES 5, E  -  CB, AB
// RES 6, E  -  CB, B3
// RES 7, E  -  CB, BB
// RES 0, H  -  CB, 84
// RES 1, H  -  CB, 8C
// RES 2, H  -  CB, 94
// RES 3, H  -  CB, 9C
// RES 4, H  -  CB, A4
// RES 5, H  -  CB, AC
// RES 6, H  -  CB, B4
// RES 7, H  -  CB, BC
// RES 0, L  -  CB, 85
// RES 1, L  -  CB, 8D
// RES 2, L  -  CB, 95
// RES 3, L  -  CB, 9D
// RES 4, L  -  CB, A5
// RES 5, L  -  CB, AD
// RES 6, L  -  CB, B5
// RES 7, L  -  CB, BD
// RES 0, (HL)  -  CB, 86
// RES 1, (HL)  -  CB, 8E
// RES 2, (HL)  -  CB, 96
// RES 3, (HL)  -  CB, 9E
// RES 4, (HL)  -  CB, A6
// RES 5, (HL)  -  CB, AE
// RES 6, (HL)  -  CB, B6
// RES 7, (HL)  -  CB, BE
// RES 0, (IX+d)  -  DD, CB, d, 86
// RES 1, (IX+d)  -  DD, CB, d, 8E
// RES 2, (IX+d)  -  DD, CB, d, 96
// RES 3, (IX+d)  -  DD, CB, d, 9E
// RES 4, (IX+d)  -  DD, CB, d, A6
// RES 5, (IX+d)  -  DD, CB, d, AE
// RES 6, (IX+d)  -  DD, CB, d, B6
// RES 7, (IX+d)  -  DD, CB, d, BE
// RES 0, (IY+d)  -  FD, CB, d, 86
// RES 1, (IY+d)  -  FD, CB, d, 8E
// RES 2, (IY+d)  -  FD, CB, d, 96
// RES 3, (IY+d)  -  FD, CB, d, 9E
// RES 4, (IY+d)  -  FD, CB, d, A6
// RES 5, (IY+d)  -  FD, CB, d, AE
// RES 6, (IY+d)  -  FD, CB, d, B6
// RES 7, (IY+d)  -  FD, CB, d, BE
// JP nn  -  C3, n, n
// JP NZ, nn  -  C2, n, n
// JP Z, nn  -  CA, n, n
// JP NC, nn  -  D2, n, n
// JP C, nn  -  DA, n, n
// JP PO, nn  -  E2, n, n
// JP PE, nn  -  EA, n, n
// JP P, nn  -  F2, n, n
// JP M, nn  -  FA, n, n
// JR e  -  18, e
// JR NZ, e  -  20, e
// JR Z, e  -  28, e
// JR NC, e  -  30, e
// JR C, e  -  38, e
// JP HL  -  E9
// JP IX  -  DD, E9
// JP IY  -  FD, E9
// DJNZ e  -  10, e
// CALL nn  -  CD, n, n
// CALL NZ, nn  -  C4, n, n
// CALL Z, nn  -  CC, n, n
// CALL NC, nn  -  D4, n, n
// CALL C, nn  -  DC, n, n
// CALL PO, nn  -  E4, n, n
// CALL PE, nn  -  EC, n, n
// CALL P, nn  -  F4, n, n
// CALL M, nn  -  FC, n, n
// RET  -  C9
// RET NZ  -  C0
// RET Z  -  C8
// RET NC  -  D0
// RET C  -  D8
// RET PO  -  E0
// RET PE  -  E8
// RET P  -  F0
// RET M  -  F8
// RETI  -  ED, 4D
// RETN  -  ED, 45
// RST 00  -  C7
// RST 08  -  CF
// RST 10  -  D7
// RST 18  -  DF
// RST 20  -  E7
// RST 28  -  EF
// RST 30  -  F7
// RST 38  -  FF
// IN A, (n)  -  DB, n
// IN A, (C)  -  ED, 78
// IN B, (C)  -  ED, 40
// IN C, (C)  -  ED, 48
// IN D, (C)  -  ED, 50
// IN E, (C)  -  ED, 58
// IN H, (C)  -  ED, 60
// IN L, (C)  -  ED, 68
// INI  -  ED, A2
// INIR  -  ED, B2
// IND  -  ED, AA
// INDR  -  ED, BA
// OUT (n), A  -  D3, n
// OUT (C), A  -  ED, 79
// OUT (C), B  -  ED, 41
// OUT (C), C  -  ED, 49
// OUT (C), D  -  ED, 51
// OUT (C), E  -  ED, 59
// OUT (C), H  -  ED, 61
// OUT (C), L  -  ED, 69
// OUTI  -  ED, A3
// OTIR  -  ED, B3
// OUTD  -  ED, A3
// OTDR  -  ED, BB

// Generated from .\server\src\z80asm\z80asm.g4 by ANTLR 4.7.3-SNAPSHOT


import { ATN } from "antlr4ts/atn/ATN";
import { ATNDeserializer } from "antlr4ts/atn/ATNDeserializer";
import { FailedPredicateException } from "antlr4ts/FailedPredicateException";
import { NotNull } from "antlr4ts/Decorators";
import { NoViableAltException } from "antlr4ts/NoViableAltException";
import { Override } from "antlr4ts/Decorators";
import { Parser } from "antlr4ts/Parser";
import { ParserRuleContext } from "antlr4ts/ParserRuleContext";
import { ParserATNSimulator } from "antlr4ts/atn/ParserATNSimulator";
import { ParseTreeListener } from "antlr4ts/tree/ParseTreeListener";
import { ParseTreeVisitor } from "antlr4ts/tree/ParseTreeVisitor";
import { RecognitionException } from "antlr4ts/RecognitionException";
import { RuleContext } from "antlr4ts/RuleContext";
//import { RuleVersion } from "antlr4ts/RuleVersion";
import { TerminalNode } from "antlr4ts/tree/TerminalNode";
import { Token } from "antlr4ts/Token";
import { TokenStream } from "antlr4ts/TokenStream";
import { Vocabulary } from "antlr4ts/Vocabulary";
import { VocabularyImpl } from "antlr4ts/VocabularyImpl";

import * as Utils from "antlr4ts/misc/Utils";

import { z80asmListener } from "./z80asmListener";
import { z80asmVisitor } from "./z80asmVisitor";


export class z80asmParser extends Parser {
	public static readonly T__0 = 1;
	public static readonly T__1 = 2;
	public static readonly T__2 = 3;
	public static readonly T__3 = 4;
	public static readonly T__4 = 5;
	public static readonly T__5 = 6;
	public static readonly T__6 = 7;
	public static readonly T__7 = 8;
	public static readonly DIRECTIVEvoid = 9;
	public static readonly DIRECTIVEparam16 = 10;
	public static readonly DIRECTIVEparam32 = 11;
	public static readonly DIRECTIVEsymbol = 12;
	public static readonly DIRECTIVEsymbollist = 13;
	public static readonly DIRECTIVEassign = 14;
	public static readonly DIRECTIVEdefs = 15;
	public static readonly DIRECTIVEdefm = 16;
	public static readonly DIRECTIVEblock = 17;
	public static readonly DIRECTIVEtodo = 18;
	public static readonly DIRECTIVEfile = 19;
	public static readonly DIRECTIVEif = 20;
	public static readonly DIRECTIVEifdef = 21;
	public static readonly DIRECTIVEelse = 22;
	public static readonly DIRECTIVEendif = 23;
	public static readonly DIRECTIVEphase = 24;
	public static readonly DIRECTIVEunphase = 25;
	public static readonly INSTRUCTIONvoid = 26;
	public static readonly INSTRUCTIONld = 27;
	public static readonly INSTRUCTIONstack = 28;
	public static readonly INSTRUCTIONexchange = 29;
	public static readonly INSTRUCTIONexxchange = 30;
	public static readonly INSTRUCTIONarithmetic16 = 31;
	public static readonly INSTRUCTIONarithmetic = 32;
	public static readonly INSTRUCTIONincdec = 33;
	public static readonly INSTRUCTIONcpl = 34;
	public static readonly INSTRUCTIONrotate = 35;
	public static readonly INSTRUCTIONrotatedec = 36;
	public static readonly INSTRUCTIONbit = 37;
	public static readonly INSTRUCTIONjump = 38;
	public static readonly INSTRUCTIONjumprel = 39;
	public static readonly INSTRUCTIONjumprelnz = 40;
	public static readonly INSTRUCTIONcall = 41;
	public static readonly INSTRUCTIONret = 42;
	public static readonly INSTRUCTIONrst = 43;
	public static readonly INSTRUCTIONim = 44;
	public static readonly INSTRUCTIONin = 45;
	public static readonly INSTRUCTIONout = 46;
	public static readonly REG8x = 47;
	public static readonly REG8y = 48;
	public static readonly REG8sys = 49;
	public static readonly REG8a = 50;
	public static readonly REG8b = 51;
	public static readonly REG8c = 52;
	public static readonly REG8d = 53;
	public static readonly REG8e = 54;
	public static readonly REG8h = 55;
	public static readonly REG8l = 56;
	public static readonly REG16af = 57;
	public static readonly REG16bc = 58;
	public static readonly REG16de = 59;
	public static readonly REG16hl = 60;
	public static readonly REG16sp = 61;
	public static readonly REG16ix = 62;
	public static readonly REG16iy = 63;
	public static readonly CONDITIONflagsex = 64;
	public static readonly CONDITIONflags = 65;
	public static readonly SYMBOL = 66;
	public static readonly BLOCKCOMMENTtext = 67;
	public static readonly COMMENT = 68;
	public static readonly PLUS = 69;
	public static readonly MINUS = 70;
	public static readonly OPERATORnum = 71;
	public static readonly OPERATORbit = 72;
	public static readonly OPERATORlogic = 73;
	public static readonly INTERRUPTMODE = 74;
	public static readonly BIT8 = 75;
	public static readonly INSTRUCTIONrstvectorhex = 76;
	public static readonly INSTRUCTIONrstvector = 77;
	public static readonly NUMBERbin = 78;
	public static readonly NUMBERoct = 79;
	public static readonly NUMBERdec = 80;
	public static readonly NUMBERhex = 81;
	public static readonly ZERO = 82;
	public static readonly CHARACTER = 83;
	public static readonly STRING = 84;
	public static readonly PARopen = 85;
	public static readonly PARclose = 86;
	public static readonly COMMA = 87;
	public static readonly EOL = 88;
	public static readonly WS = 89;
	public static readonly RULE_file = 0;
	public static readonly RULE_asm = 1;
	public static readonly RULE_line = 2;
	public static readonly RULE_directive = 3;
	public static readonly RULE_directive_void = 4;
	public static readonly RULE_directive_param16 = 5;
	public static readonly RULE_directive_param32 = 6;
	public static readonly RULE_directive_symbol = 7;
	public static readonly RULE_directive_symbollist = 8;
	public static readonly RULE_directive_assign = 9;
	public static readonly RULE_directive_block = 10;
	public static readonly RULE_directive_defs = 11;
	public static readonly RULE_directive_defm = 12;
	public static readonly RULE_defmparam = 13;
	public static readonly RULE_directive_if = 14;
	public static readonly RULE_directive_ifdef = 15;
	public static readonly RULE_directive_ifblock = 16;
	public static readonly RULE_directive_elseblock = 17;
	public static readonly RULE_directive_endif = 18;
	public static readonly RULE_directive_phase = 19;
	public static readonly RULE_instruction = 20;
	public static readonly RULE_instruction_void = 21;
	public static readonly RULE_instruction_ld8 = 22;
	public static readonly RULE_instruction_ld16 = 23;
	public static readonly RULE_instruction_stack = 24;
	public static readonly RULE_instruction_exchange = 25;
	public static readonly RULE_instruction_arithmetic8 = 26;
	public static readonly RULE_instruction_incdec8 = 27;
	public static readonly RULE_instruction_cpl = 28;
	public static readonly RULE_instruction_arithemic16 = 29;
	public static readonly RULE_instruction_incdec16 = 30;
	public static readonly RULE_instruction_rotate = 31;
	public static readonly RULE_instruction_rotatedec = 32;
	public static readonly RULE_instruction_bit = 33;
	public static readonly RULE_bitindex = 34;
	public static readonly RULE_instruction_jump = 35;
	public static readonly RULE_instruction_call = 36;
	public static readonly RULE_instruction_conditionFlagsAll = 37;
	public static readonly RULE_instruction_conditionFlags = 38;
	public static readonly RULE_instruction_rst = 39;
	public static readonly RULE_instruction_im = 40;
	public static readonly RULE_instruction_io = 41;
	public static readonly RULE_offset_ex = 42;
	public static readonly RULE_offset_rel = 43;
	public static readonly RULE_registers = 44;
	public static readonly RULE_registers8 = 45;
	public static readonly RULE_registers8x = 46;
	public static readonly RULE_registers8y = 47;
	public static readonly RULE_register16_grpaf = 48;
	public static readonly RULE_register16_grpsp = 49;
	public static readonly RULE_register16_grpsphl = 50;
	public static readonly RULE_register16_grpspix = 51;
	public static readonly RULE_register16_grpspiy = 52;
	public static readonly RULE_register16_ex = 53;
	public static readonly RULE_label = 54;
	public static readonly RULE_symbol = 55;
	public static readonly RULE_blockcomment = 56;
	public static readonly RULE_blockcomment_param = 57;
	public static readonly RULE_comment = 58;
	public static readonly RULE_string = 59;
	public static readonly RULE_character = 60;
	public static readonly RULE_expression8 = 61;
	public static readonly RULE_expression16 = 62;
	public static readonly RULE_expression32 = 63;
	public static readonly RULE_expression = 64;
	public static readonly RULE_operator = 65;
	public static readonly RULE_operator_num = 66;
	public static readonly RULE_operator_bit = 67;
	public static readonly RULE_operator_logic = 68;
	public static readonly RULE_number = 69;
	public static readonly RULE_number_bin = 70;
	public static readonly RULE_number_oct = 71;
	public static readonly RULE_number_dec = 72;
	public static readonly RULE_number_hex = 73;
	// tslint:disable:no-trailing-whitespace
	public static readonly ruleNames: string[] = [
		"file", "asm", "line", "directive", "directive_void", "directive_param16", 
		"directive_param32", "directive_symbol", "directive_symbollist", "directive_assign", 
		"directive_block", "directive_defs", "directive_defm", "defmparam", "directive_if", 
		"directive_ifdef", "directive_ifblock", "directive_elseblock", "directive_endif", 
		"directive_phase", "instruction", "instruction_void", "instruction_ld8", 
		"instruction_ld16", "instruction_stack", "instruction_exchange", "instruction_arithmetic8", 
		"instruction_incdec8", "instruction_cpl", "instruction_arithemic16", "instruction_incdec16", 
		"instruction_rotate", "instruction_rotatedec", "instruction_bit", "bitindex", 
		"instruction_jump", "instruction_call", "instruction_conditionFlagsAll", 
		"instruction_conditionFlags", "instruction_rst", "instruction_im", "instruction_io", 
		"offset_ex", "offset_rel", "registers", "registers8", "registers8x", "registers8y", 
		"register16_grpaf", "register16_grpsp", "register16_grpsphl", "register16_grpspix", 
		"register16_grpspiy", "register16_ex", "label", "symbol", "blockcomment", 
		"blockcomment_param", "comment", "string", "character", "expression8", 
		"expression16", "expression32", "expression", "operator", "operator_num", 
		"operator_bit", "operator_logic", "number", "number_bin", "number_oct", 
		"number_dec", "number_hex",
	];

	private static readonly _LITERAL_NAMES: Array<string | undefined> = [
		undefined, "'='", "'''", "'.'", "':'", "';;'", "'@param'", "'@return'", 
		"'@see'", undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, "'+'", "'-'", undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, "'('", 
		"')'", "','",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, "DIRECTIVEvoid", "DIRECTIVEparam16", "DIRECTIVEparam32", 
		"DIRECTIVEsymbol", "DIRECTIVEsymbollist", "DIRECTIVEassign", "DIRECTIVEdefs", 
		"DIRECTIVEdefm", "DIRECTIVEblock", "DIRECTIVEtodo", "DIRECTIVEfile", "DIRECTIVEif", 
		"DIRECTIVEifdef", "DIRECTIVEelse", "DIRECTIVEendif", "DIRECTIVEphase", 
		"DIRECTIVEunphase", "INSTRUCTIONvoid", "INSTRUCTIONld", "INSTRUCTIONstack", 
		"INSTRUCTIONexchange", "INSTRUCTIONexxchange", "INSTRUCTIONarithmetic16", 
		"INSTRUCTIONarithmetic", "INSTRUCTIONincdec", "INSTRUCTIONcpl", "INSTRUCTIONrotate", 
		"INSTRUCTIONrotatedec", "INSTRUCTIONbit", "INSTRUCTIONjump", "INSTRUCTIONjumprel", 
		"INSTRUCTIONjumprelnz", "INSTRUCTIONcall", "INSTRUCTIONret", "INSTRUCTIONrst", 
		"INSTRUCTIONim", "INSTRUCTIONin", "INSTRUCTIONout", "REG8x", "REG8y", 
		"REG8sys", "REG8a", "REG8b", "REG8c", "REG8d", "REG8e", "REG8h", "REG8l", 
		"REG16af", "REG16bc", "REG16de", "REG16hl", "REG16sp", "REG16ix", "REG16iy", 
		"CONDITIONflagsex", "CONDITIONflags", "SYMBOL", "BLOCKCOMMENTtext", "COMMENT", 
		"PLUS", "MINUS", "OPERATORnum", "OPERATORbit", "OPERATORlogic", "INTERRUPTMODE", 
		"BIT8", "INSTRUCTIONrstvectorhex", "INSTRUCTIONrstvector", "NUMBERbin", 
		"NUMBERoct", "NUMBERdec", "NUMBERhex", "ZERO", "CHARACTER", "STRING", 
		"PARopen", "PARclose", "COMMA", "EOL", "WS",
	];
	public static readonly VOCABULARY: Vocabulary = new VocabularyImpl(z80asmParser._LITERAL_NAMES, z80asmParser._SYMBOLIC_NAMES, []);

	// @Override
	// @NotNull
	public get vocabulary(): Vocabulary {
		return z80asmParser.VOCABULARY;
	}
	// tslint:enable:no-trailing-whitespace

	// @Override
	public get grammarFileName(): string { return "z80asm.g4"; }

	// @Override
	public get ruleNames(): string[] { return z80asmParser.ruleNames; }

	// @Override
	public get serializedATN(): string { return z80asmParser._serializedATN; }

	constructor(input: TokenStream) {
		super(input);
		this._interp = new ParserATNSimulator(z80asmParser._ATN, this);
	}
	// @RuleVersion(0)
	public file(): FileContext {
		let _localctx: FileContext = new FileContext(this._ctx, this.state);
		this.enterRule(_localctx, 0, z80asmParser.RULE_file);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 149;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__2) | (1 << z80asmParser.T__4) | (1 << z80asmParser.DIRECTIVEvoid) | (1 << z80asmParser.DIRECTIVEparam16) | (1 << z80asmParser.DIRECTIVEparam32) | (1 << z80asmParser.DIRECTIVEsymbol) | (1 << z80asmParser.DIRECTIVEsymbollist) | (1 << z80asmParser.DIRECTIVEassign) | (1 << z80asmParser.DIRECTIVEdefs) | (1 << z80asmParser.DIRECTIVEdefm) | (1 << z80asmParser.DIRECTIVEblock) | (1 << z80asmParser.DIRECTIVEif) | (1 << z80asmParser.DIRECTIVEifdef) | (1 << z80asmParser.DIRECTIVEelse) | (1 << z80asmParser.DIRECTIVEendif) | (1 << z80asmParser.INSTRUCTIONvoid) | (1 << z80asmParser.INSTRUCTIONld) | (1 << z80asmParser.INSTRUCTIONstack) | (1 << z80asmParser.INSTRUCTIONexchange) | (1 << z80asmParser.INSTRUCTIONexxchange) | (1 << z80asmParser.INSTRUCTIONarithmetic16))) !== 0) || ((((_la - 32)) & ~0x1F) === 0 && ((1 << (_la - 32)) & ((1 << (z80asmParser.INSTRUCTIONarithmetic - 32)) | (1 << (z80asmParser.INSTRUCTIONincdec - 32)) | (1 << (z80asmParser.INSTRUCTIONcpl - 32)) | (1 << (z80asmParser.INSTRUCTIONrotate - 32)) | (1 << (z80asmParser.INSTRUCTIONrotatedec - 32)) | (1 << (z80asmParser.INSTRUCTIONbit - 32)) | (1 << (z80asmParser.INSTRUCTIONjump - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprel - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprelnz - 32)) | (1 << (z80asmParser.INSTRUCTIONcall - 32)) | (1 << (z80asmParser.INSTRUCTIONret - 32)) | (1 << (z80asmParser.INSTRUCTIONrst - 32)) | (1 << (z80asmParser.INSTRUCTIONim - 32)) | (1 << (z80asmParser.INSTRUCTIONin - 32)) | (1 << (z80asmParser.INSTRUCTIONout - 32)))) !== 0) || ((((_la - 66)) & ~0x1F) === 0 && ((1 << (_la - 66)) & ((1 << (z80asmParser.SYMBOL - 66)) | (1 << (z80asmParser.COMMENT - 66)) | (1 << (z80asmParser.EOL - 66)))) !== 0)) {
				{
				this.state = 148;
				this.asm();
				}
			}

			this.state = 151;
			this.match(z80asmParser.EOF);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public asm(): AsmContext {
		let _localctx: AsmContext = new AsmContext(this._ctx, this.state);
		this.enterRule(_localctx, 2, z80asmParser.RULE_asm);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 157;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			do {
				{
				{
				this.state = 154;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__2) | (1 << z80asmParser.T__4) | (1 << z80asmParser.DIRECTIVEvoid) | (1 << z80asmParser.DIRECTIVEparam16) | (1 << z80asmParser.DIRECTIVEparam32) | (1 << z80asmParser.DIRECTIVEsymbol) | (1 << z80asmParser.DIRECTIVEsymbollist) | (1 << z80asmParser.DIRECTIVEassign) | (1 << z80asmParser.DIRECTIVEdefs) | (1 << z80asmParser.DIRECTIVEdefm) | (1 << z80asmParser.DIRECTIVEblock) | (1 << z80asmParser.DIRECTIVEif) | (1 << z80asmParser.DIRECTIVEifdef) | (1 << z80asmParser.DIRECTIVEelse) | (1 << z80asmParser.DIRECTIVEendif) | (1 << z80asmParser.INSTRUCTIONvoid) | (1 << z80asmParser.INSTRUCTIONld) | (1 << z80asmParser.INSTRUCTIONstack) | (1 << z80asmParser.INSTRUCTIONexchange) | (1 << z80asmParser.INSTRUCTIONexxchange) | (1 << z80asmParser.INSTRUCTIONarithmetic16))) !== 0) || ((((_la - 32)) & ~0x1F) === 0 && ((1 << (_la - 32)) & ((1 << (z80asmParser.INSTRUCTIONarithmetic - 32)) | (1 << (z80asmParser.INSTRUCTIONincdec - 32)) | (1 << (z80asmParser.INSTRUCTIONcpl - 32)) | (1 << (z80asmParser.INSTRUCTIONrotate - 32)) | (1 << (z80asmParser.INSTRUCTIONrotatedec - 32)) | (1 << (z80asmParser.INSTRUCTIONbit - 32)) | (1 << (z80asmParser.INSTRUCTIONjump - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprel - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprelnz - 32)) | (1 << (z80asmParser.INSTRUCTIONcall - 32)) | (1 << (z80asmParser.INSTRUCTIONret - 32)) | (1 << (z80asmParser.INSTRUCTIONrst - 32)) | (1 << (z80asmParser.INSTRUCTIONim - 32)) | (1 << (z80asmParser.INSTRUCTIONin - 32)) | (1 << (z80asmParser.INSTRUCTIONout - 32)))) !== 0) || _la === z80asmParser.SYMBOL || _la === z80asmParser.COMMENT) {
					{
					this.state = 153;
					this.line();
					}
				}

				this.state = 156;
				this.match(z80asmParser.EOL);
				}
				}
				this.state = 159;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			} while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__2) | (1 << z80asmParser.T__4) | (1 << z80asmParser.DIRECTIVEvoid) | (1 << z80asmParser.DIRECTIVEparam16) | (1 << z80asmParser.DIRECTIVEparam32) | (1 << z80asmParser.DIRECTIVEsymbol) | (1 << z80asmParser.DIRECTIVEsymbollist) | (1 << z80asmParser.DIRECTIVEassign) | (1 << z80asmParser.DIRECTIVEdefs) | (1 << z80asmParser.DIRECTIVEdefm) | (1 << z80asmParser.DIRECTIVEblock) | (1 << z80asmParser.DIRECTIVEif) | (1 << z80asmParser.DIRECTIVEifdef) | (1 << z80asmParser.DIRECTIVEelse) | (1 << z80asmParser.DIRECTIVEendif) | (1 << z80asmParser.INSTRUCTIONvoid) | (1 << z80asmParser.INSTRUCTIONld) | (1 << z80asmParser.INSTRUCTIONstack) | (1 << z80asmParser.INSTRUCTIONexchange) | (1 << z80asmParser.INSTRUCTIONexxchange) | (1 << z80asmParser.INSTRUCTIONarithmetic16))) !== 0) || ((((_la - 32)) & ~0x1F) === 0 && ((1 << (_la - 32)) & ((1 << (z80asmParser.INSTRUCTIONarithmetic - 32)) | (1 << (z80asmParser.INSTRUCTIONincdec - 32)) | (1 << (z80asmParser.INSTRUCTIONcpl - 32)) | (1 << (z80asmParser.INSTRUCTIONrotate - 32)) | (1 << (z80asmParser.INSTRUCTIONrotatedec - 32)) | (1 << (z80asmParser.INSTRUCTIONbit - 32)) | (1 << (z80asmParser.INSTRUCTIONjump - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprel - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprelnz - 32)) | (1 << (z80asmParser.INSTRUCTIONcall - 32)) | (1 << (z80asmParser.INSTRUCTIONret - 32)) | (1 << (z80asmParser.INSTRUCTIONrst - 32)) | (1 << (z80asmParser.INSTRUCTIONim - 32)) | (1 << (z80asmParser.INSTRUCTIONin - 32)) | (1 << (z80asmParser.INSTRUCTIONout - 32)))) !== 0) || ((((_la - 66)) & ~0x1F) === 0 && ((1 << (_la - 66)) & ((1 << (z80asmParser.SYMBOL - 66)) | (1 << (z80asmParser.COMMENT - 66)) | (1 << (z80asmParser.EOL - 66)))) !== 0));
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public line(): LineContext {
		let _localctx: LineContext = new LineContext(this._ctx, this.state);
		this.enterRule(_localctx, 4, z80asmParser.RULE_line);
		let _la: number;
		try {
			this.state = 178;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 7, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 161;
				this.directive();
				this.state = 163;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 162;
					this.comment();
					}
				}

				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 165;
				this.comment();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 166;
				this.label();
				this.state = 168;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 167;
					this.comment();
					}
				}

				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 171;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.T__2 || _la === z80asmParser.SYMBOL) {
					{
					this.state = 170;
					this.label();
					}
				}

				this.state = 173;
				this.instruction();
				this.state = 175;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 174;
					this.comment();
					}
				}

				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 177;
				this.blockcomment();
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive(): DirectiveContext {
		let _localctx: DirectiveContext = new DirectiveContext(this._ctx, this.state);
		this.enterRule(_localctx, 6, z80asmParser.RULE_directive);
		try {
			this.state = 193;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.DIRECTIVEvoid:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 180;
				this.directive_void();
				}
				break;
			case z80asmParser.DIRECTIVEparam16:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 181;
				this.directive_param16();
				}
				break;
			case z80asmParser.DIRECTIVEparam32:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 182;
				this.directive_param32();
				}
				break;
			case z80asmParser.DIRECTIVEblock:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 183;
				this.directive_block();
				}
				break;
			case z80asmParser.DIRECTIVEsymbol:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 184;
				this.directive_symbol();
				}
				break;
			case z80asmParser.DIRECTIVEsymbollist:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 185;
				this.directive_symbollist();
				}
				break;
			case z80asmParser.DIRECTIVEassign:
				this.enterOuterAlt(_localctx, 7);
				{
				this.state = 186;
				this.directive_assign();
				}
				break;
			case z80asmParser.DIRECTIVEdefs:
				this.enterOuterAlt(_localctx, 8);
				{
				this.state = 187;
				this.directive_defs();
				}
				break;
			case z80asmParser.DIRECTIVEdefm:
				this.enterOuterAlt(_localctx, 9);
				{
				this.state = 188;
				this.directive_defm();
				}
				break;
			case z80asmParser.DIRECTIVEif:
				this.enterOuterAlt(_localctx, 10);
				{
				this.state = 189;
				this.directive_if();
				}
				break;
			case z80asmParser.DIRECTIVEifdef:
				this.enterOuterAlt(_localctx, 11);
				{
				this.state = 190;
				this.directive_ifdef();
				}
				break;
			case z80asmParser.DIRECTIVEelse:
				this.enterOuterAlt(_localctx, 12);
				{
				this.state = 191;
				this.directive_elseblock();
				}
				break;
			case z80asmParser.DIRECTIVEendif:
				this.enterOuterAlt(_localctx, 13);
				{
				this.state = 192;
				this.directive_endif();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_void(): Directive_voidContext {
		let _localctx: Directive_voidContext = new Directive_voidContext(this._ctx, this.state);
		this.enterRule(_localctx, 8, z80asmParser.RULE_directive_void);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 195;
			this.match(z80asmParser.DIRECTIVEvoid);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_param16(): Directive_param16Context {
		let _localctx: Directive_param16Context = new Directive_param16Context(this._ctx, this.state);
		this.enterRule(_localctx, 10, z80asmParser.RULE_directive_param16);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 197;
			this.match(z80asmParser.DIRECTIVEparam16);
			this.state = 198;
			this.expression16();
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_param32(): Directive_param32Context {
		let _localctx: Directive_param32Context = new Directive_param32Context(this._ctx, this.state);
		this.enterRule(_localctx, 12, z80asmParser.RULE_directive_param32);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 200;
			this.match(z80asmParser.DIRECTIVEparam32);
			this.state = 201;
			this.expression32();
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_symbol(): Directive_symbolContext {
		let _localctx: Directive_symbolContext = new Directive_symbolContext(this._ctx, this.state);
		this.enterRule(_localctx, 14, z80asmParser.RULE_directive_symbol);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 203;
			this.match(z80asmParser.DIRECTIVEsymbol);
			this.state = 204;
			this.symbol();
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_symbollist(): Directive_symbollistContext {
		let _localctx: Directive_symbollistContext = new Directive_symbollistContext(this._ctx, this.state);
		this.enterRule(_localctx, 16, z80asmParser.RULE_directive_symbollist);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 206;
			this.match(z80asmParser.DIRECTIVEsymbollist);
			this.state = 207;
			this.symbol();
			this.state = 212;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 9, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 208;
					this.match(z80asmParser.COMMA);
					this.state = 209;
					this.symbol();
					}
					}
				}
				this.state = 214;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 9, this._ctx);
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_assign(): Directive_assignContext {
		let _localctx: Directive_assignContext = new Directive_assignContext(this._ctx, this.state);
		this.enterRule(_localctx, 18, z80asmParser.RULE_directive_assign);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 215;
			this.match(z80asmParser.DIRECTIVEassign);
			this.state = 216;
			this.symbol();
			this.state = 217;
			this.match(z80asmParser.T__0);
			this.state = 218;
			this.expression(0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_block(): Directive_blockContext {
		let _localctx: Directive_blockContext = new Directive_blockContext(this._ctx, this.state);
		this.enterRule(_localctx, 20, z80asmParser.RULE_directive_block);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 220;
			this.match(z80asmParser.DIRECTIVEblock);
			this.state = 221;
			this.expression(0);
			this.state = 226;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 10, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 222;
					this.match(z80asmParser.COMMA);
					this.state = 223;
					this.expression(0);
					}
					}
				}
				this.state = 228;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 10, this._ctx);
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_defs(): Directive_defsContext {
		let _localctx: Directive_defsContext = new Directive_defsContext(this._ctx, this.state);
		this.enterRule(_localctx, 22, z80asmParser.RULE_directive_defs);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 229;
			this.match(z80asmParser.DIRECTIVEdefs);
			this.state = 230;
			this.expression(0);
			this.state = 233;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.COMMA) {
				{
				this.state = 231;
				this.match(z80asmParser.COMMA);
				this.state = 232;
				this.expression(0);
				}
			}

			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_defm(): Directive_defmContext {
		let _localctx: Directive_defmContext = new Directive_defmContext(this._ctx, this.state);
		this.enterRule(_localctx, 24, z80asmParser.RULE_directive_defm);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 235;
			this.match(z80asmParser.DIRECTIVEdefm);
			this.state = 236;
			this.defmparam();
			this.state = 241;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 12, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 237;
					this.match(z80asmParser.COMMA);
					this.state = 238;
					this.defmparam();
					}
					}
				}
				this.state = 243;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 12, this._ctx);
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public defmparam(): DefmparamContext {
		let _localctx: DefmparamContext = new DefmparamContext(this._ctx, this.state);
		this.enterRule(_localctx, 26, z80asmParser.RULE_defmparam);
		try {
			this.state = 247;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.STRING:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 244;
				this.string();
				}
				break;
			case z80asmParser.CHARACTER:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 245;
				this.character();
				}
				break;
			case z80asmParser.SYMBOL:
			case z80asmParser.PLUS:
			case z80asmParser.MINUS:
			case z80asmParser.INTERRUPTMODE:
			case z80asmParser.BIT8:
			case z80asmParser.INSTRUCTIONrstvectorhex:
			case z80asmParser.INSTRUCTIONrstvector:
			case z80asmParser.NUMBERbin:
			case z80asmParser.NUMBERoct:
			case z80asmParser.NUMBERdec:
			case z80asmParser.NUMBERhex:
			case z80asmParser.PARopen:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 246;
				this.expression8();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_if(): Directive_ifContext {
		let _localctx: Directive_ifContext = new Directive_ifContext(this._ctx, this.state);
		this.enterRule(_localctx, 28, z80asmParser.RULE_directive_if);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 249;
			this.match(z80asmParser.DIRECTIVEif);
			this.state = 250;
			this.expression(0);
			this.state = 252;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 14, this._ctx) ) {
			case 1:
				{
				this.state = 251;
				this.comment();
				}
				break;
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_ifdef(): Directive_ifdefContext {
		let _localctx: Directive_ifdefContext = new Directive_ifdefContext(this._ctx, this.state);
		this.enterRule(_localctx, 30, z80asmParser.RULE_directive_ifdef);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 254;
			this.match(z80asmParser.DIRECTIVEifdef);
			this.state = 255;
			this.symbol();
			this.state = 257;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 15, this._ctx) ) {
			case 1:
				{
				this.state = 256;
				this.comment();
				}
				break;
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_ifblock(): Directive_ifblockContext {
		let _localctx: Directive_ifblockContext = new Directive_ifblockContext(this._ctx, this.state);
		this.enterRule(_localctx, 32, z80asmParser.RULE_directive_ifblock);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 260;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.DIRECTIVEelse) {
				{
				this.state = 259;
				this.directive_elseblock();
				}
			}

			this.state = 262;
			this.directive_endif();
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_elseblock(): Directive_elseblockContext {
		let _localctx: Directive_elseblockContext = new Directive_elseblockContext(this._ctx, this.state);
		this.enterRule(_localctx, 34, z80asmParser.RULE_directive_elseblock);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 264;
			this.match(z80asmParser.DIRECTIVEelse);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_endif(): Directive_endifContext {
		let _localctx: Directive_endifContext = new Directive_endifContext(this._ctx, this.state);
		this.enterRule(_localctx, 36, z80asmParser.RULE_directive_endif);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 266;
			this.match(z80asmParser.DIRECTIVEendif);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public directive_phase(): Directive_phaseContext {
		let _localctx: Directive_phaseContext = new Directive_phaseContext(this._ctx, this.state);
		this.enterRule(_localctx, 38, z80asmParser.RULE_directive_phase);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 268;
			this.match(z80asmParser.DIRECTIVEphase);
			this.state = 269;
			this.expression16();
			this.state = 271;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 17, this._ctx) ) {
			case 1:
				{
				this.state = 270;
				this.comment();
				}
				break;
			}
			this.state = 273;
			this.asm();
			this.state = 274;
			this.match(z80asmParser.DIRECTIVEunphase);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction(): InstructionContext {
		let _localctx: InstructionContext = new InstructionContext(this._ctx, this.state);
		this.enterRule(_localctx, 40, z80asmParser.RULE_instruction);
		try {
			this.state = 294;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 18, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 276;
				this.instruction_void();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 277;
				this.instruction_ld8();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 278;
				this.instruction_ld16();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 279;
				this.instruction_stack();
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 280;
				this.instruction_exchange();
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 281;
				this.instruction_arithmetic8();
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				this.state = 282;
				this.instruction_incdec8();
				}
				break;

			case 8:
				this.enterOuterAlt(_localctx, 8);
				{
				this.state = 283;
				this.instruction_cpl();
				}
				break;

			case 9:
				this.enterOuterAlt(_localctx, 9);
				{
				this.state = 284;
				this.instruction_arithemic16();
				}
				break;

			case 10:
				this.enterOuterAlt(_localctx, 10);
				{
				this.state = 285;
				this.instruction_incdec16();
				}
				break;

			case 11:
				this.enterOuterAlt(_localctx, 11);
				{
				this.state = 286;
				this.instruction_rotate();
				}
				break;

			case 12:
				this.enterOuterAlt(_localctx, 12);
				{
				this.state = 287;
				this.instruction_rotatedec();
				}
				break;

			case 13:
				this.enterOuterAlt(_localctx, 13);
				{
				this.state = 288;
				this.instruction_bit();
				}
				break;

			case 14:
				this.enterOuterAlt(_localctx, 14);
				{
				this.state = 289;
				this.instruction_jump();
				}
				break;

			case 15:
				this.enterOuterAlt(_localctx, 15);
				{
				this.state = 290;
				this.instruction_call();
				}
				break;

			case 16:
				this.enterOuterAlt(_localctx, 16);
				{
				this.state = 291;
				this.instruction_rst();
				}
				break;

			case 17:
				this.enterOuterAlt(_localctx, 17);
				{
				this.state = 292;
				this.instruction_im();
				}
				break;

			case 18:
				this.enterOuterAlt(_localctx, 18);
				{
				this.state = 293;
				this.instruction_io();
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_void(): Instruction_voidContext {
		let _localctx: Instruction_voidContext = new Instruction_voidContext(this._ctx, this.state);
		this.enterRule(_localctx, 42, z80asmParser.RULE_instruction_void);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 296;
			this.match(z80asmParser.INSTRUCTIONvoid);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_ld8(): Instruction_ld8Context {
		let _localctx: Instruction_ld8Context = new Instruction_ld8Context(this._ctx, this.state);
		this.enterRule(_localctx, 44, z80asmParser.RULE_instruction_ld8);
		try {
			this.state = 396;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 23, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				{
				this.state = 298;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 311;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 19, this._ctx) ) {
				case 1:
					{
					{
					this.state = 299;
					this.registers8();
					this.state = 300;
					this.match(z80asmParser.COMMA);
					this.state = 301;
					this.registers8();
					}
					}
					break;

				case 2:
					{
					{
					this.state = 303;
					this.registers8x();
					this.state = 304;
					this.match(z80asmParser.COMMA);
					this.state = 305;
					this.registers8x();
					}
					}
					break;

				case 3:
					{
					{
					this.state = 307;
					this.registers8y();
					this.state = 308;
					this.match(z80asmParser.COMMA);
					this.state = 309;
					this.registers8y();
					}
					}
					break;
				}
				}
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				{
				this.state = 313;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 317;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG8a:
				case z80asmParser.REG8b:
				case z80asmParser.REG8c:
				case z80asmParser.REG8d:
				case z80asmParser.REG8e:
				case z80asmParser.REG8h:
				case z80asmParser.REG8l:
					{
					this.state = 314;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 315;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 316;
					this.match(z80asmParser.REG8y);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 319;
				this.match(z80asmParser.COMMA);
				this.state = 320;
				this.expression8();
				}
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				{
				this.state = 321;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 322;
				this.registers8();
				this.state = 323;
				this.match(z80asmParser.COMMA);
				this.state = 324;
				this.match(z80asmParser.PARopen);
				this.state = 325;
				this.match(z80asmParser.REG16hl);
				this.state = 326;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				{
				this.state = 328;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 329;
				this.registers8();
				this.state = 330;
				this.match(z80asmParser.COMMA);
				this.state = 331;
				this.match(z80asmParser.PARopen);
				this.state = 332;
				this.register16_ex();
				this.state = 333;
				this.match(z80asmParser.PLUS);
				this.state = 334;
				this.offset_ex();
				this.state = 335;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				{
				this.state = 337;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 338;
				this.match(z80asmParser.PARopen);
				this.state = 339;
				this.match(z80asmParser.REG16hl);
				this.state = 340;
				this.match(z80asmParser.PARclose);
				this.state = 341;
				this.match(z80asmParser.COMMA);
				this.state = 342;
				this.registers8();
				}
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				{
				this.state = 343;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 344;
				this.match(z80asmParser.PARopen);
				this.state = 345;
				this.register16_ex();
				this.state = 346;
				this.match(z80asmParser.PLUS);
				this.state = 347;
				this.offset_ex();
				this.state = 348;
				this.match(z80asmParser.PARclose);
				this.state = 349;
				this.match(z80asmParser.COMMA);
				this.state = 350;
				this.registers8();
				}
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				{
				this.state = 352;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 353;
				this.match(z80asmParser.PARopen);
				this.state = 354;
				this.match(z80asmParser.REG16hl);
				this.state = 355;
				this.match(z80asmParser.PARclose);
				this.state = 356;
				this.match(z80asmParser.COMMA);
				this.state = 357;
				this.expression8();
				}
				}
				break;

			case 8:
				this.enterOuterAlt(_localctx, 8);
				{
				{
				this.state = 358;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 359;
				this.match(z80asmParser.PARopen);
				this.state = 360;
				this.register16_ex();
				this.state = 361;
				this.match(z80asmParser.PLUS);
				this.state = 362;
				this.offset_ex();
				this.state = 363;
				this.match(z80asmParser.PARclose);
				this.state = 364;
				this.match(z80asmParser.COMMA);
				this.state = 365;
				this.expression8();
				}
				}
				break;

			case 9:
				this.enterOuterAlt(_localctx, 9);
				{
				{
				this.state = 367;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 368;
				this.match(z80asmParser.REG8a);
				this.state = 369;
				this.match(z80asmParser.COMMA);
				this.state = 370;
				this.match(z80asmParser.PARopen);
				this.state = 374;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
					{
					this.state = 371;
					this.match(z80asmParser.REG16bc);
					}
					break;
				case z80asmParser.REG16de:
					{
					this.state = 372;
					this.match(z80asmParser.REG16de);
					}
					break;
				case z80asmParser.SYMBOL:
				case z80asmParser.PLUS:
				case z80asmParser.MINUS:
				case z80asmParser.INTERRUPTMODE:
				case z80asmParser.BIT8:
				case z80asmParser.INSTRUCTIONrstvectorhex:
				case z80asmParser.INSTRUCTIONrstvector:
				case z80asmParser.NUMBERbin:
				case z80asmParser.NUMBERoct:
				case z80asmParser.NUMBERdec:
				case z80asmParser.NUMBERhex:
				case z80asmParser.PARopen:
					{
					this.state = 373;
					this.expression(0);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 376;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 10:
				this.enterOuterAlt(_localctx, 10);
				{
				{
				this.state = 377;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 378;
				this.match(z80asmParser.REG8a);
				this.state = 379;
				this.match(z80asmParser.COMMA);
				this.state = 380;
				this.match(z80asmParser.REG8sys);
				}
				}
				break;

			case 11:
				this.enterOuterAlt(_localctx, 11);
				{
				{
				this.state = 381;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 382;
				this.match(z80asmParser.REG8sys);
				this.state = 383;
				this.match(z80asmParser.COMMA);
				this.state = 384;
				this.match(z80asmParser.REG8a);
				}
				}
				break;

			case 12:
				this.enterOuterAlt(_localctx, 12);
				{
				{
				this.state = 385;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 386;
				this.match(z80asmParser.PARopen);
				this.state = 391;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
					{
					this.state = 387;
					this.match(z80asmParser.REG16bc);
					}
					break;
				case z80asmParser.REG16de:
					{
					this.state = 388;
					this.match(z80asmParser.REG16de);
					}
					break;
				case z80asmParser.REG8sys:
					{
					this.state = 389;
					this.match(z80asmParser.REG8sys);
					}
					break;
				case z80asmParser.SYMBOL:
				case z80asmParser.PLUS:
				case z80asmParser.MINUS:
				case z80asmParser.INTERRUPTMODE:
				case z80asmParser.BIT8:
				case z80asmParser.INSTRUCTIONrstvectorhex:
				case z80asmParser.INSTRUCTIONrstvector:
				case z80asmParser.NUMBERbin:
				case z80asmParser.NUMBERoct:
				case z80asmParser.NUMBERdec:
				case z80asmParser.NUMBERhex:
				case z80asmParser.PARopen:
					{
					this.state = 390;
					this.expression16();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 393;
				this.match(z80asmParser.PARclose);
				this.state = 394;
				this.match(z80asmParser.COMMA);
				this.state = 395;
				this.match(z80asmParser.REG8a);
				}
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_ld16(): Instruction_ld16Context {
		let _localctx: Instruction_ld16Context = new Instruction_ld16Context(this._ctx, this.state);
		this.enterRule(_localctx, 46, z80asmParser.RULE_instruction_ld16);
		try {
			this.state = 429;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 27, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 398;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 401;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
				case z80asmParser.REG16de:
				case z80asmParser.REG16hl:
				case z80asmParser.REG16sp:
					{
					this.state = 399;
					this.register16_grpsphl();
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 400;
					this.register16_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 403;
				this.match(z80asmParser.COMMA);
				this.state = 404;
				this.expression16();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 406;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 407;
				this.register16_ex();
				this.state = 408;
				this.match(z80asmParser.COMMA);
				this.state = 409;
				this.match(z80asmParser.PARopen);
				this.state = 410;
				this.expression16();
				this.state = 411;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 413;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 414;
				this.match(z80asmParser.PARopen);
				this.state = 415;
				this.expression16();
				this.state = 416;
				this.match(z80asmParser.PARclose);
				this.state = 417;
				this.match(z80asmParser.COMMA);
				this.state = 420;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
				case z80asmParser.REG16de:
				case z80asmParser.REG16hl:
				case z80asmParser.REG16sp:
					{
					this.state = 418;
					this.register16_grpsphl();
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 419;
					this.register16_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 422;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 423;
				this.match(z80asmParser.REG16sp);
				this.state = 424;
				this.match(z80asmParser.COMMA);
				this.state = 427;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 425;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 426;
					this.register16_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_stack(): Instruction_stackContext {
		let _localctx: Instruction_stackContext = new Instruction_stackContext(this._ctx, this.state);
		this.enterRule(_localctx, 48, z80asmParser.RULE_instruction_stack);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 431;
			this.match(z80asmParser.INSTRUCTIONstack);
			this.state = 434;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16af:
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16hl:
				{
				this.state = 432;
				this.register16_grpaf();
				}
				break;
			case z80asmParser.REG16ix:
			case z80asmParser.REG16iy:
				{
				this.state = 433;
				this.register16_ex();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_exchange(): Instruction_exchangeContext {
		let _localctx: Instruction_exchangeContext = new Instruction_exchangeContext(this._ctx, this.state);
		this.enterRule(_localctx, 50, z80asmParser.RULE_instruction_exchange);
		let _la: number;
		try {
			this.state = 457;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 31, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 436;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 437;
				this.match(z80asmParser.REG16de);
				this.state = 438;
				this.match(z80asmParser.COMMA);
				this.state = 439;
				this.match(z80asmParser.REG16hl);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 440;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 441;
				this.match(z80asmParser.REG16af);
				this.state = 442;
				this.match(z80asmParser.COMMA);
				this.state = 443;
				this.match(z80asmParser.REG16af);
				this.state = 445;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.T__1) {
					{
					this.state = 444;
					this.match(z80asmParser.T__1);
					}
				}

				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 447;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 448;
				this.match(z80asmParser.PARopen);
				this.state = 449;
				this.match(z80asmParser.REG16sp);
				this.state = 450;
				this.match(z80asmParser.PARclose);
				this.state = 451;
				this.match(z80asmParser.COMMA);
				this.state = 454;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 452;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 453;
					this.register16_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 456;
				this.match(z80asmParser.INSTRUCTIONexxchange);
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_arithmetic8(): Instruction_arithmetic8Context {
		let _localctx: Instruction_arithmetic8Context = new Instruction_arithmetic8Context(this._ctx, this.state);
		this.enterRule(_localctx, 52, z80asmParser.RULE_instruction_arithmetic8);
		let _la: number;
		try {
			this.state = 484;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 36, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 459;
				_la = this._input.LA(1);
				if (!(_la === z80asmParser.INSTRUCTIONarithmetic16 || _la === z80asmParser.INSTRUCTIONarithmetic)) {
				this._errHandler.recoverInline(this);
				} else {
					if (this._input.LA(1) === Token.EOF) {
						this.matchedEOF = true;
					}

					this._errHandler.reportMatch(this);
					this.consume();
				}
				this.state = 462;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 32, this._ctx) ) {
				case 1:
					{
					this.state = 460;
					this.match(z80asmParser.REG8a);
					this.state = 461;
					this.match(z80asmParser.COMMA);
					}
					break;
				}
				this.state = 468;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG8a:
				case z80asmParser.REG8b:
				case z80asmParser.REG8c:
				case z80asmParser.REG8d:
				case z80asmParser.REG8e:
				case z80asmParser.REG8h:
				case z80asmParser.REG8l:
					{
					this.state = 464;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 465;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 466;
					this.match(z80asmParser.REG8y);
					}
					break;
				case z80asmParser.SYMBOL:
				case z80asmParser.PLUS:
				case z80asmParser.MINUS:
				case z80asmParser.INTERRUPTMODE:
				case z80asmParser.BIT8:
				case z80asmParser.INSTRUCTIONrstvectorhex:
				case z80asmParser.INSTRUCTIONrstvector:
				case z80asmParser.NUMBERbin:
				case z80asmParser.NUMBERoct:
				case z80asmParser.NUMBERdec:
				case z80asmParser.NUMBERhex:
				case z80asmParser.PARopen:
					{
					this.state = 467;
					this.expression8();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 470;
				_la = this._input.LA(1);
				if (!(_la === z80asmParser.INSTRUCTIONarithmetic16 || _la === z80asmParser.INSTRUCTIONarithmetic)) {
				this._errHandler.recoverInline(this);
				} else {
					if (this._input.LA(1) === Token.EOF) {
						this.matchedEOF = true;
					}

					this._errHandler.reportMatch(this);
					this.consume();
				}
				this.state = 473;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.REG8a) {
					{
					this.state = 471;
					this.match(z80asmParser.REG8a);
					this.state = 472;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 475;
				this.match(z80asmParser.PARopen);
				this.state = 481;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 476;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 477;
					this.register16_ex();
					this.state = 478;
					this.match(z80asmParser.PLUS);
					this.state = 479;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 483;
				this.match(z80asmParser.PARclose);
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_incdec8(): Instruction_incdec8Context {
		let _localctx: Instruction_incdec8Context = new Instruction_incdec8Context(this._ctx, this.state);
		this.enterRule(_localctx, 54, z80asmParser.RULE_instruction_incdec8);
		try {
			this.state = 502;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 39, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 486;
				this.match(z80asmParser.INSTRUCTIONincdec);
				this.state = 490;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG8a:
				case z80asmParser.REG8b:
				case z80asmParser.REG8c:
				case z80asmParser.REG8d:
				case z80asmParser.REG8e:
				case z80asmParser.REG8h:
				case z80asmParser.REG8l:
					{
					this.state = 487;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 488;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 489;
					this.match(z80asmParser.REG8y);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 492;
				this.match(z80asmParser.INSTRUCTIONincdec);
				this.state = 493;
				this.match(z80asmParser.PARopen);
				this.state = 499;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 494;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 495;
					this.register16_ex();
					this.state = 496;
					this.match(z80asmParser.PLUS);
					this.state = 497;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 501;
				this.match(z80asmParser.PARclose);
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_cpl(): Instruction_cplContext {
		let _localctx: Instruction_cplContext = new Instruction_cplContext(this._ctx, this.state);
		this.enterRule(_localctx, 56, z80asmParser.RULE_instruction_cpl);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 504;
			this.match(z80asmParser.INSTRUCTIONcpl);
			this.state = 506;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.REG8a) {
				{
				this.state = 505;
				this.match(z80asmParser.REG8a);
				}
			}

			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_arithemic16(): Instruction_arithemic16Context {
		let _localctx: Instruction_arithemic16Context = new Instruction_arithemic16Context(this._ctx, this.state);
		this.enterRule(_localctx, 58, z80asmParser.RULE_instruction_arithemic16);
		try {
			this.state = 520;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 41, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 508;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 509;
				this.match(z80asmParser.REG16hl);
				this.state = 510;
				this.match(z80asmParser.COMMA);
				this.state = 511;
				this.register16_grpsphl();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 512;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 513;
				this.match(z80asmParser.REG16ix);
				this.state = 514;
				this.match(z80asmParser.COMMA);
				this.state = 515;
				this.register16_grpspix();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 516;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 517;
				this.match(z80asmParser.REG16iy);
				this.state = 518;
				this.match(z80asmParser.COMMA);
				this.state = 519;
				this.register16_grpspiy();
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_incdec16(): Instruction_incdec16Context {
		let _localctx: Instruction_incdec16Context = new Instruction_incdec16Context(this._ctx, this.state);
		this.enterRule(_localctx, 60, z80asmParser.RULE_instruction_incdec16);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 522;
			this.match(z80asmParser.INSTRUCTIONincdec);
			this.state = 525;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16hl:
			case z80asmParser.REG16sp:
				{
				this.state = 523;
				this.register16_grpsphl();
				}
				break;
			case z80asmParser.REG16ix:
			case z80asmParser.REG16iy:
				{
				this.state = 524;
				this.register16_ex();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_rotate(): Instruction_rotateContext {
		let _localctx: Instruction_rotateContext = new Instruction_rotateContext(this._ctx, this.state);
		this.enterRule(_localctx, 62, z80asmParser.RULE_instruction_rotate);
		try {
			this.state = 548;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 44, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 527;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 528;
				this.registers8();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 529;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 530;
				this.match(z80asmParser.PARopen);
				this.state = 536;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 531;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 532;
					this.register16_ex();
					this.state = 533;
					this.match(z80asmParser.PLUS);
					this.state = 534;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 538;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 539;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 540;
				this.match(z80asmParser.PARopen);
				this.state = 541;
				this.register16_ex();
				this.state = 542;
				this.match(z80asmParser.PLUS);
				this.state = 543;
				this.offset_ex();
				this.state = 544;
				this.match(z80asmParser.PARclose);
				this.state = 545;
				this.match(z80asmParser.COMMA);
				this.state = 546;
				this.registers8();
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_rotatedec(): Instruction_rotatedecContext {
		let _localctx: Instruction_rotatedecContext = new Instruction_rotatedecContext(this._ctx, this.state);
		this.enterRule(_localctx, 64, z80asmParser.RULE_instruction_rotatedec);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 550;
			this.match(z80asmParser.INSTRUCTIONrotatedec);
			this.state = 552;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.REG8a) {
				{
				this.state = 551;
				this.match(z80asmParser.REG8a);
				}
			}

			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_bit(): Instruction_bitContext {
		let _localctx: Instruction_bitContext = new Instruction_bitContext(this._ctx, this.state);
		this.enterRule(_localctx, 66, z80asmParser.RULE_instruction_bit);
		try {
			this.state = 583;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 47, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 554;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 555;
				this.bitindex();
				this.state = 556;
				this.match(z80asmParser.COMMA);
				this.state = 557;
				this.registers8();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 559;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 560;
				this.bitindex();
				this.state = 561;
				this.match(z80asmParser.COMMA);
				this.state = 562;
				this.match(z80asmParser.PARopen);
				this.state = 568;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 563;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 564;
					this.register16_ex();
					this.state = 565;
					this.match(z80asmParser.PLUS);
					this.state = 566;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 570;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 572;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 573;
				this.bitindex();
				this.state = 574;
				this.match(z80asmParser.COMMA);
				this.state = 575;
				this.match(z80asmParser.PARopen);
				this.state = 576;
				this.register16_ex();
				this.state = 577;
				this.match(z80asmParser.PLUS);
				this.state = 578;
				this.offset_ex();
				this.state = 579;
				this.match(z80asmParser.PARclose);
				this.state = 580;
				this.match(z80asmParser.COMMA);
				this.state = 581;
				this.registers8();
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public bitindex(): BitindexContext {
		let _localctx: BitindexContext = new BitindexContext(this._ctx, this.state);
		this.enterRule(_localctx, 68, z80asmParser.RULE_bitindex);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 585;
			_la = this._input.LA(1);
			if (!(_la === z80asmParser.INTERRUPTMODE || _la === z80asmParser.BIT8)) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_jump(): Instruction_jumpContext {
		let _localctx: Instruction_jumpContext = new Instruction_jumpContext(this._ctx, this.state);
		this.enterRule(_localctx, 70, z80asmParser.RULE_instruction_jump);
		let _la: number;
		try {
			this.state = 607;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 50, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 587;
				this.match(z80asmParser.INSTRUCTIONjump);
				this.state = 591;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 588;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 589;
					this.register16_ex();
					}
					break;
				case z80asmParser.SYMBOL:
				case z80asmParser.PLUS:
				case z80asmParser.MINUS:
				case z80asmParser.INTERRUPTMODE:
				case z80asmParser.BIT8:
				case z80asmParser.INSTRUCTIONrstvectorhex:
				case z80asmParser.INSTRUCTIONrstvector:
				case z80asmParser.NUMBERbin:
				case z80asmParser.NUMBERoct:
				case z80asmParser.NUMBERdec:
				case z80asmParser.NUMBERhex:
				case z80asmParser.PARopen:
					{
					this.state = 590;
					this.expression16();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 593;
				this.match(z80asmParser.INSTRUCTIONjump);
				this.state = 594;
				this.instruction_conditionFlagsAll();
				this.state = 595;
				this.match(z80asmParser.COMMA);
				this.state = 596;
				this.expression16();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 598;
				this.match(z80asmParser.INSTRUCTIONjumprel);
				this.state = 602;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.REG8c || _la === z80asmParser.CONDITIONflags) {
					{
					this.state = 599;
					this.instruction_conditionFlags();
					this.state = 600;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 604;
				this.offset_rel();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 605;
				this.match(z80asmParser.INSTRUCTIONjumprelnz);
				this.state = 606;
				this.offset_rel();
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_call(): Instruction_callContext {
		let _localctx: Instruction_callContext = new Instruction_callContext(this._ctx, this.state);
		this.enterRule(_localctx, 72, z80asmParser.RULE_instruction_call);
		let _la: number;
		try {
			this.state = 620;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.INSTRUCTIONcall:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 609;
				this.match(z80asmParser.INSTRUCTIONcall);
				this.state = 613;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (((((_la - 52)) & ~0x1F) === 0 && ((1 << (_la - 52)) & ((1 << (z80asmParser.REG8c - 52)) | (1 << (z80asmParser.CONDITIONflagsex - 52)) | (1 << (z80asmParser.CONDITIONflags - 52)))) !== 0)) {
					{
					this.state = 610;
					this.instruction_conditionFlagsAll();
					this.state = 611;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 615;
				this.expression16();
				}
				break;
			case z80asmParser.INSTRUCTIONret:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 616;
				this.match(z80asmParser.INSTRUCTIONret);
				this.state = 618;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (((((_la - 52)) & ~0x1F) === 0 && ((1 << (_la - 52)) & ((1 << (z80asmParser.REG8c - 52)) | (1 << (z80asmParser.CONDITIONflagsex - 52)) | (1 << (z80asmParser.CONDITIONflags - 52)))) !== 0)) {
					{
					this.state = 617;
					this.instruction_conditionFlagsAll();
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_conditionFlagsAll(): Instruction_conditionFlagsAllContext {
		let _localctx: Instruction_conditionFlagsAllContext = new Instruction_conditionFlagsAllContext(this._ctx, this.state);
		this.enterRule(_localctx, 74, z80asmParser.RULE_instruction_conditionFlagsAll);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 622;
			_la = this._input.LA(1);
			if (!(((((_la - 52)) & ~0x1F) === 0 && ((1 << (_la - 52)) & ((1 << (z80asmParser.REG8c - 52)) | (1 << (z80asmParser.CONDITIONflagsex - 52)) | (1 << (z80asmParser.CONDITIONflags - 52)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_conditionFlags(): Instruction_conditionFlagsContext {
		let _localctx: Instruction_conditionFlagsContext = new Instruction_conditionFlagsContext(this._ctx, this.state);
		this.enterRule(_localctx, 76, z80asmParser.RULE_instruction_conditionFlags);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 624;
			_la = this._input.LA(1);
			if (!(_la === z80asmParser.REG8c || _la === z80asmParser.CONDITIONflags)) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_rst(): Instruction_rstContext {
		let _localctx: Instruction_rstContext = new Instruction_rstContext(this._ctx, this.state);
		this.enterRule(_localctx, 78, z80asmParser.RULE_instruction_rst);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 626;
			this.match(z80asmParser.INSTRUCTIONrst);
			this.state = 627;
			_la = this._input.LA(1);
			if (!(_la === z80asmParser.INSTRUCTIONrstvectorhex || _la === z80asmParser.INSTRUCTIONrstvector)) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_im(): Instruction_imContext {
		let _localctx: Instruction_imContext = new Instruction_imContext(this._ctx, this.state);
		this.enterRule(_localctx, 80, z80asmParser.RULE_instruction_im);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 629;
			this.match(z80asmParser.INSTRUCTIONim);
			this.state = 630;
			this.match(z80asmParser.INTERRUPTMODE);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public instruction_io(): Instruction_ioContext {
		let _localctx: Instruction_ioContext = new Instruction_ioContext(this._ctx, this.state);
		this.enterRule(_localctx, 82, z80asmParser.RULE_instruction_io);
		let _la: number;
		try {
			this.state = 664;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 56, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 632;
				this.match(z80asmParser.INSTRUCTIONin);
				this.state = 633;
				this.match(z80asmParser.REG8a);
				this.state = 634;
				this.match(z80asmParser.COMMA);
				this.state = 635;
				this.match(z80asmParser.PARopen);
				this.state = 636;
				this.expression8();
				this.state = 637;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 639;
				this.match(z80asmParser.INSTRUCTIONin);
				this.state = 643;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (((((_la - 50)) & ~0x1F) === 0 && ((1 << (_la - 50)) & ((1 << (z80asmParser.REG8a - 50)) | (1 << (z80asmParser.REG8b - 50)) | (1 << (z80asmParser.REG8c - 50)) | (1 << (z80asmParser.REG8d - 50)) | (1 << (z80asmParser.REG8e - 50)) | (1 << (z80asmParser.REG8h - 50)) | (1 << (z80asmParser.REG8l - 50)))) !== 0)) {
					{
					this.state = 640;
					this.registers8();
					this.state = 641;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 645;
				this.match(z80asmParser.PARopen);
				this.state = 646;
				this.match(z80asmParser.REG8c);
				this.state = 647;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 648;
				this.match(z80asmParser.INSTRUCTIONout);
				this.state = 649;
				this.match(z80asmParser.PARopen);
				this.state = 650;
				this.expression8();
				this.state = 651;
				this.match(z80asmParser.PARclose);
				this.state = 652;
				this.match(z80asmParser.COMMA);
				this.state = 653;
				this.match(z80asmParser.REG8a);
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 655;
				this.match(z80asmParser.INSTRUCTIONout);
				this.state = 656;
				this.match(z80asmParser.PARopen);
				this.state = 657;
				this.match(z80asmParser.REG8c);
				this.state = 658;
				this.match(z80asmParser.PARclose);
				this.state = 659;
				this.match(z80asmParser.COMMA);
				this.state = 662;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG8a:
				case z80asmParser.REG8b:
				case z80asmParser.REG8c:
				case z80asmParser.REG8d:
				case z80asmParser.REG8e:
				case z80asmParser.REG8h:
				case z80asmParser.REG8l:
					{
					this.state = 660;
					this.registers8();
					}
					break;
				case z80asmParser.ZERO:
					{
					this.state = 661;
					this.match(z80asmParser.ZERO);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public offset_ex(): Offset_exContext {
		let _localctx: Offset_exContext = new Offset_exContext(this._ctx, this.state);
		this.enterRule(_localctx, 84, z80asmParser.RULE_offset_ex);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 666;
			this.expression(0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public offset_rel(): Offset_relContext {
		let _localctx: Offset_relContext = new Offset_relContext(this._ctx, this.state);
		this.enterRule(_localctx, 86, z80asmParser.RULE_offset_rel);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 668;
			this.expression(0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public registers(): RegistersContext {
		let _localctx: RegistersContext = new RegistersContext(this._ctx, this.state);
		this.enterRule(_localctx, 88, z80asmParser.RULE_registers);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 670;
			_la = this._input.LA(1);
			if (!(((((_la - 47)) & ~0x1F) === 0 && ((1 << (_la - 47)) & ((1 << (z80asmParser.REG8x - 47)) | (1 << (z80asmParser.REG8y - 47)) | (1 << (z80asmParser.REG8sys - 47)) | (1 << (z80asmParser.REG8a - 47)) | (1 << (z80asmParser.REG8b - 47)) | (1 << (z80asmParser.REG8c - 47)) | (1 << (z80asmParser.REG8d - 47)) | (1 << (z80asmParser.REG8e - 47)) | (1 << (z80asmParser.REG8h - 47)) | (1 << (z80asmParser.REG8l - 47)) | (1 << (z80asmParser.REG16af - 47)) | (1 << (z80asmParser.REG16bc - 47)) | (1 << (z80asmParser.REG16de - 47)) | (1 << (z80asmParser.REG16hl - 47)) | (1 << (z80asmParser.REG16sp - 47)) | (1 << (z80asmParser.REG16ix - 47)) | (1 << (z80asmParser.REG16iy - 47)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public registers8(): Registers8Context {
		let _localctx: Registers8Context = new Registers8Context(this._ctx, this.state);
		this.enterRule(_localctx, 90, z80asmParser.RULE_registers8);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 672;
			_la = this._input.LA(1);
			if (!(((((_la - 50)) & ~0x1F) === 0 && ((1 << (_la - 50)) & ((1 << (z80asmParser.REG8a - 50)) | (1 << (z80asmParser.REG8b - 50)) | (1 << (z80asmParser.REG8c - 50)) | (1 << (z80asmParser.REG8d - 50)) | (1 << (z80asmParser.REG8e - 50)) | (1 << (z80asmParser.REG8h - 50)) | (1 << (z80asmParser.REG8l - 50)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public registers8x(): Registers8xContext {
		let _localctx: Registers8xContext = new Registers8xContext(this._ctx, this.state);
		this.enterRule(_localctx, 92, z80asmParser.RULE_registers8x);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 674;
			_la = this._input.LA(1);
			if (!(((((_la - 47)) & ~0x1F) === 0 && ((1 << (_la - 47)) & ((1 << (z80asmParser.REG8x - 47)) | (1 << (z80asmParser.REG8a - 47)) | (1 << (z80asmParser.REG8b - 47)) | (1 << (z80asmParser.REG8c - 47)) | (1 << (z80asmParser.REG8d - 47)) | (1 << (z80asmParser.REG8e - 47)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public registers8y(): Registers8yContext {
		let _localctx: Registers8yContext = new Registers8yContext(this._ctx, this.state);
		this.enterRule(_localctx, 94, z80asmParser.RULE_registers8y);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 676;
			_la = this._input.LA(1);
			if (!(((((_la - 48)) & ~0x1F) === 0 && ((1 << (_la - 48)) & ((1 << (z80asmParser.REG8y - 48)) | (1 << (z80asmParser.REG8a - 48)) | (1 << (z80asmParser.REG8b - 48)) | (1 << (z80asmParser.REG8c - 48)) | (1 << (z80asmParser.REG8d - 48)) | (1 << (z80asmParser.REG8e - 48)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public register16_grpaf(): Register16_grpafContext {
		let _localctx: Register16_grpafContext = new Register16_grpafContext(this._ctx, this.state);
		this.enterRule(_localctx, 96, z80asmParser.RULE_register16_grpaf);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 678;
			_la = this._input.LA(1);
			if (!(((((_la - 57)) & ~0x1F) === 0 && ((1 << (_la - 57)) & ((1 << (z80asmParser.REG16af - 57)) | (1 << (z80asmParser.REG16bc - 57)) | (1 << (z80asmParser.REG16de - 57)) | (1 << (z80asmParser.REG16hl - 57)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public register16_grpsp(): Register16_grpspContext {
		let _localctx: Register16_grpspContext = new Register16_grpspContext(this._ctx, this.state);
		this.enterRule(_localctx, 98, z80asmParser.RULE_register16_grpsp);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 680;
			_la = this._input.LA(1);
			if (!(((((_la - 58)) & ~0x1F) === 0 && ((1 << (_la - 58)) & ((1 << (z80asmParser.REG16bc - 58)) | (1 << (z80asmParser.REG16de - 58)) | (1 << (z80asmParser.REG16sp - 58)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public register16_grpsphl(): Register16_grpsphlContext {
		let _localctx: Register16_grpsphlContext = new Register16_grpsphlContext(this._ctx, this.state);
		this.enterRule(_localctx, 100, z80asmParser.RULE_register16_grpsphl);
		try {
			this.state = 684;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16sp:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 682;
				this.register16_grpsp();
				}
				break;
			case z80asmParser.REG16hl:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 683;
				this.match(z80asmParser.REG16hl);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public register16_grpspix(): Register16_grpspixContext {
		let _localctx: Register16_grpspixContext = new Register16_grpspixContext(this._ctx, this.state);
		this.enterRule(_localctx, 102, z80asmParser.RULE_register16_grpspix);
		try {
			this.state = 688;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16sp:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 686;
				this.register16_grpsp();
				}
				break;
			case z80asmParser.REG16ix:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 687;
				this.match(z80asmParser.REG16ix);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public register16_grpspiy(): Register16_grpspiyContext {
		let _localctx: Register16_grpspiyContext = new Register16_grpspiyContext(this._ctx, this.state);
		this.enterRule(_localctx, 104, z80asmParser.RULE_register16_grpspiy);
		try {
			this.state = 692;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16sp:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 690;
				this.register16_grpsp();
				}
				break;
			case z80asmParser.REG16iy:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 691;
				this.match(z80asmParser.REG16iy);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public register16_ex(): Register16_exContext {
		let _localctx: Register16_exContext = new Register16_exContext(this._ctx, this.state);
		this.enterRule(_localctx, 106, z80asmParser.RULE_register16_ex);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 694;
			_la = this._input.LA(1);
			if (!(_la === z80asmParser.REG16ix || _la === z80asmParser.REG16iy)) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public label(): LabelContext {
		let _localctx: LabelContext = new LabelContext(this._ctx, this.state);
		this.enterRule(_localctx, 108, z80asmParser.RULE_label);
		try {
			this.state = 701;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.T__2:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 696;
				this.match(z80asmParser.T__2);
				this.state = 697;
				this.symbol();
				}
				break;
			case z80asmParser.SYMBOL:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 698;
				this.symbol();
				this.state = 699;
				this.match(z80asmParser.T__3);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public symbol(): SymbolContext {
		let _localctx: SymbolContext = new SymbolContext(this._ctx, this.state);
		this.enterRule(_localctx, 110, z80asmParser.RULE_symbol);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 703;
			this.match(z80asmParser.SYMBOL);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public blockcomment(): BlockcommentContext {
		let _localctx: BlockcommentContext = new BlockcommentContext(this._ctx, this.state);
		this.enterRule(_localctx, 112, z80asmParser.RULE_blockcomment);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 705;
			this.match(z80asmParser.T__4);
			this.state = 712;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__5) | (1 << z80asmParser.T__6) | (1 << z80asmParser.T__7))) !== 0)) {
				{
				this.state = 706;
				this.blockcomment_param();
				this.state = 710;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 61, this._ctx) ) {
				case 1:
					{
					this.state = 707;
					this.registers();
					}
					break;

				case 2:
					{
					this.state = 708;
					this.expression(0);
					}
					break;

				case 3:
					{
					this.state = 709;
					this.symbol();
					}
					break;
				}
				}
			}

			this.state = 714;
			this.match(z80asmParser.BLOCKCOMMENTtext);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public blockcomment_param(): Blockcomment_paramContext {
		let _localctx: Blockcomment_paramContext = new Blockcomment_paramContext(this._ctx, this.state);
		this.enterRule(_localctx, 114, z80asmParser.RULE_blockcomment_param);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 716;
			_la = this._input.LA(1);
			if (!((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__5) | (1 << z80asmParser.T__6) | (1 << z80asmParser.T__7))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public comment(): CommentContext {
		let _localctx: CommentContext = new CommentContext(this._ctx, this.state);
		this.enterRule(_localctx, 116, z80asmParser.RULE_comment);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 718;
			this.match(z80asmParser.COMMENT);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public string(): StringContext {
		let _localctx: StringContext = new StringContext(this._ctx, this.state);
		this.enterRule(_localctx, 118, z80asmParser.RULE_string);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 720;
			this.match(z80asmParser.STRING);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public character(): CharacterContext {
		let _localctx: CharacterContext = new CharacterContext(this._ctx, this.state);
		this.enterRule(_localctx, 120, z80asmParser.RULE_character);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 722;
			this.match(z80asmParser.CHARACTER);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public expression8(): Expression8Context {
		let _localctx: Expression8Context = new Expression8Context(this._ctx, this.state);
		this.enterRule(_localctx, 122, z80asmParser.RULE_expression8);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 724;
			this.expression(0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public expression16(): Expression16Context {
		let _localctx: Expression16Context = new Expression16Context(this._ctx, this.state);
		this.enterRule(_localctx, 124, z80asmParser.RULE_expression16);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 726;
			this.expression(0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public expression32(): Expression32Context {
		let _localctx: Expression32Context = new Expression32Context(this._ctx, this.state);
		this.enterRule(_localctx, 126, z80asmParser.RULE_expression32);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 728;
			this.expression(0);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}

	public expression(): ExpressionContext;
	public expression(_p: number): ExpressionContext;
	// @RuleVersion(0)
	public expression(_p?: number): ExpressionContext {
		if (_p === undefined) {
			_p = 0;
		}

		let _parentctx: ParserRuleContext = this._ctx;
		let _parentState: number = this.state;
		let _localctx: ExpressionContext = new ExpressionContext(this._ctx, _parentState);
		let _prevctx: ExpressionContext = _localctx;
		let _startState: number = 128;
		this.enterRecursionRule(_localctx, 128, z80asmParser.RULE_expression, _p);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 737;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.PARopen:
				{
				this.state = 731;
				this.match(z80asmParser.PARopen);
				this.state = 732;
				this.expression(0);
				this.state = 733;
				this.match(z80asmParser.PARclose);
				}
				break;
			case z80asmParser.PLUS:
			case z80asmParser.MINUS:
			case z80asmParser.INTERRUPTMODE:
			case z80asmParser.BIT8:
			case z80asmParser.INSTRUCTIONrstvectorhex:
			case z80asmParser.INSTRUCTIONrstvector:
			case z80asmParser.NUMBERbin:
			case z80asmParser.NUMBERoct:
			case z80asmParser.NUMBERdec:
			case z80asmParser.NUMBERhex:
				{
				this.state = 735;
				this.number();
				}
				break;
			case z80asmParser.SYMBOL:
				{
				this.state = 736;
				this.symbol();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			this._ctx._stop = this._input.tryLT(-1);
			this.state = 745;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 64, this._ctx);
			while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1) {
					if (this._parseListeners != null) {
						this.triggerExitRuleEvent();
					}
					_prevctx = _localctx;
					{
					{
					_localctx = new ExpressionContext(_parentctx, _parentState);
					this.pushNewRecursionContext(_localctx, _startState, z80asmParser.RULE_expression);
					this.state = 739;
					if (!(this.precpred(this._ctx, 4))) {
						throw new FailedPredicateException(this, "this.precpred(this._ctx, 4)");
					}
					this.state = 740;
					this.operator();
					this.state = 741;
					this.expression(5);
					}
					}
				}
				this.state = 747;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 64, this._ctx);
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public operator(): OperatorContext {
		let _localctx: OperatorContext = new OperatorContext(this._ctx, this.state);
		this.enterRule(_localctx, 130, z80asmParser.RULE_operator);
		try {
			this.state = 751;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.PLUS:
			case z80asmParser.MINUS:
			case z80asmParser.OPERATORnum:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 748;
				this.operator_num();
				}
				break;
			case z80asmParser.OPERATORbit:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 749;
				this.operator_bit();
				}
				break;
			case z80asmParser.OPERATORlogic:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 750;
				this.operator_logic();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public operator_num(): Operator_numContext {
		let _localctx: Operator_numContext = new Operator_numContext(this._ctx, this.state);
		this.enterRule(_localctx, 132, z80asmParser.RULE_operator_num);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 753;
			_la = this._input.LA(1);
			if (!(((((_la - 69)) & ~0x1F) === 0 && ((1 << (_la - 69)) & ((1 << (z80asmParser.PLUS - 69)) | (1 << (z80asmParser.MINUS - 69)) | (1 << (z80asmParser.OPERATORnum - 69)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public operator_bit(): Operator_bitContext {
		let _localctx: Operator_bitContext = new Operator_bitContext(this._ctx, this.state);
		this.enterRule(_localctx, 134, z80asmParser.RULE_operator_bit);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 755;
			this.match(z80asmParser.OPERATORbit);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public operator_logic(): Operator_logicContext {
		let _localctx: Operator_logicContext = new Operator_logicContext(this._ctx, this.state);
		this.enterRule(_localctx, 136, z80asmParser.RULE_operator_logic);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 757;
			this.match(z80asmParser.OPERATORlogic);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public number(): NumberContext {
		let _localctx: NumberContext = new NumberContext(this._ctx, this.state);
		this.enterRule(_localctx, 138, z80asmParser.RULE_number);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 760;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.PLUS || _la === z80asmParser.MINUS) {
				{
				this.state = 759;
				_la = this._input.LA(1);
				if (!(_la === z80asmParser.PLUS || _la === z80asmParser.MINUS)) {
				this._errHandler.recoverInline(this);
				} else {
					if (this._input.LA(1) === Token.EOF) {
						this.matchedEOF = true;
					}

					this._errHandler.reportMatch(this);
					this.consume();
				}
				}
			}

			this.state = 766;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.NUMBERbin:
				{
				this.state = 762;
				this.number_bin();
				}
				break;
			case z80asmParser.NUMBERoct:
				{
				this.state = 763;
				this.number_oct();
				}
				break;
			case z80asmParser.INTERRUPTMODE:
			case z80asmParser.BIT8:
			case z80asmParser.INSTRUCTIONrstvector:
			case z80asmParser.NUMBERdec:
				{
				this.state = 764;
				this.number_dec();
				}
				break;
			case z80asmParser.INSTRUCTIONrstvectorhex:
			case z80asmParser.NUMBERhex:
				{
				this.state = 765;
				this.number_hex();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public number_bin(): Number_binContext {
		let _localctx: Number_binContext = new Number_binContext(this._ctx, this.state);
		this.enterRule(_localctx, 140, z80asmParser.RULE_number_bin);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 768;
			this.match(z80asmParser.NUMBERbin);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public number_oct(): Number_octContext {
		let _localctx: Number_octContext = new Number_octContext(this._ctx, this.state);
		this.enterRule(_localctx, 142, z80asmParser.RULE_number_oct);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 770;
			this.match(z80asmParser.NUMBERoct);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public number_dec(): Number_decContext {
		let _localctx: Number_decContext = new Number_decContext(this._ctx, this.state);
		this.enterRule(_localctx, 144, z80asmParser.RULE_number_dec);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 772;
			_la = this._input.LA(1);
			if (!(((((_la - 74)) & ~0x1F) === 0 && ((1 << (_la - 74)) & ((1 << (z80asmParser.INTERRUPTMODE - 74)) | (1 << (z80asmParser.BIT8 - 74)) | (1 << (z80asmParser.INSTRUCTIONrstvector - 74)) | (1 << (z80asmParser.NUMBERdec - 74)))) !== 0))) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}
	// @RuleVersion(0)
	public number_hex(): Number_hexContext {
		let _localctx: Number_hexContext = new Number_hexContext(this._ctx, this.state);
		this.enterRule(_localctx, 146, z80asmParser.RULE_number_hex);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 774;
			_la = this._input.LA(1);
			if (!(_la === z80asmParser.INSTRUCTIONrstvectorhex || _la === z80asmParser.NUMBERhex)) {
			this._errHandler.recoverInline(this);
			} else {
				if (this._input.LA(1) === Token.EOF) {
					this.matchedEOF = true;
				}

				this._errHandler.reportMatch(this);
				this.consume();
			}
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
				throw re;
			}
		}
		finally {
			this.exitRule();
		}
		return _localctx;
	}

	public sempred(_localctx: RuleContext, ruleIndex: number, predIndex: number): boolean {
		switch (ruleIndex) {
		case 64:
			return this.expression_sempred(_localctx as ExpressionContext, predIndex);
		}
		return true;
	}
	private expression_sempred(_localctx: ExpressionContext, predIndex: number): boolean {
		switch (predIndex) {
		case 0:
			return this.precpred(this._ctx, 4);
		}
		return true;
	}

	private static readonly _serializedATNSegments: number = 2;
	private static readonly _serializedATNSegment0: string =
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x03[\u030B\x04\x02" +
		"\t\x02\x04\x03\t\x03\x04\x04\t\x04\x04\x05\t\x05\x04\x06\t\x06\x04\x07" +
		"\t\x07\x04\b\t\b\x04\t\t\t\x04\n\t\n\x04\v\t\v\x04\f\t\f\x04\r\t\r\x04" +
		"\x0E\t\x0E\x04\x0F\t\x0F\x04\x10\t\x10\x04\x11\t\x11\x04\x12\t\x12\x04" +
		"\x13\t\x13\x04\x14\t\x14\x04\x15\t\x15\x04\x16\t\x16\x04\x17\t\x17\x04" +
		"\x18\t\x18\x04\x19\t\x19\x04\x1A\t\x1A\x04\x1B\t\x1B\x04\x1C\t\x1C\x04" +
		"\x1D\t\x1D\x04\x1E\t\x1E\x04\x1F\t\x1F\x04 \t \x04!\t!\x04\"\t\"\x04#" +
		"\t#\x04$\t$\x04%\t%\x04&\t&\x04\'\t\'\x04(\t(\x04)\t)\x04*\t*\x04+\t+" +
		"\x04,\t,\x04-\t-\x04.\t.\x04/\t/\x040\t0\x041\t1\x042\t2\x043\t3\x044" +
		"\t4\x045\t5\x046\t6\x047\t7\x048\t8\x049\t9\x04:\t:\x04;\t;\x04<\t<\x04" +
		"=\t=\x04>\t>\x04?\t?\x04@\t@\x04A\tA\x04B\tB\x04C\tC\x04D\tD\x04E\tE\x04" +
		"F\tF\x04G\tG\x04H\tH\x04I\tI\x04J\tJ\x04K\tK\x03\x02\x05\x02\x98\n\x02" +
		"\x03\x02\x03\x02\x03\x03\x05\x03\x9D\n\x03\x03\x03\x06\x03\xA0\n\x03\r" +
		"\x03\x0E\x03\xA1\x03\x04\x03\x04\x05\x04\xA6\n\x04\x03\x04\x03\x04\x03" +
		"\x04\x05\x04\xAB\n\x04\x03\x04\x05\x04\xAE\n\x04\x03\x04\x03\x04\x05\x04" +
		"\xB2\n\x04\x03\x04\x05\x04\xB5\n\x04\x03\x05\x03\x05\x03\x05\x03\x05\x03" +
		"\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x05" +
		"\x05\xC4\n\x05\x03\x06\x03\x06\x03\x07\x03\x07\x03\x07\x03\b\x03\b\x03" +
		"\b\x03\t\x03\t\x03\t\x03\n\x03\n\x03\n\x03\n\x07\n\xD5\n\n\f\n\x0E\n\xD8" +
		"\v\n\x03\v\x03\v\x03\v\x03\v\x03\v\x03\f\x03\f\x03\f\x03\f\x07\f\xE3\n" +
		"\f\f\f\x0E\f\xE6\v\f\x03\r\x03\r\x03\r\x03\r\x05\r\xEC\n\r\x03\x0E\x03" +
		"\x0E\x03\x0E\x03\x0E\x07\x0E\xF2\n\x0E\f\x0E\x0E\x0E\xF5\v\x0E\x03\x0F" +
		"\x03\x0F\x03\x0F\x05\x0F\xFA\n\x0F\x03\x10\x03\x10\x03\x10\x05\x10\xFF" +
		"\n\x10\x03\x11\x03\x11\x03\x11\x05\x11\u0104\n\x11\x03\x12\x05\x12\u0107" +
		"\n\x12\x03\x12\x03\x12\x03\x13\x03\x13\x03\x14\x03\x14\x03\x15\x03\x15" +
		"\x03\x15\x05\x15\u0112\n\x15\x03\x15\x03\x15\x03\x15\x03\x16\x03\x16\x03" +
		"\x16\x03\x16\x03\x16\x03\x16\x03\x16\x03\x16\x03\x16\x03\x16\x03\x16\x03" +
		"\x16\x03\x16\x03\x16\x03\x16\x03\x16\x03\x16\x03\x16\x05\x16\u0129\n\x16" +
		"\x03\x17\x03\x17\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x05\x18\u013A\n\x18\x03" +
		"\x18\x03\x18\x03\x18\x03\x18\x05\x18\u0140\n\x18\x03\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x05\x18\u0179" +
		"\n\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x05\x18\u018A" +
		"\n\x18\x03\x18\x03\x18\x03\x18\x05\x18\u018F\n\x18\x03\x19\x03\x19\x03" +
		"\x19\x05\x19\u0194\n\x19\x03\x19\x03\x19\x03\x19\x03\x19\x03\x19\x03\x19" +
		"\x03\x19\x03\x19\x03\x19\x03\x19\x03\x19\x03\x19\x03\x19\x03\x19\x03\x19" +
		"\x03\x19\x03\x19\x05\x19\u01A7\n\x19\x03\x19\x03\x19\x03\x19\x03\x19\x03" +
		"\x19\x05\x19\u01AE\n\x19\x05\x19\u01B0\n\x19\x03\x1A\x03\x1A\x03\x1A\x05" +
		"\x1A\u01B5\n\x1A\x03\x1B\x03\x1B\x03\x1B\x03\x1B\x03\x1B\x03\x1B\x03\x1B" +
		"\x03\x1B\x03\x1B\x05\x1B\u01C0\n\x1B\x03\x1B\x03\x1B\x03\x1B\x03\x1B\x03" +
		"\x1B\x03\x1B\x03\x1B\x05\x1B\u01C9\n\x1B\x03\x1B\x05\x1B\u01CC\n\x1B\x03" +
		"\x1C\x03\x1C\x03\x1C\x05\x1C\u01D1\n\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C" +
		"\x05\x1C\u01D7\n\x1C\x03\x1C\x03\x1C\x03\x1C\x05\x1C\u01DC\n\x1C\x03\x1C" +
		"\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x05\x1C\u01E4\n\x1C\x03\x1C\x05" +
		"\x1C\u01E7\n\x1C\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x05\x1D\u01ED\n\x1D\x03" +
		"\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x05\x1D\u01F6\n\x1D" +
		"\x03\x1D\x05\x1D\u01F9\n\x1D\x03\x1E\x03\x1E\x05\x1E\u01FD\n\x1E\x03\x1F" +
		"\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F" +
		"\x03\x1F\x03\x1F\x05\x1F\u020B\n\x1F\x03 \x03 \x03 \x05 \u0210\n \x03" +
		"!\x03!\x03!\x03!\x03!\x03!\x03!\x03!\x03!\x05!\u021B\n!\x03!\x03!\x03" +
		"!\x03!\x03!\x03!\x03!\x03!\x03!\x03!\x05!\u0227\n!\x03\"\x03\"\x05\"\u022B" +
		"\n\"\x03#\x03#\x03#\x03#\x03#\x03#\x03#\x03#\x03#\x03#\x03#\x03#\x03#" +
		"\x03#\x05#\u023B\n#\x03#\x03#\x03#\x03#\x03#\x03#\x03#\x03#\x03#\x03#" +
		"\x03#\x03#\x03#\x05#\u024A\n#\x03$\x03$\x03%\x03%\x03%\x03%\x05%\u0252" +
		"\n%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x05%\u025D\n%\x03%\x03" +
		"%\x03%\x05%\u0262\n%\x03&\x03&\x03&\x03&\x05&\u0268\n&\x03&\x03&\x03&" +
		"\x05&\u026D\n&\x05&\u026F\n&\x03\'\x03\'\x03(\x03(\x03)\x03)\x03)\x03" +
		"*\x03*\x03*\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x05" +
		"+\u0286\n+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03" +
		"+\x03+\x03+\x03+\x03+\x03+\x05+\u0299\n+\x05+\u029B\n+\x03,\x03,\x03-" +
		"\x03-\x03.\x03.\x03/\x03/\x030\x030\x031\x031\x032\x032\x033\x033\x03" +
		"4\x034\x054\u02AF\n4\x035\x035\x055\u02B3\n5\x036\x036\x056\u02B7\n6\x03" +
		"7\x037\x038\x038\x038\x038\x038\x058\u02C0\n8\x039\x039\x03:\x03:\x03" +
		":\x03:\x03:\x05:\u02C9\n:\x05:\u02CB\n:\x03:\x03:\x03;\x03;\x03<\x03<" +
		"\x03=\x03=\x03>\x03>\x03?\x03?\x03@\x03@\x03A\x03A\x03B\x03B\x03B\x03" +
		"B\x03B\x03B\x03B\x05B\u02E4\nB\x03B\x03B\x03B\x03B\x07B\u02EA\nB\fB\x0E" +
		"B\u02ED\vB\x03C\x03C\x03C\x05C\u02F2\nC\x03D\x03D\x03E\x03E\x03F\x03F" +
		"\x03G\x05G\u02FB\nG\x03G\x03G\x03G\x03G\x05G\u0301\nG\x03H\x03H\x03I\x03" +
		"I\x03J\x03J\x03K\x03K\x03K\x05\xD6\xE4\xF3\x02\x03\x82L\x02\x02\x04\x02" +
		"\x06\x02\b\x02\n\x02\f\x02\x0E\x02\x10\x02\x12\x02\x14\x02\x16\x02\x18" +
		"\x02\x1A\x02\x1C\x02\x1E\x02 \x02\"\x02$\x02&\x02(\x02*\x02,\x02.\x02" +
		"0\x022\x024\x026\x028\x02:\x02<\x02>\x02@\x02B\x02D\x02F\x02H\x02J\x02" +
		"L\x02N\x02P\x02R\x02T\x02V\x02X\x02Z\x02\\\x02^\x02`\x02b\x02d\x02f\x02" +
		"h\x02j\x02l\x02n\x02p\x02r\x02t\x02v\x02x\x02z\x02|\x02~\x02\x80\x02\x82" +
		"\x02\x84\x02\x86\x02\x88\x02\x8A\x02\x8C\x02\x8E\x02\x90\x02\x92\x02\x94" +
		"\x02\x02\x13\x03\x02!\"\x03\x02LM\x04\x0266BC\x04\x0266CC\x03\x02NO\x03" +
		"\x021A\x03\x024:\x04\x021148\x04\x022248\x03\x02;>\x04\x02<=??\x03\x02" +
		"@A\x03\x02\b\n\x03\x02GI\x03\x02GH\x05\x02LMOORR\x04\x02NNSS\x02\u0346" +
		"\x02\x97\x03\x02\x02\x02\x04\x9F\x03\x02\x02\x02\x06\xB4\x03\x02\x02\x02" +
		"\b\xC3\x03\x02\x02\x02\n\xC5\x03\x02\x02\x02\f\xC7\x03\x02\x02\x02\x0E" +
		"\xCA\x03\x02\x02\x02\x10\xCD\x03\x02\x02\x02\x12\xD0\x03\x02\x02\x02\x14" +
		"\xD9\x03\x02\x02\x02\x16\xDE\x03\x02\x02\x02\x18\xE7\x03\x02\x02\x02\x1A" +
		"\xED\x03\x02\x02\x02\x1C\xF9\x03\x02\x02\x02\x1E\xFB\x03\x02\x02\x02 " +
		"\u0100\x03\x02\x02\x02\"\u0106\x03\x02\x02\x02$\u010A\x03\x02\x02\x02" +
		"&\u010C\x03\x02\x02\x02(\u010E\x03\x02\x02\x02*\u0128\x03\x02\x02\x02" +
		",\u012A\x03\x02\x02\x02.\u018E\x03\x02\x02\x020\u01AF\x03\x02\x02\x02" +
		"2\u01B1\x03\x02\x02\x024\u01CB\x03\x02\x02\x026\u01E6\x03\x02\x02\x02" +
		"8\u01F8\x03\x02\x02\x02:\u01FA\x03\x02\x02\x02<\u020A\x03\x02\x02\x02" +
		">\u020C\x03\x02\x02\x02@\u0226\x03\x02\x02\x02B\u0228\x03\x02\x02\x02" +
		"D\u0249\x03\x02\x02\x02F\u024B\x03\x02\x02\x02H\u0261\x03\x02\x02\x02" +
		"J\u026E\x03\x02\x02\x02L\u0270\x03\x02\x02\x02N\u0272\x03\x02\x02\x02" +
		"P\u0274\x03\x02\x02\x02R\u0277\x03\x02\x02\x02T\u029A\x03\x02\x02\x02" +
		"V\u029C\x03\x02\x02\x02X\u029E\x03\x02\x02\x02Z\u02A0\x03\x02\x02\x02" +
		"\\\u02A2\x03\x02\x02\x02^\u02A4\x03\x02\x02\x02`\u02A6\x03\x02\x02\x02" +
		"b\u02A8\x03\x02\x02\x02d\u02AA\x03\x02\x02\x02f\u02AE\x03\x02\x02\x02" +
		"h\u02B2\x03\x02\x02\x02j\u02B6\x03\x02\x02\x02l\u02B8\x03\x02\x02\x02" +
		"n\u02BF\x03\x02\x02\x02p\u02C1\x03\x02\x02\x02r\u02C3\x03\x02\x02\x02" +
		"t\u02CE\x03\x02\x02\x02v\u02D0\x03\x02\x02\x02x\u02D2\x03\x02\x02\x02" +
		"z\u02D4\x03\x02\x02\x02|\u02D6\x03\x02\x02\x02~\u02D8\x03\x02\x02\x02" +
		"\x80\u02DA\x03\x02\x02\x02\x82\u02E3\x03\x02\x02\x02\x84\u02F1\x03\x02" +
		"\x02\x02\x86\u02F3\x03\x02\x02\x02\x88\u02F5\x03\x02\x02\x02\x8A\u02F7" +
		"\x03\x02\x02\x02\x8C\u02FA\x03\x02\x02\x02\x8E\u0302\x03\x02\x02\x02\x90" +
		"\u0304\x03\x02\x02\x02\x92\u0306\x03\x02\x02\x02\x94\u0308\x03\x02\x02" +
		"\x02\x96\x98\x05\x04\x03\x02\x97\x96\x03\x02\x02\x02\x97\x98\x03\x02\x02" +
		"\x02\x98\x99\x03\x02\x02\x02\x99\x9A\x07\x02\x02\x03\x9A\x03\x03\x02\x02" +
		"\x02\x9B\x9D\x05\x06\x04\x02\x9C\x9B\x03\x02\x02\x02\x9C\x9D\x03\x02\x02" +
		"\x02\x9D\x9E\x03\x02\x02\x02\x9E\xA0\x07Z\x02\x02\x9F\x9C\x03\x02\x02" +
		"\x02\xA0\xA1\x03\x02\x02\x02\xA1\x9F\x03\x02\x02\x02\xA1\xA2\x03\x02\x02" +
		"\x02\xA2\x05\x03\x02\x02\x02\xA3\xA5\x05\b\x05\x02\xA4\xA6\x05v<\x02\xA5" +
		"\xA4\x03\x02\x02\x02\xA5\xA6\x03\x02\x02\x02\xA6\xB5\x03\x02\x02\x02\xA7" +
		"\xB5\x05v<\x02\xA8\xAA\x05n8\x02\xA9\xAB\x05v<\x02\xAA\xA9\x03\x02\x02" +
		"\x02\xAA\xAB\x03\x02\x02\x02\xAB\xB5\x03\x02\x02\x02\xAC\xAE\x05n8\x02" +
		"\xAD\xAC\x03\x02\x02\x02\xAD\xAE\x03\x02\x02\x02\xAE\xAF\x03\x02\x02\x02" +
		"\xAF\xB1\x05*\x16\x02\xB0\xB2\x05v<\x02\xB1\xB0\x03\x02\x02\x02\xB1\xB2" +
		"\x03\x02\x02\x02\xB2\xB5\x03\x02\x02\x02\xB3\xB5\x05r:\x02\xB4\xA3\x03" +
		"\x02\x02\x02\xB4\xA7\x03\x02\x02\x02\xB4\xA8\x03\x02\x02\x02\xB4\xAD\x03" +
		"\x02\x02\x02\xB4\xB3\x03\x02\x02\x02\xB5\x07\x03\x02\x02\x02\xB6\xC4\x05" +
		"\n\x06\x02\xB7\xC4\x05\f\x07\x02\xB8\xC4\x05\x0E\b\x02\xB9\xC4\x05\x16" +
		"\f\x02\xBA\xC4\x05\x10\t\x02\xBB\xC4\x05\x12\n\x02\xBC\xC4\x05\x14\v\x02" +
		"\xBD\xC4\x05\x18\r\x02\xBE\xC4\x05\x1A\x0E\x02\xBF\xC4\x05\x1E\x10\x02" +
		"\xC0\xC4\x05 \x11\x02\xC1\xC4\x05$\x13\x02\xC2\xC4\x05&\x14\x02\xC3\xB6" +
		"\x03\x02\x02\x02\xC3\xB7\x03\x02\x02\x02\xC3\xB8\x03\x02\x02\x02\xC3\xB9" +
		"\x03\x02\x02\x02\xC3\xBA\x03\x02\x02\x02\xC3\xBB\x03\x02\x02\x02\xC3\xBC" +
		"\x03\x02\x02\x02\xC3\xBD\x03\x02\x02\x02\xC3\xBE\x03\x02\x02\x02\xC3\xBF" +
		"\x03\x02\x02\x02\xC3\xC0\x03\x02\x02\x02\xC3\xC1\x03\x02\x02\x02\xC3\xC2" +
		"\x03\x02\x02\x02\xC4\t\x03\x02\x02\x02\xC5\xC6\x07\v\x02\x02\xC6\v\x03" +
		"\x02\x02\x02\xC7\xC8\x07\f\x02\x02\xC8\xC9\x05~@\x02\xC9\r\x03\x02\x02" +
		"\x02\xCA\xCB\x07\r\x02\x02\xCB\xCC\x05\x80A\x02\xCC\x0F\x03\x02\x02\x02" +
		"\xCD\xCE\x07\x0E\x02\x02\xCE\xCF\x05p9\x02\xCF\x11\x03\x02\x02\x02\xD0" +
		"\xD1\x07\x0F\x02\x02\xD1\xD6\x05p9\x02\xD2\xD3\x07Y\x02\x02\xD3\xD5\x05" +
		"p9\x02\xD4\xD2\x03\x02\x02\x02\xD5\xD8\x03\x02\x02\x02\xD6\xD7\x03\x02" +
		"\x02\x02\xD6\xD4\x03\x02\x02\x02\xD7\x13\x03\x02\x02\x02\xD8\xD6\x03\x02" +
		"\x02\x02\xD9\xDA\x07\x10\x02\x02\xDA\xDB\x05p9\x02\xDB\xDC\x07\x03\x02" +
		"\x02\xDC\xDD\x05\x82B\x02\xDD\x15\x03\x02\x02\x02\xDE\xDF\x07\x13\x02" +
		"\x02\xDF\xE4\x05\x82B\x02\xE0\xE1\x07Y\x02\x02\xE1\xE3\x05\x82B\x02\xE2" +
		"\xE0\x03\x02\x02\x02\xE3\xE6\x03\x02\x02\x02\xE4\xE5\x03\x02\x02\x02\xE4" +
		"\xE2\x03\x02\x02\x02\xE5\x17\x03\x02\x02\x02\xE6\xE4\x03\x02\x02\x02\xE7" +
		"\xE8\x07\x11\x02\x02\xE8\xEB\x05\x82B\x02\xE9\xEA\x07Y\x02\x02\xEA\xEC" +
		"\x05\x82B\x02\xEB\xE9\x03\x02\x02\x02\xEB\xEC\x03\x02\x02\x02\xEC\x19" +
		"\x03\x02\x02\x02\xED\xEE\x07\x12\x02\x02\xEE\xF3\x05\x1C\x0F\x02\xEF\xF0" +
		"\x07Y\x02\x02\xF0\xF2\x05\x1C\x0F\x02\xF1\xEF\x03\x02\x02\x02\xF2\xF5" +
		"\x03\x02\x02\x02\xF3\xF4\x03\x02\x02\x02\xF3\xF1\x03\x02\x02\x02\xF4\x1B" +
		"\x03\x02\x02\x02\xF5\xF3\x03\x02\x02\x02\xF6\xFA\x05x=\x02\xF7\xFA\x05" +
		"z>\x02\xF8\xFA\x05|?\x02\xF9\xF6\x03\x02\x02\x02\xF9\xF7\x03\x02\x02\x02" +
		"\xF9\xF8\x03\x02\x02\x02\xFA\x1D\x03\x02\x02\x02\xFB\xFC\x07\x16\x02\x02" +
		"\xFC\xFE\x05\x82B\x02\xFD\xFF\x05v<\x02\xFE\xFD\x03\x02\x02\x02\xFE\xFF" +
		"\x03\x02\x02\x02\xFF\x1F\x03\x02\x02\x02\u0100\u0101\x07\x17\x02\x02\u0101" +
		"\u0103\x05p9\x02\u0102\u0104\x05v<\x02\u0103\u0102\x03\x02\x02\x02\u0103" +
		"\u0104\x03\x02\x02\x02\u0104!\x03\x02\x02\x02\u0105\u0107\x05$\x13\x02" +
		"\u0106\u0105\x03\x02\x02\x02\u0106\u0107\x03\x02\x02\x02\u0107\u0108\x03" +
		"\x02\x02\x02\u0108\u0109\x05&\x14\x02\u0109#\x03\x02\x02\x02\u010A\u010B" +
		"\x07\x18\x02\x02\u010B%\x03\x02\x02\x02\u010C\u010D\x07\x19\x02\x02\u010D" +
		"\'\x03\x02\x02\x02\u010E\u010F\x07\x1A\x02\x02\u010F\u0111\x05~@\x02\u0110" +
		"\u0112\x05v<\x02\u0111\u0110\x03\x02\x02\x02\u0111\u0112\x03\x02\x02\x02" +
		"\u0112\u0113\x03\x02\x02\x02\u0113\u0114\x05\x04\x03\x02\u0114\u0115\x07" +
		"\x1B\x02\x02\u0115)\x03\x02\x02\x02\u0116\u0129\x05,\x17\x02\u0117\u0129" +
		"\x05.\x18\x02\u0118\u0129\x050\x19\x02\u0119\u0129\x052\x1A\x02\u011A" +
		"\u0129\x054\x1B\x02\u011B\u0129\x056\x1C\x02\u011C\u0129\x058\x1D\x02" +
		"\u011D\u0129\x05:\x1E\x02\u011E\u0129\x05<\x1F\x02\u011F\u0129\x05> \x02" +
		"\u0120\u0129\x05@!\x02\u0121\u0129\x05B\"\x02\u0122\u0129\x05D#\x02\u0123" +
		"\u0129\x05H%\x02\u0124\u0129\x05J&\x02\u0125\u0129\x05P)\x02\u0126\u0129" +
		"\x05R*\x02\u0127\u0129\x05T+\x02\u0128\u0116\x03\x02\x02\x02\u0128\u0117" +
		"\x03\x02\x02\x02\u0128\u0118\x03\x02\x02\x02\u0128\u0119\x03\x02\x02\x02" +
		"\u0128\u011A\x03\x02\x02\x02\u0128\u011B\x03\x02\x02\x02\u0128\u011C\x03" +
		"\x02\x02\x02\u0128\u011D\x03\x02\x02\x02\u0128\u011E\x03\x02\x02\x02\u0128" +
		"\u011F\x03\x02\x02\x02\u0128\u0120\x03\x02\x02\x02\u0128\u0121\x03\x02" +
		"\x02\x02\u0128\u0122\x03\x02\x02\x02\u0128\u0123\x03\x02\x02\x02\u0128" +
		"\u0124\x03\x02\x02\x02\u0128\u0125\x03\x02\x02\x02\u0128\u0126\x03\x02" +
		"\x02\x02\u0128\u0127\x03\x02\x02\x02\u0129+\x03\x02\x02\x02\u012A\u012B" +
		"\x07\x1C\x02\x02\u012B-\x03\x02\x02\x02\u012C\u0139\x07\x1D\x02\x02\u012D" +
		"\u012E\x05\\/\x02\u012E\u012F\x07Y\x02\x02\u012F\u0130\x05\\/\x02\u0130" +
		"\u013A\x03\x02\x02\x02\u0131\u0132\x05^0\x02\u0132\u0133\x07Y\x02\x02" +
		"\u0133\u0134\x05^0\x02\u0134\u013A\x03\x02\x02\x02\u0135\u0136\x05`1\x02" +
		"\u0136\u0137\x07Y\x02\x02\u0137\u0138\x05`1\x02\u0138\u013A\x03\x02\x02" +
		"\x02\u0139\u012D\x03\x02\x02\x02\u0139\u0131\x03\x02\x02\x02\u0139\u0135" +
		"\x03\x02\x02\x02\u013A\u018F\x03\x02\x02\x02\u013B\u013F\x07\x1D\x02\x02" +
		"\u013C\u0140\x05\\/\x02\u013D\u0140\x071\x02\x02\u013E\u0140\x072\x02" +
		"\x02\u013F\u013C\x03\x02\x02\x02\u013F\u013D\x03\x02\x02\x02\u013F\u013E" +
		"\x03\x02\x02\x02\u0140\u0141\x03\x02\x02\x02\u0141\u0142\x07Y\x02\x02" +
		"\u0142\u018F\x05|?\x02\u0143\u0144\x07\x1D\x02\x02\u0144\u0145\x05\\/" +
		"\x02\u0145\u0146\x07Y\x02\x02\u0146\u0147\x07W\x02\x02\u0147\u0148\x07" +
		">\x02\x02\u0148\u0149\x07X\x02\x02\u0149\u018F\x03\x02\x02\x02\u014A\u014B" +
		"\x07\x1D\x02\x02\u014B\u014C\x05\\/\x02\u014C\u014D\x07Y\x02\x02\u014D" +
		"\u014E\x07W\x02\x02\u014E\u014F\x05l7\x02\u014F\u0150\x07G\x02\x02\u0150" +
		"\u0151\x05V,\x02\u0151\u0152\x07X\x02\x02\u0152\u018F\x03\x02\x02\x02" +
		"\u0153\u0154\x07\x1D\x02\x02\u0154\u0155\x07W\x02\x02\u0155\u0156\x07" +
		">\x02\x02\u0156\u0157\x07X\x02\x02\u0157\u0158\x07Y\x02\x02\u0158\u018F" +
		"\x05\\/\x02\u0159\u015A\x07\x1D\x02\x02\u015A\u015B\x07W\x02\x02\u015B" +
		"\u015C\x05l7\x02\u015C\u015D\x07G\x02\x02\u015D\u015E\x05V,\x02\u015E" +
		"\u015F\x07X\x02\x02\u015F\u0160\x07Y\x02\x02\u0160\u0161\x05\\/\x02\u0161" +
		"\u018F\x03\x02\x02\x02\u0162\u0163\x07\x1D\x02\x02\u0163\u0164\x07W\x02" +
		"\x02\u0164\u0165\x07>\x02\x02\u0165\u0166\x07X\x02\x02\u0166\u0167\x07" +
		"Y\x02\x02\u0167\u018F\x05|?\x02\u0168\u0169\x07\x1D\x02\x02\u0169\u016A" +
		"\x07W\x02\x02\u016A\u016B\x05l7\x02\u016B\u016C\x07G\x02\x02\u016C\u016D" +
		"\x05V,\x02\u016D\u016E\x07X\x02\x02\u016E\u016F\x07Y\x02\x02\u016F\u0170" +
		"\x05|?\x02\u0170\u018F\x03\x02\x02\x02\u0171\u0172\x07\x1D\x02\x02\u0172" +
		"\u0173\x074\x02\x02\u0173\u0174\x07Y\x02\x02\u0174\u0178\x07W\x02\x02" +
		"\u0175\u0179\x07<\x02\x02\u0176\u0179\x07=\x02\x02\u0177\u0179\x05\x82" +
		"B\x02\u0178\u0175\x03\x02\x02\x02\u0178\u0176\x03\x02\x02\x02\u0178\u0177" +
		"\x03\x02\x02\x02\u0179\u017A\x03\x02\x02\x02\u017A\u018F\x07X\x02\x02" +
		"\u017B\u017C\x07\x1D\x02\x02\u017C\u017D\x074\x02\x02\u017D\u017E\x07" +
		"Y\x02\x02\u017E\u018F\x073\x02\x02\u017F\u0180\x07\x1D\x02\x02\u0180\u0181" +
		"\x073\x02\x02\u0181\u0182\x07Y\x02\x02\u0182\u018F\x074\x02\x02\u0183" +
		"\u0184\x07\x1D\x02\x02\u0184\u0189\x07W\x02\x02\u0185\u018A\x07<\x02\x02" +
		"\u0186\u018A\x07=\x02\x02\u0187\u018A\x073\x02\x02\u0188\u018A\x05~@\x02" +
		"\u0189\u0185\x03\x02\x02\x02\u0189\u0186\x03\x02\x02\x02\u0189\u0187\x03" +
		"\x02\x02\x02\u0189\u0188\x03\x02\x02\x02\u018A\u018B\x03\x02\x02\x02\u018B" +
		"\u018C\x07X\x02\x02\u018C\u018D\x07Y\x02\x02\u018D\u018F\x074\x02\x02" +
		"\u018E\u012C\x03\x02\x02\x02\u018E\u013B\x03\x02\x02\x02\u018E\u0143\x03" +
		"\x02\x02\x02\u018E\u014A\x03\x02\x02\x02\u018E\u0153\x03\x02\x02\x02\u018E" +
		"\u0159\x03\x02\x02\x02\u018E\u0162\x03\x02\x02\x02\u018E\u0168\x03\x02" +
		"\x02\x02\u018E\u0171\x03\x02\x02\x02\u018E\u017B\x03\x02\x02\x02\u018E" +
		"\u017F\x03\x02\x02\x02\u018E\u0183\x03\x02\x02\x02\u018F/\x03\x02\x02" +
		"\x02\u0190\u0193\x07\x1D\x02\x02\u0191\u0194\x05f4\x02\u0192\u0194\x05" +
		"l7\x02\u0193\u0191\x03\x02\x02\x02\u0193\u0192\x03\x02\x02\x02\u0194\u0195" +
		"\x03\x02\x02\x02\u0195\u0196\x07Y\x02\x02\u0196\u0197\x05~@\x02\u0197" +
		"\u01B0\x03\x02\x02\x02\u0198\u0199\x07\x1D\x02\x02\u0199\u019A\x05l7\x02" +
		"\u019A\u019B\x07Y\x02\x02\u019B\u019C\x07W\x02\x02\u019C\u019D\x05~@\x02" +
		"\u019D\u019E\x07X\x02\x02\u019E\u01B0\x03\x02\x02\x02\u019F\u01A0\x07" +
		"\x1D\x02\x02\u01A0\u01A1\x07W\x02\x02\u01A1\u01A2\x05~@\x02\u01A2\u01A3" +
		"\x07X\x02\x02\u01A3\u01A6\x07Y\x02\x02\u01A4\u01A7\x05f4\x02\u01A5\u01A7" +
		"\x05l7\x02\u01A6\u01A4\x03\x02\x02\x02\u01A6\u01A5\x03\x02\x02\x02\u01A7" +
		"\u01B0\x03\x02\x02\x02\u01A8\u01A9\x07\x1D\x02\x02\u01A9\u01AA\x07?\x02" +
		"\x02\u01AA\u01AD\x07Y\x02\x02\u01AB\u01AE\x07>\x02\x02\u01AC\u01AE\x05" +
		"l7\x02\u01AD\u01AB\x03\x02\x02\x02\u01AD\u01AC\x03\x02\x02\x02\u01AE\u01B0" +
		"\x03\x02\x02\x02\u01AF\u0190\x03\x02\x02\x02\u01AF\u0198\x03\x02\x02\x02" +
		"\u01AF\u019F\x03\x02\x02\x02\u01AF\u01A8\x03\x02\x02\x02\u01B01\x03\x02" +
		"\x02\x02\u01B1\u01B4\x07\x1E\x02\x02\u01B2\u01B5\x05b2\x02\u01B3\u01B5" +
		"\x05l7\x02\u01B4\u01B2\x03\x02\x02\x02\u01B4\u01B3\x03\x02\x02\x02\u01B5" +
		"3\x03\x02\x02\x02\u01B6\u01B7\x07\x1F\x02\x02\u01B7\u01B8\x07=\x02\x02" +
		"\u01B8\u01B9\x07Y\x02\x02\u01B9\u01CC\x07>\x02\x02\u01BA\u01BB\x07\x1F" +
		"\x02\x02\u01BB\u01BC\x07;\x02\x02\u01BC\u01BD\x07Y\x02\x02\u01BD\u01BF" +
		"\x07;\x02\x02\u01BE\u01C0\x07\x04\x02\x02\u01BF\u01BE\x03\x02\x02\x02" +
		"\u01BF\u01C0\x03\x02\x02\x02\u01C0\u01CC\x03\x02\x02\x02\u01C1\u01C2\x07" +
		"\x1F\x02\x02\u01C2\u01C3\x07W\x02\x02\u01C3\u01C4\x07?\x02\x02\u01C4\u01C5" +
		"\x07X\x02\x02\u01C5\u01C8\x07Y\x02\x02\u01C6\u01C9\x07>\x02\x02\u01C7" +
		"\u01C9\x05l7\x02\u01C8\u01C6\x03\x02\x02\x02\u01C8\u01C7\x03\x02\x02\x02" +
		"\u01C9\u01CC\x03\x02\x02\x02\u01CA\u01CC\x07 \x02\x02\u01CB\u01B6\x03" +
		"\x02\x02\x02\u01CB\u01BA\x03\x02\x02\x02\u01CB\u01C1\x03\x02\x02\x02\u01CB" +
		"\u01CA\x03\x02\x02\x02\u01CC5\x03\x02\x02\x02\u01CD\u01D0\t\x02\x02\x02" +
		"\u01CE\u01CF\x074\x02\x02\u01CF\u01D1\x07Y\x02\x02\u01D0\u01CE\x03\x02" +
		"\x02\x02\u01D0\u01D1\x03\x02\x02\x02\u01D1\u01D6\x03\x02\x02\x02\u01D2" +
		"\u01D7\x05\\/\x02\u01D3\u01D7\x071\x02\x02\u01D4\u01D7\x072\x02\x02\u01D5" +
		"\u01D7\x05|?\x02\u01D6\u01D2\x03\x02\x02\x02\u01D6\u01D3\x03\x02\x02\x02" +
		"\u01D6\u01D4\x03\x02\x02\x02\u01D6\u01D5\x03\x02\x02\x02\u01D7\u01E7\x03" +
		"\x02\x02\x02\u01D8\u01DB\t\x02\x02\x02\u01D9\u01DA\x074\x02\x02\u01DA" +
		"\u01DC\x07Y\x02\x02\u01DB\u01D9\x03\x02\x02\x02\u01DB\u01DC\x03\x02\x02" +
		"\x02\u01DC\u01DD\x03\x02\x02\x02\u01DD\u01E3\x07W\x02\x02\u01DE\u01E4" +
		"\x07>\x02\x02\u01DF\u01E0\x05l7\x02\u01E0\u01E1\x07G\x02\x02\u01E1\u01E2" +
		"\x05V,\x02\u01E2\u01E4\x03\x02\x02\x02\u01E3\u01DE\x03\x02\x02\x02\u01E3" +
		"\u01DF\x03\x02\x02\x02\u01E4\u01E5\x03\x02\x02\x02\u01E5\u01E7\x07X\x02" +
		"\x02\u01E6\u01CD\x03\x02\x02\x02\u01E6\u01D8\x03\x02\x02\x02\u01E77\x03" +
		"\x02\x02\x02\u01E8\u01EC\x07#\x02\x02\u01E9\u01ED\x05\\/\x02\u01EA\u01ED" +
		"\x071\x02\x02\u01EB\u01ED\x072\x02\x02\u01EC\u01E9\x03\x02\x02\x02\u01EC" +
		"\u01EA\x03\x02\x02\x02\u01EC\u01EB\x03\x02\x02\x02\u01ED\u01F9\x03\x02" +
		"\x02\x02\u01EE\u01EF\x07#\x02\x02\u01EF\u01F5\x07W\x02\x02\u01F0\u01F6" +
		"\x07>\x02\x02\u01F1\u01F2\x05l7\x02\u01F2\u01F3\x07G\x02\x02\u01F3\u01F4" +
		"\x05V,\x02\u01F4\u01F6\x03\x02\x02\x02\u01F5\u01F0\x03\x02\x02\x02\u01F5" +
		"\u01F1\x03\x02\x02\x02\u01F6\u01F7\x03\x02\x02\x02\u01F7\u01F9\x07";
	private static readonly _serializedATNSegment1: string =
		"X\x02\x02\u01F8\u01E8\x03\x02\x02\x02\u01F8\u01EE\x03\x02\x02\x02\u01F9" +
		"9\x03\x02\x02\x02\u01FA\u01FC\x07$\x02\x02\u01FB\u01FD\x074\x02\x02\u01FC" +
		"\u01FB\x03\x02\x02\x02\u01FC\u01FD\x03\x02\x02\x02\u01FD;\x03\x02\x02" +
		"\x02\u01FE\u01FF\x07!\x02\x02\u01FF\u0200\x07>\x02\x02\u0200\u0201\x07" +
		"Y\x02\x02\u0201\u020B\x05f4\x02\u0202\u0203\x07!\x02\x02\u0203\u0204\x07" +
		"@\x02\x02\u0204\u0205\x07Y\x02\x02\u0205\u020B\x05h5\x02\u0206\u0207\x07" +
		"!\x02\x02\u0207\u0208\x07A\x02\x02\u0208\u0209\x07Y\x02\x02\u0209\u020B" +
		"\x05j6\x02\u020A\u01FE\x03\x02\x02\x02\u020A\u0202\x03\x02\x02\x02\u020A" +
		"\u0206\x03\x02\x02\x02\u020B=\x03\x02\x02\x02\u020C\u020F\x07#\x02\x02" +
		"\u020D\u0210\x05f4\x02\u020E\u0210\x05l7\x02\u020F\u020D\x03\x02\x02\x02" +
		"\u020F\u020E\x03\x02\x02\x02\u0210?\x03\x02\x02\x02\u0211\u0212\x07%\x02" +
		"\x02\u0212\u0227\x05\\/\x02\u0213\u0214\x07%\x02\x02\u0214\u021A\x07W" +
		"\x02\x02\u0215\u021B\x07>\x02\x02\u0216\u0217\x05l7\x02\u0217\u0218\x07" +
		"G\x02\x02\u0218\u0219\x05V,\x02\u0219\u021B\x03\x02\x02\x02\u021A\u0215" +
		"\x03\x02\x02\x02\u021A\u0216\x03\x02\x02\x02\u021B\u021C\x03\x02\x02\x02" +
		"\u021C\u0227\x07X\x02\x02\u021D\u021E\x07%\x02\x02\u021E\u021F\x07W\x02" +
		"\x02\u021F\u0220\x05l7\x02\u0220\u0221\x07G\x02\x02\u0221\u0222\x05V," +
		"\x02\u0222\u0223\x07X\x02\x02\u0223\u0224\x07Y\x02\x02\u0224\u0225\x05" +
		"\\/\x02\u0225\u0227\x03\x02\x02\x02\u0226\u0211\x03\x02\x02\x02\u0226" +
		"\u0213\x03\x02\x02\x02\u0226\u021D\x03\x02\x02\x02\u0227A\x03\x02\x02" +
		"\x02\u0228\u022A\x07&\x02\x02\u0229\u022B\x074\x02\x02\u022A\u0229\x03" +
		"\x02\x02\x02\u022A\u022B\x03\x02\x02\x02\u022BC\x03\x02\x02\x02\u022C" +
		"\u022D\x07\'\x02\x02\u022D\u022E\x05F$\x02\u022E\u022F\x07Y\x02\x02\u022F" +
		"\u0230\x05\\/\x02\u0230\u024A\x03\x02\x02\x02\u0231\u0232\x07\'\x02\x02" +
		"\u0232\u0233\x05F$\x02\u0233\u0234\x07Y\x02\x02\u0234\u023A\x07W\x02\x02" +
		"\u0235\u023B\x07>\x02\x02\u0236\u0237\x05l7\x02\u0237\u0238\x07G\x02\x02" +
		"\u0238\u0239\x05V,\x02\u0239\u023B\x03\x02\x02\x02\u023A\u0235\x03\x02" +
		"\x02\x02\u023A\u0236\x03\x02\x02\x02\u023B\u023C\x03\x02\x02\x02\u023C" +
		"\u023D\x07X\x02\x02\u023D\u024A\x03\x02\x02\x02\u023E\u023F\x07\'\x02" +
		"\x02\u023F\u0240\x05F$\x02\u0240\u0241\x07Y\x02\x02\u0241\u0242\x07W\x02" +
		"\x02\u0242\u0243\x05l7\x02\u0243\u0244\x07G\x02\x02\u0244\u0245\x05V," +
		"\x02\u0245\u0246\x07X\x02\x02\u0246\u0247\x07Y\x02\x02\u0247\u0248\x05" +
		"\\/\x02\u0248\u024A\x03\x02\x02\x02\u0249\u022C\x03\x02\x02\x02\u0249" +
		"\u0231\x03\x02\x02\x02\u0249\u023E\x03\x02\x02\x02\u024AE\x03\x02\x02" +
		"\x02\u024B\u024C\t\x03\x02\x02\u024CG\x03\x02\x02\x02\u024D\u0251\x07" +
		"(\x02\x02\u024E\u0252\x07>\x02\x02\u024F\u0252\x05l7\x02\u0250\u0252\x05" +
		"~@\x02\u0251\u024E\x03\x02\x02\x02\u0251\u024F\x03\x02\x02\x02\u0251\u0250" +
		"\x03\x02\x02\x02\u0252\u0262\x03\x02\x02\x02\u0253\u0254\x07(\x02\x02" +
		"\u0254\u0255\x05L\'\x02\u0255\u0256\x07Y\x02\x02\u0256\u0257\x05~@\x02" +
		"\u0257\u0262\x03\x02\x02\x02\u0258\u025C\x07)\x02\x02\u0259\u025A\x05" +
		"N(\x02\u025A\u025B\x07Y\x02\x02\u025B\u025D\x03\x02\x02\x02\u025C\u0259" +
		"\x03\x02\x02\x02\u025C\u025D\x03\x02\x02\x02\u025D\u025E\x03\x02\x02\x02" +
		"\u025E\u0262\x05X-\x02\u025F\u0260\x07*\x02\x02\u0260\u0262\x05X-\x02" +
		"\u0261\u024D\x03\x02\x02\x02\u0261\u0253\x03\x02\x02\x02\u0261\u0258\x03" +
		"\x02\x02\x02\u0261\u025F\x03\x02\x02\x02\u0262I\x03\x02\x02\x02\u0263" +
		"\u0267\x07+\x02\x02\u0264\u0265\x05L\'\x02\u0265\u0266\x07Y\x02\x02\u0266" +
		"\u0268\x03\x02\x02\x02\u0267\u0264\x03\x02\x02\x02\u0267\u0268\x03\x02" +
		"\x02\x02\u0268\u0269\x03\x02\x02\x02\u0269\u026F\x05~@\x02\u026A\u026C" +
		"\x07,\x02\x02\u026B\u026D\x05L\'\x02\u026C\u026B\x03\x02\x02\x02\u026C" +
		"\u026D\x03\x02\x02\x02\u026D\u026F\x03\x02\x02\x02\u026E\u0263\x03\x02" +
		"\x02\x02\u026E\u026A\x03\x02\x02\x02\u026FK\x03\x02\x02\x02\u0270\u0271" +
		"\t\x04\x02\x02\u0271M\x03\x02\x02\x02\u0272\u0273\t\x05\x02\x02\u0273" +
		"O\x03\x02\x02\x02\u0274\u0275\x07-\x02\x02\u0275\u0276\t\x06\x02\x02\u0276" +
		"Q\x03\x02\x02\x02\u0277\u0278\x07.\x02\x02\u0278\u0279\x07L\x02\x02\u0279" +
		"S\x03\x02\x02\x02\u027A\u027B\x07/\x02\x02\u027B\u027C\x074\x02\x02\u027C" +
		"\u027D\x07Y\x02\x02\u027D\u027E\x07W\x02\x02\u027E\u027F\x05|?\x02\u027F" +
		"\u0280\x07X\x02\x02\u0280\u029B\x03\x02\x02\x02\u0281\u0285\x07/\x02\x02" +
		"\u0282\u0283\x05\\/\x02\u0283\u0284\x07Y\x02\x02\u0284\u0286\x03\x02\x02" +
		"\x02\u0285\u0282\x03\x02\x02\x02\u0285\u0286\x03\x02\x02\x02\u0286\u0287" +
		"\x03\x02\x02\x02\u0287\u0288\x07W\x02\x02\u0288\u0289\x076\x02\x02\u0289" +
		"\u029B\x07X\x02\x02\u028A\u028B\x070\x02\x02\u028B\u028C\x07W\x02\x02" +
		"\u028C\u028D\x05|?\x02\u028D\u028E\x07X\x02\x02\u028E\u028F\x07Y\x02\x02" +
		"\u028F\u0290\x074\x02\x02\u0290\u029B\x03\x02\x02\x02\u0291\u0292\x07" +
		"0\x02\x02\u0292\u0293\x07W\x02\x02\u0293\u0294\x076\x02\x02\u0294\u0295" +
		"\x07X\x02\x02\u0295\u0298\x07Y\x02\x02\u0296\u0299\x05\\/\x02\u0297\u0299" +
		"\x07T\x02\x02\u0298\u0296\x03\x02\x02\x02\u0298\u0297\x03\x02\x02\x02" +
		"\u0299\u029B\x03\x02\x02\x02\u029A\u027A\x03\x02\x02\x02\u029A\u0281\x03" +
		"\x02\x02\x02\u029A\u028A\x03\x02\x02\x02\u029A\u0291\x03\x02\x02\x02\u029B" +
		"U\x03\x02\x02\x02\u029C\u029D\x05\x82B\x02\u029DW\x03\x02\x02\x02\u029E" +
		"\u029F\x05\x82B\x02\u029FY\x03\x02\x02\x02\u02A0\u02A1\t\x07\x02\x02\u02A1" +
		"[\x03\x02\x02\x02\u02A2\u02A3\t\b\x02\x02\u02A3]\x03\x02\x02\x02\u02A4" +
		"\u02A5\t\t\x02\x02\u02A5_\x03\x02\x02\x02\u02A6\u02A7\t\n\x02\x02\u02A7" +
		"a\x03\x02\x02\x02\u02A8\u02A9\t\v\x02\x02\u02A9c\x03\x02\x02\x02\u02AA" +
		"\u02AB\t\f\x02\x02\u02ABe\x03\x02\x02\x02\u02AC\u02AF\x05d3\x02\u02AD" +
		"\u02AF\x07>\x02\x02\u02AE\u02AC\x03\x02\x02\x02\u02AE\u02AD\x03\x02\x02" +
		"\x02\u02AFg\x03\x02\x02\x02\u02B0\u02B3\x05d3\x02\u02B1\u02B3\x07@\x02" +
		"\x02\u02B2\u02B0\x03\x02\x02\x02\u02B2\u02B1\x03\x02\x02\x02\u02B3i\x03" +
		"\x02\x02\x02\u02B4\u02B7\x05d3\x02\u02B5\u02B7\x07A\x02\x02\u02B6\u02B4" +
		"\x03\x02\x02\x02\u02B6\u02B5\x03\x02\x02\x02\u02B7k\x03\x02\x02\x02\u02B8" +
		"\u02B9\t\r\x02\x02\u02B9m\x03\x02\x02\x02\u02BA\u02BB\x07\x05\x02\x02" +
		"\u02BB\u02C0\x05p9\x02\u02BC\u02BD\x05p9\x02\u02BD\u02BE\x07\x06\x02\x02" +
		"\u02BE\u02C0\x03\x02\x02\x02\u02BF\u02BA\x03\x02\x02\x02\u02BF\u02BC\x03" +
		"\x02\x02\x02\u02C0o\x03\x02\x02\x02\u02C1\u02C2\x07D\x02\x02\u02C2q\x03" +
		"\x02\x02\x02\u02C3\u02CA\x07\x07\x02\x02\u02C4\u02C8\x05t;\x02\u02C5\u02C9" +
		"\x05Z.\x02\u02C6\u02C9\x05\x82B\x02\u02C7\u02C9\x05p9\x02\u02C8\u02C5" +
		"\x03\x02\x02\x02\u02C8\u02C6\x03\x02\x02\x02\u02C8\u02C7\x03\x02\x02\x02" +
		"\u02C9\u02CB\x03\x02\x02\x02\u02CA\u02C4\x03\x02\x02\x02\u02CA\u02CB\x03" +
		"\x02\x02\x02\u02CB\u02CC\x03\x02\x02\x02\u02CC\u02CD\x07E\x02\x02\u02CD" +
		"s\x03\x02\x02\x02\u02CE\u02CF\t\x0E\x02\x02\u02CFu\x03\x02\x02\x02\u02D0" +
		"\u02D1\x07F\x02\x02\u02D1w\x03\x02\x02\x02\u02D2\u02D3\x07V\x02\x02\u02D3" +
		"y\x03\x02\x02\x02\u02D4\u02D5\x07U\x02\x02\u02D5{\x03\x02\x02\x02\u02D6" +
		"\u02D7\x05\x82B\x02\u02D7}\x03\x02\x02\x02\u02D8\u02D9\x05\x82B\x02\u02D9" +
		"\x7F\x03\x02\x02\x02\u02DA\u02DB\x05\x82B\x02\u02DB\x81\x03\x02\x02\x02" +
		"\u02DC\u02DD\bB\x01\x02\u02DD\u02DE\x07W\x02\x02\u02DE\u02DF\x05\x82B" +
		"\x02\u02DF\u02E0\x07X\x02\x02\u02E0\u02E4\x03\x02\x02\x02\u02E1\u02E4" +
		"\x05\x8CG\x02\u02E2\u02E4\x05p9\x02\u02E3\u02DC\x03\x02\x02\x02\u02E3" +
		"\u02E1\x03\x02\x02\x02\u02E3\u02E2\x03\x02\x02\x02\u02E4\u02EB\x03\x02" +
		"\x02\x02\u02E5\u02E6\f\x06\x02\x02\u02E6\u02E7\x05\x84C\x02\u02E7\u02E8" +
		"\x05\x82B\x07\u02E8\u02EA\x03\x02\x02\x02\u02E9\u02E5\x03\x02\x02\x02" +
		"\u02EA\u02ED\x03\x02\x02\x02\u02EB\u02E9\x03\x02\x02\x02\u02EB\u02EC\x03" +
		"\x02\x02\x02\u02EC\x83\x03\x02\x02\x02\u02ED\u02EB\x03\x02\x02\x02\u02EE" +
		"\u02F2\x05\x86D\x02\u02EF\u02F2\x05\x88E\x02\u02F0\u02F2\x05\x8AF\x02" +
		"\u02F1\u02EE\x03\x02\x02\x02\u02F1\u02EF\x03\x02\x02\x02\u02F1\u02F0\x03" +
		"\x02\x02\x02\u02F2\x85\x03\x02\x02\x02\u02F3\u02F4\t\x0F\x02\x02\u02F4" +
		"\x87\x03\x02\x02\x02\u02F5\u02F6\x07J\x02\x02\u02F6\x89\x03\x02\x02\x02" +
		"\u02F7\u02F8\x07K\x02\x02\u02F8\x8B\x03\x02\x02\x02\u02F9\u02FB\t\x10" +
		"\x02\x02\u02FA\u02F9\x03\x02\x02\x02\u02FA\u02FB\x03\x02\x02\x02\u02FB" +
		"\u0300\x03\x02\x02\x02\u02FC\u0301\x05\x8EH\x02\u02FD\u0301\x05\x90I\x02" +
		"\u02FE\u0301\x05\x92J\x02\u02FF\u0301\x05\x94K\x02\u0300\u02FC\x03\x02" +
		"\x02\x02\u0300\u02FD\x03\x02\x02\x02\u0300\u02FE\x03\x02\x02\x02\u0300" +
		"\u02FF\x03\x02\x02\x02\u0301\x8D\x03\x02\x02\x02\u0302\u0303\x07P\x02" +
		"\x02\u0303\x8F\x03\x02\x02\x02\u0304\u0305\x07Q\x02\x02\u0305\x91\x03" +
		"\x02\x02\x02\u0306\u0307\t\x11\x02\x02\u0307\x93\x03\x02\x02\x02\u0308" +
		"\u0309\t\x12\x02\x02\u0309\x95\x03\x02\x02\x02F\x97\x9C\xA1\xA5\xAA\xAD" +
		"\xB1\xB4\xC3\xD6\xE4\xEB\xF3\xF9\xFE\u0103\u0106\u0111\u0128\u0139\u013F" +
		"\u0178\u0189\u018E\u0193\u01A6\u01AD\u01AF\u01B4\u01BF\u01C8\u01CB\u01D0" +
		"\u01D6\u01DB\u01E3\u01E6\u01EC\u01F5\u01F8\u01FC\u020A\u020F\u021A\u0226" +
		"\u022A\u023A\u0249\u0251\u025C\u0261\u0267\u026C\u026E\u0285\u0298\u029A" +
		"\u02AE\u02B2\u02B6\u02BF\u02C8\u02CA\u02E3\u02EB\u02F1\u02FA\u0300";
	public static readonly _serializedATN: string = Utils.join(
		[
			z80asmParser._serializedATNSegment0,
			z80asmParser._serializedATNSegment1,
		],
		"",
	);
	public static __ATN: ATN;
	public static get _ATN(): ATN {
		if (!z80asmParser.__ATN) {
			z80asmParser.__ATN = new ATNDeserializer().deserialize(Utils.toCharArray(z80asmParser._serializedATN));
		}

		return z80asmParser.__ATN;
	}

}

export class FileContext extends ParserRuleContext {
	public EOF(): TerminalNode { return this.getToken(z80asmParser.EOF, 0); }
	public asm(): AsmContext | undefined {
		return this.tryGetRuleContext(0, AsmContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_file; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterFile) {
			listener.enterFile(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitFile) {
			listener.exitFile(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitFile) {
			return visitor.visitFile(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class AsmContext extends ParserRuleContext {
	public EOL(): TerminalNode[];
	public EOL(i: number): TerminalNode;
	public EOL(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(z80asmParser.EOL);
		} else {
			return this.getToken(z80asmParser.EOL, i);
		}
	}
	public line(): LineContext[];
	public line(i: number): LineContext;
	public line(i?: number): LineContext | LineContext[] {
		if (i === undefined) {
			return this.getRuleContexts(LineContext);
		} else {
			return this.getRuleContext(i, LineContext);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_asm; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterAsm) {
			listener.enterAsm(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitAsm) {
			listener.exitAsm(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitAsm) {
			return visitor.visitAsm(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class LineContext extends ParserRuleContext {
	public directive(): DirectiveContext | undefined {
		return this.tryGetRuleContext(0, DirectiveContext);
	}
	public comment(): CommentContext | undefined {
		return this.tryGetRuleContext(0, CommentContext);
	}
	public label(): LabelContext | undefined {
		return this.tryGetRuleContext(0, LabelContext);
	}
	public instruction(): InstructionContext | undefined {
		return this.tryGetRuleContext(0, InstructionContext);
	}
	public blockcomment(): BlockcommentContext | undefined {
		return this.tryGetRuleContext(0, BlockcommentContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_line; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterLine) {
			listener.enterLine(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitLine) {
			listener.exitLine(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitLine) {
			return visitor.visitLine(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class DirectiveContext extends ParserRuleContext {
	public directive_void(): Directive_voidContext | undefined {
		return this.tryGetRuleContext(0, Directive_voidContext);
	}
	public directive_param16(): Directive_param16Context | undefined {
		return this.tryGetRuleContext(0, Directive_param16Context);
	}
	public directive_param32(): Directive_param32Context | undefined {
		return this.tryGetRuleContext(0, Directive_param32Context);
	}
	public directive_block(): Directive_blockContext | undefined {
		return this.tryGetRuleContext(0, Directive_blockContext);
	}
	public directive_symbol(): Directive_symbolContext | undefined {
		return this.tryGetRuleContext(0, Directive_symbolContext);
	}
	public directive_symbollist(): Directive_symbollistContext | undefined {
		return this.tryGetRuleContext(0, Directive_symbollistContext);
	}
	public directive_assign(): Directive_assignContext | undefined {
		return this.tryGetRuleContext(0, Directive_assignContext);
	}
	public directive_defs(): Directive_defsContext | undefined {
		return this.tryGetRuleContext(0, Directive_defsContext);
	}
	public directive_defm(): Directive_defmContext | undefined {
		return this.tryGetRuleContext(0, Directive_defmContext);
	}
	public directive_if(): Directive_ifContext | undefined {
		return this.tryGetRuleContext(0, Directive_ifContext);
	}
	public directive_ifdef(): Directive_ifdefContext | undefined {
		return this.tryGetRuleContext(0, Directive_ifdefContext);
	}
	public directive_elseblock(): Directive_elseblockContext | undefined {
		return this.tryGetRuleContext(0, Directive_elseblockContext);
	}
	public directive_endif(): Directive_endifContext | undefined {
		return this.tryGetRuleContext(0, Directive_endifContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective) {
			listener.enterDirective(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective) {
			listener.exitDirective(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective) {
			return visitor.visitDirective(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_voidContext extends ParserRuleContext {
	public DIRECTIVEvoid(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEvoid, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_void; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_void) {
			listener.enterDirective_void(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_void) {
			listener.exitDirective_void(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_void) {
			return visitor.visitDirective_void(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_param16Context extends ParserRuleContext {
	public DIRECTIVEparam16(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEparam16, 0); }
	public expression16(): Expression16Context {
		return this.getRuleContext(0, Expression16Context);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_param16; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_param16) {
			listener.enterDirective_param16(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_param16) {
			listener.exitDirective_param16(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_param16) {
			return visitor.visitDirective_param16(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_param32Context extends ParserRuleContext {
	public DIRECTIVEparam32(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEparam32, 0); }
	public expression32(): Expression32Context {
		return this.getRuleContext(0, Expression32Context);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_param32; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_param32) {
			listener.enterDirective_param32(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_param32) {
			listener.exitDirective_param32(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_param32) {
			return visitor.visitDirective_param32(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_symbolContext extends ParserRuleContext {
	public DIRECTIVEsymbol(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEsymbol, 0); }
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_symbol; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_symbol) {
			listener.enterDirective_symbol(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_symbol) {
			listener.exitDirective_symbol(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_symbol) {
			return visitor.visitDirective_symbol(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_symbollistContext extends ParserRuleContext {
	public DIRECTIVEsymbollist(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEsymbollist, 0); }
	public symbol(): SymbolContext[];
	public symbol(i: number): SymbolContext;
	public symbol(i?: number): SymbolContext | SymbolContext[] {
		if (i === undefined) {
			return this.getRuleContexts(SymbolContext);
		} else {
			return this.getRuleContext(i, SymbolContext);
		}
	}
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(z80asmParser.COMMA);
		} else {
			return this.getToken(z80asmParser.COMMA, i);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_symbollist; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_symbollist) {
			listener.enterDirective_symbollist(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_symbollist) {
			listener.exitDirective_symbollist(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_symbollist) {
			return visitor.visitDirective_symbollist(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_assignContext extends ParserRuleContext {
	public DIRECTIVEassign(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEassign, 0); }
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_assign; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_assign) {
			listener.enterDirective_assign(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_assign) {
			listener.exitDirective_assign(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_assign) {
			return visitor.visitDirective_assign(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_blockContext extends ParserRuleContext {
	public DIRECTIVEblock(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEblock, 0); }
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(z80asmParser.COMMA);
		} else {
			return this.getToken(z80asmParser.COMMA, i);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_block; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_block) {
			listener.enterDirective_block(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_block) {
			listener.exitDirective_block(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_block) {
			return visitor.visitDirective_block(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_defsContext extends ParserRuleContext {
	public DIRECTIVEdefs(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEdefs, 0); }
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public COMMA(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.COMMA, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_defs; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_defs) {
			listener.enterDirective_defs(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_defs) {
			listener.exitDirective_defs(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_defs) {
			return visitor.visitDirective_defs(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_defmContext extends ParserRuleContext {
	public DIRECTIVEdefm(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEdefm, 0); }
	public defmparam(): DefmparamContext[];
	public defmparam(i: number): DefmparamContext;
	public defmparam(i?: number): DefmparamContext | DefmparamContext[] {
		if (i === undefined) {
			return this.getRuleContexts(DefmparamContext);
		} else {
			return this.getRuleContext(i, DefmparamContext);
		}
	}
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(z80asmParser.COMMA);
		} else {
			return this.getToken(z80asmParser.COMMA, i);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_defm; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_defm) {
			listener.enterDirective_defm(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_defm) {
			listener.exitDirective_defm(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_defm) {
			return visitor.visitDirective_defm(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class DefmparamContext extends ParserRuleContext {
	public string(): StringContext | undefined {
		return this.tryGetRuleContext(0, StringContext);
	}
	public character(): CharacterContext | undefined {
		return this.tryGetRuleContext(0, CharacterContext);
	}
	public expression8(): Expression8Context | undefined {
		return this.tryGetRuleContext(0, Expression8Context);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_defmparam; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDefmparam) {
			listener.enterDefmparam(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDefmparam) {
			listener.exitDefmparam(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDefmparam) {
			return visitor.visitDefmparam(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_ifContext extends ParserRuleContext {
	public DIRECTIVEif(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEif, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	public comment(): CommentContext | undefined {
		return this.tryGetRuleContext(0, CommentContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_if; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_if) {
			listener.enterDirective_if(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_if) {
			listener.exitDirective_if(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_if) {
			return visitor.visitDirective_if(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_ifdefContext extends ParserRuleContext {
	public DIRECTIVEifdef(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEifdef, 0); }
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public comment(): CommentContext | undefined {
		return this.tryGetRuleContext(0, CommentContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_ifdef; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_ifdef) {
			listener.enterDirective_ifdef(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_ifdef) {
			listener.exitDirective_ifdef(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_ifdef) {
			return visitor.visitDirective_ifdef(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_ifblockContext extends ParserRuleContext {
	public directive_endif(): Directive_endifContext {
		return this.getRuleContext(0, Directive_endifContext);
	}
	public directive_elseblock(): Directive_elseblockContext | undefined {
		return this.tryGetRuleContext(0, Directive_elseblockContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_ifblock; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_ifblock) {
			listener.enterDirective_ifblock(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_ifblock) {
			listener.exitDirective_ifblock(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_ifblock) {
			return visitor.visitDirective_ifblock(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_elseblockContext extends ParserRuleContext {
	public DIRECTIVEelse(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEelse, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_elseblock; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_elseblock) {
			listener.enterDirective_elseblock(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_elseblock) {
			listener.exitDirective_elseblock(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_elseblock) {
			return visitor.visitDirective_elseblock(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_endifContext extends ParserRuleContext {
	public DIRECTIVEendif(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEendif, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_endif; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_endif) {
			listener.enterDirective_endif(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_endif) {
			listener.exitDirective_endif(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_endif) {
			return visitor.visitDirective_endif(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_phaseContext extends ParserRuleContext {
	public DIRECTIVEphase(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEphase, 0); }
	public expression16(): Expression16Context {
		return this.getRuleContext(0, Expression16Context);
	}
	public asm(): AsmContext {
		return this.getRuleContext(0, AsmContext);
	}
	public DIRECTIVEunphase(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEunphase, 0); }
	public comment(): CommentContext | undefined {
		return this.tryGetRuleContext(0, CommentContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_phase; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_phase) {
			listener.enterDirective_phase(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_phase) {
			listener.exitDirective_phase(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_phase) {
			return visitor.visitDirective_phase(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class InstructionContext extends ParserRuleContext {
	public instruction_void(): Instruction_voidContext | undefined {
		return this.tryGetRuleContext(0, Instruction_voidContext);
	}
	public instruction_ld8(): Instruction_ld8Context | undefined {
		return this.tryGetRuleContext(0, Instruction_ld8Context);
	}
	public instruction_ld16(): Instruction_ld16Context | undefined {
		return this.tryGetRuleContext(0, Instruction_ld16Context);
	}
	public instruction_stack(): Instruction_stackContext | undefined {
		return this.tryGetRuleContext(0, Instruction_stackContext);
	}
	public instruction_exchange(): Instruction_exchangeContext | undefined {
		return this.tryGetRuleContext(0, Instruction_exchangeContext);
	}
	public instruction_arithmetic8(): Instruction_arithmetic8Context | undefined {
		return this.tryGetRuleContext(0, Instruction_arithmetic8Context);
	}
	public instruction_incdec8(): Instruction_incdec8Context | undefined {
		return this.tryGetRuleContext(0, Instruction_incdec8Context);
	}
	public instruction_cpl(): Instruction_cplContext | undefined {
		return this.tryGetRuleContext(0, Instruction_cplContext);
	}
	public instruction_arithemic16(): Instruction_arithemic16Context | undefined {
		return this.tryGetRuleContext(0, Instruction_arithemic16Context);
	}
	public instruction_incdec16(): Instruction_incdec16Context | undefined {
		return this.tryGetRuleContext(0, Instruction_incdec16Context);
	}
	public instruction_rotate(): Instruction_rotateContext | undefined {
		return this.tryGetRuleContext(0, Instruction_rotateContext);
	}
	public instruction_rotatedec(): Instruction_rotatedecContext | undefined {
		return this.tryGetRuleContext(0, Instruction_rotatedecContext);
	}
	public instruction_bit(): Instruction_bitContext | undefined {
		return this.tryGetRuleContext(0, Instruction_bitContext);
	}
	public instruction_jump(): Instruction_jumpContext | undefined {
		return this.tryGetRuleContext(0, Instruction_jumpContext);
	}
	public instruction_call(): Instruction_callContext | undefined {
		return this.tryGetRuleContext(0, Instruction_callContext);
	}
	public instruction_rst(): Instruction_rstContext | undefined {
		return this.tryGetRuleContext(0, Instruction_rstContext);
	}
	public instruction_im(): Instruction_imContext | undefined {
		return this.tryGetRuleContext(0, Instruction_imContext);
	}
	public instruction_io(): Instruction_ioContext | undefined {
		return this.tryGetRuleContext(0, Instruction_ioContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction) {
			listener.enterInstruction(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction) {
			listener.exitInstruction(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction) {
			return visitor.visitInstruction(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_voidContext extends ParserRuleContext {
	public INSTRUCTIONvoid(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONvoid, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_void; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_void) {
			listener.enterInstruction_void(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_void) {
			listener.exitInstruction_void(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_void) {
			return visitor.visitInstruction_void(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_ld8Context extends ParserRuleContext {
	public INSTRUCTIONld(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONld, 0); }
	public registers8(): Registers8Context[];
	public registers8(i: number): Registers8Context;
	public registers8(i?: number): Registers8Context | Registers8Context[] {
		if (i === undefined) {
			return this.getRuleContexts(Registers8Context);
		} else {
			return this.getRuleContext(i, Registers8Context);
		}
	}
	public COMMA(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.COMMA, 0); }
	public registers8x(): Registers8xContext[];
	public registers8x(i: number): Registers8xContext;
	public registers8x(i?: number): Registers8xContext | Registers8xContext[] {
		if (i === undefined) {
			return this.getRuleContexts(Registers8xContext);
		} else {
			return this.getRuleContext(i, Registers8xContext);
		}
	}
	public registers8y(): Registers8yContext[];
	public registers8y(i: number): Registers8yContext;
	public registers8y(i?: number): Registers8yContext | Registers8yContext[] {
		if (i === undefined) {
			return this.getRuleContexts(Registers8yContext);
		} else {
			return this.getRuleContext(i, Registers8yContext);
		}
	}
	public expression8(): Expression8Context | undefined {
		return this.tryGetRuleContext(0, Expression8Context);
	}
	public REG8x(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8x, 0); }
	public REG8y(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8y, 0); }
	public PARopen(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARopen, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public PARclose(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARclose, 0); }
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	public PLUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PLUS, 0); }
	public offset_ex(): Offset_exContext | undefined {
		return this.tryGetRuleContext(0, Offset_exContext);
	}
	public REG8a(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8a, 0); }
	public REG16bc(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16bc, 0); }
	public REG16de(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16de, 0); }
	public expression(): ExpressionContext | undefined {
		return this.tryGetRuleContext(0, ExpressionContext);
	}
	public REG8sys(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8sys, 0); }
	public expression16(): Expression16Context | undefined {
		return this.tryGetRuleContext(0, Expression16Context);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_ld8; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_ld8) {
			listener.enterInstruction_ld8(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_ld8) {
			listener.exitInstruction_ld8(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_ld8) {
			return visitor.visitInstruction_ld8(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_ld16Context extends ParserRuleContext {
	public INSTRUCTIONld(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONld, 0); }
	public COMMA(): TerminalNode { return this.getToken(z80asmParser.COMMA, 0); }
	public expression16(): Expression16Context | undefined {
		return this.tryGetRuleContext(0, Expression16Context);
	}
	public register16_grpsphl(): Register16_grpsphlContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpsphlContext);
	}
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	public PARopen(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARopen, 0); }
	public PARclose(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARclose, 0); }
	public REG16sp(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16sp, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_ld16; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_ld16) {
			listener.enterInstruction_ld16(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_ld16) {
			listener.exitInstruction_ld16(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_ld16) {
			return visitor.visitInstruction_ld16(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_stackContext extends ParserRuleContext {
	public INSTRUCTIONstack(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONstack, 0); }
	public register16_grpaf(): Register16_grpafContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpafContext);
	}
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_stack; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_stack) {
			listener.enterInstruction_stack(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_stack) {
			listener.exitInstruction_stack(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_stack) {
			return visitor.visitInstruction_stack(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_exchangeContext extends ParserRuleContext {
	public INSTRUCTIONexchange(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONexchange, 0); }
	public REG16de(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16de, 0); }
	public COMMA(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.COMMA, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public REG16af(): TerminalNode[];
	public REG16af(i: number): TerminalNode;
	public REG16af(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(z80asmParser.REG16af);
		} else {
			return this.getToken(z80asmParser.REG16af, i);
		}
	}
	public PARopen(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARopen, 0); }
	public REG16sp(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16sp, 0); }
	public PARclose(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARclose, 0); }
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	public INSTRUCTIONexxchange(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONexxchange, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_exchange; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_exchange) {
			listener.enterInstruction_exchange(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_exchange) {
			listener.exitInstruction_exchange(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_exchange) {
			return visitor.visitInstruction_exchange(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_arithmetic8Context extends ParserRuleContext {
	public INSTRUCTIONarithmetic(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONarithmetic, 0); }
	public INSTRUCTIONarithmetic16(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONarithmetic16, 0); }
	public registers8(): Registers8Context | undefined {
		return this.tryGetRuleContext(0, Registers8Context);
	}
	public REG8x(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8x, 0); }
	public REG8y(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8y, 0); }
	public expression8(): Expression8Context | undefined {
		return this.tryGetRuleContext(0, Expression8Context);
	}
	public REG8a(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8a, 0); }
	public COMMA(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.COMMA, 0); }
	public PARopen(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARopen, 0); }
	public PARclose(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARclose, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	public PLUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PLUS, 0); }
	public offset_ex(): Offset_exContext | undefined {
		return this.tryGetRuleContext(0, Offset_exContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_arithmetic8; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_arithmetic8) {
			listener.enterInstruction_arithmetic8(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_arithmetic8) {
			listener.exitInstruction_arithmetic8(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_arithmetic8) {
			return visitor.visitInstruction_arithmetic8(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_incdec8Context extends ParserRuleContext {
	public INSTRUCTIONincdec(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONincdec, 0); }
	public registers8(): Registers8Context | undefined {
		return this.tryGetRuleContext(0, Registers8Context);
	}
	public REG8x(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8x, 0); }
	public REG8y(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8y, 0); }
	public PARopen(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARopen, 0); }
	public PARclose(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARclose, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	public PLUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PLUS, 0); }
	public offset_ex(): Offset_exContext | undefined {
		return this.tryGetRuleContext(0, Offset_exContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_incdec8; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_incdec8) {
			listener.enterInstruction_incdec8(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_incdec8) {
			listener.exitInstruction_incdec8(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_incdec8) {
			return visitor.visitInstruction_incdec8(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_cplContext extends ParserRuleContext {
	public INSTRUCTIONcpl(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONcpl, 0); }
	public REG8a(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8a, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_cpl; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_cpl) {
			listener.enterInstruction_cpl(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_cpl) {
			listener.exitInstruction_cpl(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_cpl) {
			return visitor.visitInstruction_cpl(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_arithemic16Context extends ParserRuleContext {
	public INSTRUCTIONarithmetic16(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONarithmetic16, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public COMMA(): TerminalNode { return this.getToken(z80asmParser.COMMA, 0); }
	public register16_grpsphl(): Register16_grpsphlContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpsphlContext);
	}
	public REG16ix(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16ix, 0); }
	public register16_grpspix(): Register16_grpspixContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpspixContext);
	}
	public REG16iy(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16iy, 0); }
	public register16_grpspiy(): Register16_grpspiyContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpspiyContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_arithemic16; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_arithemic16) {
			listener.enterInstruction_arithemic16(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_arithemic16) {
			listener.exitInstruction_arithemic16(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_arithemic16) {
			return visitor.visitInstruction_arithemic16(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_incdec16Context extends ParserRuleContext {
	public INSTRUCTIONincdec(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONincdec, 0); }
	public register16_grpsphl(): Register16_grpsphlContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpsphlContext);
	}
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_incdec16; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_incdec16) {
			listener.enterInstruction_incdec16(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_incdec16) {
			listener.exitInstruction_incdec16(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_incdec16) {
			return visitor.visitInstruction_incdec16(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_rotateContext extends ParserRuleContext {
	public INSTRUCTIONrotate(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONrotate, 0); }
	public registers8(): Registers8Context | undefined {
		return this.tryGetRuleContext(0, Registers8Context);
	}
	public PARopen(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARopen, 0); }
	public PARclose(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARclose, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	public PLUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PLUS, 0); }
	public offset_ex(): Offset_exContext | undefined {
		return this.tryGetRuleContext(0, Offset_exContext);
	}
	public COMMA(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.COMMA, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_rotate; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_rotate) {
			listener.enterInstruction_rotate(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_rotate) {
			listener.exitInstruction_rotate(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_rotate) {
			return visitor.visitInstruction_rotate(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_rotatedecContext extends ParserRuleContext {
	public INSTRUCTIONrotatedec(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONrotatedec, 0); }
	public REG8a(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8a, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_rotatedec; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_rotatedec) {
			listener.enterInstruction_rotatedec(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_rotatedec) {
			listener.exitInstruction_rotatedec(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_rotatedec) {
			return visitor.visitInstruction_rotatedec(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_bitContext extends ParserRuleContext {
	public INSTRUCTIONbit(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONbit, 0); }
	public bitindex(): BitindexContext {
		return this.getRuleContext(0, BitindexContext);
	}
	public COMMA(): TerminalNode[];
	public COMMA(i: number): TerminalNode;
	public COMMA(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(z80asmParser.COMMA);
		} else {
			return this.getToken(z80asmParser.COMMA, i);
		}
	}
	public registers8(): Registers8Context | undefined {
		return this.tryGetRuleContext(0, Registers8Context);
	}
	public PARopen(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARopen, 0); }
	public PARclose(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARclose, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	public PLUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PLUS, 0); }
	public offset_ex(): Offset_exContext | undefined {
		return this.tryGetRuleContext(0, Offset_exContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_bit; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_bit) {
			listener.enterInstruction_bit(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_bit) {
			listener.exitInstruction_bit(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_bit) {
			return visitor.visitInstruction_bit(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class BitindexContext extends ParserRuleContext {
	public BIT8(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.BIT8, 0); }
	public INTERRUPTMODE(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INTERRUPTMODE, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_bitindex; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterBitindex) {
			listener.enterBitindex(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitBitindex) {
			listener.exitBitindex(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitBitindex) {
			return visitor.visitBitindex(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_jumpContext extends ParserRuleContext {
	public INSTRUCTIONjump(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONjump, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	public expression16(): Expression16Context | undefined {
		return this.tryGetRuleContext(0, Expression16Context);
	}
	public instruction_conditionFlagsAll(): Instruction_conditionFlagsAllContext | undefined {
		return this.tryGetRuleContext(0, Instruction_conditionFlagsAllContext);
	}
	public COMMA(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.COMMA, 0); }
	public INSTRUCTIONjumprel(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONjumprel, 0); }
	public offset_rel(): Offset_relContext | undefined {
		return this.tryGetRuleContext(0, Offset_relContext);
	}
	public instruction_conditionFlags(): Instruction_conditionFlagsContext | undefined {
		return this.tryGetRuleContext(0, Instruction_conditionFlagsContext);
	}
	public INSTRUCTIONjumprelnz(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONjumprelnz, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_jump; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_jump) {
			listener.enterInstruction_jump(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_jump) {
			listener.exitInstruction_jump(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_jump) {
			return visitor.visitInstruction_jump(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_callContext extends ParserRuleContext {
	public INSTRUCTIONcall(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONcall, 0); }
	public expression16(): Expression16Context | undefined {
		return this.tryGetRuleContext(0, Expression16Context);
	}
	public instruction_conditionFlagsAll(): Instruction_conditionFlagsAllContext | undefined {
		return this.tryGetRuleContext(0, Instruction_conditionFlagsAllContext);
	}
	public COMMA(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.COMMA, 0); }
	public INSTRUCTIONret(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONret, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_call; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_call) {
			listener.enterInstruction_call(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_call) {
			listener.exitInstruction_call(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_call) {
			return visitor.visitInstruction_call(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_conditionFlagsAllContext extends ParserRuleContext {
	public CONDITIONflagsex(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.CONDITIONflagsex, 0); }
	public CONDITIONflags(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.CONDITIONflags, 0); }
	public REG8c(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8c, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_conditionFlagsAll; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_conditionFlagsAll) {
			listener.enterInstruction_conditionFlagsAll(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_conditionFlagsAll) {
			listener.exitInstruction_conditionFlagsAll(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_conditionFlagsAll) {
			return visitor.visitInstruction_conditionFlagsAll(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_conditionFlagsContext extends ParserRuleContext {
	public CONDITIONflags(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.CONDITIONflags, 0); }
	public REG8c(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8c, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_conditionFlags; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_conditionFlags) {
			listener.enterInstruction_conditionFlags(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_conditionFlags) {
			listener.exitInstruction_conditionFlags(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_conditionFlags) {
			return visitor.visitInstruction_conditionFlags(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_rstContext extends ParserRuleContext {
	public INSTRUCTIONrst(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONrst, 0); }
	public INSTRUCTIONrstvectorhex(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONrstvectorhex, 0); }
	public INSTRUCTIONrstvector(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONrstvector, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_rst; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_rst) {
			listener.enterInstruction_rst(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_rst) {
			listener.exitInstruction_rst(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_rst) {
			return visitor.visitInstruction_rst(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_imContext extends ParserRuleContext {
	public INSTRUCTIONim(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONim, 0); }
	public INTERRUPTMODE(): TerminalNode { return this.getToken(z80asmParser.INTERRUPTMODE, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_im; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_im) {
			listener.enterInstruction_im(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_im) {
			listener.exitInstruction_im(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_im) {
			return visitor.visitInstruction_im(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Instruction_ioContext extends ParserRuleContext {
	public INSTRUCTIONin(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONin, 0); }
	public REG8a(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8a, 0); }
	public COMMA(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.COMMA, 0); }
	public PARopen(): TerminalNode { return this.getToken(z80asmParser.PARopen, 0); }
	public expression8(): Expression8Context | undefined {
		return this.tryGetRuleContext(0, Expression8Context);
	}
	public PARclose(): TerminalNode { return this.getToken(z80asmParser.PARclose, 0); }
	public REG8c(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8c, 0); }
	public registers8(): Registers8Context | undefined {
		return this.tryGetRuleContext(0, Registers8Context);
	}
	public INSTRUCTIONout(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONout, 0); }
	public ZERO(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.ZERO, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_instruction_io; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterInstruction_io) {
			listener.enterInstruction_io(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitInstruction_io) {
			listener.exitInstruction_io(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitInstruction_io) {
			return visitor.visitInstruction_io(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Offset_exContext extends ParserRuleContext {
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_offset_ex; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterOffset_ex) {
			listener.enterOffset_ex(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitOffset_ex) {
			listener.exitOffset_ex(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitOffset_ex) {
			return visitor.visitOffset_ex(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Offset_relContext extends ParserRuleContext {
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_offset_rel; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterOffset_rel) {
			listener.enterOffset_rel(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitOffset_rel) {
			listener.exitOffset_rel(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitOffset_rel) {
			return visitor.visitOffset_rel(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class RegistersContext extends ParserRuleContext {
	public REG8a(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8a, 0); }
	public REG8b(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8b, 0); }
	public REG8c(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8c, 0); }
	public REG8d(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8d, 0); }
	public REG8e(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8e, 0); }
	public REG8h(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8h, 0); }
	public REG8l(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8l, 0); }
	public REG8x(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8x, 0); }
	public REG8y(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8y, 0); }
	public REG8sys(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8sys, 0); }
	public REG16af(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16af, 0); }
	public REG16bc(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16bc, 0); }
	public REG16de(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16de, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public REG16ix(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16ix, 0); }
	public REG16iy(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16iy, 0); }
	public REG16sp(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16sp, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_registers; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterRegisters) {
			listener.enterRegisters(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitRegisters) {
			listener.exitRegisters(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitRegisters) {
			return visitor.visitRegisters(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Registers8Context extends ParserRuleContext {
	public REG8a(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8a, 0); }
	public REG8b(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8b, 0); }
	public REG8c(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8c, 0); }
	public REG8d(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8d, 0); }
	public REG8e(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8e, 0); }
	public REG8h(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8h, 0); }
	public REG8l(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8l, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_registers8; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterRegisters8) {
			listener.enterRegisters8(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitRegisters8) {
			listener.exitRegisters8(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitRegisters8) {
			return visitor.visitRegisters8(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Registers8xContext extends ParserRuleContext {
	public REG8a(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8a, 0); }
	public REG8b(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8b, 0); }
	public REG8c(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8c, 0); }
	public REG8d(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8d, 0); }
	public REG8e(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8e, 0); }
	public REG8x(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8x, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_registers8x; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterRegisters8x) {
			listener.enterRegisters8x(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitRegisters8x) {
			listener.exitRegisters8x(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitRegisters8x) {
			return visitor.visitRegisters8x(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Registers8yContext extends ParserRuleContext {
	public REG8a(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8a, 0); }
	public REG8b(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8b, 0); }
	public REG8c(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8c, 0); }
	public REG8d(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8d, 0); }
	public REG8e(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8e, 0); }
	public REG8y(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8y, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_registers8y; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterRegisters8y) {
			listener.enterRegisters8y(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitRegisters8y) {
			listener.exitRegisters8y(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitRegisters8y) {
			return visitor.visitRegisters8y(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Register16_grpafContext extends ParserRuleContext {
	public REG16af(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16af, 0); }
	public REG16bc(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16bc, 0); }
	public REG16de(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16de, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_register16_grpaf; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterRegister16_grpaf) {
			listener.enterRegister16_grpaf(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitRegister16_grpaf) {
			listener.exitRegister16_grpaf(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitRegister16_grpaf) {
			return visitor.visitRegister16_grpaf(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Register16_grpspContext extends ParserRuleContext {
	public REG16sp(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16sp, 0); }
	public REG16bc(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16bc, 0); }
	public REG16de(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16de, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_register16_grpsp; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterRegister16_grpsp) {
			listener.enterRegister16_grpsp(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitRegister16_grpsp) {
			listener.exitRegister16_grpsp(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitRegister16_grpsp) {
			return visitor.visitRegister16_grpsp(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Register16_grpsphlContext extends ParserRuleContext {
	public register16_grpsp(): Register16_grpspContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpspContext);
	}
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_register16_grpsphl; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterRegister16_grpsphl) {
			listener.enterRegister16_grpsphl(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitRegister16_grpsphl) {
			listener.exitRegister16_grpsphl(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitRegister16_grpsphl) {
			return visitor.visitRegister16_grpsphl(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Register16_grpspixContext extends ParserRuleContext {
	public register16_grpsp(): Register16_grpspContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpspContext);
	}
	public REG16ix(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16ix, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_register16_grpspix; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterRegister16_grpspix) {
			listener.enterRegister16_grpspix(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitRegister16_grpspix) {
			listener.exitRegister16_grpspix(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitRegister16_grpspix) {
			return visitor.visitRegister16_grpspix(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Register16_grpspiyContext extends ParserRuleContext {
	public register16_grpsp(): Register16_grpspContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpspContext);
	}
	public REG16iy(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16iy, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_register16_grpspiy; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterRegister16_grpspiy) {
			listener.enterRegister16_grpspiy(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitRegister16_grpspiy) {
			listener.exitRegister16_grpspiy(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitRegister16_grpspiy) {
			return visitor.visitRegister16_grpspiy(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Register16_exContext extends ParserRuleContext {
	public REG16ix(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16ix, 0); }
	public REG16iy(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16iy, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_register16_ex; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterRegister16_ex) {
			listener.enterRegister16_ex(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitRegister16_ex) {
			listener.exitRegister16_ex(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitRegister16_ex) {
			return visitor.visitRegister16_ex(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class LabelContext extends ParserRuleContext {
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_label; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterLabel) {
			listener.enterLabel(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitLabel) {
			listener.exitLabel(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitLabel) {
			return visitor.visitLabel(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class SymbolContext extends ParserRuleContext {
	public SYMBOL(): TerminalNode { return this.getToken(z80asmParser.SYMBOL, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_symbol; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterSymbol) {
			listener.enterSymbol(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitSymbol) {
			listener.exitSymbol(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitSymbol) {
			return visitor.visitSymbol(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class BlockcommentContext extends ParserRuleContext {
	public BLOCKCOMMENTtext(): TerminalNode { return this.getToken(z80asmParser.BLOCKCOMMENTtext, 0); }
	public blockcomment_param(): Blockcomment_paramContext | undefined {
		return this.tryGetRuleContext(0, Blockcomment_paramContext);
	}
	public registers(): RegistersContext | undefined {
		return this.tryGetRuleContext(0, RegistersContext);
	}
	public expression(): ExpressionContext | undefined {
		return this.tryGetRuleContext(0, ExpressionContext);
	}
	public symbol(): SymbolContext | undefined {
		return this.tryGetRuleContext(0, SymbolContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_blockcomment; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterBlockcomment) {
			listener.enterBlockcomment(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitBlockcomment) {
			listener.exitBlockcomment(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitBlockcomment) {
			return visitor.visitBlockcomment(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Blockcomment_paramContext extends ParserRuleContext {
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_blockcomment_param; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterBlockcomment_param) {
			listener.enterBlockcomment_param(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitBlockcomment_param) {
			listener.exitBlockcomment_param(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitBlockcomment_param) {
			return visitor.visitBlockcomment_param(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class CommentContext extends ParserRuleContext {
	public COMMENT(): TerminalNode { return this.getToken(z80asmParser.COMMENT, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_comment; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterComment) {
			listener.enterComment(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitComment) {
			listener.exitComment(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitComment) {
			return visitor.visitComment(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class StringContext extends ParserRuleContext {
	public STRING(): TerminalNode { return this.getToken(z80asmParser.STRING, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_string; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterString) {
			listener.enterString(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitString) {
			listener.exitString(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitString) {
			return visitor.visitString(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class CharacterContext extends ParserRuleContext {
	public CHARACTER(): TerminalNode { return this.getToken(z80asmParser.CHARACTER, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_character; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterCharacter) {
			listener.enterCharacter(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitCharacter) {
			listener.exitCharacter(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitCharacter) {
			return visitor.visitCharacter(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Expression8Context extends ParserRuleContext {
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_expression8; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterExpression8) {
			listener.enterExpression8(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitExpression8) {
			listener.exitExpression8(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitExpression8) {
			return visitor.visitExpression8(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Expression16Context extends ParserRuleContext {
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_expression16; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterExpression16) {
			listener.enterExpression16(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitExpression16) {
			listener.exitExpression16(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitExpression16) {
			return visitor.visitExpression16(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Expression32Context extends ParserRuleContext {
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_expression32; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterExpression32) {
			listener.enterExpression32(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitExpression32) {
			listener.exitExpression32(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitExpression32) {
			return visitor.visitExpression32(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class ExpressionContext extends ParserRuleContext {
	public expression(): ExpressionContext[];
	public expression(i: number): ExpressionContext;
	public expression(i?: number): ExpressionContext | ExpressionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(ExpressionContext);
		} else {
			return this.getRuleContext(i, ExpressionContext);
		}
	}
	public operator(): OperatorContext | undefined {
		return this.tryGetRuleContext(0, OperatorContext);
	}
	public PARopen(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARopen, 0); }
	public PARclose(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARclose, 0); }
	public number(): NumberContext | undefined {
		return this.tryGetRuleContext(0, NumberContext);
	}
	public symbol(): SymbolContext | undefined {
		return this.tryGetRuleContext(0, SymbolContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_expression; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterExpression) {
			listener.enterExpression(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitExpression) {
			listener.exitExpression(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitExpression) {
			return visitor.visitExpression(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class OperatorContext extends ParserRuleContext {
	public operator_num(): Operator_numContext | undefined {
		return this.tryGetRuleContext(0, Operator_numContext);
	}
	public operator_bit(): Operator_bitContext | undefined {
		return this.tryGetRuleContext(0, Operator_bitContext);
	}
	public operator_logic(): Operator_logicContext | undefined {
		return this.tryGetRuleContext(0, Operator_logicContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_operator; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterOperator) {
			listener.enterOperator(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitOperator) {
			listener.exitOperator(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitOperator) {
			return visitor.visitOperator(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Operator_numContext extends ParserRuleContext {
	public OPERATORnum(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.OPERATORnum, 0); }
	public MINUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.MINUS, 0); }
	public PLUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PLUS, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_operator_num; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterOperator_num) {
			listener.enterOperator_num(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitOperator_num) {
			listener.exitOperator_num(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitOperator_num) {
			return visitor.visitOperator_num(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Operator_bitContext extends ParserRuleContext {
	public OPERATORbit(): TerminalNode { return this.getToken(z80asmParser.OPERATORbit, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_operator_bit; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterOperator_bit) {
			listener.enterOperator_bit(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitOperator_bit) {
			listener.exitOperator_bit(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitOperator_bit) {
			return visitor.visitOperator_bit(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Operator_logicContext extends ParserRuleContext {
	public OPERATORlogic(): TerminalNode { return this.getToken(z80asmParser.OPERATORlogic, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_operator_logic; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterOperator_logic) {
			listener.enterOperator_logic(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitOperator_logic) {
			listener.exitOperator_logic(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitOperator_logic) {
			return visitor.visitOperator_logic(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class NumberContext extends ParserRuleContext {
	public number_bin(): Number_binContext | undefined {
		return this.tryGetRuleContext(0, Number_binContext);
	}
	public number_oct(): Number_octContext | undefined {
		return this.tryGetRuleContext(0, Number_octContext);
	}
	public number_dec(): Number_decContext | undefined {
		return this.tryGetRuleContext(0, Number_decContext);
	}
	public number_hex(): Number_hexContext | undefined {
		return this.tryGetRuleContext(0, Number_hexContext);
	}
	public PLUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PLUS, 0); }
	public MINUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.MINUS, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_number; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterNumber) {
			listener.enterNumber(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitNumber) {
			listener.exitNumber(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitNumber) {
			return visitor.visitNumber(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Number_binContext extends ParserRuleContext {
	public NUMBERbin(): TerminalNode { return this.getToken(z80asmParser.NUMBERbin, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_number_bin; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterNumber_bin) {
			listener.enterNumber_bin(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitNumber_bin) {
			listener.exitNumber_bin(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitNumber_bin) {
			return visitor.visitNumber_bin(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Number_octContext extends ParserRuleContext {
	public NUMBERoct(): TerminalNode { return this.getToken(z80asmParser.NUMBERoct, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_number_oct; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterNumber_oct) {
			listener.enterNumber_oct(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitNumber_oct) {
			listener.exitNumber_oct(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitNumber_oct) {
			return visitor.visitNumber_oct(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Number_decContext extends ParserRuleContext {
	public NUMBERdec(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.NUMBERdec, 0); }
	public INTERRUPTMODE(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INTERRUPTMODE, 0); }
	public BIT8(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.BIT8, 0); }
	public INSTRUCTIONrstvector(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONrstvector, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_number_dec; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterNumber_dec) {
			listener.enterNumber_dec(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitNumber_dec) {
			listener.exitNumber_dec(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitNumber_dec) {
			return visitor.visitNumber_dec(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Number_hexContext extends ParserRuleContext {
	public NUMBERhex(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.NUMBERhex, 0); }
	public INSTRUCTIONrstvectorhex(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONrstvectorhex, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_number_hex; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterNumber_hex) {
			listener.enterNumber_hex(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitNumber_hex) {
			listener.exitNumber_hex(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitNumber_hex) {
			return visitor.visitNumber_hex(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}



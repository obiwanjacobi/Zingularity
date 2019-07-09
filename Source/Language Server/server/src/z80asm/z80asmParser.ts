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
	public static readonly DIRECTIVEvoid = 5;
	public static readonly DIRECTIVEparam = 6;
	public static readonly DIRECTIVEsymbol = 7;
	public static readonly DIRECTIVEsymbollist = 8;
	public static readonly DIRECTIVEassign = 9;
	public static readonly DIRECTIVEdefs = 10;
	public static readonly DIRECTIVEdefm = 11;
	public static readonly DIRECTIVEblock = 12;
	public static readonly DIRECTIVEtodo = 13;
	public static readonly DIRECTIVEfile = 14;
	public static readonly DIRECTIVEif = 15;
	public static readonly DIRECTIVEifdef = 16;
	public static readonly DIRECTIVEifndef = 17;
	public static readonly DIRECTIVEelse = 18;
	public static readonly DIRECTIVEendif = 19;
	public static readonly DIRECTIVEphase = 20;
	public static readonly DIRECTIVEunphase = 21;
	public static readonly INSTRUCTIONvoid = 22;
	public static readonly INSTRUCTIONld = 23;
	public static readonly INSTRUCTIONstack = 24;
	public static readonly INSTRUCTIONexchange = 25;
	public static readonly INSTRUCTIONexxchange = 26;
	public static readonly INSTRUCTIONarithmetic = 27;
	public static readonly INSTRUCTIONincdec = 28;
	public static readonly INSTRUCTIONcpl = 29;
	public static readonly INSTRUCTIONarithmetic16 = 30;
	public static readonly INSTRUCTIONrotate = 31;
	public static readonly INSTRUCTIONrotatedec = 32;
	public static readonly INSTRUCTIONbit = 33;
	public static readonly INSTRUCTIONjump = 34;
	public static readonly INSTRUCTIONjumprel = 35;
	public static readonly INSTRUCTIONjumprelnz = 36;
	public static readonly INSTRUCTIONcall = 37;
	public static readonly INSTRUCTIONret = 38;
	public static readonly INSTRUCTIONin = 39;
	public static readonly INSTRUCTIONout = 40;
	public static readonly CONDITIONflagsall = 41;
	public static readonly CONDITIONflags = 42;
	public static readonly REG8x = 43;
	public static readonly REG8y = 44;
	public static readonly REG8sys = 45;
	public static readonly REG8a = 46;
	public static readonly REG8b = 47;
	public static readonly REG8c = 48;
	public static readonly REG8d = 49;
	public static readonly REG8e = 50;
	public static readonly REG8h = 51;
	public static readonly REG8l = 52;
	public static readonly REG16af = 53;
	public static readonly REG16bc = 54;
	public static readonly REG16de = 55;
	public static readonly REG16hl = 56;
	public static readonly REG16sp = 57;
	public static readonly REG16ix = 58;
	public static readonly REG16iy = 59;
	public static readonly SYMBOL = 60;
	public static readonly COMMENT = 61;
	public static readonly OPERATORnum = 62;
	public static readonly OPERATORbit = 63;
	public static readonly OPERATORlogic = 64;
	public static readonly PLUS = 65;
	public static readonly NUMBERbin = 66;
	public static readonly NUMBERoct = 67;
	public static readonly NUMBERdec = 68;
	public static readonly NUMBERhex = 69;
	public static readonly BIT8 = 70;
	public static readonly ZERO = 71;
	public static readonly CHARACTER = 72;
	public static readonly STRING = 73;
	public static readonly PARopen = 74;
	public static readonly PARclose = 75;
	public static readonly COMMA = 76;
	public static readonly EOL = 77;
	public static readonly WS = 78;
	public static readonly RULE_file = 0;
	public static readonly RULE_asm = 1;
	public static readonly RULE_line = 2;
	public static readonly RULE_directive = 3;
	public static readonly RULE_directive_void = 4;
	public static readonly RULE_directive_param = 5;
	public static readonly RULE_directive_symbol = 6;
	public static readonly RULE_directive_symbollist = 7;
	public static readonly RULE_directive_assign = 8;
	public static readonly RULE_directive_block = 9;
	public static readonly RULE_directive_defs = 10;
	public static readonly RULE_directive_defm = 11;
	public static readonly RULE_defmparam = 12;
	public static readonly RULE_directive_if = 13;
	public static readonly RULE_directive_ifdef = 14;
	public static readonly RULE_directive_ifndef = 15;
	public static readonly RULE_directive_ifblock = 16;
	public static readonly RULE_directive_elseblock = 17;
	public static readonly RULE_directive_phase = 18;
	public static readonly RULE_instruction = 19;
	public static readonly RULE_instruction_void = 20;
	public static readonly RULE_instruction_ld8 = 21;
	public static readonly RULE_instruction_ld16 = 22;
	public static readonly RULE_instruction_stack = 23;
	public static readonly RULE_instruction_exchange = 24;
	public static readonly RULE_instruction_arithmetic8 = 25;
	public static readonly RULE_instruction_incdec8 = 26;
	public static readonly RULE_instruction_cpl = 27;
	public static readonly RULE_instruction_arithemic16 = 28;
	public static readonly RULE_instruction_incdec16 = 29;
	public static readonly RULE_instruction_rotate = 30;
	public static readonly RULE_instruction_rotatedec = 31;
	public static readonly RULE_instruction_bit = 32;
	public static readonly RULE_instruction_jump = 33;
	public static readonly RULE_instruction_call = 34;
	public static readonly RULE_instruction_io = 35;
	public static readonly RULE_offset_ex = 36;
	public static readonly RULE_offset_rel = 37;
	public static readonly RULE_registers8 = 38;
	public static readonly RULE_registers8x = 39;
	public static readonly RULE_registers8y = 40;
	public static readonly RULE_register16_grpaf = 41;
	public static readonly RULE_register16_grpsp = 42;
	public static readonly RULE_register16_ex = 43;
	public static readonly RULE_label = 44;
	public static readonly RULE_symbol = 45;
	public static readonly RULE_comment = 46;
	public static readonly RULE_string = 47;
	public static readonly RULE_character = 48;
	public static readonly RULE_expression8 = 49;
	public static readonly RULE_expression16 = 50;
	public static readonly RULE_expression = 51;
	public static readonly RULE_operator = 52;
	public static readonly RULE_number = 53;
	public static readonly RULE_number_bin = 54;
	public static readonly RULE_number_oct = 55;
	public static readonly RULE_number_dec = 56;
	public static readonly RULE_number_hex = 57;
	// tslint:disable:no-trailing-whitespace
	public static readonly ruleNames: string[] = [
		"file", "asm", "line", "directive", "directive_void", "directive_param", 
		"directive_symbol", "directive_symbollist", "directive_assign", "directive_block", 
		"directive_defs", "directive_defm", "defmparam", "directive_if", "directive_ifdef", 
		"directive_ifndef", "directive_ifblock", "directive_elseblock", "directive_phase", 
		"instruction", "instruction_void", "instruction_ld8", "instruction_ld16", 
		"instruction_stack", "instruction_exchange", "instruction_arithmetic8", 
		"instruction_incdec8", "instruction_cpl", "instruction_arithemic16", "instruction_incdec16", 
		"instruction_rotate", "instruction_rotatedec", "instruction_bit", "instruction_jump", 
		"instruction_call", "instruction_io", "offset_ex", "offset_rel", "registers8", 
		"registers8x", "registers8y", "register16_grpaf", "register16_grpsp", 
		"register16_ex", "label", "symbol", "comment", "string", "character", 
		"expression8", "expression16", "expression", "operator", "number", "number_bin", 
		"number_oct", "number_dec", "number_hex",
	];

	private static readonly _LITERAL_NAMES: Array<string | undefined> = [
		undefined, "'='", "'''", "'.'", "':'", undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, "'+'", undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, "'('", "')'", "','",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, undefined, undefined, undefined, undefined, "DIRECTIVEvoid", 
		"DIRECTIVEparam", "DIRECTIVEsymbol", "DIRECTIVEsymbollist", "DIRECTIVEassign", 
		"DIRECTIVEdefs", "DIRECTIVEdefm", "DIRECTIVEblock", "DIRECTIVEtodo", "DIRECTIVEfile", 
		"DIRECTIVEif", "DIRECTIVEifdef", "DIRECTIVEifndef", "DIRECTIVEelse", "DIRECTIVEendif", 
		"DIRECTIVEphase", "DIRECTIVEunphase", "INSTRUCTIONvoid", "INSTRUCTIONld", 
		"INSTRUCTIONstack", "INSTRUCTIONexchange", "INSTRUCTIONexxchange", "INSTRUCTIONarithmetic", 
		"INSTRUCTIONincdec", "INSTRUCTIONcpl", "INSTRUCTIONarithmetic16", "INSTRUCTIONrotate", 
		"INSTRUCTIONrotatedec", "INSTRUCTIONbit", "INSTRUCTIONjump", "INSTRUCTIONjumprel", 
		"INSTRUCTIONjumprelnz", "INSTRUCTIONcall", "INSTRUCTIONret", "INSTRUCTIONin", 
		"INSTRUCTIONout", "CONDITIONflagsall", "CONDITIONflags", "REG8x", "REG8y", 
		"REG8sys", "REG8a", "REG8b", "REG8c", "REG8d", "REG8e", "REG8h", "REG8l", 
		"REG16af", "REG16bc", "REG16de", "REG16hl", "REG16sp", "REG16ix", "REG16iy", 
		"SYMBOL", "COMMENT", "OPERATORnum", "OPERATORbit", "OPERATORlogic", "PLUS", 
		"NUMBERbin", "NUMBERoct", "NUMBERdec", "NUMBERhex", "BIT8", "ZERO", "CHARACTER", 
		"STRING", "PARopen", "PARclose", "COMMA", "EOL", "WS",
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
			this.state = 117;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__2) | (1 << z80asmParser.DIRECTIVEvoid) | (1 << z80asmParser.DIRECTIVEparam) | (1 << z80asmParser.DIRECTIVEsymbol) | (1 << z80asmParser.DIRECTIVEsymbollist) | (1 << z80asmParser.DIRECTIVEassign) | (1 << z80asmParser.DIRECTIVEdefs) | (1 << z80asmParser.DIRECTIVEdefm) | (1 << z80asmParser.DIRECTIVEblock) | (1 << z80asmParser.DIRECTIVEif) | (1 << z80asmParser.DIRECTIVEifdef) | (1 << z80asmParser.DIRECTIVEifndef) | (1 << z80asmParser.INSTRUCTIONvoid) | (1 << z80asmParser.INSTRUCTIONld) | (1 << z80asmParser.INSTRUCTIONstack) | (1 << z80asmParser.INSTRUCTIONexchange) | (1 << z80asmParser.INSTRUCTIONexxchange) | (1 << z80asmParser.INSTRUCTIONarithmetic) | (1 << z80asmParser.INSTRUCTIONincdec) | (1 << z80asmParser.INSTRUCTIONcpl) | (1 << z80asmParser.INSTRUCTIONarithmetic16) | (1 << z80asmParser.INSTRUCTIONrotate))) !== 0) || ((((_la - 32)) & ~0x1F) === 0 && ((1 << (_la - 32)) & ((1 << (z80asmParser.INSTRUCTIONrotatedec - 32)) | (1 << (z80asmParser.INSTRUCTIONbit - 32)) | (1 << (z80asmParser.INSTRUCTIONjump - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprel - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprelnz - 32)) | (1 << (z80asmParser.INSTRUCTIONcall - 32)) | (1 << (z80asmParser.INSTRUCTIONret - 32)) | (1 << (z80asmParser.INSTRUCTIONin - 32)) | (1 << (z80asmParser.INSTRUCTIONout - 32)) | (1 << (z80asmParser.SYMBOL - 32)) | (1 << (z80asmParser.COMMENT - 32)))) !== 0) || _la === z80asmParser.EOL) {
				{
				this.state = 116;
				this.asm();
				}
			}

			this.state = 119;
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
			this.state = 125;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			do {
				{
				{
				this.state = 122;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__2) | (1 << z80asmParser.DIRECTIVEvoid) | (1 << z80asmParser.DIRECTIVEparam) | (1 << z80asmParser.DIRECTIVEsymbol) | (1 << z80asmParser.DIRECTIVEsymbollist) | (1 << z80asmParser.DIRECTIVEassign) | (1 << z80asmParser.DIRECTIVEdefs) | (1 << z80asmParser.DIRECTIVEdefm) | (1 << z80asmParser.DIRECTIVEblock) | (1 << z80asmParser.DIRECTIVEif) | (1 << z80asmParser.DIRECTIVEifdef) | (1 << z80asmParser.DIRECTIVEifndef) | (1 << z80asmParser.INSTRUCTIONvoid) | (1 << z80asmParser.INSTRUCTIONld) | (1 << z80asmParser.INSTRUCTIONstack) | (1 << z80asmParser.INSTRUCTIONexchange) | (1 << z80asmParser.INSTRUCTIONexxchange) | (1 << z80asmParser.INSTRUCTIONarithmetic) | (1 << z80asmParser.INSTRUCTIONincdec) | (1 << z80asmParser.INSTRUCTIONcpl) | (1 << z80asmParser.INSTRUCTIONarithmetic16) | (1 << z80asmParser.INSTRUCTIONrotate))) !== 0) || ((((_la - 32)) & ~0x1F) === 0 && ((1 << (_la - 32)) & ((1 << (z80asmParser.INSTRUCTIONrotatedec - 32)) | (1 << (z80asmParser.INSTRUCTIONbit - 32)) | (1 << (z80asmParser.INSTRUCTIONjump - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprel - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprelnz - 32)) | (1 << (z80asmParser.INSTRUCTIONcall - 32)) | (1 << (z80asmParser.INSTRUCTIONret - 32)) | (1 << (z80asmParser.INSTRUCTIONin - 32)) | (1 << (z80asmParser.INSTRUCTIONout - 32)) | (1 << (z80asmParser.SYMBOL - 32)) | (1 << (z80asmParser.COMMENT - 32)))) !== 0)) {
					{
					this.state = 121;
					this.line();
					}
				}

				this.state = 124;
				this.match(z80asmParser.EOL);
				}
				}
				this.state = 127;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			} while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__2) | (1 << z80asmParser.DIRECTIVEvoid) | (1 << z80asmParser.DIRECTIVEparam) | (1 << z80asmParser.DIRECTIVEsymbol) | (1 << z80asmParser.DIRECTIVEsymbollist) | (1 << z80asmParser.DIRECTIVEassign) | (1 << z80asmParser.DIRECTIVEdefs) | (1 << z80asmParser.DIRECTIVEdefm) | (1 << z80asmParser.DIRECTIVEblock) | (1 << z80asmParser.DIRECTIVEif) | (1 << z80asmParser.DIRECTIVEifdef) | (1 << z80asmParser.DIRECTIVEifndef) | (1 << z80asmParser.INSTRUCTIONvoid) | (1 << z80asmParser.INSTRUCTIONld) | (1 << z80asmParser.INSTRUCTIONstack) | (1 << z80asmParser.INSTRUCTIONexchange) | (1 << z80asmParser.INSTRUCTIONexxchange) | (1 << z80asmParser.INSTRUCTIONarithmetic) | (1 << z80asmParser.INSTRUCTIONincdec) | (1 << z80asmParser.INSTRUCTIONcpl) | (1 << z80asmParser.INSTRUCTIONarithmetic16) | (1 << z80asmParser.INSTRUCTIONrotate))) !== 0) || ((((_la - 32)) & ~0x1F) === 0 && ((1 << (_la - 32)) & ((1 << (z80asmParser.INSTRUCTIONrotatedec - 32)) | (1 << (z80asmParser.INSTRUCTIONbit - 32)) | (1 << (z80asmParser.INSTRUCTIONjump - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprel - 32)) | (1 << (z80asmParser.INSTRUCTIONjumprelnz - 32)) | (1 << (z80asmParser.INSTRUCTIONcall - 32)) | (1 << (z80asmParser.INSTRUCTIONret - 32)) | (1 << (z80asmParser.INSTRUCTIONin - 32)) | (1 << (z80asmParser.INSTRUCTIONout - 32)) | (1 << (z80asmParser.SYMBOL - 32)) | (1 << (z80asmParser.COMMENT - 32)))) !== 0) || _la === z80asmParser.EOL);
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
			this.state = 145;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 7, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 129;
				this.directive();
				this.state = 131;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 130;
					this.comment();
					}
				}

				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 133;
				this.comment();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 134;
				this.label();
				this.state = 136;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 135;
					this.comment();
					}
				}

				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 139;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.T__2 || _la === z80asmParser.SYMBOL) {
					{
					this.state = 138;
					this.label();
					}
				}

				this.state = 141;
				this.instruction();
				this.state = 143;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 142;
					this.comment();
					}
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
	public directive(): DirectiveContext {
		let _localctx: DirectiveContext = new DirectiveContext(this._ctx, this.state);
		this.enterRule(_localctx, 6, z80asmParser.RULE_directive);
		try {
			this.state = 158;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.DIRECTIVEvoid:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 147;
				this.directive_void();
				}
				break;
			case z80asmParser.DIRECTIVEparam:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 148;
				this.directive_param();
				}
				break;
			case z80asmParser.DIRECTIVEblock:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 149;
				this.directive_block();
				}
				break;
			case z80asmParser.DIRECTIVEsymbol:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 150;
				this.directive_symbol();
				}
				break;
			case z80asmParser.DIRECTIVEsymbollist:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 151;
				this.directive_symbollist();
				}
				break;
			case z80asmParser.DIRECTIVEassign:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 152;
				this.directive_assign();
				}
				break;
			case z80asmParser.DIRECTIVEdefs:
				this.enterOuterAlt(_localctx, 7);
				{
				this.state = 153;
				this.directive_defs();
				}
				break;
			case z80asmParser.DIRECTIVEdefm:
				this.enterOuterAlt(_localctx, 8);
				{
				this.state = 154;
				this.directive_defm();
				}
				break;
			case z80asmParser.DIRECTIVEif:
				this.enterOuterAlt(_localctx, 9);
				{
				this.state = 155;
				this.directive_if();
				}
				break;
			case z80asmParser.DIRECTIVEifdef:
				this.enterOuterAlt(_localctx, 10);
				{
				this.state = 156;
				this.directive_ifdef();
				}
				break;
			case z80asmParser.DIRECTIVEifndef:
				this.enterOuterAlt(_localctx, 11);
				{
				this.state = 157;
				this.directive_ifndef();
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
			this.state = 160;
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
	public directive_param(): Directive_paramContext {
		let _localctx: Directive_paramContext = new Directive_paramContext(this._ctx, this.state);
		this.enterRule(_localctx, 10, z80asmParser.RULE_directive_param);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 162;
			this.match(z80asmParser.DIRECTIVEparam);
			this.state = 163;
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
	public directive_symbol(): Directive_symbolContext {
		let _localctx: Directive_symbolContext = new Directive_symbolContext(this._ctx, this.state);
		this.enterRule(_localctx, 12, z80asmParser.RULE_directive_symbol);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 165;
			this.match(z80asmParser.DIRECTIVEsymbol);
			this.state = 166;
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
		this.enterRule(_localctx, 14, z80asmParser.RULE_directive_symbollist);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 168;
			this.match(z80asmParser.DIRECTIVEsymbollist);
			this.state = 169;
			this.symbol();
			this.state = 174;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 9, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 170;
					this.match(z80asmParser.COMMA);
					this.state = 171;
					this.symbol();
					}
					}
				}
				this.state = 176;
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
		this.enterRule(_localctx, 16, z80asmParser.RULE_directive_assign);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 177;
			this.match(z80asmParser.DIRECTIVEassign);
			this.state = 178;
			this.match(z80asmParser.T__0);
			this.state = 179;
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
		this.enterRule(_localctx, 18, z80asmParser.RULE_directive_block);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 181;
			this.match(z80asmParser.DIRECTIVEblock);
			this.state = 182;
			this.expression(0);
			this.state = 187;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 10, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 183;
					this.match(z80asmParser.COMMA);
					this.state = 184;
					this.expression(0);
					}
					}
				}
				this.state = 189;
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
		this.enterRule(_localctx, 20, z80asmParser.RULE_directive_defs);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 190;
			this.match(z80asmParser.DIRECTIVEdefs);
			this.state = 191;
			this.expression(0);
			this.state = 194;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.COMMA) {
				{
				this.state = 192;
				this.match(z80asmParser.COMMA);
				this.state = 193;
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
		this.enterRule(_localctx, 22, z80asmParser.RULE_directive_defm);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 196;
			this.match(z80asmParser.DIRECTIVEdefm);
			this.state = 197;
			this.defmparam();
			this.state = 202;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 12, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 198;
					this.match(z80asmParser.COMMA);
					this.state = 199;
					this.defmparam();
					}
					}
				}
				this.state = 204;
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
		this.enterRule(_localctx, 24, z80asmParser.RULE_defmparam);
		try {
			this.state = 208;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.STRING:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 205;
				this.string();
				}
				break;
			case z80asmParser.CHARACTER:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 206;
				this.character();
				}
				break;
			case z80asmParser.SYMBOL:
			case z80asmParser.NUMBERbin:
			case z80asmParser.NUMBERoct:
			case z80asmParser.NUMBERdec:
			case z80asmParser.NUMBERhex:
			case z80asmParser.PARopen:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 207;
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
		this.enterRule(_localctx, 26, z80asmParser.RULE_directive_if);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 210;
			this.match(z80asmParser.DIRECTIVEif);
			this.state = 211;
			this.expression(0);
			this.state = 213;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 14, this._ctx) ) {
			case 1:
				{
				this.state = 212;
				this.comment();
				}
				break;
			}
			this.state = 215;
			this.directive_ifblock();
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
		this.enterRule(_localctx, 28, z80asmParser.RULE_directive_ifdef);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 217;
			this.match(z80asmParser.DIRECTIVEifdef);
			this.state = 218;
			this.symbol();
			this.state = 220;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 15, this._ctx) ) {
			case 1:
				{
				this.state = 219;
				this.comment();
				}
				break;
			}
			this.state = 222;
			this.directive_ifblock();
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
	public directive_ifndef(): Directive_ifndefContext {
		let _localctx: Directive_ifndefContext = new Directive_ifndefContext(this._ctx, this.state);
		this.enterRule(_localctx, 30, z80asmParser.RULE_directive_ifndef);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 224;
			this.match(z80asmParser.DIRECTIVEifndef);
			this.state = 225;
			this.symbol();
			this.state = 227;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 16, this._ctx) ) {
			case 1:
				{
				this.state = 226;
				this.comment();
				}
				break;
			}
			this.state = 229;
			this.directive_ifblock();
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
			this.state = 231;
			this.asm();
			this.state = 233;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.DIRECTIVEelse) {
				{
				this.state = 232;
				this.directive_elseblock();
				}
			}

			this.state = 235;
			this.match(z80asmParser.DIRECTIVEendif);
			this.state = 236;
			_la = this._input.LA(1);
			if (!(_la === z80asmParser.EOF || _la === z80asmParser.EOL)) {
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
	public directive_elseblock(): Directive_elseblockContext {
		let _localctx: Directive_elseblockContext = new Directive_elseblockContext(this._ctx, this.state);
		this.enterRule(_localctx, 34, z80asmParser.RULE_directive_elseblock);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 238;
			this.match(z80asmParser.DIRECTIVEelse);
			this.state = 239;
			this.asm();
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
		this.enterRule(_localctx, 36, z80asmParser.RULE_directive_phase);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 241;
			this.match(z80asmParser.DIRECTIVEphase);
			this.state = 242;
			this.expression16();
			this.state = 244;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 18, this._ctx) ) {
			case 1:
				{
				this.state = 243;
				this.comment();
				}
				break;
			}
			this.state = 246;
			this.asm();
			this.state = 247;
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
		this.enterRule(_localctx, 38, z80asmParser.RULE_instruction);
		try {
			this.state = 265;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 19, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 249;
				this.instruction_void();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 250;
				this.instruction_ld8();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 251;
				this.instruction_ld16();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 252;
				this.instruction_stack();
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 253;
				this.instruction_exchange();
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 254;
				this.instruction_arithmetic8();
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				this.state = 255;
				this.instruction_incdec8();
				}
				break;

			case 8:
				this.enterOuterAlt(_localctx, 8);
				{
				this.state = 256;
				this.instruction_cpl();
				}
				break;

			case 9:
				this.enterOuterAlt(_localctx, 9);
				{
				this.state = 257;
				this.instruction_arithemic16();
				}
				break;

			case 10:
				this.enterOuterAlt(_localctx, 10);
				{
				this.state = 258;
				this.instruction_incdec16();
				}
				break;

			case 11:
				this.enterOuterAlt(_localctx, 11);
				{
				this.state = 259;
				this.instruction_rotate();
				}
				break;

			case 12:
				this.enterOuterAlt(_localctx, 12);
				{
				this.state = 260;
				this.instruction_rotatedec();
				}
				break;

			case 13:
				this.enterOuterAlt(_localctx, 13);
				{
				this.state = 261;
				this.instruction_bit();
				}
				break;

			case 14:
				this.enterOuterAlt(_localctx, 14);
				{
				this.state = 262;
				this.instruction_jump();
				}
				break;

			case 15:
				this.enterOuterAlt(_localctx, 15);
				{
				this.state = 263;
				this.instruction_call();
				}
				break;

			case 16:
				this.enterOuterAlt(_localctx, 16);
				{
				this.state = 264;
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
		this.enterRule(_localctx, 40, z80asmParser.RULE_instruction_void);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 267;
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
		this.enterRule(_localctx, 42, z80asmParser.RULE_instruction_ld8);
		try {
			this.state = 360;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 24, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				{
				this.state = 269;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 282;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 20, this._ctx) ) {
				case 1:
					{
					{
					this.state = 270;
					this.registers8();
					this.state = 271;
					this.match(z80asmParser.COMMA);
					this.state = 272;
					this.registers8();
					}
					}
					break;

				case 2:
					{
					{
					this.state = 274;
					this.registers8x();
					this.state = 275;
					this.match(z80asmParser.COMMA);
					this.state = 276;
					this.registers8x();
					}
					}
					break;

				case 3:
					{
					{
					this.state = 278;
					this.registers8y();
					this.state = 279;
					this.match(z80asmParser.COMMA);
					this.state = 280;
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
				this.state = 284;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 288;
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
					this.state = 285;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 286;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 287;
					this.match(z80asmParser.REG8y);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 290;
				this.match(z80asmParser.COMMA);
				this.state = 291;
				this.expression8();
				}
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				{
				this.state = 292;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 293;
				this.registers8();
				this.state = 294;
				this.match(z80asmParser.COMMA);
				this.state = 295;
				this.match(z80asmParser.PARopen);
				this.state = 296;
				this.match(z80asmParser.REG16hl);
				this.state = 297;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				{
				this.state = 299;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 300;
				this.registers8();
				this.state = 301;
				this.match(z80asmParser.COMMA);
				this.state = 302;
				this.match(z80asmParser.PARopen);
				this.state = 303;
				this.register16_ex();
				this.state = 304;
				this.match(z80asmParser.PLUS);
				this.state = 305;
				this.offset_ex();
				this.state = 306;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				{
				this.state = 308;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 309;
				this.match(z80asmParser.PARopen);
				this.state = 310;
				this.match(z80asmParser.REG16hl);
				this.state = 311;
				this.match(z80asmParser.PARclose);
				this.state = 312;
				this.match(z80asmParser.COMMA);
				this.state = 313;
				this.registers8();
				}
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				{
				this.state = 314;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 315;
				this.match(z80asmParser.PARopen);
				this.state = 316;
				this.register16_ex();
				this.state = 317;
				this.match(z80asmParser.PLUS);
				this.state = 318;
				this.offset_ex();
				this.state = 319;
				this.match(z80asmParser.PARclose);
				this.state = 320;
				this.match(z80asmParser.COMMA);
				this.state = 321;
				this.registers8();
				}
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				{
				this.state = 323;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 324;
				this.match(z80asmParser.PARopen);
				this.state = 325;
				this.match(z80asmParser.REG16hl);
				this.state = 326;
				this.match(z80asmParser.PARclose);
				this.state = 327;
				this.match(z80asmParser.COMMA);
				this.state = 328;
				this.expression8();
				}
				}
				break;

			case 8:
				this.enterOuterAlt(_localctx, 8);
				{
				{
				this.state = 329;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 330;
				this.match(z80asmParser.PARopen);
				this.state = 331;
				this.register16_ex();
				this.state = 332;
				this.match(z80asmParser.PLUS);
				this.state = 333;
				this.offset_ex();
				this.state = 334;
				this.match(z80asmParser.PARclose);
				this.state = 335;
				this.match(z80asmParser.COMMA);
				this.state = 336;
				this.expression8();
				}
				}
				break;

			case 9:
				this.enterOuterAlt(_localctx, 9);
				{
				{
				this.state = 338;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 339;
				this.match(z80asmParser.REG8a);
				this.state = 340;
				this.match(z80asmParser.COMMA);
				this.state = 341;
				this.match(z80asmParser.PARopen);
				this.state = 346;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
					{
					this.state = 342;
					this.match(z80asmParser.REG16bc);
					}
					break;
				case z80asmParser.REG16de:
					{
					this.state = 343;
					this.match(z80asmParser.REG16de);
					}
					break;
				case z80asmParser.REG8sys:
					{
					this.state = 344;
					this.match(z80asmParser.REG8sys);
					}
					break;
				case z80asmParser.SYMBOL:
				case z80asmParser.NUMBERbin:
				case z80asmParser.NUMBERoct:
				case z80asmParser.NUMBERdec:
				case z80asmParser.NUMBERhex:
				case z80asmParser.PARopen:
					{
					this.state = 345;
					this.expression(0);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 348;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 10:
				this.enterOuterAlt(_localctx, 10);
				{
				{
				this.state = 349;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 350;
				this.match(z80asmParser.PARopen);
				this.state = 355;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
					{
					this.state = 351;
					this.match(z80asmParser.REG16bc);
					}
					break;
				case z80asmParser.REG16de:
					{
					this.state = 352;
					this.match(z80asmParser.REG16de);
					}
					break;
				case z80asmParser.REG8sys:
					{
					this.state = 353;
					this.match(z80asmParser.REG8sys);
					}
					break;
				case z80asmParser.SYMBOL:
				case z80asmParser.NUMBERbin:
				case z80asmParser.NUMBERoct:
				case z80asmParser.NUMBERdec:
				case z80asmParser.NUMBERhex:
				case z80asmParser.PARopen:
					{
					this.state = 354;
					this.expression16();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 357;
				this.match(z80asmParser.PARclose);
				this.state = 358;
				this.match(z80asmParser.COMMA);
				this.state = 359;
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
		this.enterRule(_localctx, 44, z80asmParser.RULE_instruction_ld16);
		try {
			this.state = 390;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 27, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 362;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 363;
				this.register16_grpsp();
				this.state = 364;
				this.match(z80asmParser.COMMA);
				this.state = 365;
				this.expression16();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 367;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 368;
				this.register16_ex();
				this.state = 369;
				this.match(z80asmParser.COMMA);
				this.state = 370;
				this.match(z80asmParser.PARopen);
				this.state = 371;
				this.expression16();
				this.state = 372;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 374;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 375;
				this.match(z80asmParser.PARopen);
				this.state = 376;
				this.expression16();
				this.state = 377;
				this.match(z80asmParser.PARclose);
				this.state = 378;
				this.match(z80asmParser.COMMA);
				this.state = 381;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
				case z80asmParser.REG16de:
				case z80asmParser.REG16hl:
				case z80asmParser.REG16sp:
					{
					this.state = 379;
					this.register16_grpsp();
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 380;
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
				this.state = 383;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 384;
				this.match(z80asmParser.REG16sp);
				this.state = 385;
				this.match(z80asmParser.COMMA);
				this.state = 388;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 386;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 387;
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
		this.enterRule(_localctx, 46, z80asmParser.RULE_instruction_stack);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 392;
			this.match(z80asmParser.INSTRUCTIONstack);
			this.state = 395;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16af:
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16hl:
				{
				this.state = 393;
				this.register16_grpaf();
				}
				break;
			case z80asmParser.REG16ix:
			case z80asmParser.REG16iy:
				{
				this.state = 394;
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
		this.enterRule(_localctx, 48, z80asmParser.RULE_instruction_exchange);
		let _la: number;
		try {
			this.state = 418;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 31, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 397;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 398;
				this.match(z80asmParser.REG16de);
				this.state = 399;
				this.match(z80asmParser.COMMA);
				this.state = 400;
				this.match(z80asmParser.REG16hl);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 401;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 402;
				this.match(z80asmParser.REG16af);
				this.state = 403;
				this.match(z80asmParser.COMMA);
				this.state = 404;
				this.match(z80asmParser.REG16af);
				this.state = 406;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.T__1) {
					{
					this.state = 405;
					this.match(z80asmParser.T__1);
					}
				}

				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 408;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 409;
				this.match(z80asmParser.PARopen);
				this.state = 410;
				this.match(z80asmParser.REG16sp);
				this.state = 411;
				this.match(z80asmParser.PARclose);
				this.state = 412;
				this.match(z80asmParser.COMMA);
				this.state = 415;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 413;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 414;
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
				this.state = 417;
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
		this.enterRule(_localctx, 50, z80asmParser.RULE_instruction_arithmetic8);
		let _la: number;
		try {
			this.state = 445;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 36, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 420;
				this.match(z80asmParser.INSTRUCTIONarithmetic);
				this.state = 423;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 32, this._ctx) ) {
				case 1:
					{
					this.state = 421;
					this.match(z80asmParser.REG8a);
					this.state = 422;
					this.match(z80asmParser.COMMA);
					}
					break;
				}
				this.state = 429;
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
					this.state = 425;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 426;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 427;
					this.match(z80asmParser.REG8y);
					}
					break;
				case z80asmParser.SYMBOL:
				case z80asmParser.NUMBERbin:
				case z80asmParser.NUMBERoct:
				case z80asmParser.NUMBERdec:
				case z80asmParser.NUMBERhex:
				case z80asmParser.PARopen:
					{
					this.state = 428;
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
				this.state = 431;
				this.match(z80asmParser.INSTRUCTIONarithmetic);
				this.state = 434;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.REG8a) {
					{
					this.state = 432;
					this.match(z80asmParser.REG8a);
					this.state = 433;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 436;
				this.match(z80asmParser.PARopen);
				this.state = 442;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 437;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 438;
					this.register16_ex();
					this.state = 439;
					this.match(z80asmParser.PLUS);
					this.state = 440;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 444;
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
		this.enterRule(_localctx, 52, z80asmParser.RULE_instruction_incdec8);
		try {
			this.state = 463;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 39, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 447;
				this.match(z80asmParser.INSTRUCTIONincdec);
				this.state = 451;
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
					this.state = 448;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 449;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 450;
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
				this.state = 453;
				this.match(z80asmParser.INSTRUCTIONincdec);
				this.state = 454;
				this.match(z80asmParser.PARopen);
				this.state = 460;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 455;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 456;
					this.register16_ex();
					this.state = 457;
					this.match(z80asmParser.PLUS);
					this.state = 458;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 462;
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
		this.enterRule(_localctx, 54, z80asmParser.RULE_instruction_cpl);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 465;
			this.match(z80asmParser.INSTRUCTIONcpl);
			this.state = 467;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.REG8a) {
				{
				this.state = 466;
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
		this.enterRule(_localctx, 56, z80asmParser.RULE_instruction_arithemic16);
		try {
			this.state = 477;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 41, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 469;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 470;
				this.match(z80asmParser.REG16hl);
				this.state = 471;
				this.match(z80asmParser.COMMA);
				this.state = 472;
				this.register16_grpsp();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 473;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 474;
				this.match(z80asmParser.REG16ix);
				this.state = 475;
				this.match(z80asmParser.COMMA);
				this.state = 476;
				this.register16_ex();
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
		this.enterRule(_localctx, 58, z80asmParser.RULE_instruction_incdec16);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 479;
			this.match(z80asmParser.INSTRUCTIONincdec);
			this.state = 482;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16hl:
			case z80asmParser.REG16sp:
				{
				this.state = 480;
				this.register16_grpsp();
				}
				break;
			case z80asmParser.REG16ix:
			case z80asmParser.REG16iy:
				{
				this.state = 481;
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
		this.enterRule(_localctx, 60, z80asmParser.RULE_instruction_rotate);
		try {
			this.state = 505;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 44, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 484;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 485;
				this.registers8();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 486;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 487;
				this.match(z80asmParser.PARopen);
				this.state = 493;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 488;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 489;
					this.register16_ex();
					this.state = 490;
					this.match(z80asmParser.PLUS);
					this.state = 491;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 495;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 496;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 497;
				this.match(z80asmParser.PARopen);
				this.state = 498;
				this.register16_ex();
				this.state = 499;
				this.match(z80asmParser.PLUS);
				this.state = 500;
				this.offset_ex();
				this.state = 501;
				this.match(z80asmParser.PARclose);
				this.state = 502;
				this.match(z80asmParser.COMMA);
				this.state = 503;
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
		this.enterRule(_localctx, 62, z80asmParser.RULE_instruction_rotatedec);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 507;
			this.match(z80asmParser.INSTRUCTIONrotatedec);
			this.state = 509;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.REG8a) {
				{
				this.state = 508;
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
		this.enterRule(_localctx, 64, z80asmParser.RULE_instruction_bit);
		try {
			this.state = 538;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 47, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 511;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 512;
				this.match(z80asmParser.BIT8);
				this.state = 513;
				this.match(z80asmParser.COMMA);
				this.state = 514;
				this.registers8();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 515;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 516;
				this.match(z80asmParser.BIT8);
				this.state = 517;
				this.match(z80asmParser.COMMA);
				this.state = 518;
				this.match(z80asmParser.PARopen);
				this.state = 524;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 519;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 520;
					this.register16_ex();
					this.state = 521;
					this.match(z80asmParser.PLUS);
					this.state = 522;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 526;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 527;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 528;
				this.match(z80asmParser.BIT8);
				this.state = 529;
				this.match(z80asmParser.COMMA);
				this.state = 530;
				this.match(z80asmParser.PARopen);
				this.state = 531;
				this.register16_ex();
				this.state = 532;
				this.match(z80asmParser.PLUS);
				this.state = 533;
				this.offset_ex();
				this.state = 534;
				this.match(z80asmParser.PARclose);
				this.state = 535;
				this.match(z80asmParser.COMMA);
				this.state = 536;
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
	public instruction_jump(): Instruction_jumpContext {
		let _localctx: Instruction_jumpContext = new Instruction_jumpContext(this._ctx, this.state);
		this.enterRule(_localctx, 66, z80asmParser.RULE_instruction_jump);
		let _la: number;
		try {
			this.state = 556;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 50, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 540;
				this.match(z80asmParser.INSTRUCTIONjump);
				this.state = 544;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 541;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 542;
					this.register16_ex();
					}
					break;
				case z80asmParser.SYMBOL:
				case z80asmParser.NUMBERbin:
				case z80asmParser.NUMBERoct:
				case z80asmParser.NUMBERdec:
				case z80asmParser.NUMBERhex:
				case z80asmParser.PARopen:
					{
					this.state = 543;
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
				this.state = 546;
				this.match(z80asmParser.INSTRUCTIONjump);
				this.state = 547;
				this.match(z80asmParser.CONDITIONflagsall);
				this.state = 548;
				this.expression16();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 549;
				this.match(z80asmParser.INSTRUCTIONjumprel);
				this.state = 551;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.CONDITIONflags) {
					{
					this.state = 550;
					this.match(z80asmParser.CONDITIONflags);
					}
				}

				this.state = 553;
				this.offset_rel();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 554;
				this.match(z80asmParser.INSTRUCTIONjumprelnz);
				this.state = 555;
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
		this.enterRule(_localctx, 68, z80asmParser.RULE_instruction_call);
		let _la: number;
		try {
			this.state = 567;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.INSTRUCTIONcall:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 558;
				this.match(z80asmParser.INSTRUCTIONcall);
				this.state = 560;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.CONDITIONflagsall) {
					{
					this.state = 559;
					this.match(z80asmParser.CONDITIONflagsall);
					}
				}

				this.state = 562;
				this.expression16();
				}
				break;
			case z80asmParser.INSTRUCTIONret:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 563;
				this.match(z80asmParser.INSTRUCTIONret);
				this.state = 565;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.CONDITIONflags) {
					{
					this.state = 564;
					this.match(z80asmParser.CONDITIONflags);
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
	public instruction_io(): Instruction_ioContext {
		let _localctx: Instruction_ioContext = new Instruction_ioContext(this._ctx, this.state);
		this.enterRule(_localctx, 70, z80asmParser.RULE_instruction_io);
		let _la: number;
		try {
			this.state = 601;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 56, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 569;
				this.match(z80asmParser.INSTRUCTIONin);
				this.state = 570;
				this.match(z80asmParser.REG8a);
				this.state = 571;
				this.match(z80asmParser.COMMA);
				this.state = 572;
				this.match(z80asmParser.PARopen);
				this.state = 573;
				this.expression8();
				this.state = 574;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 576;
				this.match(z80asmParser.INSTRUCTIONin);
				this.state = 580;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (((((_la - 46)) & ~0x1F) === 0 && ((1 << (_la - 46)) & ((1 << (z80asmParser.REG8a - 46)) | (1 << (z80asmParser.REG8b - 46)) | (1 << (z80asmParser.REG8c - 46)) | (1 << (z80asmParser.REG8d - 46)) | (1 << (z80asmParser.REG8e - 46)) | (1 << (z80asmParser.REG8h - 46)) | (1 << (z80asmParser.REG8l - 46)))) !== 0)) {
					{
					this.state = 577;
					this.registers8();
					this.state = 578;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 582;
				this.match(z80asmParser.PARopen);
				this.state = 583;
				this.match(z80asmParser.REG8c);
				this.state = 584;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 585;
				this.match(z80asmParser.INSTRUCTIONout);
				this.state = 586;
				this.match(z80asmParser.PARopen);
				this.state = 587;
				this.expression8();
				this.state = 588;
				this.match(z80asmParser.PARclose);
				this.state = 589;
				this.match(z80asmParser.COMMA);
				this.state = 590;
				this.match(z80asmParser.REG8a);
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 592;
				this.match(z80asmParser.INSTRUCTIONout);
				this.state = 593;
				this.match(z80asmParser.PARopen);
				this.state = 594;
				this.match(z80asmParser.REG8c);
				this.state = 595;
				this.match(z80asmParser.PARclose);
				this.state = 596;
				this.match(z80asmParser.COMMA);
				this.state = 599;
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
					this.state = 597;
					this.registers8();
					}
					break;
				case z80asmParser.ZERO:
					{
					this.state = 598;
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
		this.enterRule(_localctx, 72, z80asmParser.RULE_offset_ex);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 603;
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
		this.enterRule(_localctx, 74, z80asmParser.RULE_offset_rel);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 605;
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
	public registers8(): Registers8Context {
		let _localctx: Registers8Context = new Registers8Context(this._ctx, this.state);
		this.enterRule(_localctx, 76, z80asmParser.RULE_registers8);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 607;
			_la = this._input.LA(1);
			if (!(((((_la - 46)) & ~0x1F) === 0 && ((1 << (_la - 46)) & ((1 << (z80asmParser.REG8a - 46)) | (1 << (z80asmParser.REG8b - 46)) | (1 << (z80asmParser.REG8c - 46)) | (1 << (z80asmParser.REG8d - 46)) | (1 << (z80asmParser.REG8e - 46)) | (1 << (z80asmParser.REG8h - 46)) | (1 << (z80asmParser.REG8l - 46)))) !== 0))) {
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
		this.enterRule(_localctx, 78, z80asmParser.RULE_registers8x);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 609;
			_la = this._input.LA(1);
			if (!(((((_la - 43)) & ~0x1F) === 0 && ((1 << (_la - 43)) & ((1 << (z80asmParser.REG8x - 43)) | (1 << (z80asmParser.REG8a - 43)) | (1 << (z80asmParser.REG8b - 43)) | (1 << (z80asmParser.REG8c - 43)) | (1 << (z80asmParser.REG8d - 43)) | (1 << (z80asmParser.REG8e - 43)))) !== 0))) {
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
		this.enterRule(_localctx, 80, z80asmParser.RULE_registers8y);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 611;
			_la = this._input.LA(1);
			if (!(((((_la - 44)) & ~0x1F) === 0 && ((1 << (_la - 44)) & ((1 << (z80asmParser.REG8y - 44)) | (1 << (z80asmParser.REG8a - 44)) | (1 << (z80asmParser.REG8b - 44)) | (1 << (z80asmParser.REG8c - 44)) | (1 << (z80asmParser.REG8d - 44)) | (1 << (z80asmParser.REG8e - 44)))) !== 0))) {
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
		this.enterRule(_localctx, 82, z80asmParser.RULE_register16_grpaf);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 613;
			_la = this._input.LA(1);
			if (!(((((_la - 53)) & ~0x1F) === 0 && ((1 << (_la - 53)) & ((1 << (z80asmParser.REG16af - 53)) | (1 << (z80asmParser.REG16bc - 53)) | (1 << (z80asmParser.REG16de - 53)) | (1 << (z80asmParser.REG16hl - 53)))) !== 0))) {
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
		this.enterRule(_localctx, 84, z80asmParser.RULE_register16_grpsp);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 615;
			_la = this._input.LA(1);
			if (!(((((_la - 54)) & ~0x1F) === 0 && ((1 << (_la - 54)) & ((1 << (z80asmParser.REG16bc - 54)) | (1 << (z80asmParser.REG16de - 54)) | (1 << (z80asmParser.REG16hl - 54)) | (1 << (z80asmParser.REG16sp - 54)))) !== 0))) {
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
	public register16_ex(): Register16_exContext {
		let _localctx: Register16_exContext = new Register16_exContext(this._ctx, this.state);
		this.enterRule(_localctx, 86, z80asmParser.RULE_register16_ex);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 617;
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
		this.enterRule(_localctx, 88, z80asmParser.RULE_label);
		try {
			this.state = 623;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.T__2:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 619;
				this.match(z80asmParser.T__2);
				this.state = 620;
				this.match(z80asmParser.SYMBOL);
				}
				break;
			case z80asmParser.SYMBOL:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 621;
				this.match(z80asmParser.SYMBOL);
				this.state = 622;
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
		this.enterRule(_localctx, 90, z80asmParser.RULE_symbol);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 625;
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
	public comment(): CommentContext {
		let _localctx: CommentContext = new CommentContext(this._ctx, this.state);
		this.enterRule(_localctx, 92, z80asmParser.RULE_comment);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 627;
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
		this.enterRule(_localctx, 94, z80asmParser.RULE_string);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 629;
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
		this.enterRule(_localctx, 96, z80asmParser.RULE_character);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 631;
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
		this.enterRule(_localctx, 98, z80asmParser.RULE_expression8);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 633;
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
		this.enterRule(_localctx, 100, z80asmParser.RULE_expression16);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 635;
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
		let _startState: number = 102;
		this.enterRecursionRule(_localctx, 102, z80asmParser.RULE_expression, _p);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 644;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.PARopen:
				{
				this.state = 638;
				this.match(z80asmParser.PARopen);
				this.state = 639;
				this.expression(0);
				this.state = 640;
				this.match(z80asmParser.PARclose);
				}
				break;
			case z80asmParser.NUMBERbin:
			case z80asmParser.NUMBERoct:
			case z80asmParser.NUMBERdec:
			case z80asmParser.NUMBERhex:
				{
				this.state = 642;
				this.number();
				}
				break;
			case z80asmParser.SYMBOL:
				{
				this.state = 643;
				this.symbol();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			this._ctx._stop = this._input.tryLT(-1);
			this.state = 652;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 59, this._ctx);
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
					this.state = 646;
					if (!(this.precpred(this._ctx, 4))) {
						throw new FailedPredicateException(this, "this.precpred(this._ctx, 4)");
					}
					this.state = 647;
					this.operator();
					this.state = 648;
					this.expression(5);
					}
					}
				}
				this.state = 654;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 59, this._ctx);
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
		this.enterRule(_localctx, 104, z80asmParser.RULE_operator);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 655;
			_la = this._input.LA(1);
			if (!(((((_la - 62)) & ~0x1F) === 0 && ((1 << (_la - 62)) & ((1 << (z80asmParser.OPERATORnum - 62)) | (1 << (z80asmParser.OPERATORbit - 62)) | (1 << (z80asmParser.OPERATORlogic - 62)))) !== 0))) {
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
	public number(): NumberContext {
		let _localctx: NumberContext = new NumberContext(this._ctx, this.state);
		this.enterRule(_localctx, 106, z80asmParser.RULE_number);
		try {
			this.state = 661;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.NUMBERbin:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 657;
				this.number_bin();
				}
				break;
			case z80asmParser.NUMBERoct:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 658;
				this.number_oct();
				}
				break;
			case z80asmParser.NUMBERdec:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 659;
				this.number_dec();
				}
				break;
			case z80asmParser.NUMBERhex:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 660;
				this.number_hex();
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
	public number_bin(): Number_binContext {
		let _localctx: Number_binContext = new Number_binContext(this._ctx, this.state);
		this.enterRule(_localctx, 108, z80asmParser.RULE_number_bin);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 663;
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
		this.enterRule(_localctx, 110, z80asmParser.RULE_number_oct);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 665;
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
		this.enterRule(_localctx, 112, z80asmParser.RULE_number_dec);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 667;
			this.match(z80asmParser.NUMBERdec);
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
		this.enterRule(_localctx, 114, z80asmParser.RULE_number_hex);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 669;
			this.match(z80asmParser.NUMBERhex);
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
		case 51:
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
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x03P\u02A2\x04\x02" +
		"\t\x02\x04\x03\t\x03\x04\x04\t\x04\x04\x05\t\x05\x04\x06\t\x06\x04\x07" +
		"\t\x07\x04\b\t\b\x04\t\t\t\x04\n\t\n\x04\v\t\v\x04\f\t\f\x04\r\t\r\x04" +
		"\x0E\t\x0E\x04\x0F\t\x0F\x04\x10\t\x10\x04\x11\t\x11\x04\x12\t\x12\x04" +
		"\x13\t\x13\x04\x14\t\x14\x04\x15\t\x15\x04\x16\t\x16\x04\x17\t\x17\x04" +
		"\x18\t\x18\x04\x19\t\x19\x04\x1A\t\x1A\x04\x1B\t\x1B\x04\x1C\t\x1C\x04" +
		"\x1D\t\x1D\x04\x1E\t\x1E\x04\x1F\t\x1F\x04 \t \x04!\t!\x04\"\t\"\x04#" +
		"\t#\x04$\t$\x04%\t%\x04&\t&\x04\'\t\'\x04(\t(\x04)\t)\x04*\t*\x04+\t+" +
		"\x04,\t,\x04-\t-\x04.\t.\x04/\t/\x040\t0\x041\t1\x042\t2\x043\t3\x044" +
		"\t4\x045\t5\x046\t6\x047\t7\x048\t8\x049\t9\x04:\t:\x04;\t;\x03\x02\x05" +
		"\x02x\n\x02\x03\x02\x03\x02\x03\x03\x05\x03}\n\x03\x03\x03\x06\x03\x80" +
		"\n\x03\r\x03\x0E\x03\x81\x03\x04\x03\x04\x05\x04\x86\n\x04\x03\x04\x03" +
		"\x04\x03\x04\x05\x04\x8B\n\x04\x03\x04\x05\x04\x8E\n\x04\x03\x04\x03\x04" +
		"\x05\x04\x92\n\x04\x05\x04\x94\n\x04\x03\x05\x03\x05\x03\x05\x03\x05\x03" +
		"\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x05\x05\xA1\n\x05" +
		"\x03\x06\x03\x06\x03\x07\x03\x07\x03\x07\x03\b\x03\b\x03\b\x03\t\x03\t" +
		"\x03\t\x03\t\x07\t\xAF\n\t\f\t\x0E\t\xB2\v\t\x03\n\x03\n\x03\n\x03\n\x03" +
		"\v\x03\v\x03\v\x03\v\x07\v\xBC\n\v\f\v\x0E\v\xBF\v\v\x03\f\x03\f\x03\f" +
		"\x03\f\x05\f\xC5\n\f\x03\r\x03\r\x03\r\x03\r\x07\r\xCB\n\r\f\r\x0E\r\xCE" +
		"\v\r\x03\x0E\x03\x0E\x03\x0E\x05\x0E\xD3\n\x0E\x03\x0F\x03\x0F\x03\x0F" +
		"\x05\x0F\xD8\n\x0F\x03\x0F\x03\x0F\x03\x10\x03\x10\x03\x10\x05\x10\xDF" +
		"\n\x10\x03\x10\x03\x10\x03\x11\x03\x11\x03\x11\x05\x11\xE6\n\x11\x03\x11" +
		"\x03\x11\x03\x12\x03\x12\x05\x12\xEC\n\x12\x03\x12\x03\x12\x03\x12\x03" +
		"\x13\x03\x13\x03\x13\x03\x14\x03\x14\x03\x14\x05\x14\xF7\n\x14\x03\x14" +
		"\x03\x14\x03\x14\x03\x15\x03\x15\x03\x15\x03\x15\x03\x15\x03\x15\x03\x15" +
		"\x03\x15\x03\x15\x03\x15\x03\x15\x03\x15\x03\x15\x03\x15\x03\x15\x03\x15" +
		"\x05\x15\u010C\n\x15\x03\x16\x03\x16\x03\x17\x03\x17\x03\x17\x03\x17\x03" +
		"\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x05" +
		"\x17\u011D\n\x17\x03\x17\x03\x17\x03\x17\x03\x17\x05\x17\u0123\n\x17\x03" +
		"\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03" +
		"\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03" +
		"\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03" +
		"\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03" +
		"\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03" +
		"\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03" +
		"\x17\x03\x17\x05\x17\u015D\n\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17" +
		"\x03\x17\x03\x17\x05\x17\u0166\n\x17\x03\x17\x03\x17\x03\x17\x05\x17\u016B" +
		"\n\x17\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x05\x18\u0180\n\x18\x03\x18\x03\x18\x03\x18\x03\x18\x03" +
		"\x18\x05\x18\u0187\n\x18\x05\x18\u0189\n\x18\x03\x19\x03\x19\x03\x19\x05" +
		"\x19\u018E\n\x19\x03\x1A\x03\x1A\x03\x1A\x03\x1A\x03\x1A\x03\x1A\x03\x1A" +
		"\x03\x1A\x03\x1A\x05\x1A\u0199\n\x1A\x03\x1A\x03\x1A\x03\x1A\x03\x1A\x03" +
		"\x1A\x03\x1A\x03\x1A\x05\x1A\u01A2\n\x1A\x03\x1A\x05\x1A\u01A5\n\x1A\x03" +
		"\x1B\x03\x1B\x03\x1B\x05\x1B\u01AA\n\x1B\x03\x1B\x03\x1B\x03\x1B\x03\x1B" +
		"\x05\x1B\u01B0\n\x1B\x03\x1B\x03\x1B\x03\x1B\x05\x1B\u01B5\n\x1B\x03\x1B" +
		"\x03\x1B\x03\x1B\x03\x1B\x03\x1B\x03\x1B\x05\x1B\u01BD\n\x1B\x03\x1B\x05" +
		"\x1B\u01C0\n\x1B\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x05\x1C\u01C6\n\x1C\x03" +
		"\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x05\x1C\u01CF\n\x1C" +
		"\x03\x1C\x05\x1C\u01D2\n\x1C\x03\x1D\x03\x1D\x05\x1D\u01D6\n\x1D\x03\x1E" +
		"\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x05\x1E\u01E0" +
		"\n\x1E\x03\x1F\x03\x1F\x03\x1F\x05\x1F\u01E5\n\x1F\x03 \x03 \x03 \x03" +
		" \x03 \x03 \x03 \x03 \x03 \x05 \u01F0\n \x03 \x03 \x03 \x03 \x03 \x03" +
		" \x03 \x03 \x03 \x03 \x05 \u01FC\n \x03!\x03!\x05!\u0200\n!\x03\"\x03" +
		"\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x05" +
		"\"\u020F\n\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03" +
		"\"\x03\"\x03\"\x05\"\u021D\n\"\x03#\x03#\x03#\x03#\x05#\u0223\n#\x03#" +
		"\x03#\x03#\x03#\x03#\x05#\u022A\n#\x03#\x03#\x03#\x05#\u022F\n#\x03$\x03" +
		"$\x05$\u0233\n$\x03$\x03$\x03$\x05$\u0238\n$\x05$\u023A\n$\x03%\x03%\x03" +
		"%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x05%\u0247\n%\x03%\x03%\x03" +
		"%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03" +
		"%\x05%\u025A\n%\x05%\u025C\n%\x03&\x03&\x03\'\x03\'\x03(\x03(\x03)\x03" +
		")\x03*\x03*\x03+\x03+\x03,\x03,\x03-\x03-\x03.\x03.\x03.\x03.\x05.\u0272" +
		"\n.\x03/\x03/\x030\x030\x031\x031\x032\x032\x033\x033\x034\x034\x035\x03" +
		"5\x035\x035\x035\x035\x035\x055\u0287\n5\x035\x035\x035\x035\x075\u028D" +
		"\n5\f5\x0E5\u0290\v5\x036\x036\x037\x037\x037\x037\x057\u0298\n7\x038" +
		"\x038\x039\x039\x03:\x03:\x03;\x03;\x03;\x05\xB0\xBD\xCC\x02\x03h<\x02" +
		"\x02\x04\x02\x06\x02\b\x02\n\x02\f\x02\x0E\x02\x10\x02\x12\x02\x14\x02" +
		"\x16\x02\x18\x02\x1A\x02\x1C\x02\x1E\x02 \x02\"\x02$\x02&\x02(\x02*\x02" +
		",\x02.\x020\x022\x024\x026\x028\x02:\x02<\x02>\x02@\x02B\x02D\x02F\x02" +
		"H\x02J\x02L\x02N\x02P\x02R\x02T\x02V\x02X\x02Z\x02\\\x02^\x02`\x02b\x02" +
		"d\x02f\x02h\x02j\x02l\x02n\x02p\x02r\x02t\x02\x02\n\x03\x03OO\x03\x02" +
		"06\x04\x02--04\x04\x02..04\x03\x027:\x03\x028;\x03\x02<=\x03\x02@B\x02" +
		"\u02DD\x02w\x03\x02\x02\x02\x04\x7F\x03\x02\x02\x02\x06\x93\x03\x02\x02" +
		"\x02\b\xA0\x03\x02\x02\x02\n\xA2\x03\x02\x02\x02\f\xA4\x03\x02\x02\x02" +
		"\x0E\xA7\x03\x02\x02\x02\x10\xAA\x03\x02\x02\x02\x12\xB3\x03\x02\x02\x02" +
		"\x14\xB7\x03\x02\x02\x02\x16\xC0\x03\x02\x02\x02\x18\xC6\x03\x02\x02\x02" +
		"\x1A\xD2\x03\x02\x02\x02\x1C\xD4\x03\x02\x02\x02\x1E\xDB\x03\x02\x02\x02" +
		" \xE2\x03\x02\x02\x02\"\xE9\x03\x02\x02\x02$\xF0\x03\x02\x02\x02&\xF3" +
		"\x03\x02\x02\x02(\u010B\x03\x02\x02\x02*\u010D\x03\x02\x02\x02,\u016A" +
		"\x03\x02\x02\x02.\u0188\x03\x02\x02\x020\u018A\x03\x02\x02\x022\u01A4" +
		"\x03\x02\x02\x024\u01BF\x03\x02\x02\x026\u01D1\x03\x02\x02\x028\u01D3" +
		"\x03\x02\x02\x02:\u01DF\x03\x02\x02\x02<\u01E1\x03\x02\x02\x02>\u01FB" +
		"\x03\x02\x02\x02@\u01FD\x03\x02\x02\x02B\u021C\x03\x02\x02\x02D\u022E" +
		"\x03\x02\x02\x02F\u0239\x03\x02\x02\x02H\u025B\x03\x02\x02\x02J\u025D" +
		"\x03\x02\x02\x02L\u025F\x03\x02\x02\x02N\u0261\x03\x02\x02\x02P\u0263" +
		"\x03\x02\x02\x02R\u0265\x03\x02\x02\x02T\u0267\x03\x02\x02\x02V\u0269" +
		"\x03\x02\x02\x02X\u026B\x03\x02\x02\x02Z\u0271\x03\x02\x02\x02\\\u0273" +
		"\x03\x02\x02\x02^\u0275\x03\x02\x02\x02`\u0277\x03\x02\x02\x02b\u0279" +
		"\x03\x02\x02\x02d\u027B\x03\x02\x02\x02f\u027D\x03\x02\x02\x02h\u0286" +
		"\x03\x02\x02\x02j\u0291\x03\x02\x02\x02l\u0297\x03\x02\x02\x02n\u0299" +
		"\x03\x02\x02\x02p\u029B\x03\x02\x02\x02r\u029D\x03\x02\x02\x02t\u029F" +
		"\x03\x02\x02\x02vx\x05\x04\x03\x02wv\x03\x02\x02\x02wx\x03\x02\x02\x02" +
		"xy\x03\x02\x02\x02yz\x07\x02\x02\x03z\x03\x03\x02\x02\x02{}\x05\x06\x04" +
		"\x02|{\x03\x02\x02\x02|}\x03\x02\x02\x02}~\x03\x02\x02\x02~\x80\x07O\x02" +
		"\x02\x7F|\x03\x02\x02\x02\x80\x81\x03\x02\x02\x02\x81\x7F\x03\x02\x02" +
		"\x02\x81\x82\x03\x02\x02\x02\x82\x05\x03\x02\x02\x02\x83\x85\x05\b\x05" +
		"\x02\x84\x86\x05^0\x02\x85\x84\x03\x02\x02\x02\x85\x86\x03\x02\x02\x02" +
		"\x86\x94\x03\x02\x02\x02\x87\x94\x05^0\x02\x88\x8A\x05Z.\x02\x89\x8B\x05" +
		"^0\x02\x8A\x89\x03\x02\x02\x02\x8A\x8B\x03\x02\x02\x02\x8B\x94\x03\x02" +
		"\x02\x02\x8C\x8E\x05Z.\x02\x8D\x8C\x03\x02\x02\x02\x8D\x8E\x03\x02\x02" +
		"\x02\x8E\x8F\x03\x02\x02\x02\x8F\x91\x05(\x15\x02\x90\x92\x05^0\x02\x91" +
		"\x90\x03\x02\x02\x02\x91\x92\x03\x02\x02\x02\x92\x94\x03\x02\x02\x02\x93" +
		"\x83\x03\x02\x02\x02\x93\x87\x03\x02\x02\x02\x93\x88\x03\x02\x02\x02\x93" +
		"\x8D\x03\x02\x02\x02\x94\x07\x03\x02\x02\x02\x95\xA1\x05\n\x06\x02\x96" +
		"\xA1\x05\f\x07\x02\x97\xA1\x05\x14\v\x02\x98\xA1\x05\x0E\b\x02\x99\xA1" +
		"\x05\x10\t\x02\x9A\xA1\x05\x12\n\x02\x9B\xA1\x05\x16\f\x02\x9C\xA1\x05" +
		"\x18\r\x02\x9D\xA1\x05\x1C\x0F\x02\x9E\xA1\x05\x1E\x10\x02\x9F\xA1\x05" +
		" \x11\x02\xA0\x95\x03\x02\x02\x02\xA0\x96\x03\x02\x02\x02\xA0\x97\x03" +
		"\x02\x02\x02\xA0\x98\x03\x02\x02\x02\xA0\x99\x03\x02\x02\x02\xA0\x9A\x03" +
		"\x02\x02\x02\xA0\x9B\x03\x02\x02\x02\xA0\x9C\x03\x02\x02\x02\xA0\x9D\x03" +
		"\x02\x02\x02\xA0\x9E\x03\x02\x02\x02\xA0\x9F\x03\x02\x02\x02\xA1\t\x03" +
		"\x02\x02\x02\xA2\xA3\x07\x07\x02\x02\xA3\v\x03\x02\x02\x02\xA4\xA5\x07" +
		"\b\x02\x02\xA5\xA6\x05h5\x02\xA6\r\x03\x02\x02\x02\xA7\xA8\x07\t\x02\x02" +
		"\xA8\xA9\x05\\/\x02\xA9\x0F\x03\x02\x02\x02\xAA\xAB\x07\n\x02\x02\xAB" +
		"\xB0\x05\\/\x02\xAC\xAD\x07N\x02\x02\xAD\xAF\x05\\/\x02\xAE\xAC\x03\x02" +
		"\x02\x02\xAF\xB2\x03\x02\x02\x02\xB0\xB1\x03\x02\x02\x02\xB0\xAE\x03\x02" +
		"\x02\x02\xB1\x11\x03\x02\x02\x02\xB2\xB0\x03\x02\x02\x02\xB3\xB4\x07\v" +
		"\x02\x02\xB4\xB5\x07\x03\x02\x02\xB5\xB6\x05h5\x02\xB6\x13\x03\x02\x02" +
		"\x02\xB7\xB8\x07\x0E\x02\x02\xB8\xBD\x05h5\x02\xB9\xBA\x07N\x02\x02\xBA" +
		"\xBC\x05h5\x02\xBB\xB9\x03\x02\x02\x02\xBC\xBF\x03\x02\x02\x02\xBD\xBE" +
		"\x03\x02\x02\x02\xBD\xBB\x03\x02\x02\x02\xBE\x15\x03\x02\x02\x02\xBF\xBD" +
		"\x03\x02\x02\x02\xC0\xC1\x07\f\x02\x02\xC1\xC4\x05h5\x02\xC2\xC3\x07N" +
		"\x02\x02\xC3\xC5\x05h5\x02\xC4\xC2\x03\x02\x02\x02\xC4\xC5\x03\x02\x02" +
		"\x02\xC5\x17\x03\x02\x02\x02\xC6\xC7\x07\r\x02\x02\xC7\xCC\x05\x1A\x0E" +
		"\x02\xC8\xC9\x07N\x02\x02\xC9\xCB\x05\x1A\x0E\x02\xCA\xC8\x03\x02\x02" +
		"\x02\xCB\xCE\x03\x02\x02\x02\xCC\xCD\x03\x02\x02\x02\xCC\xCA\x03\x02\x02" +
		"\x02\xCD\x19\x03\x02\x02\x02\xCE\xCC\x03\x02\x02\x02\xCF\xD3\x05`1\x02" +
		"\xD0\xD3\x05b2\x02\xD1\xD3\x05d3\x02\xD2\xCF\x03\x02\x02\x02\xD2\xD0\x03" +
		"\x02\x02\x02\xD2\xD1\x03\x02\x02\x02\xD3\x1B\x03\x02\x02\x02\xD4\xD5\x07" +
		"\x11\x02\x02\xD5\xD7\x05h5\x02\xD6\xD8\x05^0\x02\xD7\xD6\x03\x02\x02\x02" +
		"\xD7\xD8\x03\x02\x02\x02\xD8\xD9\x03\x02\x02\x02\xD9\xDA\x05\"\x12\x02" +
		"\xDA\x1D\x03\x02\x02\x02\xDB\xDC\x07\x12\x02\x02\xDC\xDE\x05\\/\x02\xDD" +
		"\xDF\x05^0\x02\xDE\xDD\x03\x02\x02\x02\xDE\xDF\x03\x02\x02\x02\xDF\xE0" +
		"\x03\x02\x02\x02\xE0\xE1\x05\"\x12\x02\xE1\x1F\x03\x02\x02\x02\xE2\xE3" +
		"\x07\x13\x02\x02\xE3\xE5\x05\\/\x02\xE4\xE6\x05^0\x02\xE5\xE4\x03\x02" +
		"\x02\x02\xE5\xE6\x03\x02\x02\x02\xE6\xE7\x03\x02\x02\x02\xE7\xE8\x05\"" +
		"\x12\x02\xE8!\x03\x02\x02\x02\xE9\xEB\x05\x04\x03\x02\xEA\xEC\x05$\x13" +
		"\x02\xEB\xEA\x03\x02\x02\x02\xEB\xEC\x03\x02\x02\x02\xEC\xED\x03\x02\x02" +
		"\x02\xED\xEE\x07\x15\x02\x02\xEE\xEF\t\x02\x02\x02\xEF#\x03\x02\x02\x02" +
		"\xF0\xF1\x07\x14\x02\x02\xF1\xF2\x05\x04\x03\x02\xF2%\x03\x02\x02\x02" +
		"\xF3\xF4\x07\x16\x02\x02\xF4\xF6\x05f4\x02\xF5\xF7\x05^0\x02\xF6\xF5\x03" +
		"\x02\x02\x02\xF6\xF7\x03\x02\x02\x02\xF7\xF8\x03\x02\x02\x02\xF8\xF9\x05" +
		"\x04\x03\x02\xF9\xFA\x07\x17\x02\x02\xFA\'\x03\x02\x02\x02\xFB\u010C\x05" +
		"*\x16\x02\xFC\u010C\x05,\x17\x02\xFD\u010C\x05.\x18\x02\xFE\u010C\x05" +
		"0\x19\x02\xFF\u010C\x052\x1A\x02\u0100\u010C\x054\x1B\x02\u0101\u010C" +
		"\x056\x1C\x02\u0102\u010C\x058\x1D\x02\u0103\u010C\x05:\x1E\x02\u0104" +
		"\u010C\x05<\x1F\x02\u0105\u010C\x05> \x02\u0106\u010C\x05@!\x02\u0107" +
		"\u010C\x05B\"\x02\u0108\u010C\x05D#\x02\u0109\u010C\x05F$\x02\u010A\u010C" +
		"\x05H%\x02\u010B\xFB\x03\x02\x02\x02\u010B\xFC\x03\x02\x02\x02\u010B\xFD" +
		"\x03\x02\x02\x02\u010B\xFE\x03\x02\x02\x02\u010B\xFF\x03\x02\x02\x02\u010B" +
		"\u0100\x03\x02\x02\x02\u010B\u0101\x03\x02\x02\x02\u010B\u0102\x03\x02" +
		"\x02\x02\u010B\u0103\x03\x02\x02\x02\u010B\u0104\x03\x02\x02\x02\u010B" +
		"\u0105\x03\x02\x02\x02\u010B\u0106\x03\x02\x02\x02\u010B\u0107\x03\x02" +
		"\x02\x02\u010B\u0108\x03\x02\x02\x02\u010B\u0109\x03\x02\x02\x02\u010B" +
		"\u010A\x03\x02\x02\x02\u010C)\x03\x02\x02\x02\u010D\u010E\x07\x18\x02" +
		"\x02\u010E+\x03\x02\x02\x02\u010F\u011C\x07\x19\x02\x02\u0110\u0111\x05" +
		"N(\x02\u0111\u0112\x07N\x02\x02\u0112\u0113\x05N(\x02\u0113\u011D\x03" +
		"\x02\x02\x02\u0114\u0115\x05P)\x02\u0115\u0116\x07N\x02\x02\u0116\u0117" +
		"\x05P)\x02\u0117\u011D\x03\x02\x02\x02\u0118\u0119\x05R*\x02\u0119\u011A" +
		"\x07N\x02\x02\u011A\u011B\x05R*\x02\u011B\u011D\x03\x02\x02\x02\u011C" +
		"\u0110\x03\x02\x02\x02\u011C\u0114\x03\x02\x02\x02\u011C\u0118\x03\x02" +
		"\x02\x02\u011D\u016B\x03\x02\x02\x02\u011E\u0122\x07\x19\x02\x02\u011F" +
		"\u0123\x05N(\x02\u0120\u0123\x07-\x02\x02\u0121\u0123\x07.\x02\x02\u0122" +
		"\u011F\x03\x02\x02\x02\u0122\u0120\x03\x02\x02\x02\u0122\u0121\x03\x02" +
		"\x02\x02\u0123\u0124\x03\x02\x02\x02\u0124\u0125\x07N\x02\x02\u0125\u016B" +
		"\x05d3\x02\u0126\u0127\x07\x19\x02\x02\u0127\u0128\x05N(\x02\u0128\u0129" +
		"\x07N\x02\x02\u0129\u012A\x07L\x02\x02\u012A\u012B\x07:\x02\x02\u012B" +
		"\u012C\x07M\x02\x02\u012C\u016B\x03\x02\x02\x02\u012D\u012E\x07\x19\x02" +
		"\x02\u012E\u012F\x05N(\x02\u012F\u0130\x07N\x02\x02\u0130\u0131\x07L\x02" +
		"\x02\u0131\u0132\x05X-\x02\u0132\u0133\x07C\x02\x02\u0133\u0134\x05J&" +
		"\x02\u0134\u0135\x07M\x02\x02\u0135\u016B\x03\x02\x02\x02\u0136\u0137" +
		"\x07\x19\x02\x02\u0137\u0138\x07L\x02\x02\u0138\u0139\x07:\x02\x02\u0139" +
		"\u013A\x07M\x02\x02\u013A\u013B\x07N\x02\x02\u013B\u016B\x05N(\x02\u013C" +
		"\u013D\x07\x19\x02\x02\u013D\u013E\x07L\x02\x02\u013E\u013F\x05X-\x02" +
		"\u013F\u0140\x07C\x02\x02\u0140\u0141\x05J&\x02\u0141\u0142\x07M\x02\x02" +
		"\u0142\u0143\x07N\x02\x02\u0143\u0144\x05N(\x02\u0144\u016B\x03\x02\x02" +
		"\x02\u0145\u0146\x07\x19\x02\x02\u0146\u0147\x07L\x02\x02\u0147\u0148" +
		"\x07:\x02\x02\u0148\u0149\x07M\x02\x02\u0149\u014A\x07N\x02\x02\u014A" +
		"\u016B\x05d3\x02\u014B\u014C\x07\x19\x02\x02\u014C\u014D\x07L\x02\x02" +
		"\u014D\u014E\x05X-\x02\u014E\u014F\x07C\x02\x02\u014F\u0150\x05J&\x02" +
		"\u0150\u0151\x07M\x02\x02\u0151\u0152\x07N\x02\x02\u0152\u0153\x05d3\x02" +
		"\u0153\u016B\x03\x02\x02\x02\u0154\u0155\x07\x19\x02\x02\u0155\u0156\x07" +
		"0\x02\x02\u0156\u0157\x07N\x02\x02\u0157\u015C\x07L\x02\x02\u0158\u015D" +
		"\x078\x02\x02\u0159\u015D\x079\x02\x02\u015A\u015D\x07/\x02\x02\u015B" +
		"\u015D\x05h5\x02\u015C\u0158\x03\x02\x02\x02\u015C\u0159\x03\x02\x02\x02" +
		"\u015C\u015A\x03\x02\x02\x02\u015C\u015B\x03\x02\x02\x02\u015D\u015E\x03" +
		"\x02\x02\x02\u015E\u016B\x07M\x02\x02\u015F\u0160\x07\x19\x02\x02\u0160" +
		"\u0165\x07L\x02\x02\u0161\u0166\x078\x02\x02\u0162\u0166\x079\x02\x02" +
		"\u0163\u0166\x07/\x02\x02\u0164\u0166\x05f4\x02\u0165\u0161\x03\x02\x02" +
		"\x02\u0165\u0162\x03\x02\x02\x02\u0165\u0163\x03\x02\x02\x02\u0165\u0164" +
		"\x03\x02\x02\x02\u0166\u0167\x03\x02\x02\x02\u0167\u0168\x07M\x02\x02" +
		"\u0168\u0169\x07N\x02\x02\u0169\u016B\x070\x02\x02\u016A\u010F\x03\x02" +
		"\x02\x02\u016A\u011E\x03\x02\x02\x02\u016A\u0126\x03\x02\x02\x02\u016A" +
		"\u012D\x03\x02\x02\x02\u016A\u0136\x03\x02\x02\x02\u016A\u013C\x03\x02" +
		"\x02\x02\u016A\u0145\x03\x02\x02\x02\u016A\u014B\x03\x02\x02\x02\u016A" +
		"\u0154\x03\x02\x02\x02\u016A\u015F\x03\x02\x02\x02\u016B-\x03\x02\x02" +
		"\x02\u016C\u016D\x07\x19\x02\x02\u016D\u016E\x05V,\x02\u016E\u016F\x07" +
		"N\x02\x02\u016F\u0170\x05f4\x02\u0170\u0189\x03\x02\x02\x02\u0171\u0172" +
		"\x07\x19\x02\x02\u0172\u0173\x05X-\x02\u0173\u0174\x07N\x02\x02\u0174" +
		"\u0175\x07L\x02\x02\u0175\u0176\x05f4\x02\u0176\u0177\x07M\x02\x02\u0177" +
		"\u0189\x03\x02\x02\x02\u0178\u0179\x07\x19\x02\x02\u0179\u017A\x07L\x02" +
		"\x02\u017A\u017B\x05f4\x02\u017B\u017C\x07M\x02\x02\u017C\u017F\x07N\x02" +
		"\x02\u017D\u0180\x05V,\x02\u017E\u0180\x05X-\x02\u017F\u017D\x03\x02\x02" +
		"\x02\u017F\u017E\x03\x02\x02\x02\u0180\u0189\x03\x02\x02\x02\u0181\u0182" +
		"\x07\x19\x02\x02\u0182\u0183\x07;\x02\x02\u0183\u0186\x07N\x02\x02\u0184" +
		"\u0187\x07:\x02\x02\u0185\u0187\x05X-\x02\u0186\u0184\x03\x02\x02\x02" +
		"\u0186\u0185\x03\x02\x02\x02\u0187\u0189\x03\x02\x02\x02\u0188\u016C\x03" +
		"\x02\x02\x02\u0188\u0171\x03\x02\x02\x02\u0188\u0178\x03\x02\x02\x02\u0188" +
		"\u0181\x03\x02\x02\x02\u0189/\x03\x02\x02\x02\u018A\u018D\x07\x1A\x02" +
		"\x02\u018B\u018E\x05T+\x02\u018C\u018E\x05X-\x02\u018D\u018B\x03\x02\x02" +
		"\x02\u018D\u018C\x03\x02\x02\x02\u018E1\x03\x02\x02\x02\u018F\u0190\x07" +
		"\x1B\x02\x02\u0190\u0191\x079\x02\x02\u0191\u0192\x07N\x02\x02\u0192\u01A5" +
		"\x07:\x02\x02\u0193\u0194\x07\x1B\x02\x02\u0194\u0195\x077\x02\x02\u0195" +
		"\u0196\x07N\x02\x02\u0196\u0198\x077\x02\x02\u0197\u0199\x07\x04\x02\x02" +
		"\u0198\u0197\x03\x02\x02\x02\u0198\u0199\x03\x02\x02\x02\u0199\u01A5\x03" +
		"\x02\x02\x02\u019A\u019B\x07\x1B\x02\x02\u019B\u019C\x07L\x02\x02\u019C" +
		"\u019D\x07;\x02\x02\u019D\u019E\x07M\x02\x02\u019E\u01A1\x07N\x02\x02" +
		"\u019F\u01A2\x07:\x02\x02\u01A0\u01A2\x05X-\x02\u01A1\u019F\x03\x02\x02" +
		"\x02\u01A1\u01A0\x03\x02\x02\x02\u01A2\u01A5\x03\x02\x02\x02\u01A3\u01A5" +
		"\x07\x1C\x02\x02\u01A4\u018F\x03\x02\x02\x02\u01A4\u0193\x03\x02\x02\x02" +
		"\u01A4\u019A\x03\x02\x02\x02\u01A4\u01A3\x03\x02\x02\x02\u01A53\x03\x02" +
		"\x02\x02\u01A6\u01A9\x07\x1D\x02\x02\u01A7\u01A8\x070\x02\x02\u01A8\u01AA" +
		"\x07N\x02\x02\u01A9\u01A7\x03\x02\x02\x02\u01A9\u01AA\x03\x02\x02\x02" +
		"\u01AA\u01AF\x03\x02\x02\x02\u01AB\u01B0\x05N(\x02\u01AC\u01B0\x07-\x02" +
		"\x02\u01AD\u01B0\x07.\x02\x02\u01AE\u01B0\x05d3\x02\u01AF\u01AB\x03\x02" +
		"\x02\x02\u01AF\u01AC\x03\x02\x02\x02\u01AF\u01AD\x03\x02\x02\x02\u01AF" +
		"\u01AE\x03\x02\x02\x02\u01B0\u01C0\x03\x02\x02\x02\u01B1\u01B4\x07\x1D" +
		"\x02\x02\u01B2\u01B3\x070\x02\x02\u01B3\u01B5\x07N\x02\x02\u01B4\u01B2" +
		"\x03\x02\x02\x02\u01B4\u01B5\x03\x02\x02\x02\u01B5\u01B6\x03\x02\x02\x02" +
		"\u01B6\u01BC\x07L\x02\x02\u01B7\u01BD\x07:\x02\x02\u01B8\u01B9\x05X-\x02" +
		"\u01B9\u01BA\x07C\x02\x02\u01BA\u01BB\x05J&\x02\u01BB\u01BD\x03\x02\x02" +
		"\x02\u01BC\u01B7\x03\x02\x02\x02\u01BC\u01B8\x03\x02\x02\x02\u01BD\u01BE" +
		"\x03\x02\x02\x02\u01BE\u01C0\x07M\x02\x02\u01BF\u01A6\x03\x02\x02\x02" +
		"\u01BF\u01B1\x03\x02\x02\x02\u01C05\x03\x02\x02\x02\u01C1\u01C5\x07\x1E" +
		"\x02\x02\u01C2\u01C6\x05N(\x02\u01C3\u01C6\x07-\x02\x02\u01C4\u01C6\x07" +
		".\x02\x02\u01C5\u01C2\x03\x02\x02\x02\u01C5\u01C3\x03\x02\x02\x02\u01C5" +
		"\u01C4\x03\x02\x02\x02\u01C6\u01D2\x03\x02\x02\x02\u01C7\u01C8\x07\x1E" +
		"\x02\x02\u01C8\u01CE\x07L\x02\x02\u01C9\u01CF\x07:\x02\x02\u01CA\u01CB" +
		"\x05X-\x02\u01CB\u01CC\x07C\x02\x02\u01CC\u01CD\x05J&\x02\u01CD\u01CF" +
		"\x03\x02\x02\x02\u01CE\u01C9\x03\x02\x02\x02\u01CE\u01CA\x03\x02\x02\x02" +
		"\u01CF\u01D0\x03\x02\x02\x02\u01D0\u01D2\x07M\x02\x02\u01D1\u01C1\x03" +
		"\x02\x02\x02\u01D1\u01C7\x03\x02\x02\x02\u01D27\x03\x02\x02\x02\u01D3" +
		"\u01D5\x07\x1F\x02\x02\u01D4\u01D6\x070\x02\x02\u01D5\u01D4\x03\x02\x02" +
		"\x02\u01D5\u01D6\x03\x02\x02\x02\u01D69\x03\x02\x02\x02\u01D7\u01D8\x07" +
		" \x02\x02\u01D8\u01D9\x07:\x02\x02\u01D9\u01DA\x07N\x02\x02\u01DA\u01E0" +
		"\x05V,\x02\u01DB\u01DC\x07 \x02\x02\u01DC\u01DD\x07<\x02\x02\u01DD\u01DE" +
		"\x07N\x02\x02\u01DE\u01E0\x05X-\x02\u01DF\u01D7\x03\x02\x02\x02\u01DF" +
		"\u01DB\x03\x02\x02\x02\u01E0;\x03\x02\x02\x02\u01E1\u01E4\x07\x1E\x02" +
		"\x02\u01E2\u01E5\x05V,\x02\u01E3\u01E5\x05X-\x02\u01E4\u01E2\x03\x02\x02" +
		"\x02\u01E4\u01E3\x03\x02\x02\x02\u01E5=\x03\x02\x02\x02\u01E6\u01E7\x07" +
		"!\x02\x02\u01E7\u01FC\x05N(\x02\u01E8\u01E9\x07!\x02\x02\u01E9\u01EF\x07" +
		"L\x02\x02\u01EA\u01F0\x07:\x02\x02\u01EB\u01EC\x05X-\x02\u01EC\u01ED\x07" +
		"C\x02\x02\u01ED\u01EE\x05J&\x02\u01EE\u01F0\x03\x02\x02\x02\u01EF\u01EA" +
		"\x03\x02\x02\x02\u01EF\u01EB\x03\x02\x02\x02\u01F0\u01F1\x03\x02\x02\x02" +
		"\u01F1\u01FC\x07M\x02\x02\u01F2\u01F3\x07!\x02\x02\u01F3\u01F4\x07L\x02" +
		"\x02\u01F4\u01F5\x05X-\x02\u01F5\u01F6\x07C\x02\x02\u01F6\u01F7\x05J&" +
		"\x02\u01F7\u01F8\x07M\x02\x02\u01F8\u01F9\x07N\x02\x02\u01F9\u01FA\x05" +
		"N(\x02\u01FA\u01FC\x03\x02\x02\x02\u01FB\u01E6\x03\x02\x02\x02\u01FB\u01E8" +
		"\x03\x02\x02\x02\u01FB\u01F2\x03\x02\x02\x02\u01FC?\x03\x02\x02\x02\u01FD" +
		"\u01FF\x07\"\x02\x02\u01FE\u0200\x070\x02\x02\u01FF\u01FE\x03\x02\x02" +
		"\x02\u01FF\u0200\x03\x02\x02\x02\u0200A\x03\x02\x02\x02\u0201\u0202\x07" +
		"#\x02\x02\u0202\u0203\x07H\x02\x02\u0203\u0204\x07N\x02\x02\u0204\u021D" +
		"\x05N(\x02\u0205\u0206\x07#\x02\x02\u0206\u0207\x07H\x02\x02\u0207\u0208" +
		"\x07N\x02\x02\u0208\u020E\x07L\x02\x02\u0209\u020F\x07:\x02\x02\u020A" +
		"\u020B\x05X-\x02\u020B\u020C\x07C\x02\x02\u020C\u020D\x05J&\x02\u020D" +
		"\u020F\x03\x02\x02\x02\u020E\u0209\x03\x02\x02\x02\u020E\u020A\x03\x02" +
		"\x02\x02\u020F\u0210\x03\x02\x02\x02\u0210\u021D\x07M\x02\x02\u0211\u0212" +
		"\x07#\x02\x02\u0212\u0213\x07H\x02\x02\u0213\u0214\x07N\x02\x02\u0214" +
		"\u0215\x07L\x02\x02\u0215\u0216\x05X-\x02";
	private static readonly _serializedATNSegment1: string =
		"\u0216\u0217\x07C\x02\x02\u0217\u0218\x05J&\x02\u0218\u0219\x07M\x02\x02" +
		"\u0219\u021A\x07N\x02\x02\u021A\u021B\x05N(\x02\u021B\u021D\x03\x02\x02" +
		"\x02\u021C\u0201\x03\x02\x02\x02\u021C\u0205\x03\x02\x02\x02\u021C\u0211" +
		"\x03\x02\x02\x02\u021DC\x03\x02\x02\x02\u021E\u0222\x07$\x02\x02\u021F" +
		"\u0223\x07:\x02\x02\u0220\u0223\x05X-\x02\u0221\u0223\x05f4\x02\u0222" +
		"\u021F\x03\x02\x02\x02\u0222\u0220\x03\x02\x02\x02\u0222\u0221\x03\x02" +
		"\x02\x02\u0223\u022F\x03\x02\x02\x02\u0224\u0225\x07$\x02\x02\u0225\u0226" +
		"\x07+\x02\x02\u0226\u022F\x05f4\x02\u0227\u0229\x07%\x02\x02\u0228\u022A" +
		"\x07,\x02\x02\u0229\u0228\x03\x02\x02\x02\u0229\u022A\x03\x02\x02\x02" +
		"\u022A\u022B\x03\x02\x02\x02\u022B\u022F\x05L\'\x02\u022C\u022D\x07&\x02" +
		"\x02\u022D\u022F\x05L\'\x02\u022E\u021E\x03\x02\x02\x02\u022E\u0224\x03" +
		"\x02\x02\x02\u022E\u0227\x03\x02\x02\x02\u022E\u022C\x03\x02\x02\x02\u022F" +
		"E\x03\x02\x02\x02\u0230\u0232\x07\'\x02\x02\u0231\u0233\x07+\x02\x02\u0232" +
		"\u0231\x03\x02\x02\x02\u0232\u0233\x03\x02\x02\x02\u0233\u0234\x03\x02" +
		"\x02\x02\u0234\u023A\x05f4\x02\u0235\u0237\x07(\x02\x02\u0236\u0238\x07" +
		",\x02\x02\u0237\u0236\x03\x02\x02\x02\u0237\u0238\x03\x02\x02\x02\u0238" +
		"\u023A\x03\x02\x02\x02\u0239\u0230\x03\x02\x02\x02\u0239\u0235\x03\x02" +
		"\x02\x02\u023AG\x03\x02\x02\x02\u023B\u023C\x07)\x02\x02\u023C\u023D\x07" +
		"0\x02\x02\u023D\u023E\x07N\x02\x02\u023E\u023F\x07L\x02\x02\u023F\u0240" +
		"\x05d3\x02\u0240\u0241\x07M\x02\x02\u0241\u025C\x03\x02\x02\x02\u0242" +
		"\u0246\x07)\x02\x02\u0243\u0244\x05N(\x02\u0244\u0245\x07N\x02\x02\u0245" +
		"\u0247\x03\x02\x02\x02\u0246\u0243\x03\x02\x02\x02\u0246\u0247\x03\x02" +
		"\x02\x02\u0247\u0248\x03\x02\x02\x02\u0248\u0249\x07L\x02\x02\u0249\u024A" +
		"\x072\x02\x02\u024A\u025C\x07M\x02\x02\u024B\u024C\x07*\x02\x02\u024C" +
		"\u024D\x07L\x02\x02\u024D\u024E\x05d3\x02\u024E\u024F\x07M\x02\x02\u024F" +
		"\u0250\x07N\x02\x02\u0250\u0251\x070\x02\x02\u0251\u025C\x03\x02\x02\x02" +
		"\u0252\u0253\x07*\x02\x02\u0253\u0254\x07L\x02\x02\u0254\u0255\x072\x02" +
		"\x02\u0255\u0256\x07M\x02\x02\u0256\u0259\x07N\x02\x02\u0257\u025A\x05" +
		"N(\x02\u0258\u025A\x07I\x02\x02\u0259\u0257\x03\x02\x02\x02\u0259\u0258" +
		"\x03\x02\x02\x02\u025A\u025C\x03\x02\x02\x02\u025B\u023B\x03\x02\x02\x02" +
		"\u025B\u0242\x03\x02\x02\x02\u025B\u024B\x03\x02\x02\x02\u025B\u0252\x03" +
		"\x02\x02\x02\u025CI\x03\x02\x02\x02\u025D\u025E\x05h5\x02\u025EK\x03\x02" +
		"\x02\x02\u025F\u0260\x05h5\x02\u0260M\x03\x02\x02\x02\u0261\u0262\t\x03" +
		"\x02\x02\u0262O\x03\x02\x02\x02\u0263\u0264\t\x04\x02\x02\u0264Q\x03\x02" +
		"\x02\x02\u0265\u0266\t\x05\x02\x02\u0266S\x03\x02\x02\x02\u0267\u0268" +
		"\t\x06\x02\x02\u0268U\x03\x02\x02\x02\u0269\u026A\t\x07\x02\x02\u026A" +
		"W\x03\x02\x02\x02\u026B\u026C\t\b\x02\x02\u026CY\x03\x02\x02\x02\u026D" +
		"\u026E\x07\x05\x02\x02\u026E\u0272\x07>\x02\x02\u026F\u0270\x07>\x02\x02" +
		"\u0270\u0272\x07\x06\x02\x02\u0271\u026D\x03\x02\x02\x02\u0271\u026F\x03" +
		"\x02\x02\x02\u0272[\x03\x02\x02\x02\u0273\u0274\x07>\x02\x02\u0274]\x03" +
		"\x02\x02\x02\u0275\u0276\x07?\x02\x02\u0276_\x03\x02\x02\x02\u0277\u0278" +
		"\x07K\x02\x02\u0278a\x03\x02\x02\x02\u0279\u027A\x07J\x02\x02\u027Ac\x03" +
		"\x02\x02\x02\u027B\u027C\x05h5\x02\u027Ce\x03\x02\x02\x02\u027D\u027E" +
		"\x05h5\x02\u027Eg\x03\x02\x02\x02\u027F\u0280\b5\x01\x02\u0280\u0281\x07" +
		"L\x02\x02\u0281\u0282\x05h5\x02\u0282\u0283\x07M\x02\x02\u0283\u0287\x03" +
		"\x02\x02\x02\u0284\u0287\x05l7\x02\u0285\u0287\x05\\/\x02\u0286\u027F" +
		"\x03\x02\x02\x02\u0286\u0284\x03\x02\x02\x02\u0286\u0285\x03\x02\x02\x02" +
		"\u0287\u028E\x03\x02\x02\x02\u0288\u0289\f\x06\x02\x02\u0289\u028A\x05" +
		"j6\x02\u028A\u028B\x05h5\x07\u028B\u028D\x03\x02\x02\x02\u028C\u0288\x03" +
		"\x02\x02\x02\u028D\u0290\x03\x02\x02\x02\u028E\u028C\x03\x02\x02\x02\u028E" +
		"\u028F\x03\x02\x02\x02\u028Fi\x03\x02\x02\x02\u0290\u028E\x03\x02\x02" +
		"\x02\u0291\u0292\t\t\x02\x02\u0292k\x03\x02\x02\x02\u0293\u0298\x05n8" +
		"\x02\u0294\u0298\x05p9\x02\u0295\u0298\x05r:\x02\u0296\u0298\x05t;\x02" +
		"\u0297\u0293\x03\x02\x02\x02\u0297\u0294\x03\x02\x02\x02\u0297\u0295\x03" +
		"\x02\x02\x02\u0297\u0296\x03\x02\x02\x02\u0298m\x03\x02\x02\x02\u0299" +
		"\u029A\x07D\x02\x02\u029Ao\x03\x02\x02\x02\u029B\u029C\x07E\x02\x02\u029C" +
		"q\x03\x02\x02\x02\u029D\u029E\x07F\x02\x02\u029Es\x03\x02\x02\x02\u029F" +
		"\u02A0\x07G\x02\x02\u02A0u\x03\x02\x02\x02?w|\x81\x85\x8A\x8D\x91\x93" +
		"\xA0\xB0\xBD\xC4\xCC\xD2\xD7\xDE\xE5\xEB\xF6\u010B\u011C\u0122\u015C\u0165" +
		"\u016A\u017F\u0186\u0188\u018D\u0198\u01A1\u01A4\u01A9\u01AF\u01B4\u01BC" +
		"\u01BF\u01C5\u01CE\u01D1\u01D5\u01DF\u01E4\u01EF\u01FB\u01FF\u020E\u021C" +
		"\u0222\u0229\u022E\u0232\u0237\u0239\u0246\u0259\u025B\u0271\u0286\u028E" +
		"\u0297";
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
	public directive_param(): Directive_paramContext | undefined {
		return this.tryGetRuleContext(0, Directive_paramContext);
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
	public directive_ifndef(): Directive_ifndefContext | undefined {
		return this.tryGetRuleContext(0, Directive_ifndefContext);
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


export class Directive_paramContext extends ParserRuleContext {
	public DIRECTIVEparam(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEparam, 0); }
	public expression(): ExpressionContext {
		return this.getRuleContext(0, ExpressionContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_param; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_param) {
			listener.enterDirective_param(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_param) {
			listener.exitDirective_param(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_param) {
			return visitor.visitDirective_param(this);
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
	public directive_ifblock(): Directive_ifblockContext {
		return this.getRuleContext(0, Directive_ifblockContext);
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
	public directive_ifblock(): Directive_ifblockContext {
		return this.getRuleContext(0, Directive_ifblockContext);
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


export class Directive_ifndefContext extends ParserRuleContext {
	public DIRECTIVEifndef(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEifndef, 0); }
	public symbol(): SymbolContext {
		return this.getRuleContext(0, SymbolContext);
	}
	public directive_ifblock(): Directive_ifblockContext {
		return this.getRuleContext(0, Directive_ifblockContext);
	}
	public comment(): CommentContext | undefined {
		return this.tryGetRuleContext(0, CommentContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_ifndef; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_ifndef) {
			listener.enterDirective_ifndef(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_ifndef) {
			listener.exitDirective_ifndef(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_ifndef) {
			return visitor.visitDirective_ifndef(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_ifblockContext extends ParserRuleContext {
	public asm(): AsmContext {
		return this.getRuleContext(0, AsmContext);
	}
	public DIRECTIVEendif(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEendif, 0); }
	public EOL(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.EOL, 0); }
	public EOF(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.EOF, 0); }
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
	public asm(): AsmContext {
		return this.getRuleContext(0, AsmContext);
	}
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
	public REG8sys(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG8sys, 0); }
	public expression(): ExpressionContext | undefined {
		return this.tryGetRuleContext(0, ExpressionContext);
	}
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
	public register16_grpsp(): Register16_grpspContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpspContext);
	}
	public COMMA(): TerminalNode { return this.getToken(z80asmParser.COMMA, 0); }
	public expression16(): Expression16Context | undefined {
		return this.tryGetRuleContext(0, Expression16Context);
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
	public INSTRUCTIONarithmetic(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTIONarithmetic, 0); }
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
	public register16_grpsp(): Register16_grpspContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpspContext);
	}
	public REG16ix(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16ix, 0); }
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
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
	public register16_grpsp(): Register16_grpspContext | undefined {
		return this.tryGetRuleContext(0, Register16_grpspContext);
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
	public BIT8(): TerminalNode { return this.getToken(z80asmParser.BIT8, 0); }
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


export class Instruction_jumpContext extends ParserRuleContext {
	public INSTRUCTIONjump(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONjump, 0); }
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	public expression16(): Expression16Context | undefined {
		return this.tryGetRuleContext(0, Expression16Context);
	}
	public CONDITIONflagsall(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.CONDITIONflagsall, 0); }
	public INSTRUCTIONjumprel(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONjumprel, 0); }
	public offset_rel(): Offset_relContext | undefined {
		return this.tryGetRuleContext(0, Offset_relContext);
	}
	public CONDITIONflags(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.CONDITIONflags, 0); }
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
	public CONDITIONflagsall(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.CONDITIONflagsall, 0); }
	public INSTRUCTIONret(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.INSTRUCTIONret, 0); }
	public CONDITIONflags(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.CONDITIONflags, 0); }
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
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
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
	public SYMBOL(): TerminalNode { return this.getToken(z80asmParser.SYMBOL, 0); }
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
	public OPERATORnum(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.OPERATORnum, 0); }
	public OPERATORbit(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.OPERATORbit, 0); }
	public OPERATORlogic(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.OPERATORlogic, 0); }
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
	public NUMBERdec(): TerminalNode { return this.getToken(z80asmParser.NUMBERdec, 0); }
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
	public NUMBERhex(): TerminalNode { return this.getToken(z80asmParser.NUMBERhex, 0); }
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



// Generated from .\server\src\z80asm\z80asm.g4 by ANTLR 4.9.0-SNAPSHOT


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
	public static readonly DIRECTIVEparam16 = 6;
	public static readonly DIRECTIVEparam32 = 7;
	public static readonly DIRECTIVEsymbol = 8;
	public static readonly DIRECTIVEsymbollist = 9;
	public static readonly DIRECTIVEassign = 10;
	public static readonly DIRECTIVEdefs = 11;
	public static readonly DIRECTIVEdefm = 12;
	public static readonly DIRECTIVEblock = 13;
	public static readonly DIRECTIVEdefvars = 14;
	public static readonly DEFVARSsize = 15;
	public static readonly DIRECTIVEdefgroup = 16;
	public static readonly DIRECTIVEfile = 17;
	public static readonly DIRECTIVEif = 18;
	public static readonly DIRECTIVEifdef = 19;
	public static readonly DIRECTIVEelse = 20;
	public static readonly DIRECTIVEendif = 21;
	public static readonly DIRECTIVEphase = 22;
	public static readonly DIRECTIVEunphase = 23;
	public static readonly INSTRUCTIONvoid = 24;
	public static readonly INSTRUCTIONld = 25;
	public static readonly INSTRUCTIONstack = 26;
	public static readonly INSTRUCTIONexchange = 27;
	public static readonly INSTRUCTIONexxchange = 28;
	public static readonly INSTRUCTIONarithmetic16 = 29;
	public static readonly INSTRUCTIONarithmetic = 30;
	public static readonly INSTRUCTIONincdec = 31;
	public static readonly INSTRUCTIONcpl = 32;
	public static readonly INSTRUCTIONrotate = 33;
	public static readonly INSTRUCTIONrotatedec = 34;
	public static readonly INSTRUCTIONbit = 35;
	public static readonly INSTRUCTIONjump = 36;
	public static readonly INSTRUCTIONjumprel = 37;
	public static readonly INSTRUCTIONjumprelnz = 38;
	public static readonly INSTRUCTIONcall = 39;
	public static readonly INSTRUCTIONret = 40;
	public static readonly INSTRUCTIONrst = 41;
	public static readonly INSTRUCTIONim = 42;
	public static readonly INSTRUCTIONin = 43;
	public static readonly INSTRUCTIONout = 44;
	public static readonly REG8x = 45;
	public static readonly REG8y = 46;
	public static readonly REG8sys = 47;
	public static readonly REG8a = 48;
	public static readonly REG8b = 49;
	public static readonly REG8c = 50;
	public static readonly REG8d = 51;
	public static readonly REG8e = 52;
	public static readonly REG8h = 53;
	public static readonly REG8l = 54;
	public static readonly REG16af = 55;
	public static readonly REG16bc = 56;
	public static readonly REG16de = 57;
	public static readonly REG16hl = 58;
	public static readonly REG16sp = 59;
	public static readonly REG16ix = 60;
	public static readonly REG16iy = 61;
	public static readonly CONDITIONflagsex = 62;
	public static readonly CONDITIONflags = 63;
	public static readonly SYMBOL = 64;
	public static readonly BLOCKCOMMENTtext = 65;
	public static readonly COMMENT = 66;
	public static readonly EQUALS = 67;
	public static readonly PLUS = 68;
	public static readonly MINUS = 69;
	public static readonly MUL = 70;
	public static readonly DIV = 71;
	public static readonly MOD = 72;
	public static readonly POWER = 73;
	public static readonly OPERATORbit = 74;
	public static readonly OPERATORlogic = 75;
	public static readonly INTERRUPTMODE = 76;
	public static readonly BIT8 = 77;
	public static readonly INSTRUCTIONrstvectorhex = 78;
	public static readonly INSTRUCTIONrstvector = 79;
	public static readonly NUMBERbin = 80;
	public static readonly NUMBERoct = 81;
	public static readonly NUMBERdec = 82;
	public static readonly NUMBERhex = 83;
	public static readonly ZERO = 84;
	public static readonly CHARACTER = 85;
	public static readonly STRING = 86;
	public static readonly PARopen = 87;
	public static readonly PARclose = 88;
	public static readonly COMMA = 89;
	public static readonly DOT = 90;
	public static readonly EOL = 91;
	public static readonly WS = 92;
	public static readonly RULE_file = 0;
	public static readonly RULE_asm = 1;
	public static readonly RULE_line = 2;
	public static readonly RULE_directive = 3;
	public static readonly RULE_directive_void = 4;
	public static readonly RULE_directive_file = 5;
	public static readonly RULE_filename = 6;
	public static readonly RULE_directive_param16 = 7;
	public static readonly RULE_directive_param32 = 8;
	public static readonly RULE_directive_symbol = 9;
	public static readonly RULE_directive_symbollist = 10;
	public static readonly RULE_directive_assign = 11;
	public static readonly RULE_directive_block = 12;
	public static readonly RULE_directive_defs = 13;
	public static readonly RULE_directive_defm = 14;
	public static readonly RULE_defmparam = 15;
	public static readonly RULE_directive_if = 16;
	public static readonly RULE_directive_ifdef = 17;
	public static readonly RULE_directive_ifblock = 18;
	public static readonly RULE_directive_elseblock = 19;
	public static readonly RULE_directive_endif = 20;
	public static readonly RULE_directive_phase = 21;
	public static readonly RULE_directive_defvars = 22;
	public static readonly RULE_defvars_vardecl = 23;
	public static readonly RULE_directive_defgroup = 24;
	public static readonly RULE_defgroup_symbol = 25;
	public static readonly RULE_instruction = 26;
	public static readonly RULE_instruction_void = 27;
	public static readonly RULE_instruction_ld8 = 28;
	public static readonly RULE_instruction_ld16 = 29;
	public static readonly RULE_instruction_stack = 30;
	public static readonly RULE_instruction_exchange = 31;
	public static readonly RULE_instruction_arithmetic8 = 32;
	public static readonly RULE_instruction_incdec8 = 33;
	public static readonly RULE_instruction_cpl = 34;
	public static readonly RULE_instruction_arithemic16 = 35;
	public static readonly RULE_instruction_incdec16 = 36;
	public static readonly RULE_instruction_rotate = 37;
	public static readonly RULE_instruction_rotatedec = 38;
	public static readonly RULE_instruction_bit = 39;
	public static readonly RULE_bitindex = 40;
	public static readonly RULE_instruction_jump = 41;
	public static readonly RULE_instruction_call = 42;
	public static readonly RULE_instruction_conditionFlagsAll = 43;
	public static readonly RULE_instruction_conditionFlags = 44;
	public static readonly RULE_instruction_rst = 45;
	public static readonly RULE_instruction_im = 46;
	public static readonly RULE_instruction_io = 47;
	public static readonly RULE_offset_ex = 48;
	public static readonly RULE_offset_rel = 49;
	public static readonly RULE_registers = 50;
	public static readonly RULE_registers8 = 51;
	public static readonly RULE_registers8x = 52;
	public static readonly RULE_registers8y = 53;
	public static readonly RULE_register16_grpaf = 54;
	public static readonly RULE_register16_grpsp = 55;
	public static readonly RULE_register16_grpsphl = 56;
	public static readonly RULE_register16_grpspix = 57;
	public static readonly RULE_register16_grpspiy = 58;
	public static readonly RULE_register16_ex = 59;
	public static readonly RULE_label = 60;
	public static readonly RULE_symbol = 61;
	public static readonly RULE_blockcomment = 62;
	public static readonly RULE_comment = 63;
	public static readonly RULE_string = 64;
	public static readonly RULE_character = 65;
	public static readonly RULE_expression8 = 66;
	public static readonly RULE_expression16 = 67;
	public static readonly RULE_expression32 = 68;
	public static readonly RULE_expression = 69;
	public static readonly RULE_operator = 70;
	public static readonly RULE_operator_num = 71;
	public static readonly RULE_operator_bit = 72;
	public static readonly RULE_operator_logic = 73;
	public static readonly RULE_operator_offset = 74;
	public static readonly RULE_number = 75;
	public static readonly RULE_number_bin = 76;
	public static readonly RULE_number_oct = 77;
	public static readonly RULE_number_dec = 78;
	public static readonly RULE_number_hex = 79;
	public static readonly RULE_number_char = 80;
	// tslint:disable:no-trailing-whitespace
	public static readonly ruleNames: string[] = [
		"file", "asm", "line", "directive", "directive_void", "directive_file", 
		"filename", "directive_param16", "directive_param32", "directive_symbol", 
		"directive_symbollist", "directive_assign", "directive_block", "directive_defs", 
		"directive_defm", "defmparam", "directive_if", "directive_ifdef", "directive_ifblock", 
		"directive_elseblock", "directive_endif", "directive_phase", "directive_defvars", 
		"defvars_vardecl", "directive_defgroup", "defgroup_symbol", "instruction", 
		"instruction_void", "instruction_ld8", "instruction_ld16", "instruction_stack", 
		"instruction_exchange", "instruction_arithmetic8", "instruction_incdec8", 
		"instruction_cpl", "instruction_arithemic16", "instruction_incdec16", 
		"instruction_rotate", "instruction_rotatedec", "instruction_bit", "bitindex", 
		"instruction_jump", "instruction_call", "instruction_conditionFlagsAll", 
		"instruction_conditionFlags", "instruction_rst", "instruction_im", "instruction_io", 
		"offset_ex", "offset_rel", "registers", "registers8", "registers8x", "registers8y", 
		"register16_grpaf", "register16_grpsp", "register16_grpsphl", "register16_grpspix", 
		"register16_grpspiy", "register16_ex", "label", "symbol", "blockcomment", 
		"comment", "string", "character", "expression8", "expression16", "expression32", 
		"expression", "operator", "operator_num", "operator_bit", "operator_logic", 
		"operator_offset", "number", "number_bin", "number_oct", "number_dec", 
		"number_hex", "number_char",
	];

	private static readonly _LITERAL_NAMES: Array<string | undefined> = [
		undefined, "'{'", "'}'", "'''", "':'", undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, "'='", "'+'", "'-'", "'*'", "'/'", "'%'", 
		"'**'", undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		"'('", "')'", "','", "'.'",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, undefined, undefined, undefined, undefined, "DIRECTIVEvoid", 
		"DIRECTIVEparam16", "DIRECTIVEparam32", "DIRECTIVEsymbol", "DIRECTIVEsymbollist", 
		"DIRECTIVEassign", "DIRECTIVEdefs", "DIRECTIVEdefm", "DIRECTIVEblock", 
		"DIRECTIVEdefvars", "DEFVARSsize", "DIRECTIVEdefgroup", "DIRECTIVEfile", 
		"DIRECTIVEif", "DIRECTIVEifdef", "DIRECTIVEelse", "DIRECTIVEendif", "DIRECTIVEphase", 
		"DIRECTIVEunphase", "INSTRUCTIONvoid", "INSTRUCTIONld", "INSTRUCTIONstack", 
		"INSTRUCTIONexchange", "INSTRUCTIONexxchange", "INSTRUCTIONarithmetic16", 
		"INSTRUCTIONarithmetic", "INSTRUCTIONincdec", "INSTRUCTIONcpl", "INSTRUCTIONrotate", 
		"INSTRUCTIONrotatedec", "INSTRUCTIONbit", "INSTRUCTIONjump", "INSTRUCTIONjumprel", 
		"INSTRUCTIONjumprelnz", "INSTRUCTIONcall", "INSTRUCTIONret", "INSTRUCTIONrst", 
		"INSTRUCTIONim", "INSTRUCTIONin", "INSTRUCTIONout", "REG8x", "REG8y", 
		"REG8sys", "REG8a", "REG8b", "REG8c", "REG8d", "REG8e", "REG8h", "REG8l", 
		"REG16af", "REG16bc", "REG16de", "REG16hl", "REG16sp", "REG16ix", "REG16iy", 
		"CONDITIONflagsex", "CONDITIONflags", "SYMBOL", "BLOCKCOMMENTtext", "COMMENT", 
		"EQUALS", "PLUS", "MINUS", "MUL", "DIV", "MOD", "POWER", "OPERATORbit", 
		"OPERATORlogic", "INTERRUPTMODE", "BIT8", "INSTRUCTIONrstvectorhex", "INSTRUCTIONrstvector", 
		"NUMBERbin", "NUMBERoct", "NUMBERdec", "NUMBERhex", "ZERO", "CHARACTER", 
		"STRING", "PARopen", "PARclose", "COMMA", "DOT", "EOL", "WS",
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

	protected createFailedPredicateException(predicate?: string, message?: string): FailedPredicateException {
		return new FailedPredicateException(this, predicate, message);
	}


	    public directiveDot: boolean = false;
	    public directiveDotOptional: boolean = true;

	constructor(input: TokenStream) {
		super(input);
		this._interp = new ParserATNSimulator(z80asmParser._ATN, this);
	}
	// @RuleVersion(0)
	public file(): FileContext {
		let _localctx: FileContext = new FileContext(this._ctx, this.state);
		this.enterRule(_localctx, 0, z80asmParser.RULE_file);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 163;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 0, this._ctx) ) {
			case 1:
				{
				this.state = 162;
				this.asm();
				}
				break;
			}
			this.state = 165;
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
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 171;
			this._errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					this.state = 168;
					this._errHandler.sync(this);
					switch ( this.interpreter.adaptivePredict(this._input, 1, this._ctx) ) {
					case 1:
						{
						this.state = 167;
						this.line();
						}
						break;
					}
					this.state = 170;
					this.match(z80asmParser.EOL);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 173;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 2, this._ctx);
			} while (_alt !== 2 && _alt !== ATN.INVALID_ALT_NUMBER);
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
			this.state = 195;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 8, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 176;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 3, this._ctx) ) {
				case 1:
					{
					this.state = 175;
					this.label();
					}
					break;
				}
				this.state = 178;
				this.directive();
				this.state = 180;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 179;
					this.comment();
					}
				}

				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 182;
				this.comment();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 183;
				this.label();
				this.state = 185;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 184;
					this.comment();
					}
				}

				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 188;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.SYMBOL || _la === z80asmParser.DOT) {
					{
					this.state = 187;
					this.label();
					}
				}

				this.state = 190;
				this.instruction();
				this.state = 192;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 191;
					this.comment();
					}
				}

				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 194;
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
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 203;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 10, this._ctx) ) {
			case 1:
				{
				this.state = 197;
				if (!(this.directiveDot)) {
					throw this.createFailedPredicateException("this.directiveDot");
				}
				this.state = 198;
				this.match(z80asmParser.DOT);
				}
				break;

			case 2:
				{
				this.state = 199;
				if (!(this.directiveDotOptional)) {
					throw this.createFailedPredicateException("this.directiveDotOptional");
				}
				this.state = 201;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.DOT) {
					{
					this.state = 200;
					this.match(z80asmParser.DOT);
					}
				}

				}
				break;
			}
			this.state = 222;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.DIRECTIVEvoid:
				{
				this.state = 205;
				this.directive_void();
				}
				break;
			case z80asmParser.DIRECTIVEfile:
				{
				this.state = 206;
				this.directive_file();
				}
				break;
			case z80asmParser.DIRECTIVEparam16:
				{
				this.state = 207;
				this.directive_param16();
				}
				break;
			case z80asmParser.DIRECTIVEparam32:
				{
				this.state = 208;
				this.directive_param32();
				}
				break;
			case z80asmParser.DIRECTIVEblock:
				{
				this.state = 209;
				this.directive_block();
				}
				break;
			case z80asmParser.DIRECTIVEsymbol:
				{
				this.state = 210;
				this.directive_symbol();
				}
				break;
			case z80asmParser.DIRECTIVEsymbollist:
				{
				this.state = 211;
				this.directive_symbollist();
				}
				break;
			case z80asmParser.DIRECTIVEassign:
				{
				this.state = 212;
				this.directive_assign();
				}
				break;
			case z80asmParser.DIRECTIVEdefs:
				{
				this.state = 213;
				this.directive_defs();
				}
				break;
			case z80asmParser.DIRECTIVEdefm:
				{
				this.state = 214;
				this.directive_defm();
				}
				break;
			case z80asmParser.DIRECTIVEif:
				{
				this.state = 215;
				this.directive_if();
				}
				break;
			case z80asmParser.DIRECTIVEifdef:
				{
				this.state = 216;
				this.directive_ifdef();
				}
				break;
			case z80asmParser.DIRECTIVEelse:
				{
				this.state = 217;
				this.directive_elseblock();
				}
				break;
			case z80asmParser.DIRECTIVEendif:
				{
				this.state = 218;
				this.directive_endif();
				}
				break;
			case z80asmParser.DIRECTIVEphase:
				{
				this.state = 219;
				this.directive_phase();
				}
				break;
			case z80asmParser.DIRECTIVEdefvars:
				{
				this.state = 220;
				this.directive_defvars();
				}
				break;
			case z80asmParser.DIRECTIVEdefgroup:
				{
				this.state = 221;
				this.directive_defgroup();
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
	public directive_void(): Directive_voidContext {
		let _localctx: Directive_voidContext = new Directive_voidContext(this._ctx, this.state);
		this.enterRule(_localctx, 8, z80asmParser.RULE_directive_void);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 224;
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
	public directive_file(): Directive_fileContext {
		let _localctx: Directive_fileContext = new Directive_fileContext(this._ctx, this.state);
		this.enterRule(_localctx, 10, z80asmParser.RULE_directive_file);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 226;
			this.match(z80asmParser.DIRECTIVEfile);
			this.state = 227;
			this.filename();
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
	public filename(): FilenameContext {
		let _localctx: FilenameContext = new FilenameContext(this._ctx, this.state);
		this.enterRule(_localctx, 12, z80asmParser.RULE_filename);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 229;
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
	public directive_param16(): Directive_param16Context {
		let _localctx: Directive_param16Context = new Directive_param16Context(this._ctx, this.state);
		this.enterRule(_localctx, 14, z80asmParser.RULE_directive_param16);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 231;
			this.match(z80asmParser.DIRECTIVEparam16);
			this.state = 232;
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
		this.enterRule(_localctx, 16, z80asmParser.RULE_directive_param32);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 234;
			this.match(z80asmParser.DIRECTIVEparam32);
			this.state = 235;
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
		this.enterRule(_localctx, 18, z80asmParser.RULE_directive_symbol);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 237;
			this.match(z80asmParser.DIRECTIVEsymbol);
			this.state = 238;
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
		this.enterRule(_localctx, 20, z80asmParser.RULE_directive_symbollist);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 240;
			this.match(z80asmParser.DIRECTIVEsymbollist);
			this.state = 241;
			this.symbol();
			this.state = 246;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 12, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 242;
					this.match(z80asmParser.COMMA);
					this.state = 243;
					this.symbol();
					}
					}
				}
				this.state = 248;
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
	public directive_assign(): Directive_assignContext {
		let _localctx: Directive_assignContext = new Directive_assignContext(this._ctx, this.state);
		this.enterRule(_localctx, 22, z80asmParser.RULE_directive_assign);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 249;
			this.match(z80asmParser.DIRECTIVEassign);
			this.state = 250;
			this.symbol();
			this.state = 251;
			this.match(z80asmParser.EQUALS);
			this.state = 252;
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
		this.enterRule(_localctx, 24, z80asmParser.RULE_directive_block);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 254;
			this.match(z80asmParser.DIRECTIVEblock);
			this.state = 255;
			this.expression(0);
			this.state = 260;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 13, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 256;
					this.match(z80asmParser.COMMA);
					this.state = 257;
					this.expression(0);
					}
					}
				}
				this.state = 262;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 13, this._ctx);
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
		this.enterRule(_localctx, 26, z80asmParser.RULE_directive_defs);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 263;
			this.match(z80asmParser.DIRECTIVEdefs);
			this.state = 264;
			this.expression(0);
			this.state = 267;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.COMMA) {
				{
				this.state = 265;
				this.match(z80asmParser.COMMA);
				this.state = 266;
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
		this.enterRule(_localctx, 28, z80asmParser.RULE_directive_defm);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 269;
			this.match(z80asmParser.DIRECTIVEdefm);
			this.state = 270;
			this.defmparam();
			this.state = 275;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 15, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 271;
					this.match(z80asmParser.COMMA);
					this.state = 272;
					this.defmparam();
					}
					}
				}
				this.state = 277;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 15, this._ctx);
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
		this.enterRule(_localctx, 30, z80asmParser.RULE_defmparam);
		try {
			this.state = 281;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 16, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 278;
				this.string();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 279;
				this.character();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 280;
				this.expression8();
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
	public directive_if(): Directive_ifContext {
		let _localctx: Directive_ifContext = new Directive_ifContext(this._ctx, this.state);
		this.enterRule(_localctx, 32, z80asmParser.RULE_directive_if);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 283;
			this.match(z80asmParser.DIRECTIVEif);
			this.state = 284;
			this.expression(0);
			this.state = 286;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 17, this._ctx) ) {
			case 1:
				{
				this.state = 285;
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
		this.enterRule(_localctx, 34, z80asmParser.RULE_directive_ifdef);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 288;
			this.match(z80asmParser.DIRECTIVEifdef);
			this.state = 289;
			this.symbol();
			this.state = 291;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 18, this._ctx) ) {
			case 1:
				{
				this.state = 290;
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
		this.enterRule(_localctx, 36, z80asmParser.RULE_directive_ifblock);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 294;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.DIRECTIVEelse) {
				{
				this.state = 293;
				this.directive_elseblock();
				}
			}

			this.state = 296;
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
		this.enterRule(_localctx, 38, z80asmParser.RULE_directive_elseblock);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 298;
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
		this.enterRule(_localctx, 40, z80asmParser.RULE_directive_endif);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 300;
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
		this.enterRule(_localctx, 42, z80asmParser.RULE_directive_phase);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 302;
			this.match(z80asmParser.DIRECTIVEphase);
			this.state = 303;
			this.expression16();
			this.state = 305;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.COMMENT) {
				{
				this.state = 304;
				this.comment();
				}
			}

			this.state = 307;
			this.match(z80asmParser.EOL);
			this.state = 308;
			this.asm();
			this.state = 309;
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
	public directive_defvars(): Directive_defvarsContext {
		let _localctx: Directive_defvarsContext = new Directive_defvarsContext(this._ctx, this.state);
		this.enterRule(_localctx, 44, z80asmParser.RULE_directive_defvars);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 311;
			this.match(z80asmParser.DIRECTIVEdefvars);
			this.state = 312;
			this.expression16();
			this.state = 314;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.COMMENT) {
				{
				this.state = 313;
				this.comment();
				}
			}

			this.state = 317;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.EOL) {
				{
				this.state = 316;
				this.match(z80asmParser.EOL);
				}
			}

			this.state = 319;
			this.match(z80asmParser.T__0);
			this.state = 321;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 23, this._ctx) ) {
			case 1:
				{
				this.state = 320;
				this.match(z80asmParser.EOL);
				}
				break;
			}
			this.state = 327;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			do {
				{
				{
				this.state = 323;
				this.defvars_vardecl();
				this.state = 325;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 24, this._ctx) ) {
				case 1:
					{
					this.state = 324;
					this.match(z80asmParser.EOL);
					}
					break;
				}
				}
				}
				this.state = 329;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			} while (_la === z80asmParser.DEFVARSsize || ((((_la - 64)) & ~0x1F) === 0 && ((1 << (_la - 64)) & ((1 << (z80asmParser.SYMBOL - 64)) | (1 << (z80asmParser.COMMENT - 64)) | (1 << (z80asmParser.EOL - 64)))) !== 0));
			this.state = 331;
			this.match(z80asmParser.T__1);
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
	public defvars_vardecl(): Defvars_vardeclContext {
		let _localctx: Defvars_vardeclContext = new Defvars_vardeclContext(this._ctx, this.state);
		this.enterRule(_localctx, 46, z80asmParser.RULE_defvars_vardecl);
		let _la: number;
		try {
			this.state = 343;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.DEFVARSsize:
			case z80asmParser.SYMBOL:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 334;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.SYMBOL) {
					{
					this.state = 333;
					this.symbol();
					}
				}

				this.state = 336;
				this.match(z80asmParser.DEFVARSsize);
				this.state = 337;
				this.expression8();
				this.state = 339;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 27, this._ctx) ) {
				case 1:
					{
					this.state = 338;
					this.comment();
					}
					break;
				}
				}
				break;
			case z80asmParser.COMMENT:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 341;
				this.comment();
				}
				break;
			case z80asmParser.EOL:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 342;
				this.match(z80asmParser.EOL);
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
	public directive_defgroup(): Directive_defgroupContext {
		let _localctx: Directive_defgroupContext = new Directive_defgroupContext(this._ctx, this.state);
		this.enterRule(_localctx, 48, z80asmParser.RULE_directive_defgroup);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 345;
			this.match(z80asmParser.DIRECTIVEdefgroup);
			this.state = 347;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.EOL) {
				{
				this.state = 346;
				this.match(z80asmParser.EOL);
				}
			}

			this.state = 349;
			this.match(z80asmParser.T__0);
			this.state = 351;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 30, this._ctx) ) {
			case 1:
				{
				this.state = 350;
				this.match(z80asmParser.EOL);
				}
				break;
			}
			this.state = 353;
			this.defgroup_symbol();
			this.state = 355;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.EOL) {
				{
				this.state = 354;
				this.match(z80asmParser.EOL);
				}
			}

			this.state = 367;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while (_la === z80asmParser.COMMA) {
				{
				{
				this.state = 357;
				this.match(z80asmParser.COMMA);
				this.state = 359;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 32, this._ctx) ) {
				case 1:
					{
					this.state = 358;
					this.match(z80asmParser.EOL);
					}
					break;
				}
				this.state = 361;
				this.defgroup_symbol();
				this.state = 363;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.EOL) {
					{
					this.state = 362;
					this.match(z80asmParser.EOL);
					}
				}

				}
				}
				this.state = 369;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 370;
			this.match(z80asmParser.T__1);
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
	public defgroup_symbol(): Defgroup_symbolContext {
		let _localctx: Defgroup_symbolContext = new Defgroup_symbolContext(this._ctx, this.state);
		this.enterRule(_localctx, 50, z80asmParser.RULE_defgroup_symbol);
		let _la: number;
		try {
			this.state = 382;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.SYMBOL:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 372;
				this.symbol();
				this.state = 375;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.EQUALS) {
					{
					this.state = 373;
					this.match(z80asmParser.EQUALS);
					this.state = 374;
					this.expression8();
					}
				}

				this.state = 378;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 377;
					this.comment();
					}
				}

				}
				break;
			case z80asmParser.COMMENT:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 380;
				this.comment();
				}
				break;
			case z80asmParser.EOL:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 381;
				this.match(z80asmParser.EOL);
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
	public instruction(): InstructionContext {
		let _localctx: InstructionContext = new InstructionContext(this._ctx, this.state);
		this.enterRule(_localctx, 52, z80asmParser.RULE_instruction);
		try {
			this.state = 402;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 38, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 384;
				this.instruction_void();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 385;
				this.instruction_ld8();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 386;
				this.instruction_ld16();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 387;
				this.instruction_stack();
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 388;
				this.instruction_exchange();
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 389;
				this.instruction_arithmetic8();
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				this.state = 390;
				this.instruction_incdec8();
				}
				break;

			case 8:
				this.enterOuterAlt(_localctx, 8);
				{
				this.state = 391;
				this.instruction_cpl();
				}
				break;

			case 9:
				this.enterOuterAlt(_localctx, 9);
				{
				this.state = 392;
				this.instruction_arithemic16();
				}
				break;

			case 10:
				this.enterOuterAlt(_localctx, 10);
				{
				this.state = 393;
				this.instruction_incdec16();
				}
				break;

			case 11:
				this.enterOuterAlt(_localctx, 11);
				{
				this.state = 394;
				this.instruction_rotate();
				}
				break;

			case 12:
				this.enterOuterAlt(_localctx, 12);
				{
				this.state = 395;
				this.instruction_rotatedec();
				}
				break;

			case 13:
				this.enterOuterAlt(_localctx, 13);
				{
				this.state = 396;
				this.instruction_bit();
				}
				break;

			case 14:
				this.enterOuterAlt(_localctx, 14);
				{
				this.state = 397;
				this.instruction_jump();
				}
				break;

			case 15:
				this.enterOuterAlt(_localctx, 15);
				{
				this.state = 398;
				this.instruction_call();
				}
				break;

			case 16:
				this.enterOuterAlt(_localctx, 16);
				{
				this.state = 399;
				this.instruction_rst();
				}
				break;

			case 17:
				this.enterOuterAlt(_localctx, 17);
				{
				this.state = 400;
				this.instruction_im();
				}
				break;

			case 18:
				this.enterOuterAlt(_localctx, 18);
				{
				this.state = 401;
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
		this.enterRule(_localctx, 54, z80asmParser.RULE_instruction_void);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 404;
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
		this.enterRule(_localctx, 56, z80asmParser.RULE_instruction_ld8);
		try {
			this.state = 504;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 43, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				{
				this.state = 406;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 419;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 39, this._ctx) ) {
				case 1:
					{
					{
					this.state = 407;
					this.registers8();
					this.state = 408;
					this.match(z80asmParser.COMMA);
					this.state = 409;
					this.registers8();
					}
					}
					break;

				case 2:
					{
					{
					this.state = 411;
					this.registers8x();
					this.state = 412;
					this.match(z80asmParser.COMMA);
					this.state = 413;
					this.registers8x();
					}
					}
					break;

				case 3:
					{
					{
					this.state = 415;
					this.registers8y();
					this.state = 416;
					this.match(z80asmParser.COMMA);
					this.state = 417;
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
				this.state = 421;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 425;
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
					this.state = 422;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 423;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 424;
					this.match(z80asmParser.REG8y);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 427;
				this.match(z80asmParser.COMMA);
				this.state = 428;
				this.expression8();
				}
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				{
				this.state = 429;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 430;
				this.registers8();
				this.state = 431;
				this.match(z80asmParser.COMMA);
				this.state = 432;
				this.match(z80asmParser.PARopen);
				this.state = 433;
				this.match(z80asmParser.REG16hl);
				this.state = 434;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				{
				this.state = 436;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 437;
				this.registers8();
				this.state = 438;
				this.match(z80asmParser.COMMA);
				this.state = 439;
				this.match(z80asmParser.PARopen);
				this.state = 440;
				this.register16_ex();
				this.state = 441;
				this.operator_offset();
				this.state = 442;
				this.offset_ex();
				this.state = 443;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				{
				this.state = 445;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 446;
				this.match(z80asmParser.PARopen);
				this.state = 447;
				this.match(z80asmParser.REG16hl);
				this.state = 448;
				this.match(z80asmParser.PARclose);
				this.state = 449;
				this.match(z80asmParser.COMMA);
				this.state = 450;
				this.registers8();
				}
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				{
				this.state = 451;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 452;
				this.match(z80asmParser.PARopen);
				this.state = 453;
				this.register16_ex();
				this.state = 454;
				this.operator_offset();
				this.state = 455;
				this.offset_ex();
				this.state = 456;
				this.match(z80asmParser.PARclose);
				this.state = 457;
				this.match(z80asmParser.COMMA);
				this.state = 458;
				this.registers8();
				}
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				{
				this.state = 460;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 461;
				this.match(z80asmParser.PARopen);
				this.state = 462;
				this.match(z80asmParser.REG16hl);
				this.state = 463;
				this.match(z80asmParser.PARclose);
				this.state = 464;
				this.match(z80asmParser.COMMA);
				this.state = 465;
				this.expression8();
				}
				}
				break;

			case 8:
				this.enterOuterAlt(_localctx, 8);
				{
				{
				this.state = 466;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 467;
				this.match(z80asmParser.PARopen);
				this.state = 468;
				this.register16_ex();
				this.state = 469;
				this.operator_offset();
				this.state = 470;
				this.offset_ex();
				this.state = 471;
				this.match(z80asmParser.PARclose);
				this.state = 472;
				this.match(z80asmParser.COMMA);
				this.state = 473;
				this.expression8();
				}
				}
				break;

			case 9:
				this.enterOuterAlt(_localctx, 9);
				{
				{
				this.state = 475;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 476;
				this.match(z80asmParser.REG8a);
				this.state = 477;
				this.match(z80asmParser.COMMA);
				this.state = 478;
				this.match(z80asmParser.PARopen);
				this.state = 482;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
					{
					this.state = 479;
					this.match(z80asmParser.REG16bc);
					}
					break;
				case z80asmParser.REG16de:
					{
					this.state = 480;
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
				case z80asmParser.CHARACTER:
				case z80asmParser.PARopen:
					{
					this.state = 481;
					this.expression(0);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 484;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 10:
				this.enterOuterAlt(_localctx, 10);
				{
				{
				this.state = 485;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 486;
				this.match(z80asmParser.REG8a);
				this.state = 487;
				this.match(z80asmParser.COMMA);
				this.state = 488;
				this.match(z80asmParser.REG8sys);
				}
				}
				break;

			case 11:
				this.enterOuterAlt(_localctx, 11);
				{
				{
				this.state = 489;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 490;
				this.match(z80asmParser.REG8sys);
				this.state = 491;
				this.match(z80asmParser.COMMA);
				this.state = 492;
				this.match(z80asmParser.REG8a);
				}
				}
				break;

			case 12:
				this.enterOuterAlt(_localctx, 12);
				{
				{
				this.state = 493;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 494;
				this.match(z80asmParser.PARopen);
				this.state = 499;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
					{
					this.state = 495;
					this.match(z80asmParser.REG16bc);
					}
					break;
				case z80asmParser.REG16de:
					{
					this.state = 496;
					this.match(z80asmParser.REG16de);
					}
					break;
				case z80asmParser.REG8sys:
					{
					this.state = 497;
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
				case z80asmParser.CHARACTER:
				case z80asmParser.PARopen:
					{
					this.state = 498;
					this.expression16();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 501;
				this.match(z80asmParser.PARclose);
				this.state = 502;
				this.match(z80asmParser.COMMA);
				this.state = 503;
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
		this.enterRule(_localctx, 58, z80asmParser.RULE_instruction_ld16);
		try {
			this.state = 537;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 47, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 506;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 509;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
				case z80asmParser.REG16de:
				case z80asmParser.REG16hl:
				case z80asmParser.REG16sp:
					{
					this.state = 507;
					this.register16_grpsphl();
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 508;
					this.register16_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 511;
				this.match(z80asmParser.COMMA);
				this.state = 512;
				this.expression16();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 514;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 515;
				this.register16_ex();
				this.state = 516;
				this.match(z80asmParser.COMMA);
				this.state = 517;
				this.match(z80asmParser.PARopen);
				this.state = 518;
				this.expression16();
				this.state = 519;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 521;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 522;
				this.match(z80asmParser.PARopen);
				this.state = 523;
				this.expression16();
				this.state = 524;
				this.match(z80asmParser.PARclose);
				this.state = 525;
				this.match(z80asmParser.COMMA);
				this.state = 528;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
				case z80asmParser.REG16de:
				case z80asmParser.REG16hl:
				case z80asmParser.REG16sp:
					{
					this.state = 526;
					this.register16_grpsphl();
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 527;
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
				this.state = 530;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 531;
				this.match(z80asmParser.REG16sp);
				this.state = 532;
				this.match(z80asmParser.COMMA);
				this.state = 535;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 533;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 534;
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
		this.enterRule(_localctx, 60, z80asmParser.RULE_instruction_stack);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 539;
			this.match(z80asmParser.INSTRUCTIONstack);
			this.state = 542;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16af:
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16hl:
				{
				this.state = 540;
				this.register16_grpaf();
				}
				break;
			case z80asmParser.REG16ix:
			case z80asmParser.REG16iy:
				{
				this.state = 541;
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
		this.enterRule(_localctx, 62, z80asmParser.RULE_instruction_exchange);
		let _la: number;
		try {
			this.state = 565;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 51, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 544;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 545;
				this.match(z80asmParser.REG16de);
				this.state = 546;
				this.match(z80asmParser.COMMA);
				this.state = 547;
				this.match(z80asmParser.REG16hl);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 548;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 549;
				this.match(z80asmParser.REG16af);
				this.state = 550;
				this.match(z80asmParser.COMMA);
				this.state = 551;
				this.match(z80asmParser.REG16af);
				this.state = 553;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.T__2) {
					{
					this.state = 552;
					this.match(z80asmParser.T__2);
					}
				}

				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 555;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 556;
				this.match(z80asmParser.PARopen);
				this.state = 557;
				this.match(z80asmParser.REG16sp);
				this.state = 558;
				this.match(z80asmParser.PARclose);
				this.state = 559;
				this.match(z80asmParser.COMMA);
				this.state = 562;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 560;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 561;
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
				this.state = 564;
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
		this.enterRule(_localctx, 64, z80asmParser.RULE_instruction_arithmetic8);
		let _la: number;
		try {
			this.state = 592;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 56, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 567;
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
				this.state = 570;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 52, this._ctx) ) {
				case 1:
					{
					this.state = 568;
					this.match(z80asmParser.REG8a);
					this.state = 569;
					this.match(z80asmParser.COMMA);
					}
					break;
				}
				this.state = 576;
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
					this.state = 572;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 573;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 574;
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
				case z80asmParser.CHARACTER:
				case z80asmParser.PARopen:
					{
					this.state = 575;
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
				this.state = 578;
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
				this.state = 581;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.REG8a) {
					{
					this.state = 579;
					this.match(z80asmParser.REG8a);
					this.state = 580;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 583;
				this.match(z80asmParser.PARopen);
				this.state = 589;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 584;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 585;
					this.register16_ex();
					this.state = 586;
					this.operator_offset();
					this.state = 587;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 591;
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
		this.enterRule(_localctx, 66, z80asmParser.RULE_instruction_incdec8);
		try {
			this.state = 610;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 59, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 594;
				this.match(z80asmParser.INSTRUCTIONincdec);
				this.state = 598;
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
					this.state = 595;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 596;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 597;
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
				this.state = 600;
				this.match(z80asmParser.INSTRUCTIONincdec);
				this.state = 601;
				this.match(z80asmParser.PARopen);
				this.state = 607;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 602;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 603;
					this.register16_ex();
					this.state = 604;
					this.operator_offset();
					this.state = 605;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 609;
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
		this.enterRule(_localctx, 68, z80asmParser.RULE_instruction_cpl);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 612;
			this.match(z80asmParser.INSTRUCTIONcpl);
			this.state = 614;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.REG8a) {
				{
				this.state = 613;
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
		this.enterRule(_localctx, 70, z80asmParser.RULE_instruction_arithemic16);
		try {
			this.state = 628;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 61, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 616;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 617;
				this.match(z80asmParser.REG16hl);
				this.state = 618;
				this.match(z80asmParser.COMMA);
				this.state = 619;
				this.register16_grpsphl();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 620;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 621;
				this.match(z80asmParser.REG16ix);
				this.state = 622;
				this.match(z80asmParser.COMMA);
				this.state = 623;
				this.register16_grpspix();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 624;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 625;
				this.match(z80asmParser.REG16iy);
				this.state = 626;
				this.match(z80asmParser.COMMA);
				this.state = 627;
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
		this.enterRule(_localctx, 72, z80asmParser.RULE_instruction_incdec16);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 630;
			this.match(z80asmParser.INSTRUCTIONincdec);
			this.state = 633;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16hl:
			case z80asmParser.REG16sp:
				{
				this.state = 631;
				this.register16_grpsphl();
				}
				break;
			case z80asmParser.REG16ix:
			case z80asmParser.REG16iy:
				{
				this.state = 632;
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
		this.enterRule(_localctx, 74, z80asmParser.RULE_instruction_rotate);
		try {
			this.state = 656;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 64, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 635;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 636;
				this.registers8();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 637;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 638;
				this.match(z80asmParser.PARopen);
				this.state = 644;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 639;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 640;
					this.register16_ex();
					this.state = 641;
					this.operator_offset();
					this.state = 642;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 646;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 647;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 648;
				this.match(z80asmParser.PARopen);
				this.state = 649;
				this.register16_ex();
				this.state = 650;
				this.operator_offset();
				this.state = 651;
				this.offset_ex();
				this.state = 652;
				this.match(z80asmParser.PARclose);
				this.state = 653;
				this.match(z80asmParser.COMMA);
				this.state = 654;
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
		this.enterRule(_localctx, 76, z80asmParser.RULE_instruction_rotatedec);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 658;
			this.match(z80asmParser.INSTRUCTIONrotatedec);
			this.state = 660;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.REG8a) {
				{
				this.state = 659;
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
		this.enterRule(_localctx, 78, z80asmParser.RULE_instruction_bit);
		try {
			this.state = 691;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 67, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 662;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 663;
				this.bitindex();
				this.state = 664;
				this.match(z80asmParser.COMMA);
				this.state = 665;
				this.registers8();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 667;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 668;
				this.bitindex();
				this.state = 669;
				this.match(z80asmParser.COMMA);
				this.state = 670;
				this.match(z80asmParser.PARopen);
				this.state = 676;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 671;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 672;
					this.register16_ex();
					this.state = 673;
					this.operator_offset();
					this.state = 674;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 678;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 680;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 681;
				this.bitindex();
				this.state = 682;
				this.match(z80asmParser.COMMA);
				this.state = 683;
				this.match(z80asmParser.PARopen);
				this.state = 684;
				this.register16_ex();
				this.state = 685;
				this.operator_offset();
				this.state = 686;
				this.offset_ex();
				this.state = 687;
				this.match(z80asmParser.PARclose);
				this.state = 688;
				this.match(z80asmParser.COMMA);
				this.state = 689;
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
		this.enterRule(_localctx, 80, z80asmParser.RULE_bitindex);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 693;
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
		this.enterRule(_localctx, 82, z80asmParser.RULE_instruction_jump);
		let _la: number;
		try {
			this.state = 723;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 72, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 695;
				this.match(z80asmParser.INSTRUCTIONjump);
				this.state = 707;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 70, this._ctx) ) {
				case 1:
					{
					this.state = 698;
					this._errHandler.sync(this);
					switch (this._input.LA(1)) {
					case z80asmParser.REG16hl:
						{
						this.state = 696;
						this.match(z80asmParser.REG16hl);
						}
						break;
					case z80asmParser.REG16ix:
					case z80asmParser.REG16iy:
						{
						this.state = 697;
						this.register16_ex();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					}
					break;

				case 2:
					{
					{
					this.state = 700;
					this.match(z80asmParser.PARopen);
					this.state = 703;
					this._errHandler.sync(this);
					switch (this._input.LA(1)) {
					case z80asmParser.REG16hl:
						{
						this.state = 701;
						this.match(z80asmParser.REG16hl);
						}
						break;
					case z80asmParser.REG16ix:
					case z80asmParser.REG16iy:
						{
						this.state = 702;
						this.register16_ex();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					this.state = 705;
					this.match(z80asmParser.PARclose);
					}
					}
					break;

				case 3:
					{
					this.state = 706;
					this.expression16();
					}
					break;
				}
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 709;
				this.match(z80asmParser.INSTRUCTIONjump);
				this.state = 710;
				this.instruction_conditionFlagsAll();
				this.state = 711;
				this.match(z80asmParser.COMMA);
				this.state = 712;
				this.expression16();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 714;
				this.match(z80asmParser.INSTRUCTIONjumprel);
				this.state = 718;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.REG8c || _la === z80asmParser.CONDITIONflags) {
					{
					this.state = 715;
					this.instruction_conditionFlags();
					this.state = 716;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 720;
				this.offset_rel();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 721;
				this.match(z80asmParser.INSTRUCTIONjumprelnz);
				this.state = 722;
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
		this.enterRule(_localctx, 84, z80asmParser.RULE_instruction_call);
		let _la: number;
		try {
			this.state = 736;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.INSTRUCTIONcall:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 725;
				this.match(z80asmParser.INSTRUCTIONcall);
				this.state = 729;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (((((_la - 50)) & ~0x1F) === 0 && ((1 << (_la - 50)) & ((1 << (z80asmParser.REG8c - 50)) | (1 << (z80asmParser.CONDITIONflagsex - 50)) | (1 << (z80asmParser.CONDITIONflags - 50)))) !== 0)) {
					{
					this.state = 726;
					this.instruction_conditionFlagsAll();
					this.state = 727;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 731;
				this.expression16();
				}
				break;
			case z80asmParser.INSTRUCTIONret:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 732;
				this.match(z80asmParser.INSTRUCTIONret);
				this.state = 734;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (((((_la - 50)) & ~0x1F) === 0 && ((1 << (_la - 50)) & ((1 << (z80asmParser.REG8c - 50)) | (1 << (z80asmParser.CONDITIONflagsex - 50)) | (1 << (z80asmParser.CONDITIONflags - 50)))) !== 0)) {
					{
					this.state = 733;
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
		this.enterRule(_localctx, 86, z80asmParser.RULE_instruction_conditionFlagsAll);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 738;
			_la = this._input.LA(1);
			if (!(((((_la - 50)) & ~0x1F) === 0 && ((1 << (_la - 50)) & ((1 << (z80asmParser.REG8c - 50)) | (1 << (z80asmParser.CONDITIONflagsex - 50)) | (1 << (z80asmParser.CONDITIONflags - 50)))) !== 0))) {
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
		this.enterRule(_localctx, 88, z80asmParser.RULE_instruction_conditionFlags);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 740;
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
		this.enterRule(_localctx, 90, z80asmParser.RULE_instruction_rst);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 742;
			this.match(z80asmParser.INSTRUCTIONrst);
			this.state = 743;
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
		this.enterRule(_localctx, 92, z80asmParser.RULE_instruction_im);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 745;
			this.match(z80asmParser.INSTRUCTIONim);
			this.state = 746;
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
		this.enterRule(_localctx, 94, z80asmParser.RULE_instruction_io);
		let _la: number;
		try {
			this.state = 780;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 78, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 748;
				this.match(z80asmParser.INSTRUCTIONin);
				this.state = 749;
				this.match(z80asmParser.REG8a);
				this.state = 750;
				this.match(z80asmParser.COMMA);
				this.state = 751;
				this.match(z80asmParser.PARopen);
				this.state = 752;
				this.expression8();
				this.state = 753;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 755;
				this.match(z80asmParser.INSTRUCTIONin);
				this.state = 759;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (((((_la - 48)) & ~0x1F) === 0 && ((1 << (_la - 48)) & ((1 << (z80asmParser.REG8a - 48)) | (1 << (z80asmParser.REG8b - 48)) | (1 << (z80asmParser.REG8c - 48)) | (1 << (z80asmParser.REG8d - 48)) | (1 << (z80asmParser.REG8e - 48)) | (1 << (z80asmParser.REG8h - 48)) | (1 << (z80asmParser.REG8l - 48)))) !== 0)) {
					{
					this.state = 756;
					this.registers8();
					this.state = 757;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 761;
				this.match(z80asmParser.PARopen);
				this.state = 762;
				this.match(z80asmParser.REG8c);
				this.state = 763;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 764;
				this.match(z80asmParser.INSTRUCTIONout);
				this.state = 765;
				this.match(z80asmParser.PARopen);
				this.state = 766;
				this.expression8();
				this.state = 767;
				this.match(z80asmParser.PARclose);
				this.state = 768;
				this.match(z80asmParser.COMMA);
				this.state = 769;
				this.match(z80asmParser.REG8a);
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 771;
				this.match(z80asmParser.INSTRUCTIONout);
				this.state = 772;
				this.match(z80asmParser.PARopen);
				this.state = 773;
				this.match(z80asmParser.REG8c);
				this.state = 774;
				this.match(z80asmParser.PARclose);
				this.state = 775;
				this.match(z80asmParser.COMMA);
				this.state = 778;
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
					this.state = 776;
					this.registers8();
					}
					break;
				case z80asmParser.ZERO:
					{
					this.state = 777;
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
		this.enterRule(_localctx, 96, z80asmParser.RULE_offset_ex);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 782;
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
		this.enterRule(_localctx, 98, z80asmParser.RULE_offset_rel);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 784;
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
		this.enterRule(_localctx, 100, z80asmParser.RULE_registers);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 786;
			_la = this._input.LA(1);
			if (!(((((_la - 45)) & ~0x1F) === 0 && ((1 << (_la - 45)) & ((1 << (z80asmParser.REG8x - 45)) | (1 << (z80asmParser.REG8y - 45)) | (1 << (z80asmParser.REG8sys - 45)) | (1 << (z80asmParser.REG8a - 45)) | (1 << (z80asmParser.REG8b - 45)) | (1 << (z80asmParser.REG8c - 45)) | (1 << (z80asmParser.REG8d - 45)) | (1 << (z80asmParser.REG8e - 45)) | (1 << (z80asmParser.REG8h - 45)) | (1 << (z80asmParser.REG8l - 45)) | (1 << (z80asmParser.REG16af - 45)) | (1 << (z80asmParser.REG16bc - 45)) | (1 << (z80asmParser.REG16de - 45)) | (1 << (z80asmParser.REG16hl - 45)) | (1 << (z80asmParser.REG16sp - 45)) | (1 << (z80asmParser.REG16ix - 45)) | (1 << (z80asmParser.REG16iy - 45)))) !== 0))) {
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
		this.enterRule(_localctx, 102, z80asmParser.RULE_registers8);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 788;
			_la = this._input.LA(1);
			if (!(((((_la - 48)) & ~0x1F) === 0 && ((1 << (_la - 48)) & ((1 << (z80asmParser.REG8a - 48)) | (1 << (z80asmParser.REG8b - 48)) | (1 << (z80asmParser.REG8c - 48)) | (1 << (z80asmParser.REG8d - 48)) | (1 << (z80asmParser.REG8e - 48)) | (1 << (z80asmParser.REG8h - 48)) | (1 << (z80asmParser.REG8l - 48)))) !== 0))) {
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
		this.enterRule(_localctx, 104, z80asmParser.RULE_registers8x);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 790;
			_la = this._input.LA(1);
			if (!(((((_la - 45)) & ~0x1F) === 0 && ((1 << (_la - 45)) & ((1 << (z80asmParser.REG8x - 45)) | (1 << (z80asmParser.REG8a - 45)) | (1 << (z80asmParser.REG8b - 45)) | (1 << (z80asmParser.REG8c - 45)) | (1 << (z80asmParser.REG8d - 45)) | (1 << (z80asmParser.REG8e - 45)))) !== 0))) {
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
		this.enterRule(_localctx, 106, z80asmParser.RULE_registers8y);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 792;
			_la = this._input.LA(1);
			if (!(((((_la - 46)) & ~0x1F) === 0 && ((1 << (_la - 46)) & ((1 << (z80asmParser.REG8y - 46)) | (1 << (z80asmParser.REG8a - 46)) | (1 << (z80asmParser.REG8b - 46)) | (1 << (z80asmParser.REG8c - 46)) | (1 << (z80asmParser.REG8d - 46)) | (1 << (z80asmParser.REG8e - 46)))) !== 0))) {
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
		this.enterRule(_localctx, 108, z80asmParser.RULE_register16_grpaf);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 794;
			_la = this._input.LA(1);
			if (!(((((_la - 55)) & ~0x1F) === 0 && ((1 << (_la - 55)) & ((1 << (z80asmParser.REG16af - 55)) | (1 << (z80asmParser.REG16bc - 55)) | (1 << (z80asmParser.REG16de - 55)) | (1 << (z80asmParser.REG16hl - 55)))) !== 0))) {
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
		this.enterRule(_localctx, 110, z80asmParser.RULE_register16_grpsp);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 796;
			_la = this._input.LA(1);
			if (!(((((_la - 56)) & ~0x1F) === 0 && ((1 << (_la - 56)) & ((1 << (z80asmParser.REG16bc - 56)) | (1 << (z80asmParser.REG16de - 56)) | (1 << (z80asmParser.REG16sp - 56)))) !== 0))) {
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
		this.enterRule(_localctx, 112, z80asmParser.RULE_register16_grpsphl);
		try {
			this.state = 800;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16sp:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 798;
				this.register16_grpsp();
				}
				break;
			case z80asmParser.REG16hl:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 799;
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
		this.enterRule(_localctx, 114, z80asmParser.RULE_register16_grpspix);
		try {
			this.state = 804;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16sp:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 802;
				this.register16_grpsp();
				}
				break;
			case z80asmParser.REG16ix:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 803;
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
		this.enterRule(_localctx, 116, z80asmParser.RULE_register16_grpspiy);
		try {
			this.state = 808;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16sp:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 806;
				this.register16_grpsp();
				}
				break;
			case z80asmParser.REG16iy:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 807;
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
		this.enterRule(_localctx, 118, z80asmParser.RULE_register16_ex);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 810;
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
		this.enterRule(_localctx, 120, z80asmParser.RULE_label);
		try {
			this.state = 817;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.DOT:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 812;
				this.match(z80asmParser.DOT);
				this.state = 813;
				this.symbol();
				}
				break;
			case z80asmParser.SYMBOL:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 814;
				this.symbol();
				this.state = 815;
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
		this.enterRule(_localctx, 122, z80asmParser.RULE_symbol);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 819;
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
		this.enterRule(_localctx, 124, z80asmParser.RULE_blockcomment);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 821;
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
	public comment(): CommentContext {
		let _localctx: CommentContext = new CommentContext(this._ctx, this.state);
		this.enterRule(_localctx, 126, z80asmParser.RULE_comment);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 823;
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
		this.enterRule(_localctx, 128, z80asmParser.RULE_string);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 825;
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
		this.enterRule(_localctx, 130, z80asmParser.RULE_character);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 827;
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
		this.enterRule(_localctx, 132, z80asmParser.RULE_expression8);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 829;
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
		this.enterRule(_localctx, 134, z80asmParser.RULE_expression16);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 831;
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
		this.enterRule(_localctx, 136, z80asmParser.RULE_expression32);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 833;
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
		let _startState: number = 138;
		this.enterRecursionRule(_localctx, 138, z80asmParser.RULE_expression, _p);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 842;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.PARopen:
				{
				this.state = 836;
				this.match(z80asmParser.PARopen);
				this.state = 837;
				this.expression(0);
				this.state = 838;
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
			case z80asmParser.CHARACTER:
				{
				this.state = 840;
				this.number();
				}
				break;
			case z80asmParser.SYMBOL:
				{
				this.state = 841;
				this.symbol();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			this._ctx._stop = this._input.tryLT(-1);
			this.state = 850;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 84, this._ctx);
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
					this.state = 844;
					if (!(this.precpred(this._ctx, 4))) {
						throw this.createFailedPredicateException("this.precpred(this._ctx, 4)");
					}
					this.state = 845;
					this.operator();
					this.state = 846;
					this.expression(5);
					}
					}
				}
				this.state = 852;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 84, this._ctx);
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
		this.enterRule(_localctx, 140, z80asmParser.RULE_operator);
		try {
			this.state = 856;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.EQUALS:
			case z80asmParser.PLUS:
			case z80asmParser.MINUS:
			case z80asmParser.MUL:
			case z80asmParser.DIV:
			case z80asmParser.MOD:
			case z80asmParser.POWER:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 853;
				this.operator_num();
				}
				break;
			case z80asmParser.OPERATORbit:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 854;
				this.operator_bit();
				}
				break;
			case z80asmParser.OPERATORlogic:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 855;
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
		this.enterRule(_localctx, 142, z80asmParser.RULE_operator_num);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 858;
			_la = this._input.LA(1);
			if (!(((((_la - 67)) & ~0x1F) === 0 && ((1 << (_la - 67)) & ((1 << (z80asmParser.EQUALS - 67)) | (1 << (z80asmParser.PLUS - 67)) | (1 << (z80asmParser.MINUS - 67)) | (1 << (z80asmParser.MUL - 67)) | (1 << (z80asmParser.DIV - 67)) | (1 << (z80asmParser.MOD - 67)) | (1 << (z80asmParser.POWER - 67)))) !== 0))) {
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
		this.enterRule(_localctx, 144, z80asmParser.RULE_operator_bit);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 860;
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
		this.enterRule(_localctx, 146, z80asmParser.RULE_operator_logic);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 862;
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
	public operator_offset(): Operator_offsetContext {
		let _localctx: Operator_offsetContext = new Operator_offsetContext(this._ctx, this.state);
		this.enterRule(_localctx, 148, z80asmParser.RULE_operator_offset);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 864;
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
		this.enterRule(_localctx, 150, z80asmParser.RULE_number);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 867;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.PLUS || _la === z80asmParser.MINUS) {
				{
				this.state = 866;
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

			this.state = 874;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.NUMBERbin:
				{
				this.state = 869;
				this.number_bin();
				}
				break;
			case z80asmParser.NUMBERoct:
				{
				this.state = 870;
				this.number_oct();
				}
				break;
			case z80asmParser.INTERRUPTMODE:
			case z80asmParser.BIT8:
			case z80asmParser.INSTRUCTIONrstvector:
			case z80asmParser.NUMBERdec:
				{
				this.state = 871;
				this.number_dec();
				}
				break;
			case z80asmParser.INSTRUCTIONrstvectorhex:
			case z80asmParser.NUMBERhex:
				{
				this.state = 872;
				this.number_hex();
				}
				break;
			case z80asmParser.CHARACTER:
				{
				this.state = 873;
				this.number_char();
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
		this.enterRule(_localctx, 152, z80asmParser.RULE_number_bin);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 876;
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
		this.enterRule(_localctx, 154, z80asmParser.RULE_number_oct);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 878;
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
		this.enterRule(_localctx, 156, z80asmParser.RULE_number_dec);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 880;
			_la = this._input.LA(1);
			if (!(((((_la - 76)) & ~0x1F) === 0 && ((1 << (_la - 76)) & ((1 << (z80asmParser.INTERRUPTMODE - 76)) | (1 << (z80asmParser.BIT8 - 76)) | (1 << (z80asmParser.INSTRUCTIONrstvector - 76)) | (1 << (z80asmParser.NUMBERdec - 76)))) !== 0))) {
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
		this.enterRule(_localctx, 158, z80asmParser.RULE_number_hex);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 882;
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
	// @RuleVersion(0)
	public number_char(): Number_charContext {
		let _localctx: Number_charContext = new Number_charContext(this._ctx, this.state);
		this.enterRule(_localctx, 160, z80asmParser.RULE_number_char);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 884;
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

	public sempred(_localctx: RuleContext, ruleIndex: number, predIndex: number): boolean {
		switch (ruleIndex) {
		case 3:
			return this.directive_sempred(_localctx as DirectiveContext, predIndex);

		case 69:
			return this.expression_sempred(_localctx as ExpressionContext, predIndex);
		}
		return true;
	}
	private directive_sempred(_localctx: DirectiveContext, predIndex: number): boolean {
		switch (predIndex) {
		case 0:
			return this.directiveDot;

		case 1:
			return this.directiveDotOptional;
		}
		return true;
	}
	private expression_sempred(_localctx: ExpressionContext, predIndex: number): boolean {
		switch (predIndex) {
		case 2:
			return this.precpred(this._ctx, 4);
		}
		return true;
	}

	private static readonly _serializedATNSegments: number = 2;
	private static readonly _serializedATNSegment0: string =
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x03^\u0379\x04\x02" +
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
		"F\tF\x04G\tG\x04H\tH\x04I\tI\x04J\tJ\x04K\tK\x04L\tL\x04M\tM\x04N\tN\x04" +
		"O\tO\x04P\tP\x04Q\tQ\x04R\tR\x03\x02\x05\x02\xA6\n\x02\x03\x02\x03\x02" +
		"\x03\x03\x05\x03\xAB\n\x03\x03\x03\x06\x03\xAE\n\x03\r\x03\x0E\x03\xAF" +
		"\x03\x04\x05\x04\xB3\n\x04\x03\x04\x03\x04\x05\x04\xB7\n\x04\x03\x04\x03" +
		"\x04\x03\x04\x05\x04\xBC\n\x04\x03\x04\x05\x04\xBF\n\x04\x03\x04\x03\x04" +
		"\x05\x04\xC3\n\x04\x03\x04\x05\x04\xC6\n\x04\x03\x05\x03\x05\x03\x05\x03" +
		"\x05\x05\x05\xCC\n\x05\x05\x05\xCE\n\x05\x03\x05\x03\x05\x03\x05\x03\x05" +
		"\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05" +
		"\x03\x05\x03\x05\x03\x05\x03\x05\x05\x05\xE1\n\x05\x03\x06\x03\x06\x03" +
		"\x07\x03\x07\x03\x07\x03\b\x03\b\x03\t\x03\t\x03\t\x03\n\x03\n\x03\n\x03" +
		"\v\x03\v\x03\v\x03\f\x03\f\x03\f\x03\f\x07\f\xF7\n\f\f\f\x0E\f\xFA\v\f" +
		"\x03\r\x03\r\x03\r\x03\r\x03\r\x03\x0E\x03\x0E\x03\x0E\x03\x0E\x07\x0E" +
		"\u0105\n\x0E\f\x0E\x0E\x0E\u0108\v\x0E\x03\x0F\x03\x0F\x03\x0F\x03\x0F" +
		"\x05\x0F\u010E\n\x0F\x03\x10\x03\x10\x03\x10\x03\x10\x07\x10\u0114\n\x10" +
		"\f\x10\x0E\x10\u0117\v\x10\x03\x11\x03\x11\x03\x11\x05\x11\u011C\n\x11" +
		"\x03\x12\x03\x12\x03\x12\x05\x12\u0121\n\x12\x03\x13\x03\x13\x03\x13\x05" +
		"\x13\u0126\n\x13\x03\x14\x05\x14\u0129\n\x14\x03\x14\x03\x14\x03\x15\x03" +
		"\x15\x03\x16\x03\x16\x03\x17\x03\x17\x03\x17\x05\x17\u0134\n\x17\x03\x17" +
		"\x03\x17\x03\x17\x03\x17\x03\x18\x03\x18\x03\x18\x05\x18\u013D\n\x18\x03" +
		"\x18\x05\x18\u0140\n\x18\x03\x18\x03\x18\x05\x18\u0144\n\x18\x03\x18\x03" +
		"\x18\x05\x18\u0148\n\x18\x06\x18\u014A\n\x18\r\x18\x0E\x18\u014B\x03\x18" +
		"\x03\x18\x03\x19\x05\x19\u0151\n\x19\x03\x19\x03\x19\x03\x19\x05\x19\u0156" +
		"\n\x19\x03\x19\x03\x19\x05\x19\u015A\n\x19\x03\x1A\x03\x1A\x05\x1A\u015E" +
		"\n\x1A\x03\x1A\x03\x1A\x05\x1A\u0162\n\x1A\x03\x1A\x03\x1A\x05\x1A\u0166" +
		"\n\x1A\x03\x1A\x03\x1A\x05\x1A\u016A\n\x1A\x03\x1A\x03\x1A\x05\x1A\u016E" +
		"\n\x1A\x07\x1A\u0170\n\x1A\f\x1A\x0E\x1A\u0173\v\x1A\x03\x1A\x03\x1A\x03" +
		"\x1B\x03\x1B\x03\x1B\x05\x1B\u017A\n\x1B\x03\x1B\x05\x1B\u017D\n\x1B\x03" +
		"\x1B\x03\x1B\x05\x1B\u0181\n\x1B\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C" +
		"\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x03\x1C" +
		"\x03\x1C\x03\x1C\x03\x1C\x03\x1C\x05\x1C\u0195\n\x1C\x03\x1D\x03\x1D\x03" +
		"\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03" +
		"\x1E\x03\x1E\x03\x1E\x03\x1E\x05\x1E\u01A6\n\x1E\x03\x1E\x03\x1E\x03\x1E" +
		"\x03\x1E\x05\x1E\u01AC\n\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03" +
		"\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03" +
		"\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03" +
		"\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03" +
		"\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03" +
		"\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03" +
		"\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x05\x1E\u01E5\n\x1E\x03\x1E\x03\x1E" +
		"\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x03\x1E" +
		"\x03\x1E\x03\x1E\x03\x1E\x03\x1E\x05\x1E\u01F6\n\x1E\x03\x1E\x03\x1E\x03" +
		"\x1E\x05\x1E\u01FB\n\x1E\x03\x1F\x03\x1F\x03\x1F\x05\x1F\u0200\n\x1F\x03" +
		"\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03" +
		"\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x05\x1F\u0213" +
		"\n\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x05\x1F\u021A\n\x1F\x05" +
		"\x1F\u021C\n\x1F\x03 \x03 \x03 \x05 \u0221\n \x03!\x03!\x03!\x03!\x03" +
		"!\x03!\x03!\x03!\x03!\x05!\u022C\n!\x03!\x03!\x03!\x03!\x03!\x03!\x03" +
		"!\x05!\u0235\n!\x03!\x05!\u0238\n!\x03\"\x03\"\x03\"\x05\"\u023D\n\"\x03" +
		"\"\x03\"\x03\"\x03\"\x05\"\u0243\n\"\x03\"\x03\"\x03\"\x05\"\u0248\n\"" +
		"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x05\"\u0250\n\"\x03\"\x05\"\u0253" +
		"\n\"\x03#\x03#\x03#\x03#\x05#\u0259\n#\x03#\x03#\x03#\x03#\x03#\x03#\x03" +
		"#\x05#\u0262\n#\x03#\x05#\u0265\n#\x03$\x03$\x05$\u0269\n$\x03%\x03%\x03" +
		"%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x03%\x05%\u0277\n%\x03&\x03" +
		"&\x03&\x05&\u027C\n&\x03\'\x03\'\x03\'\x03\'\x03\'\x03\'\x03\'\x03\'\x03" +
		"\'\x05\'\u0287\n\'\x03\'\x03\'\x03\'\x03\'\x03\'\x03\'\x03\'\x03\'\x03" +
		"\'\x03\'\x05\'\u0293\n\'\x03(\x03(\x05(\u0297\n(\x03)\x03)\x03)\x03)\x03" +
		")\x03)\x03)\x03)\x03)\x03)\x03)\x03)\x03)\x03)\x05)\u02A7\n)\x03)\x03" +
		")\x03)\x03)\x03)\x03)\x03)\x03)\x03)\x03)\x03)\x03)\x03)\x05)\u02B6\n" +
		")\x03*\x03*\x03+\x03+\x03+\x05+\u02BD\n+\x03+\x03+\x03+\x05+\u02C2\n+" +
		"\x03+\x03+\x05+\u02C6\n+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03+\x03+" +
		"\x05+\u02D1\n+\x03+\x03+\x03+\x05+\u02D6\n+\x03,\x03,\x03,\x03,\x05,\u02DC" +
		"\n,\x03,\x03,\x03,\x05,\u02E1\n,\x05,\u02E3\n,\x03-\x03-\x03.\x03.\x03" +
		"/\x03/\x03/\x030\x030\x030\x031\x031\x031\x031\x031\x031\x031\x031\x03" +
		"1\x031\x031\x051\u02FA\n1\x031\x031\x031\x031\x031\x031\x031\x031\x03" +
		"1\x031\x031\x031\x031\x031\x031\x031\x031\x051\u030D\n1\x051\u030F\n1" +
		"\x032\x032\x033\x033\x034\x034\x035\x035\x036\x036\x037\x037\x038\x03" +
		"8\x039\x039\x03:\x03:\x05:\u0323\n:\x03;\x03;\x05;\u0327\n;\x03<\x03<" +
		"\x05<\u032B\n<\x03=\x03=\x03>\x03>\x03>\x03>\x03>\x05>\u0334\n>\x03?\x03" +
		"?\x03@\x03@\x03A\x03A\x03B\x03B\x03C\x03C\x03D\x03D\x03E\x03E\x03F\x03" +
		"F\x03G\x03G\x03G\x03G\x03G\x03G\x03G\x05G\u034D\nG\x03G\x03G\x03G\x03" +
		"G\x07G\u0353\nG\fG\x0EG\u0356\vG\x03H\x03H\x03H\x05H\u035B\nH\x03I\x03" +
		"I\x03J\x03J\x03K\x03K\x03L\x03L\x03M\x05M\u0366\nM\x03M\x03M\x03M\x03" +
		"M\x03M\x05M\u036D\nM\x03N\x03N\x03O\x03O\x03P\x03P\x03Q\x03Q\x03R\x03" +
		"R\x03R\x05\xF8\u0106\u0115\x02\x03\x8CS\x02\x02\x04\x02\x06\x02\b\x02" +
		"\n\x02\f\x02\x0E\x02\x10\x02\x12\x02\x14\x02\x16\x02\x18\x02\x1A\x02\x1C" +
		"\x02\x1E\x02 \x02\"\x02$\x02&\x02(\x02*\x02,\x02.\x020\x022\x024\x026" +
		"\x028\x02:\x02<\x02>\x02@\x02B\x02D\x02F\x02H\x02J\x02L\x02N\x02P\x02" +
		"R\x02T\x02V\x02X\x02Z\x02\\\x02^\x02`\x02b\x02d\x02f\x02h\x02j\x02l\x02" +
		"n\x02p\x02r\x02t\x02v\x02x\x02z\x02|\x02~\x02\x80\x02\x82\x02\x84\x02" +
		"\x86\x02\x88\x02\x8A\x02\x8C\x02\x8E\x02\x90\x02\x92\x02\x94\x02\x96\x02" +
		"\x98\x02\x9A\x02\x9C\x02\x9E\x02\xA0\x02\xA2\x02\x02\x12\x03\x02\x1F " +
		"\x03\x02NO\x04\x0244@A\x04\x0244AA\x03\x02PQ\x03\x02/?\x03\x0228\x04\x02" +
		"//26\x04\x020026\x03\x029<\x04\x02:;==\x03\x02>?\x03\x02EK\x03\x02FG\x05" +
		"\x02NOQQTT\x04\x02PPUU\x02\u03C7\x02\xA5\x03\x02\x02\x02\x04\xAD\x03\x02" +
		"\x02\x02\x06\xC5\x03\x02\x02\x02\b\xCD\x03\x02\x02\x02\n\xE2\x03\x02\x02" +
		"\x02\f\xE4\x03\x02\x02\x02\x0E\xE7\x03\x02\x02\x02\x10\xE9\x03\x02\x02" +
		"\x02\x12\xEC\x03\x02\x02\x02\x14\xEF\x03\x02\x02\x02\x16\xF2\x03\x02\x02" +
		"\x02\x18\xFB\x03\x02\x02\x02\x1A\u0100\x03\x02\x02\x02\x1C\u0109\x03\x02" +
		"\x02\x02\x1E\u010F\x03\x02\x02\x02 \u011B\x03\x02\x02\x02\"\u011D\x03" +
		"\x02\x02\x02$\u0122\x03\x02\x02\x02&\u0128\x03\x02\x02\x02(\u012C\x03" +
		"\x02\x02\x02*\u012E\x03\x02\x02\x02,\u0130\x03\x02\x02\x02.\u0139\x03" +
		"\x02\x02\x020\u0159\x03\x02\x02\x022\u015B\x03\x02\x02\x024\u0180\x03" +
		"\x02\x02\x026\u0194\x03\x02\x02\x028\u0196\x03\x02\x02\x02:\u01FA\x03" +
		"\x02\x02\x02<\u021B\x03\x02\x02\x02>\u021D\x03\x02\x02\x02@\u0237\x03" +
		"\x02\x02\x02B\u0252\x03\x02\x02\x02D\u0264\x03\x02\x02\x02F\u0266\x03" +
		"\x02\x02\x02H\u0276\x03\x02\x02\x02J\u0278\x03\x02\x02\x02L\u0292\x03" +
		"\x02\x02\x02N\u0294\x03\x02\x02\x02P\u02B5\x03\x02\x02\x02R\u02B7\x03" +
		"\x02\x02\x02T\u02D5\x03\x02\x02\x02V\u02E2\x03\x02\x02\x02X\u02E4\x03" +
		"\x02\x02\x02Z\u02E6\x03\x02\x02\x02\\\u02E8\x03\x02\x02\x02^\u02EB\x03" +
		"\x02\x02\x02`\u030E\x03\x02\x02\x02b\u0310\x03\x02\x02\x02d\u0312\x03" +
		"\x02\x02\x02f\u0314\x03\x02\x02\x02h\u0316\x03\x02\x02\x02j\u0318\x03" +
		"\x02\x02\x02l\u031A\x03\x02\x02\x02n\u031C\x03\x02\x02\x02p\u031E\x03" +
		"\x02\x02\x02r\u0322\x03\x02\x02\x02t\u0326\x03\x02\x02\x02v\u032A\x03" +
		"\x02\x02\x02x\u032C\x03\x02\x02\x02z\u0333\x03\x02\x02\x02|\u0335\x03" +
		"\x02\x02\x02~\u0337\x03\x02\x02\x02\x80\u0339\x03\x02\x02\x02\x82\u033B" +
		"\x03\x02\x02\x02\x84\u033D\x03\x02\x02\x02\x86\u033F\x03\x02\x02\x02\x88" +
		"\u0341\x03\x02\x02\x02\x8A\u0343\x03\x02\x02\x02\x8C\u034C\x03\x02\x02" +
		"\x02\x8E\u035A\x03\x02\x02\x02\x90\u035C\x03\x02\x02\x02\x92\u035E\x03" +
		"\x02\x02\x02\x94\u0360\x03\x02\x02\x02\x96\u0362\x03\x02\x02\x02\x98\u0365" +
		"\x03\x02\x02\x02\x9A\u036E\x03\x02\x02\x02\x9C\u0370\x03\x02\x02\x02\x9E" +
		"\u0372\x03\x02\x02\x02\xA0\u0374\x03\x02\x02\x02\xA2\u0376\x03\x02\x02" +
		"\x02\xA4\xA6\x05\x04\x03\x02\xA5\xA4\x03\x02\x02\x02\xA5\xA6\x03\x02\x02" +
		"\x02\xA6\xA7\x03\x02\x02\x02\xA7\xA8\x07\x02\x02\x03\xA8\x03\x03\x02\x02" +
		"\x02\xA9\xAB\x05\x06\x04\x02\xAA\xA9\x03\x02\x02\x02\xAA\xAB\x03\x02\x02" +
		"\x02\xAB\xAC\x03\x02\x02\x02\xAC\xAE\x07]\x02\x02\xAD\xAA\x03\x02\x02" +
		"\x02\xAE\xAF\x03\x02\x02\x02\xAF\xAD\x03\x02\x02\x02\xAF\xB0\x03\x02\x02" +
		"\x02\xB0\x05\x03\x02\x02\x02\xB1\xB3\x05z>\x02\xB2\xB1\x03\x02\x02\x02" +
		"\xB2\xB3\x03\x02\x02\x02\xB3\xB4\x03\x02\x02\x02\xB4\xB6\x05\b\x05\x02" +
		"\xB5\xB7\x05\x80A\x02\xB6\xB5\x03\x02\x02\x02\xB6\xB7\x03\x02\x02\x02" +
		"\xB7\xC6\x03\x02\x02\x02\xB8\xC6\x05\x80A\x02\xB9\xBB\x05z>\x02\xBA\xBC" +
		"\x05\x80A\x02\xBB\xBA\x03\x02\x02\x02\xBB\xBC\x03\x02\x02\x02\xBC\xC6" +
		"\x03\x02\x02\x02\xBD\xBF\x05z>\x02\xBE\xBD\x03\x02\x02\x02\xBE\xBF\x03" +
		"\x02\x02\x02\xBF\xC0\x03\x02\x02\x02\xC0\xC2\x056\x1C\x02\xC1\xC3\x05" +
		"\x80A\x02\xC2\xC1\x03\x02\x02\x02\xC2\xC3\x03\x02\x02\x02\xC3\xC6\x03" +
		"\x02\x02\x02\xC4\xC6\x05~@\x02\xC5\xB2\x03\x02\x02\x02\xC5\xB8\x03\x02" +
		"\x02\x02\xC5\xB9\x03\x02\x02\x02\xC5\xBE\x03\x02\x02\x02\xC5\xC4\x03\x02" +
		"\x02\x02\xC6\x07\x03\x02\x02\x02\xC7\xC8\x06\x05\x02\x02\xC8\xCE\x07\\" +
		"\x02\x02\xC9\xCB\x06\x05\x03\x02\xCA\xCC\x07\\\x02\x02\xCB\xCA\x03\x02" +
		"\x02\x02\xCB\xCC\x03\x02\x02\x02\xCC\xCE\x03\x02\x02\x02\xCD\xC7\x03\x02" +
		"\x02\x02\xCD\xC9\x03\x02\x02\x02\xCE\xE0\x03\x02\x02\x02\xCF\xE1\x05\n" +
		"\x06\x02\xD0\xE1\x05\f\x07\x02\xD1\xE1\x05\x10\t\x02\xD2\xE1\x05\x12\n" +
		"\x02\xD3\xE1\x05\x1A\x0E\x02\xD4\xE1\x05\x14\v\x02\xD5\xE1\x05\x16\f\x02" +
		"\xD6\xE1\x05\x18\r\x02\xD7\xE1\x05\x1C\x0F\x02\xD8\xE1\x05\x1E\x10\x02" +
		"\xD9\xE1\x05\"\x12\x02\xDA\xE1\x05$\x13\x02\xDB\xE1\x05(\x15\x02\xDC\xE1" +
		"\x05*\x16\x02\xDD\xE1\x05,\x17\x02\xDE\xE1\x05.\x18\x02\xDF\xE1\x052\x1A" +
		"\x02\xE0\xCF\x03\x02\x02\x02\xE0\xD0\x03\x02\x02\x02\xE0\xD1\x03\x02\x02" +
		"\x02\xE0\xD2\x03\x02\x02\x02\xE0\xD3\x03\x02\x02\x02\xE0\xD4\x03\x02\x02" +
		"\x02\xE0\xD5\x03\x02\x02\x02\xE0\xD6\x03\x02\x02\x02\xE0\xD7\x03\x02\x02" +
		"\x02\xE0\xD8\x03\x02\x02\x02\xE0\xD9\x03\x02\x02\x02\xE0\xDA\x03\x02\x02" +
		"\x02\xE0\xDB\x03\x02\x02\x02\xE0\xDC\x03\x02\x02\x02\xE0\xDD\x03\x02\x02" +
		"\x02\xE0\xDE\x03\x02\x02\x02\xE0\xDF\x03\x02\x02\x02\xE1\t\x03\x02\x02" +
		"\x02\xE2\xE3\x07\x07\x02\x02\xE3\v\x03\x02\x02\x02\xE4\xE5\x07\x13\x02" +
		"\x02\xE5\xE6\x05\x0E\b\x02\xE6\r\x03\x02\x02\x02\xE7\xE8\x07X\x02\x02" +
		"\xE8\x0F\x03\x02\x02\x02\xE9\xEA\x07\b\x02\x02\xEA\xEB\x05\x88E\x02\xEB" +
		"\x11\x03\x02\x02\x02\xEC\xED\x07\t\x02\x02\xED\xEE\x05\x8AF\x02\xEE\x13" +
		"\x03\x02\x02\x02\xEF\xF0\x07\n\x02\x02\xF0\xF1\x05|?\x02\xF1\x15\x03\x02" +
		"\x02\x02\xF2\xF3\x07\v\x02\x02\xF3\xF8\x05|?\x02\xF4\xF5\x07[\x02\x02" +
		"\xF5\xF7\x05|?\x02\xF6\xF4\x03\x02\x02\x02\xF7\xFA\x03\x02\x02\x02\xF8" +
		"\xF9\x03\x02\x02\x02\xF8\xF6\x03\x02\x02\x02\xF9\x17\x03\x02\x02\x02\xFA" +
		"\xF8\x03\x02\x02\x02\xFB\xFC\x07\f\x02\x02\xFC\xFD\x05|?\x02\xFD\xFE\x07" +
		"E\x02\x02\xFE\xFF\x05\x8CG\x02\xFF\x19\x03\x02\x02\x02\u0100\u0101\x07" +
		"\x0F\x02\x02\u0101\u0106\x05\x8CG\x02\u0102\u0103\x07[\x02\x02\u0103\u0105" +
		"\x05\x8CG\x02\u0104\u0102\x03\x02\x02\x02\u0105\u0108\x03\x02\x02\x02" +
		"\u0106\u0107\x03\x02\x02\x02\u0106\u0104\x03\x02\x02\x02\u0107\x1B\x03" +
		"\x02\x02\x02\u0108\u0106\x03\x02\x02\x02\u0109\u010A\x07\r\x02\x02\u010A" +
		"\u010D\x05\x8CG\x02\u010B\u010C\x07[\x02\x02\u010C\u010E\x05\x8CG\x02" +
		"\u010D\u010B\x03\x02\x02\x02\u010D\u010E\x03\x02\x02\x02\u010E\x1D\x03" +
		"\x02\x02\x02\u010F\u0110\x07\x0E\x02\x02\u0110\u0115\x05 \x11\x02\u0111" +
		"\u0112\x07[\x02\x02\u0112\u0114\x05 \x11\x02\u0113\u0111\x03\x02\x02\x02" +
		"\u0114\u0117\x03\x02\x02\x02\u0115\u0116\x03\x02\x02\x02\u0115\u0113\x03" +
		"\x02\x02\x02\u0116\x1F\x03\x02\x02\x02\u0117\u0115\x03\x02\x02\x02\u0118" +
		"\u011C\x05\x82B\x02\u0119\u011C\x05\x84C\x02\u011A\u011C\x05\x86D\x02" +
		"\u011B\u0118\x03\x02\x02\x02\u011B\u0119\x03\x02\x02\x02\u011B\u011A\x03" +
		"\x02\x02\x02\u011C!\x03\x02\x02\x02\u011D\u011E\x07\x14\x02\x02\u011E" +
		"\u0120\x05\x8CG\x02\u011F\u0121\x05\x80A\x02\u0120\u011F\x03\x02\x02\x02" +
		"\u0120\u0121\x03\x02\x02\x02\u0121#\x03\x02\x02\x02\u0122\u0123\x07\x15" +
		"\x02\x02\u0123\u0125\x05|?\x02\u0124\u0126\x05\x80A\x02\u0125\u0124\x03" +
		"\x02\x02\x02\u0125\u0126\x03\x02\x02\x02\u0126%\x03\x02\x02\x02\u0127" +
		"\u0129\x05(\x15\x02\u0128\u0127\x03\x02\x02\x02\u0128\u0129\x03\x02\x02" +
		"\x02\u0129\u012A\x03\x02\x02\x02\u012A\u012B\x05*\x16\x02\u012B\'\x03" +
		"\x02\x02\x02\u012C\u012D\x07\x16\x02\x02\u012D)\x03\x02\x02\x02\u012E" +
		"\u012F\x07\x17\x02\x02\u012F+\x03\x02\x02\x02\u0130\u0131\x07\x18\x02" +
		"\x02\u0131\u0133\x05\x88E\x02\u0132\u0134\x05\x80A\x02\u0133\u0132\x03" +
		"\x02\x02\x02\u0133\u0134\x03\x02\x02\x02\u0134\u0135\x03\x02\x02\x02\u0135" +
		"\u0136\x07]\x02\x02\u0136\u0137\x05\x04\x03\x02\u0137\u0138\x07\x19\x02" +
		"\x02\u0138-\x03\x02\x02\x02\u0139\u013A\x07\x10\x02\x02\u013A\u013C\x05" +
		"\x88E\x02\u013B\u013D\x05\x80A\x02\u013C\u013B\x03\x02\x02\x02\u013C\u013D" +
		"\x03\x02\x02\x02\u013D\u013F\x03\x02\x02\x02\u013E\u0140\x07]\x02\x02" +
		"\u013F\u013E\x03\x02\x02\x02\u013F\u0140\x03\x02\x02\x02\u0140\u0141\x03" +
		"\x02\x02\x02\u0141\u0143\x07\x03\x02\x02\u0142\u0144\x07]\x02\x02\u0143" +
		"\u0142\x03\x02\x02\x02\u0143\u0144\x03\x02\x02\x02\u0144\u0149\x03\x02" +
		"\x02\x02\u0145\u0147\x050\x19\x02\u0146\u0148\x07]\x02\x02\u0147\u0146" +
		"\x03\x02\x02\x02\u0147\u0148\x03\x02\x02\x02\u0148\u014A\x03\x02\x02\x02" +
		"\u0149\u0145\x03\x02\x02\x02\u014A\u014B\x03\x02\x02\x02\u014B\u0149\x03" +
		"\x02\x02\x02\u014B\u014C\x03\x02\x02\x02\u014C\u014D\x03\x02\x02\x02\u014D" +
		"\u014E\x07\x04\x02\x02\u014E/\x03\x02\x02\x02\u014F\u0151\x05|?\x02\u0150" +
		"\u014F\x03\x02\x02\x02\u0150\u0151\x03\x02\x02\x02\u0151\u0152\x03\x02" +
		"\x02\x02\u0152\u0153\x07\x11\x02\x02\u0153\u0155\x05\x86D\x02\u0154\u0156" +
		"\x05\x80A\x02\u0155\u0154\x03\x02\x02\x02\u0155\u0156\x03\x02\x02\x02" +
		"\u0156\u015A\x03\x02\x02\x02\u0157\u015A\x05\x80A\x02\u0158\u015A\x07" +
		"]\x02\x02\u0159\u0150\x03\x02\x02\x02\u0159\u0157\x03\x02\x02\x02\u0159" +
		"\u0158\x03\x02\x02\x02\u015A1\x03\x02\x02\x02\u015B\u015D\x07\x12\x02" +
		"\x02\u015C\u015E\x07]\x02\x02\u015D\u015C\x03\x02\x02\x02\u015D\u015E" +
		"\x03\x02\x02\x02\u015E\u015F\x03\x02\x02\x02\u015F\u0161\x07\x03\x02\x02" +
		"\u0160\u0162\x07]\x02\x02\u0161\u0160\x03\x02\x02\x02\u0161\u0162\x03" +
		"\x02\x02\x02\u0162\u0163\x03\x02\x02\x02\u0163\u0165\x054\x1B\x02\u0164" +
		"\u0166\x07]\x02\x02\u0165\u0164\x03\x02\x02\x02\u0165\u0166\x03\x02\x02" +
		"\x02\u0166\u0171\x03\x02\x02\x02\u0167\u0169\x07[\x02\x02\u0168\u016A" +
		"\x07]\x02\x02\u0169\u0168\x03\x02\x02\x02\u0169\u016A\x03\x02\x02\x02" +
		"\u016A\u016B\x03\x02\x02\x02\u016B\u016D\x054\x1B\x02\u016C\u016E\x07" +
		"]\x02\x02\u016D\u016C\x03\x02\x02\x02\u016D\u016E\x03\x02\x02\x02\u016E" +
		"\u0170\x03\x02\x02\x02\u016F\u0167\x03\x02\x02\x02\u0170\u0173\x03\x02" +
		"\x02\x02\u0171\u016F\x03\x02\x02\x02\u0171\u0172\x03\x02\x02\x02\u0172" +
		"\u0174\x03\x02\x02\x02\u0173\u0171\x03\x02\x02\x02\u0174\u0175\x07\x04" +
		"\x02\x02\u01753\x03\x02\x02\x02\u0176\u0179\x05|?\x02\u0177\u0178\x07" +
		"E\x02\x02\u0178\u017A\x05\x86D\x02\u0179\u0177\x03\x02\x02\x02\u0179\u017A" +
		"\x03\x02\x02\x02\u017A\u017C\x03\x02\x02\x02\u017B\u017D\x05\x80A\x02" +
		"\u017C\u017B\x03\x02\x02\x02\u017C\u017D\x03\x02\x02\x02\u017D\u0181\x03" +
		"\x02\x02\x02\u017E\u0181\x05\x80A\x02\u017F\u0181\x07]\x02\x02\u0180\u0176" +
		"\x03\x02\x02\x02\u0180\u017E\x03\x02\x02\x02\u0180\u017F\x03\x02\x02\x02" +
		"\u01815\x03\x02\x02\x02\u0182\u0195\x058\x1D\x02\u0183\u0195\x05:\x1E" +
		"\x02\u0184\u0195\x05<\x1F\x02\u0185\u0195\x05> \x02\u0186\u0195\x05@!" +
		"\x02\u0187\u0195\x05B\"\x02\u0188\u0195\x05D#\x02\u0189\u0195\x05F$\x02" +
		"\u018A\u0195\x05H%\x02\u018B\u0195\x05J&\x02\u018C\u0195\x05L\'\x02\u018D" +
		"\u0195\x05N(\x02\u018E\u0195\x05P)\x02\u018F\u0195\x05T+\x02\u0190\u0195" +
		"\x05V,\x02\u0191\u0195\x05\\/\x02\u0192\u0195\x05^0\x02\u0193\u0195\x05" +
		"`1\x02\u0194\u0182\x03\x02\x02\x02\u0194\u0183\x03\x02\x02\x02\u0194\u0184" +
		"\x03\x02\x02\x02\u0194\u0185\x03\x02\x02\x02\u0194\u0186\x03\x02\x02\x02" +
		"\u0194\u0187\x03\x02\x02\x02\u0194\u0188\x03\x02\x02\x02\u0194\u0189\x03" +
		"\x02\x02\x02\u0194\u018A\x03\x02\x02\x02\u0194\u018B\x03\x02\x02\x02\u0194" +
		"\u018C\x03\x02\x02\x02\u0194\u018D\x03\x02\x02\x02\u0194\u018E\x03\x02" +
		"\x02\x02\u0194\u018F\x03\x02\x02\x02\u0194\u0190\x03\x02\x02\x02\u0194" +
		"\u0191\x03\x02\x02\x02\u0194\u0192\x03\x02\x02\x02\u0194\u0193\x03\x02" +
		"\x02\x02\u01957\x03\x02\x02\x02\u0196\u0197\x07\x1A\x02\x02\u01979\x03" +
		"\x02\x02\x02\u0198\u01A5\x07\x1B\x02\x02\u0199\u019A\x05h5\x02\u019A\u019B" +
		"\x07[\x02\x02\u019B\u019C\x05h5\x02\u019C\u01A6\x03\x02\x02\x02\u019D" +
		"\u019E\x05j6\x02\u019E\u019F\x07[\x02\x02\u019F\u01A0\x05j6\x02\u01A0" +
		"\u01A6\x03\x02\x02\x02\u01A1\u01A2\x05l7\x02\u01A2\u01A3\x07[\x02\x02" +
		"\u01A3\u01A4\x05l7\x02\u01A4\u01A6\x03\x02\x02\x02\u01A5\u0199\x03\x02" +
		"\x02\x02\u01A5\u019D\x03\x02\x02\x02\u01A5\u01A1\x03\x02\x02\x02\u01A6" +
		"\u01FB\x03\x02\x02\x02\u01A7\u01AB\x07\x1B\x02\x02\u01A8\u01AC\x05h5\x02" +
		"\u01A9\u01AC\x07/\x02\x02\u01AA\u01AC\x070\x02\x02\u01AB\u01A8\x03\x02" +
		"\x02\x02\u01AB\u01A9\x03\x02\x02\x02\u01AB\u01AA\x03\x02\x02\x02\u01AC" +
		"\u01AD\x03\x02\x02\x02\u01AD\u01AE\x07[\x02\x02\u01AE\u01FB\x05\x86D\x02" +
		"\u01AF\u01B0\x07\x1B\x02\x02\u01B0\u01B1\x05h5\x02\u01B1\u01B2\x07[\x02" +
		"\x02\u01B2\u01B3\x07Y\x02\x02\u01B3\u01B4\x07<\x02\x02\u01B4\u01B5\x07" +
		"Z\x02\x02\u01B5\u01FB\x03\x02\x02\x02\u01B6\u01B7\x07\x1B\x02\x02\u01B7" +
		"\u01B8\x05h5\x02\u01B8\u01B9\x07[\x02\x02\u01B9\u01BA\x07Y\x02\x02\u01BA" +
		"\u01BB\x05x=\x02\u01BB\u01BC\x05\x96L\x02\u01BC\u01BD\x05b2\x02\u01BD" +
		"\u01BE\x07Z\x02\x02\u01BE\u01FB\x03\x02\x02\x02\u01BF\u01C0\x07\x1B\x02" +
		"\x02\u01C0\u01C1\x07Y\x02\x02\u01C1\u01C2\x07<\x02\x02\u01C2\u01C3\x07" +
		"Z\x02\x02\u01C3\u01C4\x07[\x02\x02\u01C4\u01FB\x05h5\x02\u01C5\u01C6\x07" +
		"\x1B\x02\x02\u01C6\u01C7\x07Y\x02\x02\u01C7\u01C8\x05x=\x02\u01C8\u01C9" +
		"\x05\x96L\x02\u01C9\u01CA\x05b2\x02\u01CA\u01CB\x07Z\x02\x02\u01CB\u01CC" +
		"\x07[\x02\x02\u01CC\u01CD\x05h5\x02\u01CD\u01FB\x03\x02\x02\x02\u01CE" +
		"\u01CF\x07\x1B\x02\x02\u01CF\u01D0\x07Y\x02\x02\u01D0\u01D1\x07<\x02\x02" +
		"\u01D1\u01D2\x07Z\x02\x02\u01D2\u01D3\x07[\x02\x02\u01D3\u01FB\x05\x86" +
		"D\x02\u01D4\u01D5\x07\x1B\x02\x02\u01D5\u01D6\x07Y\x02\x02\u01D6\u01D7" +
		"\x05x=\x02\u01D7\u01D8\x05\x96L\x02\u01D8\u01D9\x05b2\x02\u01D9\u01DA" +
		"\x07Z\x02\x02\u01DA\u01DB\x07[\x02\x02\u01DB\u01DC\x05\x86D\x02\u01DC" +
		"\u01FB\x03\x02\x02\x02\u01DD\u01DE\x07\x1B\x02\x02\u01DE\u01DF\x072\x02" +
		"\x02\u01DF\u01E0\x07[\x02\x02\u01E0\u01E4\x07";
	private static readonly _serializedATNSegment1: string =
		"Y\x02\x02\u01E1\u01E5\x07:\x02\x02\u01E2\u01E5\x07;\x02\x02\u01E3\u01E5" +
		"\x05\x8CG\x02\u01E4\u01E1\x03\x02\x02\x02\u01E4\u01E2\x03\x02\x02\x02" +
		"\u01E4\u01E3\x03\x02\x02\x02\u01E5\u01E6\x03\x02\x02\x02\u01E6\u01FB\x07" +
		"Z\x02\x02\u01E7\u01E8\x07\x1B\x02\x02\u01E8\u01E9\x072\x02\x02\u01E9\u01EA" +
		"\x07[\x02\x02\u01EA\u01FB\x071\x02\x02\u01EB\u01EC\x07\x1B\x02\x02\u01EC" +
		"\u01ED\x071\x02\x02\u01ED\u01EE\x07[\x02\x02\u01EE\u01FB\x072\x02\x02" +
		"\u01EF\u01F0\x07\x1B\x02\x02\u01F0\u01F5\x07Y\x02\x02\u01F1\u01F6\x07" +
		":\x02\x02\u01F2\u01F6\x07;\x02\x02\u01F3\u01F6\x071\x02\x02\u01F4\u01F6" +
		"\x05\x88E\x02\u01F5\u01F1\x03\x02\x02\x02\u01F5\u01F2\x03\x02\x02\x02" +
		"\u01F5\u01F3\x03\x02\x02\x02\u01F5\u01F4\x03\x02\x02\x02\u01F6\u01F7\x03" +
		"\x02\x02\x02\u01F7\u01F8\x07Z\x02\x02\u01F8\u01F9\x07[\x02\x02\u01F9\u01FB" +
		"\x072\x02\x02\u01FA\u0198\x03\x02\x02\x02\u01FA\u01A7\x03\x02\x02\x02" +
		"\u01FA\u01AF\x03\x02\x02\x02\u01FA\u01B6\x03\x02\x02\x02\u01FA\u01BF\x03" +
		"\x02\x02\x02\u01FA\u01C5\x03\x02\x02\x02\u01FA\u01CE\x03\x02\x02\x02\u01FA" +
		"\u01D4\x03\x02\x02\x02\u01FA\u01DD\x03\x02\x02\x02\u01FA\u01E7\x03\x02" +
		"\x02\x02\u01FA\u01EB\x03\x02\x02\x02\u01FA\u01EF\x03\x02\x02\x02\u01FB" +
		";\x03\x02\x02\x02\u01FC\u01FF\x07\x1B\x02\x02\u01FD\u0200\x05r:\x02\u01FE" +
		"\u0200\x05x=\x02\u01FF\u01FD\x03\x02\x02\x02\u01FF\u01FE\x03\x02\x02\x02" +
		"\u0200\u0201\x03\x02\x02\x02\u0201\u0202\x07[\x02\x02\u0202\u0203\x05" +
		"\x88E\x02\u0203\u021C\x03\x02\x02\x02\u0204\u0205\x07\x1B\x02\x02\u0205" +
		"\u0206\x05x=\x02\u0206\u0207\x07[\x02\x02\u0207\u0208\x07Y\x02\x02\u0208" +
		"\u0209\x05\x88E\x02\u0209\u020A\x07Z\x02\x02\u020A\u021C\x03\x02\x02\x02" +
		"\u020B\u020C\x07\x1B\x02\x02\u020C\u020D\x07Y\x02\x02\u020D\u020E\x05" +
		"\x88E\x02\u020E\u020F\x07Z\x02\x02\u020F\u0212\x07[\x02\x02\u0210\u0213" +
		"\x05r:\x02\u0211\u0213\x05x=\x02\u0212\u0210\x03\x02\x02\x02\u0212\u0211" +
		"\x03\x02\x02\x02\u0213\u021C\x03\x02\x02\x02\u0214\u0215\x07\x1B\x02\x02" +
		"\u0215\u0216\x07=\x02\x02\u0216\u0219\x07[\x02\x02\u0217\u021A\x07<\x02" +
		"\x02\u0218\u021A\x05x=\x02\u0219\u0217\x03\x02\x02\x02\u0219\u0218\x03" +
		"\x02\x02\x02\u021A\u021C\x03\x02\x02\x02\u021B\u01FC\x03\x02\x02\x02\u021B" +
		"\u0204\x03\x02\x02\x02\u021B\u020B\x03\x02\x02\x02\u021B\u0214\x03\x02" +
		"\x02\x02\u021C=\x03\x02\x02\x02\u021D\u0220\x07\x1C\x02\x02\u021E\u0221" +
		"\x05n8\x02\u021F\u0221\x05x=\x02\u0220\u021E\x03\x02\x02\x02\u0220\u021F" +
		"\x03\x02\x02\x02\u0221?\x03\x02\x02\x02\u0222\u0223\x07\x1D\x02\x02\u0223" +
		"\u0224\x07;\x02\x02\u0224\u0225\x07[\x02\x02\u0225\u0238\x07<\x02\x02" +
		"\u0226\u0227\x07\x1D\x02\x02\u0227\u0228\x079\x02\x02\u0228\u0229\x07" +
		"[\x02\x02\u0229\u022B\x079\x02\x02\u022A\u022C\x07\x05\x02\x02\u022B\u022A" +
		"\x03\x02\x02\x02\u022B\u022C\x03\x02\x02\x02\u022C\u0238\x03\x02\x02\x02" +
		"\u022D\u022E\x07\x1D\x02\x02\u022E\u022F\x07Y\x02\x02\u022F\u0230\x07" +
		"=\x02\x02\u0230\u0231\x07Z\x02\x02\u0231\u0234\x07[\x02\x02\u0232\u0235" +
		"\x07<\x02\x02\u0233\u0235\x05x=\x02\u0234\u0232\x03\x02\x02\x02\u0234" +
		"\u0233\x03\x02\x02\x02\u0235\u0238\x03\x02\x02\x02\u0236\u0238\x07\x1E" +
		"\x02\x02\u0237\u0222\x03\x02\x02\x02\u0237\u0226\x03\x02\x02\x02\u0237" +
		"\u022D\x03\x02\x02\x02\u0237\u0236\x03\x02\x02\x02\u0238A\x03\x02\x02" +
		"\x02\u0239\u023C\t\x02\x02\x02\u023A\u023B\x072\x02\x02\u023B\u023D\x07" +
		"[\x02\x02\u023C\u023A\x03\x02\x02\x02\u023C\u023D\x03\x02\x02\x02\u023D" +
		"\u0242\x03\x02\x02\x02\u023E\u0243\x05h5\x02\u023F\u0243\x07/\x02\x02" +
		"\u0240\u0243\x070\x02\x02\u0241\u0243\x05\x86D\x02\u0242\u023E\x03\x02" +
		"\x02\x02\u0242\u023F\x03\x02\x02\x02\u0242\u0240\x03\x02\x02\x02\u0242" +
		"\u0241\x03\x02\x02\x02\u0243\u0253\x03\x02\x02\x02\u0244\u0247\t\x02\x02" +
		"\x02\u0245\u0246\x072\x02\x02\u0246\u0248\x07[\x02\x02\u0247\u0245\x03" +
		"\x02\x02\x02\u0247\u0248\x03\x02\x02\x02\u0248\u0249\x03\x02\x02\x02\u0249" +
		"\u024F\x07Y\x02\x02\u024A\u0250\x07<\x02\x02\u024B\u024C\x05x=\x02\u024C" +
		"\u024D\x05\x96L\x02\u024D\u024E\x05b2\x02\u024E\u0250\x03\x02\x02\x02" +
		"\u024F\u024A\x03\x02\x02\x02\u024F\u024B\x03\x02\x02\x02\u0250\u0251\x03" +
		"\x02\x02\x02\u0251\u0253\x07Z\x02\x02\u0252\u0239\x03\x02\x02\x02\u0252" +
		"\u0244\x03\x02\x02\x02\u0253C\x03\x02\x02\x02\u0254\u0258\x07!\x02\x02" +
		"\u0255\u0259\x05h5\x02\u0256\u0259\x07/\x02\x02\u0257\u0259\x070\x02\x02" +
		"\u0258\u0255\x03\x02\x02\x02\u0258\u0256\x03\x02\x02\x02\u0258\u0257\x03" +
		"\x02\x02\x02\u0259\u0265\x03\x02\x02\x02\u025A\u025B\x07!\x02\x02\u025B" +
		"\u0261\x07Y\x02\x02\u025C\u0262\x07<\x02\x02\u025D\u025E\x05x=\x02\u025E" +
		"\u025F\x05\x96L\x02\u025F\u0260\x05b2\x02\u0260\u0262\x03\x02\x02\x02" +
		"\u0261\u025C\x03\x02\x02\x02\u0261\u025D\x03\x02\x02\x02\u0262\u0263\x03" +
		"\x02\x02\x02\u0263\u0265\x07Z\x02\x02\u0264\u0254\x03\x02\x02\x02\u0264" +
		"\u025A\x03\x02\x02\x02\u0265E\x03\x02\x02\x02\u0266\u0268\x07\"\x02\x02" +
		"\u0267\u0269\x072\x02\x02\u0268\u0267\x03\x02\x02\x02\u0268\u0269\x03" +
		"\x02\x02\x02\u0269G\x03\x02\x02\x02\u026A\u026B\x07\x1F\x02\x02\u026B" +
		"\u026C\x07<\x02\x02\u026C\u026D\x07[\x02\x02\u026D\u0277\x05r:\x02\u026E" +
		"\u026F\x07\x1F\x02\x02\u026F\u0270\x07>\x02\x02\u0270\u0271\x07[\x02\x02" +
		"\u0271\u0277\x05t;\x02\u0272\u0273\x07\x1F\x02\x02\u0273\u0274\x07?\x02" +
		"\x02\u0274\u0275\x07[\x02\x02\u0275\u0277\x05v<\x02\u0276\u026A\x03\x02" +
		"\x02\x02\u0276\u026E\x03\x02\x02\x02\u0276\u0272\x03\x02\x02\x02\u0277" +
		"I\x03\x02\x02\x02\u0278\u027B\x07!\x02\x02\u0279\u027C\x05r:\x02\u027A" +
		"\u027C\x05x=\x02\u027B\u0279\x03\x02\x02\x02\u027B\u027A\x03\x02\x02\x02" +
		"\u027CK\x03\x02\x02\x02\u027D\u027E\x07#\x02\x02\u027E\u0293\x05h5\x02" +
		"\u027F\u0280\x07#\x02\x02\u0280\u0286\x07Y\x02\x02\u0281\u0287\x07<\x02" +
		"\x02\u0282\u0283\x05x=\x02\u0283\u0284\x05\x96L\x02\u0284\u0285\x05b2" +
		"\x02\u0285\u0287\x03\x02\x02\x02\u0286\u0281\x03\x02\x02\x02\u0286\u0282" +
		"\x03\x02\x02\x02\u0287\u0288\x03\x02\x02\x02\u0288\u0293\x07Z\x02\x02" +
		"\u0289\u028A\x07#\x02\x02\u028A\u028B\x07Y\x02\x02\u028B\u028C\x05x=\x02" +
		"\u028C\u028D\x05\x96L\x02\u028D\u028E\x05b2\x02\u028E\u028F\x07Z\x02\x02" +
		"\u028F\u0290\x07[\x02\x02\u0290\u0291\x05h5\x02\u0291\u0293\x03\x02\x02" +
		"\x02\u0292\u027D\x03\x02\x02\x02\u0292\u027F\x03\x02\x02\x02\u0292\u0289" +
		"\x03\x02\x02\x02\u0293M\x03\x02\x02\x02\u0294\u0296\x07$\x02\x02\u0295" +
		"\u0297\x072\x02\x02\u0296\u0295\x03\x02\x02\x02\u0296\u0297\x03\x02\x02" +
		"\x02\u0297O\x03\x02\x02\x02\u0298\u0299\x07%\x02\x02\u0299\u029A\x05R" +
		"*\x02\u029A\u029B\x07[\x02\x02\u029B\u029C\x05h5\x02\u029C\u02B6\x03\x02" +
		"\x02\x02\u029D\u029E\x07%\x02\x02\u029E\u029F\x05R*\x02\u029F\u02A0\x07" +
		"[\x02\x02\u02A0\u02A6\x07Y\x02\x02\u02A1\u02A7\x07<\x02\x02\u02A2\u02A3" +
		"\x05x=\x02\u02A3\u02A4\x05\x96L\x02\u02A4\u02A5\x05b2\x02\u02A5\u02A7" +
		"\x03\x02\x02\x02\u02A6\u02A1\x03\x02\x02\x02\u02A6\u02A2\x03\x02\x02\x02" +
		"\u02A7\u02A8\x03\x02\x02\x02\u02A8\u02A9\x07Z\x02\x02\u02A9\u02B6\x03" +
		"\x02\x02\x02\u02AA\u02AB\x07%\x02\x02\u02AB\u02AC\x05R*\x02\u02AC\u02AD" +
		"\x07[\x02\x02\u02AD\u02AE\x07Y\x02\x02\u02AE\u02AF\x05x=\x02\u02AF\u02B0" +
		"\x05\x96L\x02\u02B0\u02B1\x05b2\x02\u02B1\u02B2\x07Z\x02\x02\u02B2\u02B3" +
		"\x07[\x02\x02\u02B3\u02B4\x05h5\x02\u02B4\u02B6\x03\x02\x02\x02\u02B5" +
		"\u0298\x03\x02\x02\x02\u02B5\u029D\x03\x02\x02\x02\u02B5\u02AA\x03\x02" +
		"\x02\x02\u02B6Q\x03\x02\x02\x02\u02B7\u02B8\t\x03\x02\x02\u02B8S\x03\x02" +
		"\x02\x02\u02B9\u02C5\x07&\x02\x02\u02BA\u02BD\x07<\x02\x02\u02BB\u02BD" +
		"\x05x=\x02\u02BC\u02BA\x03\x02\x02\x02\u02BC\u02BB\x03\x02\x02\x02\u02BD" +
		"\u02C6\x03\x02\x02\x02\u02BE\u02C1\x07Y\x02\x02\u02BF\u02C2\x07<\x02\x02" +
		"\u02C0\u02C2\x05x=\x02\u02C1\u02BF\x03\x02\x02\x02\u02C1\u02C0\x03\x02" +
		"\x02\x02\u02C2\u02C3\x03\x02\x02\x02\u02C3\u02C6\x07Z\x02\x02\u02C4\u02C6" +
		"\x05\x88E\x02\u02C5\u02BC\x03\x02\x02\x02\u02C5\u02BE\x03\x02\x02\x02" +
		"\u02C5\u02C4\x03\x02\x02\x02\u02C6\u02D6\x03\x02\x02\x02\u02C7\u02C8\x07" +
		"&\x02\x02\u02C8\u02C9\x05X-\x02\u02C9\u02CA\x07[\x02\x02\u02CA\u02CB\x05" +
		"\x88E\x02\u02CB\u02D6\x03\x02\x02\x02\u02CC\u02D0\x07\'\x02\x02\u02CD" +
		"\u02CE\x05Z.\x02\u02CE\u02CF\x07[\x02\x02\u02CF\u02D1\x03\x02\x02\x02" +
		"\u02D0\u02CD\x03\x02\x02\x02\u02D0\u02D1\x03\x02\x02\x02\u02D1\u02D2\x03" +
		"\x02\x02\x02\u02D2\u02D6\x05d3\x02\u02D3\u02D4\x07(\x02\x02\u02D4\u02D6" +
		"\x05d3\x02\u02D5\u02B9\x03\x02\x02\x02\u02D5\u02C7\x03\x02\x02\x02\u02D5" +
		"\u02CC\x03\x02\x02\x02\u02D5\u02D3\x03\x02\x02\x02\u02D6U\x03\x02\x02" +
		"\x02\u02D7\u02DB\x07)\x02\x02\u02D8\u02D9\x05X-\x02\u02D9\u02DA\x07[\x02" +
		"\x02\u02DA\u02DC\x03\x02\x02\x02\u02DB\u02D8\x03\x02\x02\x02\u02DB\u02DC" +
		"\x03\x02\x02\x02\u02DC\u02DD\x03\x02\x02\x02\u02DD\u02E3\x05\x88E\x02" +
		"\u02DE\u02E0\x07*\x02\x02\u02DF\u02E1\x05X-\x02\u02E0\u02DF\x03\x02\x02" +
		"\x02\u02E0\u02E1\x03\x02\x02\x02\u02E1\u02E3\x03\x02\x02\x02\u02E2\u02D7" +
		"\x03\x02\x02\x02\u02E2\u02DE\x03\x02\x02\x02\u02E3W\x03\x02\x02\x02\u02E4" +
		"\u02E5\t\x04\x02\x02\u02E5Y\x03\x02\x02\x02\u02E6\u02E7\t\x05\x02\x02" +
		"\u02E7[\x03\x02\x02\x02\u02E8\u02E9\x07+\x02\x02\u02E9\u02EA\t\x06\x02" +
		"\x02\u02EA]\x03\x02\x02\x02\u02EB\u02EC\x07,\x02\x02\u02EC\u02ED\x07N" +
		"\x02\x02\u02ED_\x03\x02\x02\x02\u02EE\u02EF\x07-\x02\x02\u02EF\u02F0\x07" +
		"2\x02\x02\u02F0\u02F1\x07[\x02\x02\u02F1\u02F2\x07Y\x02\x02\u02F2\u02F3" +
		"\x05\x86D\x02\u02F3\u02F4\x07Z\x02\x02\u02F4\u030F\x03\x02\x02\x02\u02F5" +
		"\u02F9\x07-\x02\x02\u02F6\u02F7\x05h5\x02\u02F7\u02F8\x07[\x02\x02\u02F8" +
		"\u02FA\x03\x02\x02\x02\u02F9\u02F6\x03\x02\x02\x02\u02F9\u02FA\x03\x02" +
		"\x02\x02\u02FA\u02FB\x03\x02\x02\x02\u02FB\u02FC\x07Y\x02\x02\u02FC\u02FD" +
		"\x074\x02\x02\u02FD\u030F\x07Z\x02\x02\u02FE\u02FF\x07.\x02\x02\u02FF" +
		"\u0300\x07Y\x02\x02\u0300\u0301\x05\x86D\x02\u0301\u0302\x07Z\x02\x02" +
		"\u0302\u0303\x07[\x02\x02\u0303\u0304\x072\x02\x02\u0304\u030F\x03\x02" +
		"\x02\x02\u0305\u0306\x07.\x02\x02\u0306\u0307\x07Y\x02\x02\u0307\u0308" +
		"\x074\x02\x02\u0308\u0309\x07Z\x02\x02\u0309\u030C\x07[\x02\x02\u030A" +
		"\u030D\x05h5\x02\u030B\u030D\x07V\x02\x02\u030C\u030A\x03\x02\x02\x02" +
		"\u030C\u030B\x03\x02\x02\x02\u030D\u030F\x03\x02\x02\x02\u030E\u02EE\x03" +
		"\x02\x02\x02\u030E\u02F5\x03\x02\x02\x02\u030E\u02FE\x03\x02\x02\x02\u030E" +
		"\u0305\x03\x02\x02\x02\u030Fa\x03\x02\x02\x02\u0310\u0311\x05\x8CG\x02" +
		"\u0311c\x03\x02\x02\x02\u0312\u0313\x05\x8CG\x02\u0313e\x03\x02\x02\x02" +
		"\u0314\u0315\t\x07\x02\x02\u0315g\x03\x02\x02\x02\u0316\u0317\t\b\x02" +
		"\x02\u0317i\x03\x02\x02\x02\u0318\u0319\t\t\x02\x02\u0319k\x03\x02\x02" +
		"\x02\u031A\u031B\t\n\x02\x02\u031Bm\x03\x02\x02\x02\u031C\u031D\t\v\x02" +
		"\x02\u031Do\x03\x02\x02\x02\u031E\u031F\t\f\x02\x02\u031Fq\x03\x02\x02" +
		"\x02\u0320\u0323\x05p9\x02\u0321\u0323\x07<\x02\x02\u0322\u0320\x03\x02" +
		"\x02\x02\u0322\u0321\x03\x02\x02\x02\u0323s\x03\x02\x02\x02\u0324\u0327" +
		"\x05p9\x02\u0325\u0327\x07>\x02\x02\u0326\u0324\x03\x02\x02\x02\u0326" +
		"\u0325\x03\x02\x02\x02\u0327u\x03\x02\x02\x02\u0328\u032B\x05p9\x02\u0329" +
		"\u032B\x07?\x02\x02\u032A\u0328\x03\x02\x02\x02\u032A\u0329\x03\x02\x02" +
		"\x02\u032Bw\x03\x02\x02\x02\u032C\u032D\t\r\x02\x02\u032Dy\x03\x02\x02" +
		"\x02\u032E\u032F\x07\\\x02\x02\u032F\u0334\x05|?\x02\u0330\u0331\x05|" +
		"?\x02\u0331\u0332\x07\x06\x02\x02\u0332\u0334\x03\x02\x02\x02\u0333\u032E" +
		"\x03\x02\x02\x02\u0333\u0330\x03\x02\x02\x02\u0334{\x03\x02\x02\x02\u0335" +
		"\u0336\x07B\x02\x02\u0336}\x03\x02\x02\x02\u0337\u0338\x07C\x02\x02\u0338" +
		"\x7F\x03\x02\x02\x02\u0339\u033A\x07D\x02\x02\u033A\x81\x03\x02\x02\x02" +
		"\u033B\u033C\x07X\x02\x02\u033C\x83\x03\x02\x02\x02\u033D\u033E\x07W\x02" +
		"\x02\u033E\x85\x03\x02\x02\x02\u033F\u0340\x05\x8CG\x02\u0340\x87\x03" +
		"\x02\x02\x02\u0341\u0342\x05\x8CG\x02\u0342\x89\x03\x02\x02\x02\u0343" +
		"\u0344\x05\x8CG\x02\u0344\x8B\x03\x02\x02\x02\u0345\u0346\bG\x01\x02\u0346" +
		"\u0347\x07Y\x02\x02\u0347\u0348\x05\x8CG\x02\u0348\u0349\x07Z\x02\x02" +
		"\u0349\u034D\x03\x02\x02\x02\u034A\u034D\x05\x98M\x02\u034B\u034D\x05" +
		"|?\x02\u034C\u0345\x03\x02\x02\x02\u034C\u034A\x03\x02\x02\x02\u034C\u034B" +
		"\x03\x02\x02\x02\u034D\u0354\x03\x02\x02\x02\u034E\u034F\f\x06\x02\x02" +
		"\u034F\u0350\x05\x8EH\x02\u0350\u0351\x05\x8CG\x07\u0351\u0353\x03\x02" +
		"\x02\x02\u0352\u034E\x03\x02\x02\x02\u0353\u0356\x03\x02\x02\x02\u0354" +
		"\u0352\x03\x02\x02\x02\u0354\u0355\x03\x02\x02\x02\u0355\x8D\x03\x02\x02" +
		"\x02\u0356\u0354\x03\x02\x02\x02\u0357\u035B\x05\x90I\x02\u0358\u035B" +
		"\x05\x92J\x02\u0359\u035B\x05\x94K\x02\u035A\u0357\x03\x02\x02\x02\u035A" +
		"\u0358\x03\x02\x02\x02\u035A\u0359\x03\x02\x02\x02\u035B\x8F\x03\x02\x02" +
		"\x02\u035C\u035D\t\x0E\x02\x02\u035D\x91\x03\x02\x02\x02\u035E\u035F\x07" +
		"L\x02\x02\u035F\x93\x03\x02\x02\x02\u0360\u0361\x07M\x02\x02\u0361\x95" +
		"\x03\x02\x02\x02\u0362\u0363\t\x0F\x02\x02\u0363\x97\x03\x02\x02\x02\u0364" +
		"\u0366\t\x0F\x02\x02\u0365\u0364\x03\x02\x02\x02\u0365\u0366\x03\x02\x02" +
		"\x02\u0366\u036C\x03\x02\x02\x02\u0367\u036D\x05\x9AN\x02\u0368\u036D" +
		"\x05\x9CO\x02\u0369\u036D\x05\x9EP\x02\u036A\u036D\x05\xA0Q\x02\u036B" +
		"\u036D\x05\xA2R\x02\u036C\u0367\x03\x02\x02\x02\u036C\u0368\x03\x02\x02" +
		"\x02\u036C\u0369\x03\x02\x02\x02\u036C\u036A\x03\x02\x02\x02\u036C\u036B" +
		"\x03\x02\x02\x02\u036D\x99\x03\x02\x02\x02\u036E\u036F\x07R\x02\x02\u036F" +
		"\x9B\x03\x02\x02\x02\u0370\u0371\x07S\x02\x02\u0371\x9D\x03\x02\x02\x02" +
		"\u0372\u0373\t\x10\x02\x02\u0373\x9F\x03\x02\x02\x02\u0374\u0375\t\x11" +
		"\x02\x02\u0375\xA1\x03\x02\x02\x02\u0376\u0377\x07W\x02\x02\u0377\xA3" +
		"\x03\x02\x02\x02Z\xA5\xAA\xAF\xB2\xB6\xBB\xBE\xC2\xC5\xCB\xCD\xE0\xF8" +
		"\u0106\u010D\u0115\u011B\u0120\u0125\u0128\u0133\u013C\u013F\u0143\u0147" +
		"\u014B\u0150\u0155\u0159\u015D\u0161\u0165\u0169\u016D\u0171\u0179\u017C" +
		"\u0180\u0194\u01A5\u01AB\u01E4\u01F5\u01FA\u01FF\u0212\u0219\u021B\u0220" +
		"\u022B\u0234\u0237\u023C\u0242\u0247\u024F\u0252\u0258\u0261\u0264\u0268" +
		"\u0276\u027B\u0286\u0292\u0296\u02A6\u02B5\u02BC\u02C1\u02C5\u02D0\u02D5" +
		"\u02DB\u02E0\u02E2\u02F9\u030C\u030E\u0322\u0326\u032A\u0333\u034C\u0354" +
		"\u035A\u0365\u036C";
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
	public label(): LabelContext | undefined {
		return this.tryGetRuleContext(0, LabelContext);
	}
	public comment(): CommentContext | undefined {
		return this.tryGetRuleContext(0, CommentContext);
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
	public DOT(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.DOT, 0); }
	public directive_void(): Directive_voidContext | undefined {
		return this.tryGetRuleContext(0, Directive_voidContext);
	}
	public directive_file(): Directive_fileContext | undefined {
		return this.tryGetRuleContext(0, Directive_fileContext);
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
	public directive_phase(): Directive_phaseContext | undefined {
		return this.tryGetRuleContext(0, Directive_phaseContext);
	}
	public directive_defvars(): Directive_defvarsContext | undefined {
		return this.tryGetRuleContext(0, Directive_defvarsContext);
	}
	public directive_defgroup(): Directive_defgroupContext | undefined {
		return this.tryGetRuleContext(0, Directive_defgroupContext);
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


export class Directive_fileContext extends ParserRuleContext {
	public DIRECTIVEfile(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEfile, 0); }
	public filename(): FilenameContext {
		return this.getRuleContext(0, FilenameContext);
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_file; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_file) {
			listener.enterDirective_file(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_file) {
			listener.exitDirective_file(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_file) {
			return visitor.visitDirective_file(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class FilenameContext extends ParserRuleContext {
	public STRING(): TerminalNode { return this.getToken(z80asmParser.STRING, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_filename; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterFilename) {
			listener.enterFilename(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitFilename) {
			listener.exitFilename(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitFilename) {
			return visitor.visitFilename(this);
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
	public EQUALS(): TerminalNode { return this.getToken(z80asmParser.EQUALS, 0); }
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
	public EOL(): TerminalNode { return this.getToken(z80asmParser.EOL, 0); }
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


export class Directive_defvarsContext extends ParserRuleContext {
	public DIRECTIVEdefvars(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEdefvars, 0); }
	public expression16(): Expression16Context {
		return this.getRuleContext(0, Expression16Context);
	}
	public comment(): CommentContext | undefined {
		return this.tryGetRuleContext(0, CommentContext);
	}
	public EOL(): TerminalNode[];
	public EOL(i: number): TerminalNode;
	public EOL(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(z80asmParser.EOL);
		} else {
			return this.getToken(z80asmParser.EOL, i);
		}
	}
	public defvars_vardecl(): Defvars_vardeclContext[];
	public defvars_vardecl(i: number): Defvars_vardeclContext;
	public defvars_vardecl(i?: number): Defvars_vardeclContext | Defvars_vardeclContext[] {
		if (i === undefined) {
			return this.getRuleContexts(Defvars_vardeclContext);
		} else {
			return this.getRuleContext(i, Defvars_vardeclContext);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_defvars; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_defvars) {
			listener.enterDirective_defvars(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_defvars) {
			listener.exitDirective_defvars(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_defvars) {
			return visitor.visitDirective_defvars(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Defvars_vardeclContext extends ParserRuleContext {
	public DEFVARSsize(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.DEFVARSsize, 0); }
	public expression8(): Expression8Context | undefined {
		return this.tryGetRuleContext(0, Expression8Context);
	}
	public symbol(): SymbolContext | undefined {
		return this.tryGetRuleContext(0, SymbolContext);
	}
	public comment(): CommentContext | undefined {
		return this.tryGetRuleContext(0, CommentContext);
	}
	public EOL(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.EOL, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_defvars_vardecl; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDefvars_vardecl) {
			listener.enterDefvars_vardecl(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDefvars_vardecl) {
			listener.exitDefvars_vardecl(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDefvars_vardecl) {
			return visitor.visitDefvars_vardecl(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Directive_defgroupContext extends ParserRuleContext {
	public DIRECTIVEdefgroup(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEdefgroup, 0); }
	public defgroup_symbol(): Defgroup_symbolContext[];
	public defgroup_symbol(i: number): Defgroup_symbolContext;
	public defgroup_symbol(i?: number): Defgroup_symbolContext | Defgroup_symbolContext[] {
		if (i === undefined) {
			return this.getRuleContexts(Defgroup_symbolContext);
		} else {
			return this.getRuleContext(i, Defgroup_symbolContext);
		}
	}
	public EOL(): TerminalNode[];
	public EOL(i: number): TerminalNode;
	public EOL(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(z80asmParser.EOL);
		} else {
			return this.getToken(z80asmParser.EOL, i);
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
	public get ruleIndex(): number { return z80asmParser.RULE_directive_defgroup; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_defgroup) {
			listener.enterDirective_defgroup(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_defgroup) {
			listener.exitDirective_defgroup(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_defgroup) {
			return visitor.visitDirective_defgroup(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}


export class Defgroup_symbolContext extends ParserRuleContext {
	public symbol(): SymbolContext | undefined {
		return this.tryGetRuleContext(0, SymbolContext);
	}
	public EQUALS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.EQUALS, 0); }
	public expression8(): Expression8Context | undefined {
		return this.tryGetRuleContext(0, Expression8Context);
	}
	public comment(): CommentContext | undefined {
		return this.tryGetRuleContext(0, CommentContext);
	}
	public EOL(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.EOL, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_defgroup_symbol; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDefgroup_symbol) {
			listener.enterDefgroup_symbol(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDefgroup_symbol) {
			listener.exitDefgroup_symbol(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDefgroup_symbol) {
			return visitor.visitDefgroup_symbol(this);
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
	public operator_offset(): Operator_offsetContext | undefined {
		return this.tryGetRuleContext(0, Operator_offsetContext);
	}
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
	public operator_offset(): Operator_offsetContext | undefined {
		return this.tryGetRuleContext(0, Operator_offsetContext);
	}
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
	public operator_offset(): Operator_offsetContext | undefined {
		return this.tryGetRuleContext(0, Operator_offsetContext);
	}
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
	public operator_offset(): Operator_offsetContext | undefined {
		return this.tryGetRuleContext(0, Operator_offsetContext);
	}
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
	public operator_offset(): Operator_offsetContext | undefined {
		return this.tryGetRuleContext(0, Operator_offsetContext);
	}
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
	public expression16(): Expression16Context | undefined {
		return this.tryGetRuleContext(0, Expression16Context);
	}
	public REG16hl(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.REG16hl, 0); }
	public register16_ex(): Register16_exContext | undefined {
		return this.tryGetRuleContext(0, Register16_exContext);
	}
	public PARopen(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARopen, 0); }
	public PARclose(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PARclose, 0); }
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
	public DOT(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.DOT, 0); }
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
	public MINUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.MINUS, 0); }
	public PLUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PLUS, 0); }
	public EQUALS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.EQUALS, 0); }
	public MUL(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.MUL, 0); }
	public DIV(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.DIV, 0); }
	public MOD(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.MOD, 0); }
	public POWER(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.POWER, 0); }
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


export class Operator_offsetContext extends ParserRuleContext {
	public PLUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.PLUS, 0); }
	public MINUS(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.MINUS, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_operator_offset; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterOperator_offset) {
			listener.enterOperator_offset(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitOperator_offset) {
			listener.exitOperator_offset(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitOperator_offset) {
			return visitor.visitOperator_offset(this);
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
	public number_char(): Number_charContext | undefined {
		return this.tryGetRuleContext(0, Number_charContext);
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


export class Number_charContext extends ParserRuleContext {
	public CHARACTER(): TerminalNode { return this.getToken(z80asmParser.CHARACTER, 0); }
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_number_char; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterNumber_char) {
			listener.enterNumber_char(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitNumber_char) {
			listener.exitNumber_char(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitNumber_char) {
			return visitor.visitNumber_char(this);
		} else {
			return visitor.visitChildren(this);
		}
	}
}



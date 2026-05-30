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
	public static readonly DIRECTIVEdefine = 22;
	public static readonly DIRECTIVEphase = 23;
	public static readonly DIRECTIVEunphase = 24;
	public static readonly INSTRUCTIONvoid = 25;
	public static readonly INSTRUCTIONld = 26;
	public static readonly INSTRUCTIONstack = 27;
	public static readonly INSTRUCTIONexchange = 28;
	public static readonly INSTRUCTIONexxchange = 29;
	public static readonly INSTRUCTIONarithmetic16 = 30;
	public static readonly INSTRUCTIONarithmetic = 31;
	public static readonly INSTRUCTIONincdec = 32;
	public static readonly INSTRUCTIONcpl = 33;
	public static readonly INSTRUCTIONrotate = 34;
	public static readonly INSTRUCTIONrotatedec = 35;
	public static readonly INSTRUCTIONbit = 36;
	public static readonly INSTRUCTIONjump = 37;
	public static readonly INSTRUCTIONjumprel = 38;
	public static readonly INSTRUCTIONjumprelnz = 39;
	public static readonly INSTRUCTIONcall = 40;
	public static readonly INSTRUCTIONret = 41;
	public static readonly INSTRUCTIONrst = 42;
	public static readonly INSTRUCTIONim = 43;
	public static readonly INSTRUCTIONin = 44;
	public static readonly INSTRUCTIONout = 45;
	public static readonly REG8x = 46;
	public static readonly REG8y = 47;
	public static readonly REG8sys = 48;
	public static readonly REG8a = 49;
	public static readonly REG8b = 50;
	public static readonly REG8c = 51;
	public static readonly REG8d = 52;
	public static readonly REG8e = 53;
	public static readonly REG8h = 54;
	public static readonly REG8l = 55;
	public static readonly REG16af = 56;
	public static readonly REG16bc = 57;
	public static readonly REG16de = 58;
	public static readonly REG16hl = 59;
	public static readonly REG16sp = 60;
	public static readonly REG16ix = 61;
	public static readonly REG16iy = 62;
	public static readonly CONDITIONflagsex = 63;
	public static readonly CONDITIONflags = 64;
	public static readonly SYMBOL = 65;
	public static readonly BLOCKCOMMENTtext = 66;
	public static readonly COMMENT = 67;
	public static readonly EQUALS = 68;
	public static readonly PLUS = 69;
	public static readonly MINUS = 70;
	public static readonly MUL = 71;
	public static readonly DIV = 72;
	public static readonly MOD = 73;
	public static readonly POWER = 74;
	public static readonly OPERATORbit = 75;
	public static readonly OPERATORlogic = 76;
	public static readonly INTERRUPTMODE = 77;
	public static readonly BIT8 = 78;
	public static readonly INSTRUCTIONrstvectorhex = 79;
	public static readonly INSTRUCTIONrstvector = 80;
	public static readonly NUMBERbin = 81;
	public static readonly NUMBERoct = 82;
	public static readonly NUMBERdec = 83;
	public static readonly NUMBERhex = 84;
	public static readonly ZERO = 85;
	public static readonly CHARACTER = 86;
	public static readonly STRING = 87;
	public static readonly PARopen = 88;
	public static readonly PARclose = 89;
	public static readonly COMMA = 90;
	public static readonly HASH = 91;
	public static readonly BACKSLASH = 92;
	public static readonly DOT = 93;
	public static readonly EOL = 94;
	public static readonly WS = 95;
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
	public static readonly RULE_directive_define = 21;
	public static readonly RULE_directive_phase = 22;
	public static readonly RULE_directive_defvars = 23;
	public static readonly RULE_defvars_vardecl = 24;
	public static readonly RULE_directive_defgroup = 25;
	public static readonly RULE_defgroup_symbol = 26;
	public static readonly RULE_instruction = 27;
	public static readonly RULE_instruction_void = 28;
	public static readonly RULE_instruction_ld8 = 29;
	public static readonly RULE_instruction_ld16 = 30;
	public static readonly RULE_instruction_stack = 31;
	public static readonly RULE_instruction_exchange = 32;
	public static readonly RULE_instruction_arithmetic8 = 33;
	public static readonly RULE_instruction_incdec8 = 34;
	public static readonly RULE_instruction_cpl = 35;
	public static readonly RULE_instruction_arithemic16 = 36;
	public static readonly RULE_instruction_incdec16 = 37;
	public static readonly RULE_instruction_rotate = 38;
	public static readonly RULE_instruction_rotatedec = 39;
	public static readonly RULE_instruction_bit = 40;
	public static readonly RULE_bitindex = 41;
	public static readonly RULE_instruction_jump = 42;
	public static readonly RULE_instruction_call = 43;
	public static readonly RULE_instruction_conditionFlagsAll = 44;
	public static readonly RULE_instruction_conditionFlags = 45;
	public static readonly RULE_instruction_rst = 46;
	public static readonly RULE_instruction_im = 47;
	public static readonly RULE_instruction_io = 48;
	public static readonly RULE_offset_ex = 49;
	public static readonly RULE_offset_rel = 50;
	public static readonly RULE_registers = 51;
	public static readonly RULE_registers8 = 52;
	public static readonly RULE_registers8x = 53;
	public static readonly RULE_registers8y = 54;
	public static readonly RULE_register16_grpaf = 55;
	public static readonly RULE_register16_grpsp = 56;
	public static readonly RULE_register16_grpsphl = 57;
	public static readonly RULE_register16_grpspix = 58;
	public static readonly RULE_register16_grpspiy = 59;
	public static readonly RULE_register16_ex = 60;
	public static readonly RULE_label = 61;
	public static readonly RULE_symbol = 62;
	public static readonly RULE_blockcomment = 63;
	public static readonly RULE_comment = 64;
	public static readonly RULE_string = 65;
	public static readonly RULE_character = 66;
	public static readonly RULE_expression8 = 67;
	public static readonly RULE_expression16 = 68;
	public static readonly RULE_expression32 = 69;
	public static readonly RULE_expression = 70;
	public static readonly RULE_operator = 71;
	public static readonly RULE_operator_num = 72;
	public static readonly RULE_operator_bit = 73;
	public static readonly RULE_operator_logic = 74;
	public static readonly RULE_operator_offset = 75;
	public static readonly RULE_number = 76;
	public static readonly RULE_number_bin = 77;
	public static readonly RULE_number_oct = 78;
	public static readonly RULE_number_dec = 79;
	public static readonly RULE_number_hex = 80;
	public static readonly RULE_number_char = 81;
	// tslint:disable:no-trailing-whitespace
	public static readonly ruleNames: string[] = [
		"file", "asm", "line", "directive", "directive_void", "directive_file", 
		"filename", "directive_param16", "directive_param32", "directive_symbol", 
		"directive_symbollist", "directive_assign", "directive_block", "directive_defs", 
		"directive_defm", "defmparam", "directive_if", "directive_ifdef", "directive_ifblock", 
		"directive_elseblock", "directive_endif", "directive_define", "directive_phase", 
		"directive_defvars", "defvars_vardecl", "directive_defgroup", "defgroup_symbol", 
		"instruction", "instruction_void", "instruction_ld8", "instruction_ld16", 
		"instruction_stack", "instruction_exchange", "instruction_arithmetic8", 
		"instruction_incdec8", "instruction_cpl", "instruction_arithemic16", "instruction_incdec16", 
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
		undefined, undefined, undefined, undefined, "'='", "'+'", "'-'", "'*'", 
		"'/'", "'%'", "'**'", undefined, undefined, undefined, undefined, undefined, 
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		undefined, "'('", "')'", "','", "'#'", "'\\'", "'.'",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, undefined, undefined, undefined, undefined, "DIRECTIVEvoid", 
		"DIRECTIVEparam16", "DIRECTIVEparam32", "DIRECTIVEsymbol", "DIRECTIVEsymbollist", 
		"DIRECTIVEassign", "DIRECTIVEdefs", "DIRECTIVEdefm", "DIRECTIVEblock", 
		"DIRECTIVEdefvars", "DEFVARSsize", "DIRECTIVEdefgroup", "DIRECTIVEfile", 
		"DIRECTIVEif", "DIRECTIVEifdef", "DIRECTIVEelse", "DIRECTIVEendif", "DIRECTIVEdefine", 
		"DIRECTIVEphase", "DIRECTIVEunphase", "INSTRUCTIONvoid", "INSTRUCTIONld", 
		"INSTRUCTIONstack", "INSTRUCTIONexchange", "INSTRUCTIONexxchange", "INSTRUCTIONarithmetic16", 
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
		"STRING", "PARopen", "PARclose", "COMMA", "HASH", "BACKSLASH", "DOT", 
		"EOL", "WS",
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
			this.state = 165;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 0, this._ctx) ) {
			case 1:
				{
				this.state = 164;
				this.asm();
				}
				break;
			}
			this.state = 167;
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
			this.state = 173;
			this._errHandler.sync(this);
			_alt = 1;
			do {
				switch (_alt) {
				case 1:
					{
					{
					this.state = 170;
					this._errHandler.sync(this);
					switch ( this.interpreter.adaptivePredict(this._input, 1, this._ctx) ) {
					case 1:
						{
						this.state = 169;
						this.line();
						}
						break;
					}
					this.state = 172;
					this.match(z80asmParser.EOL);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 175;
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
			this.state = 198;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 8, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 178;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 3, this._ctx) ) {
				case 1:
					{
					this.state = 177;
					this.label();
					}
					break;
				}
				this.state = 180;
				this.directive();
				this.state = 182;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 181;
					this.comment();
					}
				}

				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 184;
				this.comment();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 185;
				this.label();
				this.state = 187;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 186;
					this.comment();
					}
				}

				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 190;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.SYMBOL || _la === z80asmParser.DOT) {
					{
					this.state = 189;
					this.label();
					}
				}

				this.state = 192;
				this.instruction();
				this.state = 194;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 193;
					this.comment();
					}
				}

				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 196;
				this.blockcomment();
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 197;
				this.symbol();
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
			this.state = 206;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 10, this._ctx) ) {
			case 1:
				{
				this.state = 200;
				if (!(this.directiveDot)) {
					throw this.createFailedPredicateException("this.directiveDot");
				}
				this.state = 201;
				this.match(z80asmParser.DOT);
				}
				break;

			case 2:
				{
				this.state = 202;
				if (!(this.directiveDotOptional)) {
					throw this.createFailedPredicateException("this.directiveDotOptional");
				}
				this.state = 204;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.DOT) {
					{
					this.state = 203;
					this.match(z80asmParser.DOT);
					}
				}

				}
				break;
			}
			this.state = 226;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.DIRECTIVEvoid:
				{
				this.state = 208;
				this.directive_void();
				}
				break;
			case z80asmParser.DIRECTIVEfile:
				{
				this.state = 209;
				this.directive_file();
				}
				break;
			case z80asmParser.DIRECTIVEparam16:
				{
				this.state = 210;
				this.directive_param16();
				}
				break;
			case z80asmParser.DIRECTIVEparam32:
				{
				this.state = 211;
				this.directive_param32();
				}
				break;
			case z80asmParser.DIRECTIVEblock:
				{
				this.state = 212;
				this.directive_block();
				}
				break;
			case z80asmParser.DIRECTIVEsymbol:
				{
				this.state = 213;
				this.directive_symbol();
				}
				break;
			case z80asmParser.DIRECTIVEsymbollist:
				{
				this.state = 214;
				this.directive_symbollist();
				}
				break;
			case z80asmParser.DIRECTIVEassign:
				{
				this.state = 215;
				this.directive_assign();
				}
				break;
			case z80asmParser.DIRECTIVEdefs:
				{
				this.state = 216;
				this.directive_defs();
				}
				break;
			case z80asmParser.DIRECTIVEdefm:
				{
				this.state = 217;
				this.directive_defm();
				}
				break;
			case z80asmParser.DIRECTIVEif:
				{
				this.state = 218;
				this.directive_if();
				}
				break;
			case z80asmParser.DIRECTIVEifdef:
				{
				this.state = 219;
				this.directive_ifdef();
				}
				break;
			case z80asmParser.DIRECTIVEelse:
				{
				this.state = 220;
				this.directive_elseblock();
				}
				break;
			case z80asmParser.DIRECTIVEendif:
				{
				this.state = 221;
				this.directive_endif();
				}
				break;
			case z80asmParser.DIRECTIVEdefine:
				{
				this.state = 222;
				this.directive_define();
				}
				break;
			case z80asmParser.DIRECTIVEphase:
				{
				this.state = 223;
				this.directive_phase();
				}
				break;
			case z80asmParser.DIRECTIVEdefvars:
				{
				this.state = 224;
				this.directive_defvars();
				}
				break;
			case z80asmParser.DIRECTIVEdefgroup:
				{
				this.state = 225;
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
			this.state = 228;
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
			this.state = 230;
			this.match(z80asmParser.DIRECTIVEfile);
			this.state = 231;
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
			this.state = 233;
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
			this.state = 235;
			this.match(z80asmParser.DIRECTIVEparam16);
			this.state = 236;
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
			this.state = 238;
			this.match(z80asmParser.DIRECTIVEparam32);
			this.state = 239;
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
			this.state = 241;
			this.match(z80asmParser.DIRECTIVEsymbol);
			this.state = 242;
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
			this.state = 244;
			this.match(z80asmParser.DIRECTIVEsymbollist);
			this.state = 245;
			this.symbol();
			this.state = 250;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 12, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 246;
					this.match(z80asmParser.COMMA);
					this.state = 247;
					this.symbol();
					}
					}
				}
				this.state = 252;
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
			this.state = 253;
			this.match(z80asmParser.DIRECTIVEassign);
			this.state = 254;
			this.symbol();
			this.state = 255;
			this.match(z80asmParser.EQUALS);
			this.state = 256;
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
			this.state = 258;
			this.match(z80asmParser.DIRECTIVEblock);
			this.state = 259;
			this.expression(0);
			this.state = 264;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 13, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 260;
					this.match(z80asmParser.COMMA);
					this.state = 261;
					this.expression(0);
					}
					}
				}
				this.state = 266;
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
			this.state = 267;
			this.match(z80asmParser.DIRECTIVEdefs);
			this.state = 268;
			this.expression(0);
			this.state = 271;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.COMMA) {
				{
				this.state = 269;
				this.match(z80asmParser.COMMA);
				this.state = 270;
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
			this.state = 273;
			this.match(z80asmParser.DIRECTIVEdefm);
			this.state = 274;
			this.defmparam();
			this.state = 279;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 15, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 275;
					this.match(z80asmParser.COMMA);
					this.state = 276;
					this.defmparam();
					}
					}
				}
				this.state = 281;
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
			this.state = 285;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 16, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 282;
				this.string();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 283;
				this.character();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 284;
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
			this.state = 287;
			this.match(z80asmParser.DIRECTIVEif);
			this.state = 288;
			this.expression(0);
			this.state = 290;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 17, this._ctx) ) {
			case 1:
				{
				this.state = 289;
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
			this.state = 292;
			this.match(z80asmParser.DIRECTIVEifdef);
			this.state = 293;
			this.symbol();
			this.state = 295;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 18, this._ctx) ) {
			case 1:
				{
				this.state = 294;
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
			this.state = 298;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.DIRECTIVEelse) {
				{
				this.state = 297;
				this.directive_elseblock();
				}
			}

			this.state = 300;
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
			this.state = 302;
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
			this.state = 304;
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
	public directive_define(): Directive_defineContext {
		let _localctx: Directive_defineContext = new Directive_defineContext(this._ctx, this.state);
		this.enterRule(_localctx, 42, z80asmParser.RULE_directive_define);
		let _la: number;
		try {
			this.state = 333;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 24, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 306;
				this.match(z80asmParser.DIRECTIVEdefine);
				this.state = 307;
				this.symbol();
				this.state = 312;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				while (_la === z80asmParser.COMMA) {
					{
					{
					this.state = 308;
					this.match(z80asmParser.COMMA);
					this.state = 309;
					this.symbol();
					}
					}
					this.state = 314;
					this._errHandler.sync(this);
					_la = this._input.LA(1);
				}
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 315;
				this.match(z80asmParser.DIRECTIVEdefine);
				this.state = 316;
				this.symbol();
				this.state = 317;
				this.match(z80asmParser.BACKSLASH);
				this.state = 319;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 318;
					this.comment();
					}
				}

				this.state = 321;
				this.match(z80asmParser.EOL);
				this.state = 330;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				while (((((_la - 25)) & ~0x1F) === 0 && ((1 << (_la - 25)) & ((1 << (z80asmParser.INSTRUCTIONvoid - 25)) | (1 << (z80asmParser.INSTRUCTIONld - 25)) | (1 << (z80asmParser.INSTRUCTIONstack - 25)) | (1 << (z80asmParser.INSTRUCTIONexchange - 25)) | (1 << (z80asmParser.INSTRUCTIONexxchange - 25)) | (1 << (z80asmParser.INSTRUCTIONarithmetic16 - 25)) | (1 << (z80asmParser.INSTRUCTIONarithmetic - 25)) | (1 << (z80asmParser.INSTRUCTIONincdec - 25)) | (1 << (z80asmParser.INSTRUCTIONcpl - 25)) | (1 << (z80asmParser.INSTRUCTIONrotate - 25)) | (1 << (z80asmParser.INSTRUCTIONrotatedec - 25)) | (1 << (z80asmParser.INSTRUCTIONbit - 25)) | (1 << (z80asmParser.INSTRUCTIONjump - 25)) | (1 << (z80asmParser.INSTRUCTIONjumprel - 25)) | (1 << (z80asmParser.INSTRUCTIONjumprelnz - 25)) | (1 << (z80asmParser.INSTRUCTIONcall - 25)) | (1 << (z80asmParser.INSTRUCTIONret - 25)) | (1 << (z80asmParser.INSTRUCTIONrst - 25)) | (1 << (z80asmParser.INSTRUCTIONim - 25)) | (1 << (z80asmParser.INSTRUCTIONin - 25)) | (1 << (z80asmParser.INSTRUCTIONout - 25)))) !== 0)) {
					{
					{
					this.state = 322;
					this.instruction();
					this.state = 323;
					this.match(z80asmParser.BACKSLASH);
					this.state = 324;
					this.match(z80asmParser.BACKSLASH);
					this.state = 326;
					this._errHandler.sync(this);
					switch ( this.interpreter.adaptivePredict(this._input, 22, this._ctx) ) {
					case 1:
						{
						this.state = 325;
						this.comment();
						}
						break;
					}
					}
					}
					this.state = 332;
					this._errHandler.sync(this);
					_la = this._input.LA(1);
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
	public directive_phase(): Directive_phaseContext {
		let _localctx: Directive_phaseContext = new Directive_phaseContext(this._ctx, this.state);
		this.enterRule(_localctx, 44, z80asmParser.RULE_directive_phase);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 335;
			this.match(z80asmParser.DIRECTIVEphase);
			this.state = 336;
			this.expression16();
			this.state = 338;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.COMMENT) {
				{
				this.state = 337;
				this.comment();
				}
			}

			this.state = 340;
			this.match(z80asmParser.EOL);
			this.state = 341;
			this.asm();
			this.state = 342;
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
		this.enterRule(_localctx, 46, z80asmParser.RULE_directive_defvars);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 344;
			this.match(z80asmParser.DIRECTIVEdefvars);
			this.state = 345;
			this.expression16();
			this.state = 347;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.COMMENT) {
				{
				this.state = 346;
				this.comment();
				}
			}

			this.state = 350;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.EOL) {
				{
				this.state = 349;
				this.match(z80asmParser.EOL);
				}
			}

			this.state = 352;
			this.match(z80asmParser.T__0);
			this.state = 354;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 28, this._ctx) ) {
			case 1:
				{
				this.state = 353;
				this.match(z80asmParser.EOL);
				}
				break;
			}
			this.state = 360;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			do {
				{
				{
				this.state = 356;
				this.defvars_vardecl();
				this.state = 358;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 29, this._ctx) ) {
				case 1:
					{
					this.state = 357;
					this.match(z80asmParser.EOL);
					}
					break;
				}
				}
				}
				this.state = 362;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			} while (_la === z80asmParser.DEFVARSsize || ((((_la - 65)) & ~0x1F) === 0 && ((1 << (_la - 65)) & ((1 << (z80asmParser.SYMBOL - 65)) | (1 << (z80asmParser.COMMENT - 65)) | (1 << (z80asmParser.EOL - 65)))) !== 0));
			this.state = 364;
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
		this.enterRule(_localctx, 48, z80asmParser.RULE_defvars_vardecl);
		let _la: number;
		try {
			this.state = 376;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.DEFVARSsize:
			case z80asmParser.SYMBOL:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 367;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.SYMBOL) {
					{
					this.state = 366;
					this.symbol();
					}
				}

				this.state = 369;
				this.match(z80asmParser.DEFVARSsize);
				this.state = 370;
				this.expression8();
				this.state = 372;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 32, this._ctx) ) {
				case 1:
					{
					this.state = 371;
					this.comment();
					}
					break;
				}
				}
				break;
			case z80asmParser.COMMENT:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 374;
				this.comment();
				}
				break;
			case z80asmParser.EOL:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 375;
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
		this.enterRule(_localctx, 50, z80asmParser.RULE_directive_defgroup);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 378;
			this.match(z80asmParser.DIRECTIVEdefgroup);
			this.state = 380;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.EOL) {
				{
				this.state = 379;
				this.match(z80asmParser.EOL);
				}
			}

			this.state = 382;
			this.match(z80asmParser.T__0);
			this.state = 384;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 35, this._ctx) ) {
			case 1:
				{
				this.state = 383;
				this.match(z80asmParser.EOL);
				}
				break;
			}
			this.state = 386;
			this.defgroup_symbol();
			this.state = 388;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.EOL) {
				{
				this.state = 387;
				this.match(z80asmParser.EOL);
				}
			}

			this.state = 400;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			while (_la === z80asmParser.COMMA) {
				{
				{
				this.state = 390;
				this.match(z80asmParser.COMMA);
				this.state = 392;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 37, this._ctx) ) {
				case 1:
					{
					this.state = 391;
					this.match(z80asmParser.EOL);
					}
					break;
				}
				this.state = 394;
				this.defgroup_symbol();
				this.state = 396;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.EOL) {
					{
					this.state = 395;
					this.match(z80asmParser.EOL);
					}
				}

				}
				}
				this.state = 402;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			}
			this.state = 403;
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
		this.enterRule(_localctx, 52, z80asmParser.RULE_defgroup_symbol);
		let _la: number;
		try {
			this.state = 415;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.SYMBOL:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 405;
				this.symbol();
				this.state = 408;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.EQUALS) {
					{
					this.state = 406;
					this.match(z80asmParser.EQUALS);
					this.state = 407;
					this.expression8();
					}
				}

				this.state = 411;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 410;
					this.comment();
					}
				}

				}
				break;
			case z80asmParser.COMMENT:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 413;
				this.comment();
				}
				break;
			case z80asmParser.EOL:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 414;
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
		this.enterRule(_localctx, 54, z80asmParser.RULE_instruction);
		try {
			this.state = 435;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 43, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 417;
				this.instruction_void();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 418;
				this.instruction_ld8();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 419;
				this.instruction_ld16();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 420;
				this.instruction_stack();
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 421;
				this.instruction_exchange();
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 422;
				this.instruction_arithmetic8();
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				this.state = 423;
				this.instruction_incdec8();
				}
				break;

			case 8:
				this.enterOuterAlt(_localctx, 8);
				{
				this.state = 424;
				this.instruction_cpl();
				}
				break;

			case 9:
				this.enterOuterAlt(_localctx, 9);
				{
				this.state = 425;
				this.instruction_arithemic16();
				}
				break;

			case 10:
				this.enterOuterAlt(_localctx, 10);
				{
				this.state = 426;
				this.instruction_incdec16();
				}
				break;

			case 11:
				this.enterOuterAlt(_localctx, 11);
				{
				this.state = 427;
				this.instruction_rotate();
				}
				break;

			case 12:
				this.enterOuterAlt(_localctx, 12);
				{
				this.state = 428;
				this.instruction_rotatedec();
				}
				break;

			case 13:
				this.enterOuterAlt(_localctx, 13);
				{
				this.state = 429;
				this.instruction_bit();
				}
				break;

			case 14:
				this.enterOuterAlt(_localctx, 14);
				{
				this.state = 430;
				this.instruction_jump();
				}
				break;

			case 15:
				this.enterOuterAlt(_localctx, 15);
				{
				this.state = 431;
				this.instruction_call();
				}
				break;

			case 16:
				this.enterOuterAlt(_localctx, 16);
				{
				this.state = 432;
				this.instruction_rst();
				}
				break;

			case 17:
				this.enterOuterAlt(_localctx, 17);
				{
				this.state = 433;
				this.instruction_im();
				}
				break;

			case 18:
				this.enterOuterAlt(_localctx, 18);
				{
				this.state = 434;
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
		this.enterRule(_localctx, 56, z80asmParser.RULE_instruction_void);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 437;
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
		this.enterRule(_localctx, 58, z80asmParser.RULE_instruction_ld8);
		try {
			this.state = 537;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 48, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				{
				this.state = 439;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 452;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 44, this._ctx) ) {
				case 1:
					{
					{
					this.state = 440;
					this.registers8();
					this.state = 441;
					this.match(z80asmParser.COMMA);
					this.state = 442;
					this.registers8();
					}
					}
					break;

				case 2:
					{
					{
					this.state = 444;
					this.registers8x();
					this.state = 445;
					this.match(z80asmParser.COMMA);
					this.state = 446;
					this.registers8x();
					}
					}
					break;

				case 3:
					{
					{
					this.state = 448;
					this.registers8y();
					this.state = 449;
					this.match(z80asmParser.COMMA);
					this.state = 450;
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
				this.state = 454;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 458;
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
					this.state = 455;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 456;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 457;
					this.match(z80asmParser.REG8y);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 460;
				this.match(z80asmParser.COMMA);
				this.state = 461;
				this.expression8();
				}
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				{
				this.state = 462;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 463;
				this.registers8();
				this.state = 464;
				this.match(z80asmParser.COMMA);
				this.state = 465;
				this.match(z80asmParser.PARopen);
				this.state = 466;
				this.match(z80asmParser.REG16hl);
				this.state = 467;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				{
				this.state = 469;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 470;
				this.registers8();
				this.state = 471;
				this.match(z80asmParser.COMMA);
				this.state = 472;
				this.match(z80asmParser.PARopen);
				this.state = 473;
				this.register16_ex();
				this.state = 474;
				this.operator_offset();
				this.state = 475;
				this.offset_ex();
				this.state = 476;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 5:
				this.enterOuterAlt(_localctx, 5);
				{
				{
				this.state = 478;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 479;
				this.match(z80asmParser.PARopen);
				this.state = 480;
				this.match(z80asmParser.REG16hl);
				this.state = 481;
				this.match(z80asmParser.PARclose);
				this.state = 482;
				this.match(z80asmParser.COMMA);
				this.state = 483;
				this.registers8();
				}
				}
				break;

			case 6:
				this.enterOuterAlt(_localctx, 6);
				{
				{
				this.state = 484;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 485;
				this.match(z80asmParser.PARopen);
				this.state = 486;
				this.register16_ex();
				this.state = 487;
				this.operator_offset();
				this.state = 488;
				this.offset_ex();
				this.state = 489;
				this.match(z80asmParser.PARclose);
				this.state = 490;
				this.match(z80asmParser.COMMA);
				this.state = 491;
				this.registers8();
				}
				}
				break;

			case 7:
				this.enterOuterAlt(_localctx, 7);
				{
				{
				this.state = 493;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 494;
				this.match(z80asmParser.PARopen);
				this.state = 495;
				this.match(z80asmParser.REG16hl);
				this.state = 496;
				this.match(z80asmParser.PARclose);
				this.state = 497;
				this.match(z80asmParser.COMMA);
				this.state = 498;
				this.expression8();
				}
				}
				break;

			case 8:
				this.enterOuterAlt(_localctx, 8);
				{
				{
				this.state = 499;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 500;
				this.match(z80asmParser.PARopen);
				this.state = 501;
				this.register16_ex();
				this.state = 502;
				this.operator_offset();
				this.state = 503;
				this.offset_ex();
				this.state = 504;
				this.match(z80asmParser.PARclose);
				this.state = 505;
				this.match(z80asmParser.COMMA);
				this.state = 506;
				this.expression8();
				}
				}
				break;

			case 9:
				this.enterOuterAlt(_localctx, 9);
				{
				{
				this.state = 508;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 509;
				this.match(z80asmParser.REG8a);
				this.state = 510;
				this.match(z80asmParser.COMMA);
				this.state = 511;
				this.match(z80asmParser.PARopen);
				this.state = 515;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
					{
					this.state = 512;
					this.match(z80asmParser.REG16bc);
					}
					break;
				case z80asmParser.REG16de:
					{
					this.state = 513;
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
					this.state = 514;
					this.expression(0);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 517;
				this.match(z80asmParser.PARclose);
				}
				}
				break;

			case 10:
				this.enterOuterAlt(_localctx, 10);
				{
				{
				this.state = 518;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 519;
				this.match(z80asmParser.REG8a);
				this.state = 520;
				this.match(z80asmParser.COMMA);
				this.state = 521;
				this.match(z80asmParser.REG8sys);
				}
				}
				break;

			case 11:
				this.enterOuterAlt(_localctx, 11);
				{
				{
				this.state = 522;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 523;
				this.match(z80asmParser.REG8sys);
				this.state = 524;
				this.match(z80asmParser.COMMA);
				this.state = 525;
				this.match(z80asmParser.REG8a);
				}
				}
				break;

			case 12:
				this.enterOuterAlt(_localctx, 12);
				{
				{
				this.state = 526;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 527;
				this.match(z80asmParser.PARopen);
				this.state = 532;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
					{
					this.state = 528;
					this.match(z80asmParser.REG16bc);
					}
					break;
				case z80asmParser.REG16de:
					{
					this.state = 529;
					this.match(z80asmParser.REG16de);
					}
					break;
				case z80asmParser.REG8sys:
					{
					this.state = 530;
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
					this.state = 531;
					this.expression16();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 534;
				this.match(z80asmParser.PARclose);
				this.state = 535;
				this.match(z80asmParser.COMMA);
				this.state = 536;
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
		this.enterRule(_localctx, 60, z80asmParser.RULE_instruction_ld16);
		try {
			this.state = 570;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 52, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 539;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 542;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
				case z80asmParser.REG16de:
				case z80asmParser.REG16hl:
				case z80asmParser.REG16sp:
					{
					this.state = 540;
					this.register16_grpsphl();
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
				this.state = 544;
				this.match(z80asmParser.COMMA);
				this.state = 545;
				this.expression16();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 547;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 548;
				this.register16_ex();
				this.state = 549;
				this.match(z80asmParser.COMMA);
				this.state = 550;
				this.match(z80asmParser.PARopen);
				this.state = 551;
				this.expression16();
				this.state = 552;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 554;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 555;
				this.match(z80asmParser.PARopen);
				this.state = 556;
				this.expression16();
				this.state = 557;
				this.match(z80asmParser.PARclose);
				this.state = 558;
				this.match(z80asmParser.COMMA);
				this.state = 561;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16bc:
				case z80asmParser.REG16de:
				case z80asmParser.REG16hl:
				case z80asmParser.REG16sp:
					{
					this.state = 559;
					this.register16_grpsphl();
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 560;
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
				this.state = 563;
				this.match(z80asmParser.INSTRUCTIONld);
				this.state = 564;
				this.match(z80asmParser.REG16sp);
				this.state = 565;
				this.match(z80asmParser.COMMA);
				this.state = 568;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 566;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 567;
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
		this.enterRule(_localctx, 62, z80asmParser.RULE_instruction_stack);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 572;
			this.match(z80asmParser.INSTRUCTIONstack);
			this.state = 575;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16af:
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16hl:
				{
				this.state = 573;
				this.register16_grpaf();
				}
				break;
			case z80asmParser.REG16ix:
			case z80asmParser.REG16iy:
				{
				this.state = 574;
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
		this.enterRule(_localctx, 64, z80asmParser.RULE_instruction_exchange);
		let _la: number;
		try {
			this.state = 598;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 56, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 577;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 578;
				this.match(z80asmParser.REG16de);
				this.state = 579;
				this.match(z80asmParser.COMMA);
				this.state = 580;
				this.match(z80asmParser.REG16hl);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 581;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 582;
				this.match(z80asmParser.REG16af);
				this.state = 583;
				this.match(z80asmParser.COMMA);
				this.state = 584;
				this.match(z80asmParser.REG16af);
				this.state = 586;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.T__2) {
					{
					this.state = 585;
					this.match(z80asmParser.T__2);
					}
				}

				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 588;
				this.match(z80asmParser.INSTRUCTIONexchange);
				this.state = 589;
				this.match(z80asmParser.PARopen);
				this.state = 590;
				this.match(z80asmParser.REG16sp);
				this.state = 591;
				this.match(z80asmParser.PARclose);
				this.state = 592;
				this.match(z80asmParser.COMMA);
				this.state = 595;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 593;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 594;
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
				this.state = 597;
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
		this.enterRule(_localctx, 66, z80asmParser.RULE_instruction_arithmetic8);
		let _la: number;
		try {
			this.state = 625;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 61, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 600;
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
				this.state = 603;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 57, this._ctx) ) {
				case 1:
					{
					this.state = 601;
					this.match(z80asmParser.REG8a);
					this.state = 602;
					this.match(z80asmParser.COMMA);
					}
					break;
				}
				this.state = 609;
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
					this.state = 605;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 606;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 607;
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
					this.state = 608;
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
				this.state = 611;
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
				this.state = 614;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.REG8a) {
					{
					this.state = 612;
					this.match(z80asmParser.REG8a);
					this.state = 613;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 616;
				this.match(z80asmParser.PARopen);
				this.state = 622;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 617;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 618;
					this.register16_ex();
					this.state = 619;
					this.operator_offset();
					this.state = 620;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 624;
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
		this.enterRule(_localctx, 68, z80asmParser.RULE_instruction_incdec8);
		try {
			this.state = 643;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 64, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 627;
				this.match(z80asmParser.INSTRUCTIONincdec);
				this.state = 631;
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
					this.state = 628;
					this.registers8();
					}
					break;
				case z80asmParser.REG8x:
					{
					this.state = 629;
					this.match(z80asmParser.REG8x);
					}
					break;
				case z80asmParser.REG8y:
					{
					this.state = 630;
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
				this.state = 633;
				this.match(z80asmParser.INSTRUCTIONincdec);
				this.state = 634;
				this.match(z80asmParser.PARopen);
				this.state = 640;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 635;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 636;
					this.register16_ex();
					this.state = 637;
					this.operator_offset();
					this.state = 638;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 642;
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
		this.enterRule(_localctx, 70, z80asmParser.RULE_instruction_cpl);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 645;
			this.match(z80asmParser.INSTRUCTIONcpl);
			this.state = 647;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.REG8a) {
				{
				this.state = 646;
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
		this.enterRule(_localctx, 72, z80asmParser.RULE_instruction_arithemic16);
		try {
			this.state = 661;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 66, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 649;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 650;
				this.match(z80asmParser.REG16hl);
				this.state = 651;
				this.match(z80asmParser.COMMA);
				this.state = 652;
				this.register16_grpsphl();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 653;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 654;
				this.match(z80asmParser.REG16ix);
				this.state = 655;
				this.match(z80asmParser.COMMA);
				this.state = 656;
				this.register16_grpspix();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 657;
				this.match(z80asmParser.INSTRUCTIONarithmetic16);
				this.state = 658;
				this.match(z80asmParser.REG16iy);
				this.state = 659;
				this.match(z80asmParser.COMMA);
				this.state = 660;
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
		this.enterRule(_localctx, 74, z80asmParser.RULE_instruction_incdec16);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 663;
			this.match(z80asmParser.INSTRUCTIONincdec);
			this.state = 666;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16hl:
			case z80asmParser.REG16sp:
				{
				this.state = 664;
				this.register16_grpsphl();
				}
				break;
			case z80asmParser.REG16ix:
			case z80asmParser.REG16iy:
				{
				this.state = 665;
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
		this.enterRule(_localctx, 76, z80asmParser.RULE_instruction_rotate);
		try {
			this.state = 689;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 69, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 668;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 669;
				this.registers8();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 670;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 671;
				this.match(z80asmParser.PARopen);
				this.state = 677;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 672;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 673;
					this.register16_ex();
					this.state = 674;
					this.operator_offset();
					this.state = 675;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 679;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 680;
				this.match(z80asmParser.INSTRUCTIONrotate);
				this.state = 681;
				this.match(z80asmParser.PARopen);
				this.state = 682;
				this.register16_ex();
				this.state = 683;
				this.operator_offset();
				this.state = 684;
				this.offset_ex();
				this.state = 685;
				this.match(z80asmParser.PARclose);
				this.state = 686;
				this.match(z80asmParser.COMMA);
				this.state = 687;
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
		this.enterRule(_localctx, 78, z80asmParser.RULE_instruction_rotatedec);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 691;
			this.match(z80asmParser.INSTRUCTIONrotatedec);
			this.state = 693;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.REG8a) {
				{
				this.state = 692;
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
		this.enterRule(_localctx, 80, z80asmParser.RULE_instruction_bit);
		try {
			this.state = 724;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 72, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 695;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 696;
				this.bitindex();
				this.state = 697;
				this.match(z80asmParser.COMMA);
				this.state = 698;
				this.registers8();
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 700;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 701;
				this.bitindex();
				this.state = 702;
				this.match(z80asmParser.COMMA);
				this.state = 703;
				this.match(z80asmParser.PARopen);
				this.state = 709;
				this._errHandler.sync(this);
				switch (this._input.LA(1)) {
				case z80asmParser.REG16hl:
					{
					this.state = 704;
					this.match(z80asmParser.REG16hl);
					}
					break;
				case z80asmParser.REG16ix:
				case z80asmParser.REG16iy:
					{
					this.state = 705;
					this.register16_ex();
					this.state = 706;
					this.operator_offset();
					this.state = 707;
					this.offset_ex();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				this.state = 711;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 713;
				this.match(z80asmParser.INSTRUCTIONbit);
				this.state = 714;
				this.bitindex();
				this.state = 715;
				this.match(z80asmParser.COMMA);
				this.state = 716;
				this.match(z80asmParser.PARopen);
				this.state = 717;
				this.register16_ex();
				this.state = 718;
				this.operator_offset();
				this.state = 719;
				this.offset_ex();
				this.state = 720;
				this.match(z80asmParser.PARclose);
				this.state = 721;
				this.match(z80asmParser.COMMA);
				this.state = 722;
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
		this.enterRule(_localctx, 82, z80asmParser.RULE_bitindex);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 726;
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
		this.enterRule(_localctx, 84, z80asmParser.RULE_instruction_jump);
		let _la: number;
		try {
			this.state = 756;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 77, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 728;
				this.match(z80asmParser.INSTRUCTIONjump);
				this.state = 740;
				this._errHandler.sync(this);
				switch ( this.interpreter.adaptivePredict(this._input, 75, this._ctx) ) {
				case 1:
					{
					this.state = 731;
					this._errHandler.sync(this);
					switch (this._input.LA(1)) {
					case z80asmParser.REG16hl:
						{
						this.state = 729;
						this.match(z80asmParser.REG16hl);
						}
						break;
					case z80asmParser.REG16ix:
					case z80asmParser.REG16iy:
						{
						this.state = 730;
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
					this.state = 733;
					this.match(z80asmParser.PARopen);
					this.state = 736;
					this._errHandler.sync(this);
					switch (this._input.LA(1)) {
					case z80asmParser.REG16hl:
						{
						this.state = 734;
						this.match(z80asmParser.REG16hl);
						}
						break;
					case z80asmParser.REG16ix:
					case z80asmParser.REG16iy:
						{
						this.state = 735;
						this.register16_ex();
						}
						break;
					default:
						throw new NoViableAltException(this);
					}
					this.state = 738;
					this.match(z80asmParser.PARclose);
					}
					}
					break;

				case 3:
					{
					this.state = 739;
					this.expression16();
					}
					break;
				}
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 742;
				this.match(z80asmParser.INSTRUCTIONjump);
				this.state = 743;
				this.instruction_conditionFlagsAll();
				this.state = 744;
				this.match(z80asmParser.COMMA);
				this.state = 745;
				this.expression16();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 747;
				this.match(z80asmParser.INSTRUCTIONjumprel);
				this.state = 751;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.REG8c || _la === z80asmParser.CONDITIONflags) {
					{
					this.state = 748;
					this.instruction_conditionFlags();
					this.state = 749;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 753;
				this.offset_rel();
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 754;
				this.match(z80asmParser.INSTRUCTIONjumprelnz);
				this.state = 755;
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
		this.enterRule(_localctx, 86, z80asmParser.RULE_instruction_call);
		let _la: number;
		try {
			this.state = 769;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.INSTRUCTIONcall:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 758;
				this.match(z80asmParser.INSTRUCTIONcall);
				this.state = 762;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (((((_la - 51)) & ~0x1F) === 0 && ((1 << (_la - 51)) & ((1 << (z80asmParser.REG8c - 51)) | (1 << (z80asmParser.CONDITIONflagsex - 51)) | (1 << (z80asmParser.CONDITIONflags - 51)))) !== 0)) {
					{
					this.state = 759;
					this.instruction_conditionFlagsAll();
					this.state = 760;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 764;
				this.expression16();
				}
				break;
			case z80asmParser.INSTRUCTIONret:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 765;
				this.match(z80asmParser.INSTRUCTIONret);
				this.state = 767;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (((((_la - 51)) & ~0x1F) === 0 && ((1 << (_la - 51)) & ((1 << (z80asmParser.REG8c - 51)) | (1 << (z80asmParser.CONDITIONflagsex - 51)) | (1 << (z80asmParser.CONDITIONflags - 51)))) !== 0)) {
					{
					this.state = 766;
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
		this.enterRule(_localctx, 88, z80asmParser.RULE_instruction_conditionFlagsAll);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 771;
			_la = this._input.LA(1);
			if (!(((((_la - 51)) & ~0x1F) === 0 && ((1 << (_la - 51)) & ((1 << (z80asmParser.REG8c - 51)) | (1 << (z80asmParser.CONDITIONflagsex - 51)) | (1 << (z80asmParser.CONDITIONflags - 51)))) !== 0))) {
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
		this.enterRule(_localctx, 90, z80asmParser.RULE_instruction_conditionFlags);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 773;
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
		this.enterRule(_localctx, 92, z80asmParser.RULE_instruction_rst);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 775;
			this.match(z80asmParser.INSTRUCTIONrst);
			this.state = 776;
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
		this.enterRule(_localctx, 94, z80asmParser.RULE_instruction_im);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 778;
			this.match(z80asmParser.INSTRUCTIONim);
			this.state = 779;
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
		this.enterRule(_localctx, 96, z80asmParser.RULE_instruction_io);
		let _la: number;
		try {
			this.state = 813;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 83, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 781;
				this.match(z80asmParser.INSTRUCTIONin);
				this.state = 782;
				this.match(z80asmParser.REG8a);
				this.state = 783;
				this.match(z80asmParser.COMMA);
				this.state = 784;
				this.match(z80asmParser.PARopen);
				this.state = 785;
				this.expression8();
				this.state = 786;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 788;
				this.match(z80asmParser.INSTRUCTIONin);
				this.state = 792;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (((((_la - 49)) & ~0x1F) === 0 && ((1 << (_la - 49)) & ((1 << (z80asmParser.REG8a - 49)) | (1 << (z80asmParser.REG8b - 49)) | (1 << (z80asmParser.REG8c - 49)) | (1 << (z80asmParser.REG8d - 49)) | (1 << (z80asmParser.REG8e - 49)) | (1 << (z80asmParser.REG8h - 49)) | (1 << (z80asmParser.REG8l - 49)))) !== 0)) {
					{
					this.state = 789;
					this.registers8();
					this.state = 790;
					this.match(z80asmParser.COMMA);
					}
				}

				this.state = 794;
				this.match(z80asmParser.PARopen);
				this.state = 795;
				this.match(z80asmParser.REG8c);
				this.state = 796;
				this.match(z80asmParser.PARclose);
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 797;
				this.match(z80asmParser.INSTRUCTIONout);
				this.state = 798;
				this.match(z80asmParser.PARopen);
				this.state = 799;
				this.expression8();
				this.state = 800;
				this.match(z80asmParser.PARclose);
				this.state = 801;
				this.match(z80asmParser.COMMA);
				this.state = 802;
				this.match(z80asmParser.REG8a);
				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 804;
				this.match(z80asmParser.INSTRUCTIONout);
				this.state = 805;
				this.match(z80asmParser.PARopen);
				this.state = 806;
				this.match(z80asmParser.REG8c);
				this.state = 807;
				this.match(z80asmParser.PARclose);
				this.state = 808;
				this.match(z80asmParser.COMMA);
				this.state = 811;
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
					this.state = 809;
					this.registers8();
					}
					break;
				case z80asmParser.ZERO:
					{
					this.state = 810;
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
		this.enterRule(_localctx, 98, z80asmParser.RULE_offset_ex);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 815;
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
		this.enterRule(_localctx, 100, z80asmParser.RULE_offset_rel);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 817;
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
		this.enterRule(_localctx, 102, z80asmParser.RULE_registers);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 819;
			_la = this._input.LA(1);
			if (!(((((_la - 46)) & ~0x1F) === 0 && ((1 << (_la - 46)) & ((1 << (z80asmParser.REG8x - 46)) | (1 << (z80asmParser.REG8y - 46)) | (1 << (z80asmParser.REG8sys - 46)) | (1 << (z80asmParser.REG8a - 46)) | (1 << (z80asmParser.REG8b - 46)) | (1 << (z80asmParser.REG8c - 46)) | (1 << (z80asmParser.REG8d - 46)) | (1 << (z80asmParser.REG8e - 46)) | (1 << (z80asmParser.REG8h - 46)) | (1 << (z80asmParser.REG8l - 46)) | (1 << (z80asmParser.REG16af - 46)) | (1 << (z80asmParser.REG16bc - 46)) | (1 << (z80asmParser.REG16de - 46)) | (1 << (z80asmParser.REG16hl - 46)) | (1 << (z80asmParser.REG16sp - 46)) | (1 << (z80asmParser.REG16ix - 46)) | (1 << (z80asmParser.REG16iy - 46)))) !== 0))) {
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
		this.enterRule(_localctx, 104, z80asmParser.RULE_registers8);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 821;
			_la = this._input.LA(1);
			if (!(((((_la - 49)) & ~0x1F) === 0 && ((1 << (_la - 49)) & ((1 << (z80asmParser.REG8a - 49)) | (1 << (z80asmParser.REG8b - 49)) | (1 << (z80asmParser.REG8c - 49)) | (1 << (z80asmParser.REG8d - 49)) | (1 << (z80asmParser.REG8e - 49)) | (1 << (z80asmParser.REG8h - 49)) | (1 << (z80asmParser.REG8l - 49)))) !== 0))) {
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
		this.enterRule(_localctx, 106, z80asmParser.RULE_registers8x);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 823;
			_la = this._input.LA(1);
			if (!(((((_la - 46)) & ~0x1F) === 0 && ((1 << (_la - 46)) & ((1 << (z80asmParser.REG8x - 46)) | (1 << (z80asmParser.REG8a - 46)) | (1 << (z80asmParser.REG8b - 46)) | (1 << (z80asmParser.REG8c - 46)) | (1 << (z80asmParser.REG8d - 46)) | (1 << (z80asmParser.REG8e - 46)))) !== 0))) {
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
		this.enterRule(_localctx, 108, z80asmParser.RULE_registers8y);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 825;
			_la = this._input.LA(1);
			if (!(((((_la - 47)) & ~0x1F) === 0 && ((1 << (_la - 47)) & ((1 << (z80asmParser.REG8y - 47)) | (1 << (z80asmParser.REG8a - 47)) | (1 << (z80asmParser.REG8b - 47)) | (1 << (z80asmParser.REG8c - 47)) | (1 << (z80asmParser.REG8d - 47)) | (1 << (z80asmParser.REG8e - 47)))) !== 0))) {
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
		this.enterRule(_localctx, 110, z80asmParser.RULE_register16_grpaf);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 827;
			_la = this._input.LA(1);
			if (!(((((_la - 56)) & ~0x1F) === 0 && ((1 << (_la - 56)) & ((1 << (z80asmParser.REG16af - 56)) | (1 << (z80asmParser.REG16bc - 56)) | (1 << (z80asmParser.REG16de - 56)) | (1 << (z80asmParser.REG16hl - 56)))) !== 0))) {
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
		this.enterRule(_localctx, 112, z80asmParser.RULE_register16_grpsp);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 829;
			_la = this._input.LA(1);
			if (!(((((_la - 57)) & ~0x1F) === 0 && ((1 << (_la - 57)) & ((1 << (z80asmParser.REG16bc - 57)) | (1 << (z80asmParser.REG16de - 57)) | (1 << (z80asmParser.REG16sp - 57)))) !== 0))) {
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
		this.enterRule(_localctx, 114, z80asmParser.RULE_register16_grpsphl);
		try {
			this.state = 833;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16sp:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 831;
				this.register16_grpsp();
				}
				break;
			case z80asmParser.REG16hl:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 832;
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
		this.enterRule(_localctx, 116, z80asmParser.RULE_register16_grpspix);
		try {
			this.state = 837;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16sp:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 835;
				this.register16_grpsp();
				}
				break;
			case z80asmParser.REG16ix:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 836;
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
		this.enterRule(_localctx, 118, z80asmParser.RULE_register16_grpspiy);
		try {
			this.state = 841;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.REG16bc:
			case z80asmParser.REG16de:
			case z80asmParser.REG16sp:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 839;
				this.register16_grpsp();
				}
				break;
			case z80asmParser.REG16iy:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 840;
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
		this.enterRule(_localctx, 120, z80asmParser.RULE_register16_ex);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 843;
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
		this.enterRule(_localctx, 122, z80asmParser.RULE_label);
		try {
			this.state = 850;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.DOT:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 845;
				this.match(z80asmParser.DOT);
				this.state = 846;
				this.symbol();
				}
				break;
			case z80asmParser.SYMBOL:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 847;
				this.symbol();
				this.state = 848;
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
		this.enterRule(_localctx, 124, z80asmParser.RULE_symbol);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 852;
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
		this.enterRule(_localctx, 126, z80asmParser.RULE_blockcomment);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 854;
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
		this.enterRule(_localctx, 128, z80asmParser.RULE_comment);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 856;
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
		this.enterRule(_localctx, 130, z80asmParser.RULE_string);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 858;
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
		this.enterRule(_localctx, 132, z80asmParser.RULE_character);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 860;
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
		this.enterRule(_localctx, 134, z80asmParser.RULE_expression8);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 862;
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
		this.enterRule(_localctx, 136, z80asmParser.RULE_expression16);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 864;
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
		this.enterRule(_localctx, 138, z80asmParser.RULE_expression32);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 866;
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
		let _startState: number = 140;
		this.enterRecursionRule(_localctx, 140, z80asmParser.RULE_expression, _p);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 875;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.PARopen:
				{
				this.state = 869;
				this.match(z80asmParser.PARopen);
				this.state = 870;
				this.expression(0);
				this.state = 871;
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
				this.state = 873;
				this.number();
				}
				break;
			case z80asmParser.SYMBOL:
				{
				this.state = 874;
				this.symbol();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			this._ctx._stop = this._input.tryLT(-1);
			this.state = 883;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 89, this._ctx);
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
					this.state = 877;
					if (!(this.precpred(this._ctx, 4))) {
						throw this.createFailedPredicateException("this.precpred(this._ctx, 4)");
					}
					this.state = 878;
					this.operator();
					this.state = 879;
					this.expression(5);
					}
					}
				}
				this.state = 885;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 89, this._ctx);
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
		this.enterRule(_localctx, 142, z80asmParser.RULE_operator);
		try {
			this.state = 889;
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
				this.state = 886;
				this.operator_num();
				}
				break;
			case z80asmParser.OPERATORbit:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 887;
				this.operator_bit();
				}
				break;
			case z80asmParser.OPERATORlogic:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 888;
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
		this.enterRule(_localctx, 144, z80asmParser.RULE_operator_num);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 891;
			_la = this._input.LA(1);
			if (!(((((_la - 68)) & ~0x1F) === 0 && ((1 << (_la - 68)) & ((1 << (z80asmParser.EQUALS - 68)) | (1 << (z80asmParser.PLUS - 68)) | (1 << (z80asmParser.MINUS - 68)) | (1 << (z80asmParser.MUL - 68)) | (1 << (z80asmParser.DIV - 68)) | (1 << (z80asmParser.MOD - 68)) | (1 << (z80asmParser.POWER - 68)))) !== 0))) {
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
		this.enterRule(_localctx, 146, z80asmParser.RULE_operator_bit);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 893;
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
		this.enterRule(_localctx, 148, z80asmParser.RULE_operator_logic);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 895;
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
		this.enterRule(_localctx, 150, z80asmParser.RULE_operator_offset);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 897;
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
		this.enterRule(_localctx, 152, z80asmParser.RULE_number);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 900;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.PLUS || _la === z80asmParser.MINUS) {
				{
				this.state = 899;
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

			this.state = 907;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.NUMBERbin:
				{
				this.state = 902;
				this.number_bin();
				}
				break;
			case z80asmParser.NUMBERoct:
				{
				this.state = 903;
				this.number_oct();
				}
				break;
			case z80asmParser.INTERRUPTMODE:
			case z80asmParser.BIT8:
			case z80asmParser.INSTRUCTIONrstvector:
			case z80asmParser.NUMBERdec:
				{
				this.state = 904;
				this.number_dec();
				}
				break;
			case z80asmParser.INSTRUCTIONrstvectorhex:
			case z80asmParser.NUMBERhex:
				{
				this.state = 905;
				this.number_hex();
				}
				break;
			case z80asmParser.CHARACTER:
				{
				this.state = 906;
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
		this.enterRule(_localctx, 154, z80asmParser.RULE_number_bin);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 909;
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
		this.enterRule(_localctx, 156, z80asmParser.RULE_number_oct);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 911;
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
		this.enterRule(_localctx, 158, z80asmParser.RULE_number_dec);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 913;
			_la = this._input.LA(1);
			if (!(((((_la - 77)) & ~0x1F) === 0 && ((1 << (_la - 77)) & ((1 << (z80asmParser.INTERRUPTMODE - 77)) | (1 << (z80asmParser.BIT8 - 77)) | (1 << (z80asmParser.INSTRUCTIONrstvector - 77)) | (1 << (z80asmParser.NUMBERdec - 77)))) !== 0))) {
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
		this.enterRule(_localctx, 160, z80asmParser.RULE_number_hex);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 915;
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
		this.enterRule(_localctx, 162, z80asmParser.RULE_number_char);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 917;
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

		case 70:
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
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x03a\u039A\x04\x02" +
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
		"O\tO\x04P\tP\x04Q\tQ\x04R\tR\x04S\tS\x03\x02\x05\x02\xA8\n\x02\x03\x02" +
		"\x03\x02\x03\x03\x05\x03\xAD\n\x03\x03\x03\x06\x03\xB0\n\x03\r\x03\x0E" +
		"\x03\xB1\x03\x04\x05\x04\xB5\n\x04\x03\x04\x03\x04\x05\x04\xB9\n\x04\x03" +
		"\x04\x03\x04\x03\x04\x05\x04\xBE\n\x04\x03\x04\x05\x04\xC1\n\x04\x03\x04" +
		"\x03\x04\x05\x04\xC5\n\x04\x03\x04\x03\x04\x05\x04\xC9\n\x04\x03\x05\x03" +
		"\x05\x03\x05\x03\x05\x05\x05\xCF\n\x05\x05\x05\xD1\n\x05\x03\x05\x03\x05" +
		"\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05" +
		"\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x05\x05\xE5\n" +
		"\x05\x03\x06\x03\x06\x03\x07\x03\x07\x03\x07\x03\b\x03\b\x03\t\x03\t\x03" +
		"\t\x03\n\x03\n\x03\n\x03\v\x03\v\x03\v\x03\f\x03\f\x03\f\x03\f\x07\f\xFB" +
		"\n\f\f\f\x0E\f\xFE\v\f\x03\r\x03\r\x03\r\x03\r\x03\r\x03\x0E\x03\x0E\x03" +
		"\x0E\x03\x0E\x07\x0E\u0109\n\x0E\f\x0E\x0E\x0E\u010C\v\x0E\x03\x0F\x03" +
		"\x0F\x03\x0F\x03\x0F\x05\x0F\u0112\n\x0F\x03\x10\x03\x10\x03\x10\x03\x10" +
		"\x07\x10\u0118\n\x10\f\x10\x0E\x10\u011B\v\x10\x03\x11\x03\x11\x03\x11" +
		"\x05\x11\u0120\n\x11\x03\x12\x03\x12\x03\x12\x05\x12\u0125\n\x12\x03\x13" +
		"\x03\x13\x03\x13\x05\x13\u012A\n\x13\x03\x14\x05\x14\u012D\n\x14\x03\x14" +
		"\x03\x14\x03\x15\x03\x15\x03\x16\x03\x16\x03\x17\x03\x17\x03\x17\x03\x17" +
		"\x07\x17\u0139\n\x17\f\x17\x0E\x17\u013C\v\x17\x03\x17\x03\x17\x03\x17" +
		"\x03\x17\x05\x17\u0142\n\x17\x03\x17\x03\x17\x03\x17\x03\x17\x03\x17\x05" +
		"\x17\u0149\n\x17\x07\x17\u014B\n\x17\f\x17\x0E\x17\u014E\v\x17\x05\x17" +
		"\u0150\n\x17\x03\x18\x03\x18\x03\x18\x05\x18\u0155\n\x18\x03\x18\x03\x18" +
		"\x03\x18\x03\x18\x03\x19\x03\x19\x03\x19\x05\x19\u015E\n\x19\x03\x19\x05" +
		"\x19\u0161\n\x19\x03\x19\x03\x19\x05\x19\u0165\n\x19\x03\x19\x03\x19\x05" +
		"\x19\u0169\n\x19\x06\x19\u016B\n\x19\r\x19\x0E\x19\u016C\x03\x19\x03\x19" +
		"\x03\x1A\x05\x1A\u0172\n\x1A\x03\x1A\x03\x1A\x03\x1A\x05\x1A\u0177\n\x1A" +
		"\x03\x1A\x03\x1A\x05\x1A\u017B\n\x1A\x03\x1B\x03\x1B\x05\x1B\u017F\n\x1B" +
		"\x03\x1B\x03\x1B\x05\x1B\u0183\n\x1B\x03\x1B\x03\x1B\x05\x1B\u0187\n\x1B" +
		"\x03\x1B\x03\x1B\x05\x1B\u018B\n\x1B\x03\x1B\x03\x1B\x05\x1B\u018F\n\x1B" +
		"\x07\x1B\u0191\n\x1B\f\x1B\x0E\x1B\u0194\v\x1B\x03\x1B\x03\x1B\x03\x1C" +
		"\x03\x1C\x03\x1C\x05\x1C\u019B\n\x1C\x03\x1C\x05\x1C\u019E\n\x1C\x03\x1C" +
		"\x03\x1C\x05\x1C\u01A2\n\x1C\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03" +
		"\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03\x1D\x03" +
		"\x1D\x03\x1D\x03\x1D\x03\x1D\x05\x1D\u01B6\n\x1D\x03\x1E\x03\x1E\x03\x1F" +
		"\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F" +
		"\x03\x1F\x03\x1F\x03\x1F\x05\x1F\u01C7\n\x1F\x03\x1F\x03\x1F\x03\x1F\x03" +
		"\x1F\x05\x1F\u01CD\n\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F" +
		"\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F" +
		"\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F" +
		"\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F" +
		"\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F" +
		"\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F" +
		"\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x05\x1F\u0206\n\x1F\x03\x1F\x03\x1F\x03" +
		"\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03\x1F\x03" +
		"\x1F\x03\x1F\x03\x1F\x03\x1F\x05\x1F\u0217\n\x1F\x03\x1F\x03\x1F\x03\x1F" +
		"\x05\x1F\u021C\n\x1F\x03 \x03 \x03 \x05 \u0221\n \x03 \x03 \x03 \x03 " +
		"\x03 \x03 \x03 \x03 \x03 \x03 \x03 \x03 \x03 \x03 \x03 \x03 \x03 \x05" +
		" \u0234\n \x03 \x03 \x03 \x03 \x03 \x05 \u023B\n \x05 \u023D\n \x03!\x03" +
		"!\x03!\x05!\u0242\n!\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03" +
		"\"\x05\"\u024D\n\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x03\"\x05\"\u0256" +
		"\n\"\x03\"\x05\"\u0259\n\"\x03#\x03#\x03#\x05#\u025E\n#\x03#\x03#\x03" +
		"#\x03#\x05#\u0264\n#\x03#\x03#\x03#\x05#\u0269\n#\x03#\x03#\x03#\x03#" +
		"\x03#\x03#\x05#\u0271\n#\x03#\x05#\u0274\n#\x03$\x03$\x03$\x03$\x05$\u027A" +
		"\n$\x03$\x03$\x03$\x03$\x03$\x03$\x03$\x05$\u0283\n$\x03$\x05$\u0286\n" +
		"$\x03%\x03%\x05%\u028A\n%\x03&\x03&\x03&\x03&\x03&\x03&\x03&\x03&\x03" +
		"&\x03&\x03&\x03&\x05&\u0298\n&\x03\'\x03\'\x03\'\x05\'\u029D\n\'\x03(" +
		"\x03(\x03(\x03(\x03(\x03(\x03(\x03(\x03(\x05(\u02A8\n(\x03(\x03(\x03(" +
		"\x03(\x03(\x03(\x03(\x03(\x03(\x03(\x05(\u02B4\n(\x03)\x03)\x05)\u02B8" +
		"\n)\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03" +
		"*\x05*\u02C8\n*\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03*\x03" +
		"*\x03*\x03*\x05*\u02D7\n*\x03+\x03+\x03,\x03,\x03,\x05,\u02DE\n,\x03," +
		"\x03,\x03,\x05,\u02E3\n,\x03,\x03,\x05,\u02E7\n,\x03,\x03,\x03,\x03,\x03" +
		",\x03,\x03,\x03,\x03,\x05,\u02F2\n,\x03,\x03,\x03,\x05,\u02F7\n,\x03-" +
		"\x03-\x03-\x03-\x05-\u02FD\n-\x03-\x03-\x03-\x05-\u0302\n-\x05-\u0304" +
		"\n-\x03.\x03.\x03/\x03/\x030\x030\x030\x031\x031\x031\x032\x032\x032\x03" +
		"2\x032\x032\x032\x032\x032\x032\x032\x052\u031B\n2\x032\x032\x032\x03" +
		"2\x032\x032\x032\x032\x032\x032\x032\x032\x032\x032\x032\x032\x032\x05" +
		"2\u032E\n2\x052\u0330\n2\x033\x033\x034\x034\x035\x035\x036\x036\x037" +
		"\x037\x038\x038\x039\x039\x03:\x03:\x03;\x03;\x05;\u0344\n;\x03<\x03<" +
		"\x05<\u0348\n<\x03=\x03=\x05=\u034C\n=\x03>\x03>\x03?\x03?\x03?\x03?\x03" +
		"?\x05?\u0355\n?\x03@\x03@\x03A\x03A\x03B\x03B\x03C\x03C\x03D\x03D\x03" +
		"E\x03E\x03F\x03F\x03G\x03G\x03H\x03H\x03H\x03H\x03H\x03H\x03H\x05H\u036E" +
		"\nH\x03H\x03H\x03H\x03H\x07H\u0374\nH\fH\x0EH\u0377\vH\x03I\x03I\x03I" +
		"\x05I\u037C\nI\x03J\x03J\x03K\x03K\x03L\x03L\x03M\x03M\x03N\x05N\u0387" +
		"\nN\x03N\x03N\x03N\x03N\x03N\x05N\u038E\nN\x03O\x03O\x03P\x03P\x03Q\x03" +
		"Q\x03R\x03R\x03S\x03S\x03S\x05\xFC\u010A\u0119\x02\x03\x8ET\x02\x02\x04" +
		"\x02\x06\x02\b\x02\n\x02\f\x02\x0E\x02\x10\x02\x12\x02\x14\x02\x16\x02" +
		"\x18\x02\x1A\x02\x1C\x02\x1E\x02 \x02\"\x02$\x02&\x02(\x02*\x02,\x02." +
		"\x020\x022\x024\x026\x028\x02:\x02<\x02>\x02@\x02B\x02D\x02F\x02H\x02" +
		"J\x02L\x02N\x02P\x02R\x02T\x02V\x02X\x02Z\x02\\\x02^\x02`\x02b\x02d\x02" +
		"f\x02h\x02j\x02l\x02n\x02p\x02r\x02t\x02v\x02x\x02z\x02|\x02~\x02\x80" +
		"\x02\x82\x02\x84\x02\x86\x02\x88\x02\x8A\x02\x8C\x02\x8E\x02\x90\x02\x92" +
		"\x02\x94\x02\x96\x02\x98\x02\x9A\x02\x9C\x02\x9E\x02\xA0\x02\xA2\x02\xA4" +
		"\x02\x02\x12\x03\x02 !\x03\x02OP\x04\x0255AB\x04\x0255BB\x03\x02QR\x03" +
		"\x020@\x03\x0239\x04\x020037\x04\x021137\x03\x02:=\x04\x02;<>>\x03\x02" +
		"?@\x03\x02FL\x03\x02GH\x05\x02OPRRUU\x04\x02QQVV\x02\u03EE\x02\xA7\x03" +
		"\x02\x02\x02\x04\xAF\x03\x02\x02\x02\x06\xC8\x03\x02\x02\x02\b\xD0\x03" +
		"\x02\x02\x02\n\xE6\x03\x02\x02\x02\f\xE8\x03\x02\x02\x02\x0E\xEB\x03\x02" +
		"\x02\x02\x10\xED\x03\x02\x02\x02\x12\xF0\x03\x02\x02\x02\x14\xF3\x03\x02" +
		"\x02\x02\x16\xF6\x03\x02\x02\x02\x18\xFF\x03\x02\x02\x02\x1A\u0104\x03" +
		"\x02\x02\x02\x1C\u010D\x03\x02\x02\x02\x1E\u0113\x03\x02\x02\x02 \u011F" +
		"\x03\x02\x02\x02\"\u0121\x03\x02\x02\x02$\u0126\x03\x02\x02\x02&\u012C" +
		"\x03\x02\x02\x02(\u0130\x03\x02\x02\x02*\u0132\x03\x02\x02\x02,\u014F" +
		"\x03\x02\x02\x02.\u0151\x03\x02\x02\x020\u015A\x03\x02\x02\x022\u017A" +
		"\x03\x02\x02\x024\u017C\x03\x02\x02\x026\u01A1\x03\x02\x02\x028\u01B5" +
		"\x03\x02\x02\x02:\u01B7\x03\x02\x02\x02<\u021B\x03\x02\x02\x02>\u023C" +
		"\x03\x02\x02\x02@\u023E\x03\x02\x02\x02B\u0258\x03\x02\x02\x02D\u0273" +
		"\x03\x02\x02\x02F\u0285\x03\x02\x02\x02H\u0287\x03\x02\x02\x02J\u0297" +
		"\x03\x02\x02\x02L\u0299\x03\x02\x02\x02N\u02B3\x03\x02\x02\x02P\u02B5" +
		"\x03\x02\x02\x02R\u02D6\x03\x02\x02\x02T\u02D8\x03\x02\x02\x02V\u02F6" +
		"\x03\x02\x02\x02X\u0303\x03\x02\x02\x02Z\u0305\x03\x02\x02\x02\\\u0307" +
		"\x03\x02\x02\x02^\u0309\x03\x02\x02\x02`\u030C\x03\x02\x02\x02b\u032F" +
		"\x03\x02\x02\x02d\u0331\x03\x02\x02\x02f\u0333\x03\x02\x02\x02h\u0335" +
		"\x03\x02\x02\x02j\u0337\x03\x02\x02\x02l\u0339\x03\x02\x02\x02n\u033B" +
		"\x03\x02\x02\x02p\u033D\x03\x02\x02\x02r\u033F\x03\x02\x02\x02t\u0343" +
		"\x03\x02\x02\x02v\u0347\x03\x02\x02\x02x\u034B\x03\x02\x02\x02z\u034D" +
		"\x03\x02\x02\x02|\u0354\x03\x02\x02\x02~\u0356\x03\x02\x02\x02\x80\u0358" +
		"\x03\x02\x02\x02\x82\u035A\x03\x02\x02\x02\x84\u035C\x03\x02\x02\x02\x86" +
		"\u035E\x03\x02\x02\x02\x88\u0360\x03\x02\x02\x02\x8A\u0362\x03\x02\x02" +
		"\x02\x8C\u0364\x03\x02\x02\x02\x8E\u036D\x03\x02\x02\x02\x90\u037B\x03" +
		"\x02\x02\x02\x92\u037D\x03\x02\x02\x02\x94\u037F\x03\x02\x02\x02\x96\u0381" +
		"\x03\x02\x02\x02\x98\u0383\x03\x02\x02\x02\x9A\u0386\x03\x02\x02\x02\x9C" +
		"\u038F\x03\x02\x02\x02\x9E\u0391\x03\x02\x02\x02\xA0\u0393\x03\x02\x02" +
		"\x02\xA2\u0395\x03\x02\x02\x02\xA4\u0397\x03\x02\x02\x02\xA6\xA8\x05\x04" +
		"\x03\x02\xA7\xA6\x03\x02\x02\x02\xA7\xA8\x03\x02\x02\x02\xA8\xA9\x03\x02" +
		"\x02\x02\xA9\xAA\x07\x02\x02\x03\xAA\x03\x03\x02\x02\x02\xAB\xAD\x05\x06" +
		"\x04\x02\xAC\xAB\x03\x02\x02\x02\xAC\xAD\x03\x02\x02\x02\xAD\xAE\x03\x02" +
		"\x02\x02\xAE\xB0\x07`\x02\x02\xAF\xAC\x03\x02\x02\x02\xB0\xB1\x03\x02" +
		"\x02\x02\xB1\xAF\x03\x02\x02\x02\xB1\xB2\x03\x02\x02\x02\xB2\x05\x03\x02" +
		"\x02\x02\xB3\xB5\x05|?\x02\xB4\xB3\x03\x02\x02\x02\xB4\xB5\x03\x02\x02" +
		"\x02\xB5\xB6\x03\x02\x02\x02\xB6\xB8\x05\b\x05\x02\xB7\xB9\x05\x82B\x02" +
		"\xB8\xB7\x03\x02\x02\x02\xB8\xB9\x03\x02\x02\x02\xB9\xC9\x03\x02\x02\x02" +
		"\xBA\xC9\x05\x82B\x02\xBB\xBD\x05|?\x02\xBC\xBE\x05\x82B\x02\xBD\xBC\x03" +
		"\x02\x02\x02\xBD\xBE\x03\x02\x02\x02\xBE\xC9\x03\x02\x02\x02\xBF\xC1\x05" +
		"|?\x02\xC0\xBF\x03\x02\x02\x02\xC0\xC1\x03\x02\x02\x02\xC1\xC2\x03\x02" +
		"\x02\x02\xC2\xC4\x058\x1D\x02\xC3\xC5\x05\x82B\x02\xC4\xC3\x03\x02\x02" +
		"\x02\xC4\xC5\x03\x02\x02\x02\xC5\xC9\x03\x02\x02\x02\xC6\xC9\x05\x80A" +
		"\x02\xC7\xC9\x05~@\x02\xC8\xB4\x03\x02\x02\x02\xC8\xBA\x03\x02\x02\x02" +
		"\xC8\xBB\x03\x02\x02\x02\xC8\xC0\x03\x02\x02\x02\xC8\xC6\x03\x02\x02\x02" +
		"\xC8\xC7\x03\x02\x02\x02\xC9\x07\x03\x02\x02\x02\xCA\xCB\x06\x05\x02\x02" +
		"\xCB\xD1\x07_\x02\x02\xCC\xCE\x06\x05\x03\x02\xCD\xCF\x07_\x02\x02\xCE" +
		"\xCD\x03\x02\x02\x02\xCE\xCF\x03\x02\x02\x02\xCF\xD1\x03\x02\x02\x02\xD0" +
		"\xCA\x03\x02\x02\x02\xD0\xCC\x03\x02\x02\x02\xD1\xE4\x03\x02\x02\x02\xD2" +
		"\xE5\x05\n\x06\x02\xD3\xE5\x05\f\x07\x02\xD4\xE5\x05\x10\t\x02\xD5\xE5" +
		"\x05\x12\n\x02\xD6\xE5\x05\x1A\x0E\x02\xD7\xE5\x05\x14\v\x02\xD8\xE5\x05" +
		"\x16\f\x02\xD9\xE5\x05\x18\r\x02\xDA\xE5\x05\x1C\x0F\x02\xDB\xE5\x05\x1E" +
		"\x10\x02\xDC\xE5\x05\"\x12\x02\xDD\xE5\x05$\x13\x02\xDE\xE5\x05(\x15\x02" +
		"\xDF\xE5\x05*\x16\x02\xE0\xE5\x05,\x17\x02\xE1\xE5\x05.\x18\x02\xE2\xE5" +
		"\x050\x19\x02\xE3\xE5\x054\x1B\x02\xE4\xD2\x03\x02\x02\x02\xE4\xD3\x03" +
		"\x02\x02\x02\xE4\xD4\x03\x02\x02\x02\xE4\xD5\x03\x02\x02\x02\xE4\xD6\x03" +
		"\x02\x02\x02\xE4\xD7\x03\x02\x02\x02\xE4\xD8\x03\x02\x02\x02\xE4\xD9\x03" +
		"\x02\x02\x02\xE4\xDA\x03\x02\x02\x02\xE4\xDB\x03\x02\x02\x02\xE4\xDC\x03" +
		"\x02\x02\x02\xE4\xDD\x03\x02\x02\x02\xE4\xDE\x03\x02\x02\x02\xE4\xDF\x03" +
		"\x02\x02\x02\xE4\xE0\x03\x02\x02\x02\xE4\xE1\x03\x02\x02\x02\xE4\xE2\x03" +
		"\x02\x02\x02\xE4\xE3\x03\x02\x02\x02\xE5\t\x03\x02\x02\x02\xE6\xE7\x07" +
		"\x07\x02\x02\xE7\v\x03\x02\x02\x02\xE8\xE9\x07\x13\x02\x02\xE9\xEA\x05" +
		"\x0E\b\x02\xEA\r\x03\x02\x02\x02\xEB\xEC\x07Y\x02\x02\xEC\x0F\x03\x02" +
		"\x02\x02\xED\xEE\x07\b\x02\x02\xEE\xEF\x05\x8AF\x02\xEF\x11\x03\x02\x02" +
		"\x02\xF0\xF1\x07\t\x02\x02\xF1\xF2\x05\x8CG\x02\xF2\x13\x03\x02\x02\x02" +
		"\xF3\xF4\x07\n\x02\x02\xF4\xF5\x05~@\x02\xF5\x15\x03\x02\x02\x02\xF6\xF7" +
		"\x07\v\x02\x02\xF7\xFC\x05~@\x02\xF8\xF9\x07\\\x02\x02\xF9\xFB\x05~@\x02" +
		"\xFA\xF8\x03\x02\x02\x02\xFB\xFE\x03\x02\x02\x02\xFC\xFD\x03\x02\x02\x02" +
		"\xFC\xFA\x03\x02\x02\x02\xFD\x17\x03\x02\x02\x02\xFE\xFC\x03\x02\x02\x02" +
		"\xFF\u0100\x07\f\x02\x02\u0100\u0101\x05~@\x02\u0101\u0102\x07F\x02\x02" +
		"\u0102\u0103\x05\x8EH\x02\u0103\x19\x03\x02\x02\x02\u0104\u0105\x07\x0F" +
		"\x02\x02\u0105\u010A\x05\x8EH\x02\u0106\u0107\x07\\\x02\x02\u0107\u0109" +
		"\x05\x8EH\x02\u0108\u0106\x03\x02\x02\x02\u0109\u010C\x03\x02\x02\x02" +
		"\u010A\u010B\x03\x02\x02\x02\u010A\u0108\x03\x02\x02\x02\u010B\x1B\x03" +
		"\x02\x02\x02\u010C\u010A\x03\x02\x02\x02\u010D\u010E\x07\r\x02\x02\u010E" +
		"\u0111\x05\x8EH\x02\u010F\u0110\x07\\\x02\x02\u0110\u0112\x05\x8EH\x02" +
		"\u0111\u010F\x03\x02\x02\x02\u0111\u0112\x03\x02\x02\x02\u0112\x1D\x03" +
		"\x02\x02\x02\u0113\u0114\x07\x0E\x02\x02\u0114\u0119\x05 \x11\x02\u0115" +
		"\u0116\x07\\\x02\x02\u0116\u0118\x05 \x11\x02\u0117\u0115\x03\x02\x02" +
		"\x02\u0118\u011B\x03\x02\x02\x02\u0119\u011A\x03\x02\x02\x02\u0119\u0117" +
		"\x03\x02\x02\x02\u011A\x1F\x03\x02\x02\x02\u011B\u0119\x03\x02\x02\x02" +
		"\u011C\u0120\x05\x84C\x02\u011D\u0120\x05\x86D\x02\u011E\u0120\x05\x88" +
		"E\x02\u011F\u011C\x03\x02\x02\x02\u011F\u011D\x03\x02\x02\x02\u011F\u011E" +
		"\x03\x02\x02\x02\u0120!\x03\x02\x02\x02\u0121\u0122\x07\x14\x02\x02\u0122" +
		"\u0124\x05\x8EH\x02\u0123\u0125\x05\x82B\x02\u0124\u0123\x03\x02\x02\x02" +
		"\u0124\u0125\x03\x02\x02\x02\u0125#\x03\x02\x02\x02\u0126\u0127\x07\x15" +
		"\x02\x02\u0127\u0129\x05~@\x02\u0128\u012A\x05\x82B\x02\u0129\u0128\x03" +
		"\x02\x02\x02\u0129\u012A\x03\x02\x02\x02\u012A%\x03\x02\x02\x02\u012B" +
		"\u012D\x05(\x15\x02\u012C\u012B\x03\x02\x02\x02\u012C\u012D\x03\x02\x02" +
		"\x02\u012D\u012E\x03\x02\x02\x02\u012E\u012F\x05*\x16\x02\u012F\'\x03" +
		"\x02\x02\x02\u0130\u0131\x07\x16\x02\x02\u0131)\x03\x02\x02\x02\u0132" +
		"\u0133\x07\x17\x02\x02\u0133+\x03\x02\x02\x02\u0134\u0135\x07\x18\x02" +
		"\x02\u0135\u013A\x05~@\x02\u0136\u0137\x07\\\x02\x02\u0137\u0139\x05~" +
		"@\x02\u0138\u0136\x03\x02\x02\x02\u0139\u013C\x03\x02\x02\x02\u013A\u0138" +
		"\x03\x02\x02\x02\u013A\u013B\x03\x02\x02\x02\u013B\u0150\x03\x02\x02\x02" +
		"\u013C\u013A\x03\x02\x02\x02\u013D\u013E\x07\x18\x02\x02\u013E\u013F\x05" +
		"~@\x02\u013F\u0141\x07^\x02\x02\u0140\u0142\x05\x82B\x02\u0141\u0140\x03" +
		"\x02\x02\x02\u0141\u0142\x03\x02\x02\x02\u0142\u0143\x03\x02\x02\x02\u0143" +
		"\u014C\x07`\x02\x02\u0144\u0145\x058\x1D\x02\u0145\u0146\x07^\x02\x02" +
		"\u0146\u0148\x07^\x02\x02\u0147\u0149\x05\x82B\x02\u0148\u0147\x03\x02" +
		"\x02\x02\u0148\u0149\x03\x02\x02\x02\u0149\u014B\x03\x02\x02\x02\u014A" +
		"\u0144\x03\x02\x02\x02\u014B\u014E\x03\x02\x02\x02\u014C\u014A\x03\x02" +
		"\x02\x02\u014C\u014D\x03\x02\x02\x02\u014D\u0150\x03\x02\x02\x02\u014E" +
		"\u014C\x03\x02\x02\x02\u014F\u0134\x03\x02\x02\x02\u014F\u013D\x03\x02" +
		"\x02\x02\u0150-\x03\x02\x02\x02\u0151\u0152\x07\x19\x02\x02\u0152\u0154" +
		"\x05\x8AF\x02\u0153\u0155\x05\x82B\x02\u0154\u0153\x03\x02\x02\x02\u0154" +
		"\u0155\x03\x02\x02\x02\u0155\u0156\x03\x02\x02\x02\u0156\u0157\x07`\x02" +
		"\x02\u0157\u0158\x05\x04\x03\x02\u0158\u0159\x07\x1A\x02\x02\u0159/\x03" +
		"\x02\x02\x02\u015A\u015B\x07\x10\x02\x02\u015B\u015D\x05\x8AF\x02\u015C" +
		"\u015E\x05\x82B\x02\u015D\u015C\x03\x02\x02\x02\u015D\u015E\x03\x02\x02" +
		"\x02\u015E\u0160\x03\x02\x02\x02\u015F\u0161\x07`\x02\x02\u0160\u015F" +
		"\x03\x02\x02\x02\u0160\u0161\x03\x02\x02\x02\u0161\u0162\x03\x02\x02\x02" +
		"\u0162\u0164\x07\x03\x02\x02\u0163\u0165\x07`\x02\x02\u0164\u0163\x03" +
		"\x02\x02\x02\u0164\u0165\x03\x02\x02\x02\u0165\u016A\x03\x02\x02\x02\u0166" +
		"\u0168\x052\x1A\x02\u0167\u0169\x07`\x02\x02\u0168\u0167\x03\x02\x02\x02" +
		"\u0168\u0169\x03\x02\x02\x02\u0169\u016B\x03\x02\x02\x02\u016A\u0166\x03" +
		"\x02\x02\x02\u016B\u016C\x03\x02\x02\x02\u016C\u016A\x03\x02\x02\x02\u016C" +
		"\u016D\x03\x02\x02\x02\u016D\u016E\x03\x02\x02\x02\u016E\u016F\x07\x04" +
		"\x02\x02\u016F1\x03\x02\x02\x02\u0170\u0172\x05~@\x02\u0171\u0170\x03" +
		"\x02\x02\x02\u0171\u0172\x03\x02\x02\x02\u0172\u0173\x03\x02\x02\x02\u0173" +
		"\u0174\x07\x11\x02\x02\u0174\u0176\x05\x88E\x02\u0175\u0177\x05\x82B\x02" +
		"\u0176\u0175\x03\x02\x02\x02\u0176\u0177\x03\x02\x02\x02\u0177\u017B\x03" +
		"\x02\x02\x02\u0178\u017B\x05\x82B\x02\u0179\u017B\x07`\x02\x02\u017A\u0171" +
		"\x03\x02\x02\x02\u017A\u0178\x03\x02\x02\x02\u017A\u0179\x03\x02\x02\x02" +
		"\u017B3\x03\x02\x02\x02\u017C\u017E\x07\x12\x02\x02\u017D\u017F\x07`\x02" +
		"\x02\u017E\u017D\x03\x02\x02\x02\u017E\u017F\x03\x02\x02\x02\u017F\u0180" +
		"\x03\x02\x02\x02\u0180\u0182\x07\x03\x02\x02\u0181\u0183\x07`\x02\x02" +
		"\u0182\u0181\x03\x02\x02\x02\u0182\u0183\x03\x02\x02\x02\u0183\u0184\x03" +
		"\x02\x02\x02\u0184\u0186\x056\x1C\x02\u0185\u0187\x07`\x02\x02\u0186\u0185" +
		"\x03\x02\x02\x02\u0186\u0187\x03\x02\x02\x02\u0187\u0192\x03\x02\x02\x02" +
		"\u0188\u018A\x07\\\x02\x02\u0189\u018B\x07`\x02\x02\u018A\u0189\x03\x02" +
		"\x02\x02\u018A\u018B\x03\x02\x02\x02\u018B\u018C\x03\x02\x02\x02\u018C" +
		"\u018E\x056\x1C\x02\u018D\u018F\x07`\x02\x02\u018E\u018D\x03\x02\x02\x02" +
		"\u018E\u018F\x03\x02\x02\x02\u018F\u0191\x03\x02\x02\x02\u0190\u0188\x03" +
		"\x02\x02\x02\u0191\u0194\x03\x02\x02\x02\u0192\u0190\x03\x02\x02\x02\u0192" +
		"\u0193\x03\x02\x02\x02\u0193\u0195\x03\x02\x02\x02\u0194\u0192\x03\x02" +
		"\x02\x02\u0195\u0196\x07\x04\x02\x02\u01965\x03\x02\x02\x02\u0197\u019A" +
		"\x05~@\x02\u0198\u0199\x07F\x02\x02\u0199\u019B\x05\x88E\x02\u019A\u0198" +
		"\x03\x02\x02\x02\u019A\u019B\x03\x02\x02\x02\u019B\u019D\x03\x02\x02\x02" +
		"\u019C\u019E\x05\x82B\x02\u019D\u019C\x03\x02\x02\x02\u019D\u019E\x03" +
		"\x02\x02\x02\u019E\u01A2\x03\x02\x02\x02\u019F\u01A2\x05\x82B\x02\u01A0" +
		"\u01A2\x07`\x02\x02\u01A1\u0197\x03\x02\x02\x02\u01A1\u019F\x03\x02\x02" +
		"\x02\u01A1\u01A0\x03\x02\x02\x02\u01A27\x03\x02\x02\x02\u01A3\u01B6\x05" +
		":\x1E\x02\u01A4\u01B6\x05<\x1F\x02\u01A5\u01B6\x05> \x02\u01A6\u01B6\x05" +
		"@!\x02\u01A7\u01B6\x05B\"\x02\u01A8\u01B6\x05D#\x02\u01A9\u01B6\x05F$" +
		"\x02\u01AA\u01B6\x05H%\x02\u01AB\u01B6\x05J&\x02\u01AC\u01B6\x05L\'\x02" +
		"\u01AD\u01B6\x05N(\x02\u01AE\u01B6\x05P)\x02\u01AF\u01B6\x05R*\x02\u01B0" +
		"\u01B6\x05V,\x02\u01B1\u01B6\x05X-\x02\u01B2\u01B6\x05^0\x02\u01B3\u01B6" +
		"\x05`1\x02\u01B4\u01B6\x05b2\x02\u01B5\u01A3\x03\x02\x02\x02\u01B5\u01A4" +
		"\x03\x02\x02\x02\u01B5\u01A5\x03\x02\x02\x02\u01B5\u01A6\x03\x02\x02\x02" +
		"\u01B5\u01A7\x03\x02\x02\x02\u01B5\u01A8\x03\x02\x02\x02\u01B5\u01A9\x03" +
		"\x02\x02\x02\u01B5\u01AA\x03\x02\x02\x02\u01B5\u01AB\x03\x02\x02\x02\u01B5" +
		"\u01AC\x03\x02\x02\x02\u01B5\u01AD\x03\x02\x02\x02\u01B5\u01AE\x03\x02" +
		"\x02\x02\u01B5\u01AF\x03\x02\x02\x02\u01B5\u01B0\x03\x02\x02\x02\u01B5" +
		"\u01B1\x03\x02\x02\x02\u01B5\u01B2\x03\x02\x02\x02\u01B5\u01B3\x03\x02" +
		"\x02\x02\u01B5\u01B4\x03\x02\x02\x02\u01B69\x03\x02\x02\x02\u01B7\u01B8" +
		"\x07\x1B\x02\x02\u01B8;\x03\x02\x02\x02\u01B9\u01C6\x07\x1C\x02\x02\u01BA" +
		"\u01BB\x05j6\x02\u01BB\u01BC\x07\\\x02\x02\u01BC\u01BD\x05j6\x02\u01BD" +
		"\u01C7\x03\x02\x02\x02\u01BE\u01BF\x05l7\x02\u01BF\u01C0\x07\\\x02\x02" +
		"\u01C0\u01C1\x05l7\x02\u01C1\u01C7\x03\x02\x02\x02\u01C2\u01C3\x05n8\x02" +
		"\u01C3\u01C4\x07\\\x02\x02\u01C4\u01C5\x05n8\x02\u01C5\u01C7\x03\x02\x02" +
		"\x02\u01C6\u01BA\x03\x02\x02\x02\u01C6\u01BE\x03\x02\x02\x02\u01C6\u01C2" +
		"\x03\x02\x02\x02\u01C7\u021C\x03\x02\x02\x02\u01C8\u01CC\x07\x1C\x02\x02" +
		"\u01C9\u01CD\x05j6\x02\u01CA\u01CD\x070\x02\x02\u01CB\u01CD\x071\x02\x02" +
		"\u01CC\u01C9\x03\x02\x02\x02\u01CC\u01CA\x03\x02\x02\x02\u01CC\u01CB\x03" +
		"\x02\x02\x02\u01CD\u01CE\x03\x02\x02\x02";
	private static readonly _serializedATNSegment1: string =
		"\u01CE\u01CF\x07\\\x02\x02\u01CF\u021C\x05\x88E\x02\u01D0\u01D1\x07\x1C" +
		"\x02\x02\u01D1\u01D2\x05j6\x02\u01D2\u01D3\x07\\\x02\x02\u01D3\u01D4\x07" +
		"Z\x02\x02\u01D4\u01D5\x07=\x02\x02\u01D5\u01D6\x07[\x02\x02\u01D6\u021C" +
		"\x03\x02\x02\x02\u01D7\u01D8\x07\x1C\x02\x02\u01D8\u01D9\x05j6\x02\u01D9" +
		"\u01DA\x07\\\x02\x02\u01DA\u01DB\x07Z\x02\x02\u01DB\u01DC\x05z>\x02\u01DC" +
		"\u01DD\x05\x98M\x02\u01DD\u01DE\x05d3\x02\u01DE\u01DF\x07[\x02\x02\u01DF" +
		"\u021C\x03\x02\x02\x02\u01E0\u01E1\x07\x1C\x02\x02\u01E1\u01E2\x07Z\x02" +
		"\x02\u01E2\u01E3\x07=\x02\x02\u01E3\u01E4\x07[\x02\x02\u01E4\u01E5\x07" +
		"\\\x02\x02\u01E5\u021C\x05j6\x02\u01E6\u01E7\x07\x1C\x02\x02\u01E7\u01E8" +
		"\x07Z\x02\x02\u01E8\u01E9\x05z>\x02\u01E9\u01EA\x05\x98M\x02\u01EA\u01EB" +
		"\x05d3\x02\u01EB\u01EC\x07[\x02\x02\u01EC\u01ED\x07\\\x02\x02\u01ED\u01EE" +
		"\x05j6\x02\u01EE\u021C\x03\x02\x02\x02\u01EF\u01F0\x07\x1C\x02\x02\u01F0" +
		"\u01F1\x07Z\x02\x02\u01F1\u01F2\x07=\x02\x02\u01F2\u01F3\x07[\x02\x02" +
		"\u01F3\u01F4\x07\\\x02\x02\u01F4\u021C\x05\x88E\x02\u01F5\u01F6\x07\x1C" +
		"\x02\x02\u01F6\u01F7\x07Z\x02\x02\u01F7\u01F8\x05z>\x02\u01F8\u01F9\x05" +
		"\x98M\x02\u01F9\u01FA\x05d3\x02\u01FA\u01FB\x07[\x02\x02\u01FB\u01FC\x07" +
		"\\\x02\x02\u01FC\u01FD\x05\x88E\x02\u01FD\u021C\x03\x02\x02\x02\u01FE" +
		"\u01FF\x07\x1C\x02\x02\u01FF\u0200\x073\x02\x02\u0200\u0201\x07\\\x02" +
		"\x02\u0201\u0205\x07Z\x02\x02\u0202\u0206\x07;\x02\x02\u0203\u0206\x07" +
		"<\x02\x02\u0204\u0206\x05\x8EH\x02\u0205\u0202\x03\x02\x02\x02\u0205\u0203" +
		"\x03\x02\x02\x02\u0205\u0204\x03\x02\x02\x02\u0206\u0207\x03\x02\x02\x02" +
		"\u0207\u021C\x07[\x02\x02\u0208\u0209\x07\x1C\x02\x02\u0209\u020A\x07" +
		"3\x02\x02\u020A\u020B\x07\\\x02\x02\u020B\u021C\x072\x02\x02\u020C\u020D" +
		"\x07\x1C\x02\x02\u020D\u020E\x072\x02\x02\u020E\u020F\x07\\\x02\x02\u020F" +
		"\u021C\x073\x02\x02\u0210\u0211\x07\x1C\x02\x02\u0211\u0216\x07Z\x02\x02" +
		"\u0212\u0217\x07;\x02\x02\u0213\u0217\x07<\x02\x02\u0214\u0217\x072\x02" +
		"\x02\u0215\u0217\x05\x8AF\x02\u0216\u0212\x03\x02\x02\x02\u0216\u0213" +
		"\x03\x02\x02\x02\u0216\u0214\x03\x02\x02\x02\u0216\u0215\x03\x02\x02\x02" +
		"\u0217\u0218\x03\x02\x02\x02\u0218\u0219\x07[\x02\x02\u0219\u021A\x07" +
		"\\\x02\x02\u021A\u021C\x073\x02\x02\u021B\u01B9\x03\x02\x02\x02\u021B" +
		"\u01C8\x03\x02\x02\x02\u021B\u01D0\x03\x02\x02\x02\u021B\u01D7\x03\x02" +
		"\x02\x02\u021B\u01E0\x03\x02\x02\x02\u021B\u01E6\x03\x02\x02\x02\u021B" +
		"\u01EF\x03\x02\x02\x02\u021B\u01F5\x03\x02\x02\x02\u021B\u01FE\x03\x02" +
		"\x02\x02\u021B\u0208\x03\x02\x02\x02\u021B\u020C\x03\x02\x02\x02\u021B" +
		"\u0210\x03\x02\x02\x02\u021C=\x03\x02\x02\x02\u021D\u0220\x07\x1C\x02" +
		"\x02\u021E\u0221\x05t;\x02\u021F\u0221\x05z>\x02\u0220\u021E\x03\x02\x02" +
		"\x02\u0220\u021F\x03\x02\x02\x02\u0221\u0222\x03\x02\x02\x02\u0222\u0223" +
		"\x07\\\x02\x02\u0223\u0224\x05\x8AF\x02\u0224\u023D\x03\x02\x02\x02\u0225" +
		"\u0226\x07\x1C\x02\x02\u0226\u0227\x05z>\x02\u0227\u0228\x07\\\x02\x02" +
		"\u0228\u0229\x07Z\x02\x02\u0229\u022A\x05\x8AF\x02\u022A\u022B\x07[\x02" +
		"\x02\u022B\u023D\x03\x02\x02\x02\u022C\u022D\x07\x1C\x02\x02\u022D\u022E" +
		"\x07Z\x02\x02\u022E\u022F\x05\x8AF\x02\u022F\u0230\x07[\x02\x02\u0230" +
		"\u0233\x07\\\x02\x02\u0231\u0234\x05t;\x02\u0232\u0234\x05z>\x02\u0233" +
		"\u0231\x03\x02\x02\x02\u0233\u0232\x03\x02\x02\x02\u0234\u023D\x03\x02" +
		"\x02\x02\u0235\u0236\x07\x1C\x02\x02\u0236\u0237\x07>\x02\x02\u0237\u023A" +
		"\x07\\\x02\x02\u0238\u023B\x07=\x02\x02\u0239\u023B\x05z>\x02\u023A\u0238" +
		"\x03\x02\x02\x02\u023A\u0239\x03\x02\x02\x02\u023B\u023D\x03\x02\x02\x02" +
		"\u023C\u021D\x03\x02\x02\x02\u023C\u0225\x03\x02\x02\x02\u023C\u022C\x03" +
		"\x02\x02\x02\u023C\u0235\x03\x02\x02\x02\u023D?\x03\x02\x02\x02\u023E" +
		"\u0241\x07\x1D\x02\x02\u023F\u0242\x05p9\x02\u0240\u0242\x05z>\x02\u0241" +
		"\u023F\x03\x02\x02\x02\u0241\u0240\x03\x02\x02\x02\u0242A\x03\x02\x02" +
		"\x02\u0243\u0244\x07\x1E\x02\x02\u0244\u0245\x07<\x02\x02\u0245\u0246" +
		"\x07\\\x02\x02\u0246\u0259\x07=\x02\x02\u0247\u0248\x07\x1E\x02\x02\u0248" +
		"\u0249\x07:\x02\x02\u0249\u024A\x07\\\x02\x02\u024A\u024C\x07:\x02\x02" +
		"\u024B\u024D\x07\x05\x02\x02\u024C\u024B\x03\x02\x02\x02\u024C\u024D\x03" +
		"\x02\x02\x02\u024D\u0259\x03\x02\x02\x02\u024E\u024F\x07\x1E\x02\x02\u024F" +
		"\u0250\x07Z\x02\x02\u0250\u0251\x07>\x02\x02\u0251\u0252\x07[\x02\x02" +
		"\u0252\u0255\x07\\\x02\x02\u0253\u0256\x07=\x02\x02\u0254\u0256\x05z>" +
		"\x02\u0255\u0253\x03\x02\x02\x02\u0255\u0254\x03\x02\x02\x02\u0256\u0259" +
		"\x03\x02\x02\x02\u0257\u0259\x07\x1F\x02\x02\u0258\u0243\x03\x02\x02\x02" +
		"\u0258\u0247\x03\x02\x02\x02\u0258\u024E\x03\x02\x02\x02\u0258\u0257\x03" +
		"\x02\x02\x02\u0259C\x03\x02\x02\x02\u025A\u025D\t\x02\x02\x02\u025B\u025C" +
		"\x073\x02\x02\u025C\u025E\x07\\\x02\x02\u025D\u025B\x03\x02\x02\x02\u025D" +
		"\u025E\x03\x02\x02\x02\u025E\u0263\x03\x02\x02\x02\u025F\u0264\x05j6\x02" +
		"\u0260\u0264\x070\x02\x02\u0261\u0264\x071\x02\x02\u0262\u0264\x05\x88" +
		"E\x02\u0263\u025F\x03\x02\x02\x02\u0263\u0260\x03\x02\x02\x02\u0263\u0261" +
		"\x03\x02\x02\x02\u0263\u0262\x03\x02\x02\x02\u0264\u0274\x03\x02\x02\x02" +
		"\u0265\u0268\t\x02\x02\x02\u0266\u0267\x073\x02\x02\u0267\u0269\x07\\" +
		"\x02\x02\u0268\u0266\x03\x02\x02\x02\u0268\u0269\x03\x02\x02\x02\u0269" +
		"\u026A\x03\x02\x02\x02\u026A\u0270\x07Z\x02\x02\u026B\u0271\x07=\x02\x02" +
		"\u026C\u026D\x05z>\x02\u026D\u026E\x05\x98M\x02\u026E\u026F\x05d3\x02" +
		"\u026F\u0271\x03\x02\x02\x02\u0270\u026B\x03\x02\x02\x02\u0270\u026C\x03" +
		"\x02\x02\x02\u0271\u0272\x03\x02\x02\x02\u0272\u0274\x07[\x02\x02\u0273" +
		"\u025A\x03\x02\x02\x02\u0273\u0265\x03\x02\x02\x02\u0274E\x03\x02\x02" +
		"\x02\u0275\u0279\x07\"\x02\x02\u0276\u027A\x05j6\x02\u0277\u027A\x070" +
		"\x02\x02\u0278\u027A\x071\x02\x02\u0279\u0276\x03\x02\x02\x02\u0279\u0277" +
		"\x03\x02\x02\x02\u0279\u0278\x03\x02\x02\x02\u027A\u0286\x03\x02\x02\x02" +
		"\u027B\u027C\x07\"\x02\x02\u027C\u0282\x07Z\x02\x02\u027D\u0283\x07=\x02" +
		"\x02\u027E\u027F\x05z>\x02\u027F\u0280\x05\x98M\x02\u0280\u0281\x05d3" +
		"\x02\u0281\u0283\x03\x02\x02\x02\u0282\u027D\x03\x02\x02\x02\u0282\u027E" +
		"\x03\x02\x02\x02\u0283\u0284\x03\x02\x02\x02\u0284\u0286\x07[\x02\x02" +
		"\u0285\u0275\x03\x02\x02\x02\u0285\u027B\x03\x02\x02\x02\u0286G\x03\x02" +
		"\x02\x02\u0287\u0289\x07#\x02\x02\u0288\u028A\x073\x02\x02\u0289\u0288" +
		"\x03\x02\x02\x02\u0289\u028A\x03\x02\x02\x02\u028AI\x03\x02\x02\x02\u028B" +
		"\u028C\x07 \x02\x02\u028C\u028D\x07=\x02\x02\u028D\u028E\x07\\\x02\x02" +
		"\u028E\u0298\x05t;\x02\u028F\u0290\x07 \x02\x02\u0290\u0291\x07?\x02\x02" +
		"\u0291\u0292\x07\\\x02\x02\u0292\u0298\x05v<\x02\u0293\u0294\x07 \x02" +
		"\x02\u0294\u0295\x07@\x02\x02\u0295\u0296\x07\\\x02\x02\u0296\u0298\x05" +
		"x=\x02\u0297\u028B\x03\x02\x02\x02\u0297\u028F\x03\x02\x02\x02\u0297\u0293" +
		"\x03\x02\x02\x02\u0298K\x03\x02\x02\x02\u0299\u029C\x07\"\x02\x02\u029A" +
		"\u029D\x05t;\x02\u029B\u029D\x05z>\x02\u029C\u029A\x03\x02\x02\x02\u029C" +
		"\u029B\x03\x02\x02\x02\u029DM\x03\x02\x02\x02\u029E\u029F\x07$\x02\x02" +
		"\u029F\u02B4\x05j6\x02\u02A0\u02A1\x07$\x02\x02\u02A1\u02A7\x07Z\x02\x02" +
		"\u02A2\u02A8\x07=\x02\x02\u02A3\u02A4\x05z>\x02\u02A4\u02A5\x05\x98M\x02" +
		"\u02A5\u02A6\x05d3\x02\u02A6\u02A8\x03\x02\x02\x02\u02A7\u02A2\x03\x02" +
		"\x02\x02\u02A7\u02A3\x03\x02\x02\x02\u02A8\u02A9\x03\x02\x02\x02\u02A9" +
		"\u02B4\x07[\x02\x02\u02AA\u02AB\x07$\x02\x02\u02AB\u02AC\x07Z\x02\x02" +
		"\u02AC\u02AD\x05z>\x02\u02AD\u02AE\x05\x98M\x02\u02AE\u02AF\x05d3\x02" +
		"\u02AF\u02B0\x07[\x02\x02\u02B0\u02B1\x07\\\x02\x02\u02B1\u02B2\x05j6" +
		"\x02\u02B2\u02B4\x03\x02\x02\x02\u02B3\u029E\x03\x02\x02\x02\u02B3\u02A0" +
		"\x03\x02\x02\x02\u02B3\u02AA\x03\x02\x02\x02\u02B4O\x03\x02\x02\x02\u02B5" +
		"\u02B7\x07%\x02\x02\u02B6\u02B8\x073\x02\x02\u02B7\u02B6\x03\x02\x02\x02" +
		"\u02B7\u02B8\x03\x02\x02\x02\u02B8Q\x03\x02\x02\x02\u02B9\u02BA\x07&\x02" +
		"\x02\u02BA\u02BB\x05T+\x02\u02BB\u02BC\x07\\\x02\x02\u02BC\u02BD\x05j" +
		"6\x02\u02BD\u02D7\x03\x02\x02\x02\u02BE\u02BF\x07&\x02\x02\u02BF\u02C0" +
		"\x05T+\x02\u02C0\u02C1\x07\\\x02\x02\u02C1\u02C7\x07Z\x02\x02\u02C2\u02C8" +
		"\x07=\x02\x02\u02C3\u02C4\x05z>\x02\u02C4\u02C5\x05\x98M\x02\u02C5\u02C6" +
		"\x05d3\x02\u02C6\u02C8\x03\x02\x02\x02\u02C7\u02C2\x03\x02\x02\x02\u02C7" +
		"\u02C3\x03\x02\x02\x02\u02C8\u02C9\x03\x02\x02\x02\u02C9\u02CA\x07[\x02" +
		"\x02\u02CA\u02D7\x03\x02\x02\x02\u02CB\u02CC\x07&\x02\x02\u02CC\u02CD" +
		"\x05T+\x02\u02CD\u02CE\x07\\\x02\x02\u02CE\u02CF\x07Z\x02\x02\u02CF\u02D0" +
		"\x05z>\x02\u02D0\u02D1\x05\x98M\x02\u02D1\u02D2\x05d3\x02\u02D2\u02D3" +
		"\x07[\x02\x02\u02D3\u02D4\x07\\\x02\x02\u02D4\u02D5\x05j6\x02\u02D5\u02D7" +
		"\x03\x02\x02\x02\u02D6\u02B9\x03\x02\x02\x02\u02D6\u02BE\x03\x02\x02\x02" +
		"\u02D6\u02CB\x03\x02\x02\x02\u02D7S\x03\x02\x02\x02\u02D8\u02D9\t\x03" +
		"\x02\x02\u02D9U\x03\x02\x02\x02\u02DA\u02E6\x07\'\x02\x02\u02DB\u02DE" +
		"\x07=\x02\x02\u02DC\u02DE\x05z>\x02\u02DD\u02DB\x03\x02\x02\x02\u02DD" +
		"\u02DC\x03\x02\x02\x02\u02DE\u02E7\x03\x02\x02\x02\u02DF\u02E2\x07Z\x02" +
		"\x02\u02E0\u02E3\x07=\x02\x02\u02E1\u02E3\x05z>\x02\u02E2\u02E0\x03\x02" +
		"\x02\x02\u02E2\u02E1\x03\x02\x02\x02\u02E3\u02E4\x03\x02\x02\x02\u02E4" +
		"\u02E7\x07[\x02\x02\u02E5\u02E7\x05\x8AF\x02\u02E6\u02DD\x03\x02\x02\x02" +
		"\u02E6\u02DF\x03\x02\x02\x02\u02E6\u02E5\x03\x02\x02\x02\u02E7\u02F7\x03" +
		"\x02\x02\x02\u02E8\u02E9\x07\'\x02\x02\u02E9\u02EA\x05Z.\x02\u02EA\u02EB" +
		"\x07\\\x02\x02\u02EB\u02EC\x05\x8AF\x02\u02EC\u02F7\x03\x02\x02\x02\u02ED" +
		"\u02F1\x07(\x02\x02\u02EE\u02EF\x05\\/\x02\u02EF\u02F0\x07\\\x02\x02\u02F0" +
		"\u02F2\x03\x02\x02\x02\u02F1\u02EE\x03\x02\x02\x02\u02F1\u02F2\x03\x02" +
		"\x02\x02\u02F2\u02F3\x03\x02\x02\x02\u02F3\u02F7\x05f4\x02\u02F4\u02F5" +
		"\x07)\x02\x02\u02F5\u02F7\x05f4\x02\u02F6\u02DA\x03\x02\x02\x02\u02F6" +
		"\u02E8\x03\x02\x02\x02\u02F6\u02ED\x03\x02\x02\x02\u02F6\u02F4\x03\x02" +
		"\x02\x02\u02F7W\x03\x02\x02\x02\u02F8\u02FC\x07*\x02\x02\u02F9\u02FA\x05" +
		"Z.\x02\u02FA\u02FB\x07\\\x02\x02\u02FB\u02FD\x03\x02\x02\x02\u02FC\u02F9" +
		"\x03\x02\x02\x02\u02FC\u02FD\x03\x02\x02\x02\u02FD\u02FE\x03\x02\x02\x02" +
		"\u02FE\u0304\x05\x8AF\x02\u02FF\u0301\x07+\x02\x02\u0300\u0302\x05Z.\x02" +
		"\u0301\u0300\x03\x02\x02\x02\u0301\u0302\x03\x02\x02\x02\u0302\u0304\x03" +
		"\x02\x02\x02\u0303\u02F8\x03\x02\x02\x02\u0303\u02FF\x03\x02\x02\x02\u0304" +
		"Y\x03\x02\x02\x02\u0305\u0306\t\x04\x02\x02\u0306[\x03\x02\x02\x02\u0307" +
		"\u0308\t\x05\x02\x02\u0308]\x03\x02\x02\x02\u0309\u030A\x07,\x02\x02\u030A" +
		"\u030B\t\x06\x02\x02\u030B_\x03\x02\x02\x02\u030C\u030D\x07-\x02\x02\u030D" +
		"\u030E\x07O\x02\x02\u030Ea\x03\x02\x02\x02\u030F\u0310\x07.\x02\x02\u0310" +
		"\u0311\x073\x02\x02\u0311\u0312\x07\\\x02\x02\u0312\u0313\x07Z\x02\x02" +
		"\u0313\u0314\x05\x88E\x02\u0314\u0315\x07[\x02\x02\u0315\u0330\x03\x02" +
		"\x02\x02\u0316\u031A\x07.\x02\x02\u0317\u0318\x05j6\x02\u0318\u0319\x07" +
		"\\\x02\x02\u0319\u031B\x03\x02\x02\x02\u031A\u0317\x03\x02\x02\x02\u031A" +
		"\u031B\x03\x02\x02\x02\u031B\u031C\x03\x02\x02\x02\u031C\u031D\x07Z\x02" +
		"\x02\u031D\u031E\x075\x02\x02\u031E\u0330\x07[\x02\x02\u031F\u0320\x07" +
		"/\x02\x02\u0320\u0321\x07Z\x02\x02\u0321\u0322\x05\x88E\x02\u0322\u0323" +
		"\x07[\x02\x02\u0323\u0324\x07\\\x02\x02\u0324\u0325\x073\x02\x02\u0325" +
		"\u0330\x03\x02\x02\x02\u0326\u0327\x07/\x02\x02\u0327\u0328\x07Z\x02\x02" +
		"\u0328\u0329\x075\x02\x02\u0329\u032A\x07[\x02\x02\u032A\u032D\x07\\\x02" +
		"\x02\u032B\u032E\x05j6\x02\u032C\u032E\x07W\x02\x02\u032D\u032B\x03\x02" +
		"\x02\x02\u032D\u032C\x03\x02\x02\x02\u032E\u0330\x03\x02\x02\x02\u032F" +
		"\u030F\x03\x02\x02\x02\u032F\u0316\x03\x02\x02\x02\u032F\u031F\x03\x02" +
		"\x02\x02\u032F\u0326\x03\x02\x02\x02\u0330c\x03\x02\x02\x02\u0331\u0332" +
		"\x05\x8EH\x02\u0332e\x03\x02\x02\x02\u0333\u0334\x05\x8EH\x02\u0334g\x03" +
		"\x02\x02\x02\u0335\u0336\t\x07\x02\x02\u0336i\x03\x02\x02\x02\u0337\u0338" +
		"\t\b\x02\x02\u0338k\x03\x02\x02\x02\u0339\u033A\t\t\x02\x02\u033Am\x03" +
		"\x02\x02\x02\u033B\u033C\t\n\x02\x02\u033Co\x03\x02\x02\x02\u033D\u033E" +
		"\t\v\x02\x02\u033Eq\x03\x02\x02\x02\u033F\u0340\t\f\x02\x02\u0340s\x03" +
		"\x02\x02\x02\u0341\u0344\x05r:\x02\u0342\u0344\x07=\x02\x02\u0343\u0341" +
		"\x03\x02\x02\x02\u0343\u0342\x03\x02\x02\x02\u0344u\x03\x02\x02\x02\u0345" +
		"\u0348\x05r:\x02\u0346\u0348\x07?\x02\x02\u0347\u0345\x03\x02\x02\x02" +
		"\u0347\u0346\x03\x02\x02\x02\u0348w\x03\x02\x02\x02\u0349\u034C\x05r:" +
		"\x02\u034A\u034C\x07@\x02\x02\u034B\u0349\x03\x02\x02\x02\u034B\u034A" +
		"\x03\x02\x02\x02\u034Cy\x03\x02\x02\x02\u034D\u034E\t\r\x02\x02\u034E" +
		"{\x03\x02\x02\x02\u034F\u0350\x07_\x02\x02\u0350\u0355\x05~@\x02\u0351" +
		"\u0352\x05~@\x02\u0352\u0353\x07\x06\x02\x02\u0353\u0355\x03\x02\x02\x02" +
		"\u0354\u034F\x03\x02\x02\x02\u0354\u0351\x03\x02\x02\x02\u0355}\x03\x02" +
		"\x02\x02\u0356\u0357\x07C\x02\x02\u0357\x7F\x03\x02\x02\x02\u0358\u0359" +
		"\x07D\x02\x02\u0359\x81\x03\x02\x02\x02\u035A\u035B\x07E\x02\x02\u035B" +
		"\x83\x03\x02\x02\x02\u035C\u035D\x07Y\x02\x02\u035D\x85\x03\x02\x02\x02" +
		"\u035E\u035F\x07X\x02\x02\u035F\x87\x03\x02\x02\x02\u0360\u0361\x05\x8E" +
		"H\x02\u0361\x89\x03\x02\x02\x02\u0362\u0363\x05\x8EH\x02\u0363\x8B\x03" +
		"\x02\x02\x02\u0364\u0365\x05\x8EH\x02\u0365\x8D\x03\x02\x02\x02\u0366" +
		"\u0367\bH\x01\x02\u0367\u0368\x07Z\x02\x02\u0368\u0369\x05\x8EH\x02\u0369" +
		"\u036A\x07[\x02\x02\u036A\u036E\x03\x02\x02\x02\u036B\u036E\x05\x9AN\x02" +
		"\u036C\u036E\x05~@\x02\u036D\u0366\x03\x02\x02\x02\u036D\u036B\x03\x02" +
		"\x02\x02\u036D\u036C\x03\x02\x02\x02\u036E\u0375\x03\x02\x02\x02\u036F" +
		"\u0370\f\x06\x02\x02\u0370\u0371\x05\x90I\x02\u0371\u0372\x05\x8EH\x07" +
		"\u0372\u0374\x03\x02\x02\x02\u0373\u036F\x03\x02\x02\x02\u0374\u0377\x03" +
		"\x02\x02\x02\u0375\u0373\x03\x02\x02\x02\u0375\u0376\x03\x02\x02\x02\u0376" +
		"\x8F\x03\x02\x02\x02\u0377\u0375\x03\x02\x02\x02\u0378\u037C\x05\x92J" +
		"\x02\u0379\u037C\x05\x94K\x02\u037A\u037C\x05\x96L\x02\u037B\u0378\x03" +
		"\x02\x02\x02\u037B\u0379\x03\x02\x02\x02\u037B\u037A\x03\x02\x02\x02\u037C" +
		"\x91\x03\x02\x02\x02\u037D\u037E\t\x0E\x02\x02\u037E\x93\x03\x02\x02\x02" +
		"\u037F\u0380\x07M\x02\x02\u0380\x95\x03\x02\x02\x02\u0381\u0382\x07N\x02" +
		"\x02\u0382\x97\x03\x02\x02\x02\u0383\u0384\t\x0F\x02\x02\u0384\x99\x03" +
		"\x02\x02\x02\u0385\u0387\t\x0F\x02\x02\u0386\u0385\x03\x02\x02\x02\u0386" +
		"\u0387\x03\x02\x02\x02\u0387\u038D\x03\x02\x02\x02\u0388\u038E\x05\x9C" +
		"O\x02\u0389\u038E\x05\x9EP\x02\u038A\u038E\x05\xA0Q\x02\u038B\u038E\x05" +
		"\xA2R\x02\u038C\u038E\x05\xA4S\x02\u038D\u0388\x03\x02\x02\x02\u038D\u0389" +
		"\x03\x02\x02\x02\u038D\u038A\x03\x02\x02\x02\u038D\u038B\x03\x02\x02\x02" +
		"\u038D\u038C\x03\x02\x02\x02\u038E\x9B\x03\x02\x02\x02\u038F\u0390\x07" +
		"S\x02\x02\u0390\x9D\x03\x02\x02\x02\u0391\u0392\x07T\x02\x02\u0392\x9F" +
		"\x03\x02\x02\x02\u0393\u0394\t\x10\x02\x02\u0394\xA1\x03\x02\x02\x02\u0395" +
		"\u0396\t\x11\x02\x02\u0396\xA3\x03\x02\x02\x02\u0397\u0398\x07X\x02\x02" +
		"\u0398\xA5\x03\x02\x02\x02_\xA7\xAC\xB1\xB4\xB8\xBD\xC0\xC4\xC8\xCE\xD0" +
		"\xE4\xFC\u010A\u0111\u0119\u011F\u0124\u0129\u012C\u013A\u0141\u0148\u014C" +
		"\u014F\u0154\u015D\u0160\u0164\u0168\u016C\u0171\u0176\u017A\u017E\u0182" +
		"\u0186\u018A\u018E\u0192\u019A\u019D\u01A1\u01B5\u01C6\u01CC\u0205\u0216" +
		"\u021B\u0220\u0233\u023A\u023C\u0241\u024C\u0255\u0258\u025D\u0263\u0268" +
		"\u0270\u0273\u0279\u0282\u0285\u0289\u0297\u029C\u02A7\u02B3\u02B7\u02C7" +
		"\u02D6\u02DD\u02E2\u02E6\u02F1\u02F6\u02FC\u0301\u0303\u031A\u032D\u032F" +
		"\u0343\u0347\u034B\u0354\u036D\u0375\u037B\u0386\u038D";
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
	public symbol(): SymbolContext | undefined {
		return this.tryGetRuleContext(0, SymbolContext);
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
	public directive_define(): Directive_defineContext | undefined {
		return this.tryGetRuleContext(0, Directive_defineContext);
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


export class Directive_defineContext extends ParserRuleContext {
	public DIRECTIVEdefine(): TerminalNode { return this.getToken(z80asmParser.DIRECTIVEdefine, 0); }
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
	public BACKSLASH(): TerminalNode[];
	public BACKSLASH(i: number): TerminalNode;
	public BACKSLASH(i?: number): TerminalNode | TerminalNode[] {
		if (i === undefined) {
			return this.getTokens(z80asmParser.BACKSLASH);
		} else {
			return this.getToken(z80asmParser.BACKSLASH, i);
		}
	}
	public EOL(): TerminalNode | undefined { return this.tryGetToken(z80asmParser.EOL, 0); }
	public comment(): CommentContext[];
	public comment(i: number): CommentContext;
	public comment(i?: number): CommentContext | CommentContext[] {
		if (i === undefined) {
			return this.getRuleContexts(CommentContext);
		} else {
			return this.getRuleContext(i, CommentContext);
		}
	}
	public instruction(): InstructionContext[];
	public instruction(i: number): InstructionContext;
	public instruction(i?: number): InstructionContext | InstructionContext[] {
		if (i === undefined) {
			return this.getRuleContexts(InstructionContext);
		} else {
			return this.getRuleContext(i, InstructionContext);
		}
	}
	constructor(parent: ParserRuleContext | undefined, invokingState: number) {
		super(parent, invokingState);
	}
	// @Override
	public get ruleIndex(): number { return z80asmParser.RULE_directive_define; }
	// @Override
	public enterRule(listener: z80asmListener): void {
		if (listener.enterDirective_define) {
			listener.enterDirective_define(this);
		}
	}
	// @Override
	public exitRule(listener: z80asmListener): void {
		if (listener.exitDirective_define) {
			listener.exitDirective_define(this);
		}
	}
	// @Override
	public accept<Result>(visitor: z80asmVisitor<Result>): Result {
		if (visitor.visitDirective_define) {
			return visitor.visitDirective_define(this);
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



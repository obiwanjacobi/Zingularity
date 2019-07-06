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
	public static readonly DIRECTIVEvoid = 7;
	public static readonly DIRECTIVEparam = 8;
	public static readonly DIRECTIVEsymbol = 9;
	public static readonly DIRECTIVEsymbollist = 10;
	public static readonly DIRECTIVEassign = 11;
	public static readonly DIRECTIVEdefs = 12;
	public static readonly DIRECTIVEdefm = 13;
	public static readonly DIRECTIVEblock = 14;
	public static readonly DIRECTIVEtodo = 15;
	public static readonly DIRECTIVEfile = 16;
	public static readonly DIRECTIVEif = 17;
	public static readonly DIRECTIVEifdef = 18;
	public static readonly DIRECTIVEifndef = 19;
	public static readonly DIRECTIVEelse = 20;
	public static readonly DIRECTIVEendif = 21;
	public static readonly INSTRUCTION = 22;
	public static readonly REGISTER8 = 23;
	public static readonly REGISTER8ex = 24;
	public static readonly REGISTER8sys = 25;
	public static readonly REGISTER16 = 26;
	public static readonly SYMBOL = 27;
	public static readonly COMMENT = 28;
	public static readonly OPERATORnum = 29;
	public static readonly OPERATORbit = 30;
	public static readonly OPERATORlogic = 31;
	public static readonly NUMBERbin = 32;
	public static readonly NUMBERoct = 33;
	public static readonly NUMBERdec = 34;
	public static readonly NUMBERhex = 35;
	public static readonly CHARACTER = 36;
	public static readonly STRING = 37;
	public static readonly EOL = 38;
	public static readonly WS = 39;
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
	public static readonly RULE_string = 18;
	public static readonly RULE_character = 19;
	public static readonly RULE_instruction = 20;
	public static readonly RULE_label = 21;
	public static readonly RULE_symbol = 22;
	public static readonly RULE_comment = 23;
	public static readonly RULE_expression = 24;
	public static readonly RULE_operator = 25;
	public static readonly RULE_number = 26;
	public static readonly RULE_number_bin = 27;
	public static readonly RULE_number_oct = 28;
	public static readonly RULE_number_dec = 29;
	public static readonly RULE_number_hex = 30;
	// tslint:disable:no-trailing-whitespace
	public static readonly ruleNames: string[] = [
		"file", "asm", "line", "directive", "directive_void", "directive_param", 
		"directive_symbol", "directive_symbollist", "directive_assign", "directive_block", 
		"directive_defs", "directive_defm", "defmparam", "directive_if", "directive_ifdef", 
		"directive_ifndef", "directive_ifblock", "directive_elseblock", "string", 
		"character", "instruction", "label", "symbol", "comment", "expression", 
		"operator", "number", "number_bin", "number_oct", "number_dec", "number_hex",
	];

	private static readonly _LITERAL_NAMES: Array<string | undefined> = [
		undefined, "','", "'='", "'.'", "':'", "'('", "')'",
	];
	private static readonly _SYMBOLIC_NAMES: Array<string | undefined> = [
		undefined, undefined, undefined, undefined, undefined, undefined, undefined, 
		"DIRECTIVEvoid", "DIRECTIVEparam", "DIRECTIVEsymbol", "DIRECTIVEsymbollist", 
		"DIRECTIVEassign", "DIRECTIVEdefs", "DIRECTIVEdefm", "DIRECTIVEblock", 
		"DIRECTIVEtodo", "DIRECTIVEfile", "DIRECTIVEif", "DIRECTIVEifdef", "DIRECTIVEifndef", 
		"DIRECTIVEelse", "DIRECTIVEendif", "INSTRUCTION", "REGISTER8", "REGISTER8ex", 
		"REGISTER8sys", "REGISTER16", "SYMBOL", "COMMENT", "OPERATORnum", "OPERATORbit", 
		"OPERATORlogic", "NUMBERbin", "NUMBERoct", "NUMBERdec", "NUMBERhex", "CHARACTER", 
		"STRING", "EOL", "WS",
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
			this.state = 63;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__2) | (1 << z80asmParser.DIRECTIVEvoid) | (1 << z80asmParser.DIRECTIVEparam) | (1 << z80asmParser.DIRECTIVEsymbol) | (1 << z80asmParser.DIRECTIVEsymbollist) | (1 << z80asmParser.DIRECTIVEassign) | (1 << z80asmParser.DIRECTIVEdefs) | (1 << z80asmParser.DIRECTIVEdefm) | (1 << z80asmParser.DIRECTIVEblock) | (1 << z80asmParser.DIRECTIVEif) | (1 << z80asmParser.DIRECTIVEifdef) | (1 << z80asmParser.DIRECTIVEifndef) | (1 << z80asmParser.INSTRUCTION) | (1 << z80asmParser.SYMBOL) | (1 << z80asmParser.COMMENT))) !== 0) || _la === z80asmParser.EOL) {
				{
				this.state = 62;
				this.asm();
				}
			}

			this.state = 65;
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
			this.state = 71;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			do {
				{
				{
				this.state = 68;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__2) | (1 << z80asmParser.DIRECTIVEvoid) | (1 << z80asmParser.DIRECTIVEparam) | (1 << z80asmParser.DIRECTIVEsymbol) | (1 << z80asmParser.DIRECTIVEsymbollist) | (1 << z80asmParser.DIRECTIVEassign) | (1 << z80asmParser.DIRECTIVEdefs) | (1 << z80asmParser.DIRECTIVEdefm) | (1 << z80asmParser.DIRECTIVEblock) | (1 << z80asmParser.DIRECTIVEif) | (1 << z80asmParser.DIRECTIVEifdef) | (1 << z80asmParser.DIRECTIVEifndef) | (1 << z80asmParser.INSTRUCTION) | (1 << z80asmParser.SYMBOL) | (1 << z80asmParser.COMMENT))) !== 0)) {
					{
					this.state = 67;
					this.line();
					}
				}

				this.state = 70;
				this.match(z80asmParser.EOL);
				}
				}
				this.state = 73;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
			} while ((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.T__2) | (1 << z80asmParser.DIRECTIVEvoid) | (1 << z80asmParser.DIRECTIVEparam) | (1 << z80asmParser.DIRECTIVEsymbol) | (1 << z80asmParser.DIRECTIVEsymbollist) | (1 << z80asmParser.DIRECTIVEassign) | (1 << z80asmParser.DIRECTIVEdefs) | (1 << z80asmParser.DIRECTIVEdefm) | (1 << z80asmParser.DIRECTIVEblock) | (1 << z80asmParser.DIRECTIVEif) | (1 << z80asmParser.DIRECTIVEifdef) | (1 << z80asmParser.DIRECTIVEifndef) | (1 << z80asmParser.INSTRUCTION) | (1 << z80asmParser.SYMBOL) | (1 << z80asmParser.COMMENT))) !== 0) || _la === z80asmParser.EOL);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
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
			this.state = 91;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 7, this._ctx) ) {
			case 1:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 75;
				this.directive();
				this.state = 77;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 76;
					this.comment();
					}
				}

				}
				break;

			case 2:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 79;
				this.comment();
				}
				break;

			case 3:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 80;
				this.label();
				this.state = 82;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 81;
					this.comment();
					}
				}

				}
				break;

			case 4:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 85;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.T__2 || _la === z80asmParser.SYMBOL) {
					{
					this.state = 84;
					this.label();
					}
				}

				this.state = 87;
				this.instruction();
				this.state = 89;
				this._errHandler.sync(this);
				_la = this._input.LA(1);
				if (_la === z80asmParser.COMMENT) {
					{
					this.state = 88;
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
			this.state = 104;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.DIRECTIVEvoid:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 93;
				this.directive_void();
				}
				break;
			case z80asmParser.DIRECTIVEparam:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 94;
				this.directive_param();
				}
				break;
			case z80asmParser.DIRECTIVEblock:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 95;
				this.directive_block();
				}
				break;
			case z80asmParser.DIRECTIVEsymbol:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 96;
				this.directive_symbol();
				}
				break;
			case z80asmParser.DIRECTIVEsymbollist:
				this.enterOuterAlt(_localctx, 5);
				{
				this.state = 97;
				this.directive_symbollist();
				}
				break;
			case z80asmParser.DIRECTIVEassign:
				this.enterOuterAlt(_localctx, 6);
				{
				this.state = 98;
				this.directive_assign();
				}
				break;
			case z80asmParser.DIRECTIVEdefs:
				this.enterOuterAlt(_localctx, 7);
				{
				this.state = 99;
				this.directive_defs();
				}
				break;
			case z80asmParser.DIRECTIVEdefm:
				this.enterOuterAlt(_localctx, 8);
				{
				this.state = 100;
				this.directive_defm();
				}
				break;
			case z80asmParser.DIRECTIVEif:
				this.enterOuterAlt(_localctx, 9);
				{
				this.state = 101;
				this.directive_if();
				}
				break;
			case z80asmParser.DIRECTIVEifdef:
				this.enterOuterAlt(_localctx, 10);
				{
				this.state = 102;
				this.directive_ifdef();
				}
				break;
			case z80asmParser.DIRECTIVEifndef:
				this.enterOuterAlt(_localctx, 11);
				{
				this.state = 103;
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
			this.state = 106;
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
			this.state = 108;
			this.match(z80asmParser.DIRECTIVEparam);
			this.state = 109;
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
			this.state = 111;
			this.match(z80asmParser.DIRECTIVEsymbol);
			this.state = 112;
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
			this.state = 114;
			this.match(z80asmParser.DIRECTIVEsymbollist);
			this.state = 115;
			this.symbol();
			this.state = 120;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 9, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 116;
					this.match(z80asmParser.T__0);
					this.state = 117;
					this.symbol();
					}
					}
				}
				this.state = 122;
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
			this.state = 123;
			this.match(z80asmParser.DIRECTIVEassign);
			this.state = 124;
			this.match(z80asmParser.T__1);
			this.state = 125;
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
			this.state = 127;
			this.match(z80asmParser.DIRECTIVEblock);
			this.state = 128;
			this.expression(0);
			this.state = 133;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 10, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 129;
					this.match(z80asmParser.T__0);
					this.state = 130;
					this.expression(0);
					}
					}
				}
				this.state = 135;
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
			this.state = 136;
			this.match(z80asmParser.DIRECTIVEdefs);
			this.state = 137;
			this.expression(0);
			this.state = 140;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.T__0) {
				{
				this.state = 138;
				this.match(z80asmParser.T__0);
				this.state = 139;
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
			this.state = 142;
			this.match(z80asmParser.DIRECTIVEdefm);
			this.state = 143;
			this.defmparam();
			this.state = 148;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 12, this._ctx);
			while (_alt !== 1 && _alt !== ATN.INVALID_ALT_NUMBER) {
				if (_alt === 1 + 1) {
					{
					{
					this.state = 144;
					this.match(z80asmParser.T__0);
					this.state = 145;
					this.defmparam();
					}
					}
				}
				this.state = 150;
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
			this.state = 154;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.STRING:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 151;
				this.string();
				}
				break;
			case z80asmParser.CHARACTER:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 152;
				this.character();
				}
				break;
			case z80asmParser.T__4:
			case z80asmParser.SYMBOL:
			case z80asmParser.NUMBERbin:
			case z80asmParser.NUMBERoct:
			case z80asmParser.NUMBERdec:
			case z80asmParser.NUMBERhex:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 153;
				this.expression(0);
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
			this.state = 156;
			this.match(z80asmParser.DIRECTIVEif);
			this.state = 157;
			this.expression(0);
			this.state = 159;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 14, this._ctx) ) {
			case 1:
				{
				this.state = 158;
				this.comment();
				}
				break;
			}
			this.state = 161;
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
			this.state = 163;
			this.match(z80asmParser.DIRECTIVEifdef);
			this.state = 164;
			this.symbol();
			this.state = 166;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 15, this._ctx) ) {
			case 1:
				{
				this.state = 165;
				this.comment();
				}
				break;
			}
			this.state = 168;
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
			this.state = 170;
			this.match(z80asmParser.DIRECTIVEifndef);
			this.state = 171;
			this.symbol();
			this.state = 173;
			this._errHandler.sync(this);
			switch ( this.interpreter.adaptivePredict(this._input, 16, this._ctx) ) {
			case 1:
				{
				this.state = 172;
				this.comment();
				}
				break;
			}
			this.state = 175;
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
			this.state = 177;
			this.asm();
			this.state = 179;
			this._errHandler.sync(this);
			_la = this._input.LA(1);
			if (_la === z80asmParser.DIRECTIVEelse) {
				{
				this.state = 178;
				this.directive_elseblock();
				}
			}

			this.state = 181;
			this.match(z80asmParser.DIRECTIVEendif);
			this.state = 182;
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
			this.state = 184;
			this.match(z80asmParser.DIRECTIVEelse);
			this.state = 185;
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
	public string(): StringContext {
		let _localctx: StringContext = new StringContext(this._ctx, this.state);
		this.enterRule(_localctx, 36, z80asmParser.RULE_string);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 187;
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
		this.enterRule(_localctx, 38, z80asmParser.RULE_character);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 189;
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
	public instruction(): InstructionContext {
		let _localctx: InstructionContext = new InstructionContext(this._ctx, this.state);
		this.enterRule(_localctx, 40, z80asmParser.RULE_instruction);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 191;
			this.match(z80asmParser.INSTRUCTION);
			}
		}
		catch (re) {
			if (re instanceof RecognitionException) {
				_localctx.exception = re;
				this._errHandler.reportError(this, re);
				this._errHandler.recover(this, re);
			} else {
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
		this.enterRule(_localctx, 42, z80asmParser.RULE_label);
		try {
			this.state = 197;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.T__2:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 193;
				this.match(z80asmParser.T__2);
				this.state = 194;
				this.match(z80asmParser.SYMBOL);
				}
				break;
			case z80asmParser.SYMBOL:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 195;
				this.match(z80asmParser.SYMBOL);
				this.state = 196;
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
		this.enterRule(_localctx, 44, z80asmParser.RULE_symbol);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 199;
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
		this.enterRule(_localctx, 46, z80asmParser.RULE_comment);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 201;
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
		let _startState: number = 48;
		this.enterRecursionRule(_localctx, 48, z80asmParser.RULE_expression, _p);
		try {
			let _alt: number;
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 210;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.NUMBERbin:
			case z80asmParser.NUMBERoct:
			case z80asmParser.NUMBERdec:
			case z80asmParser.NUMBERhex:
				{
				this.state = 204;
				this.number();
				}
				break;
			case z80asmParser.SYMBOL:
				{
				this.state = 205;
				this.symbol();
				}
				break;
			case z80asmParser.T__4:
				{
				this.state = 206;
				this.match(z80asmParser.T__4);
				this.state = 207;
				this.expression(0);
				this.state = 208;
				this.match(z80asmParser.T__5);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			this._ctx._stop = this._input.tryLT(-1);
			this.state = 218;
			this._errHandler.sync(this);
			_alt = this.interpreter.adaptivePredict(this._input, 20, this._ctx);
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
					this.state = 212;
					if (!(this.precpred(this._ctx, 4))) {
						throw new FailedPredicateException(this, "this.precpred(this._ctx, 4)");
					}
					this.state = 213;
					this.operator();
					this.state = 214;
					this.expression(5);
					}
					}
				}
				this.state = 220;
				this._errHandler.sync(this);
				_alt = this.interpreter.adaptivePredict(this._input, 20, this._ctx);
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
		this.enterRule(_localctx, 50, z80asmParser.RULE_operator);
		let _la: number;
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 221;
			_la = this._input.LA(1);
			if (!((((_la) & ~0x1F) === 0 && ((1 << _la) & ((1 << z80asmParser.OPERATORnum) | (1 << z80asmParser.OPERATORbit) | (1 << z80asmParser.OPERATORlogic))) !== 0))) {
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
		this.enterRule(_localctx, 52, z80asmParser.RULE_number);
		try {
			this.state = 227;
			this._errHandler.sync(this);
			switch (this._input.LA(1)) {
			case z80asmParser.NUMBERbin:
				this.enterOuterAlt(_localctx, 1);
				{
				this.state = 223;
				this.number_bin();
				}
				break;
			case z80asmParser.NUMBERoct:
				this.enterOuterAlt(_localctx, 2);
				{
				this.state = 224;
				this.number_oct();
				}
				break;
			case z80asmParser.NUMBERdec:
				this.enterOuterAlt(_localctx, 3);
				{
				this.state = 225;
				this.number_dec();
				}
				break;
			case z80asmParser.NUMBERhex:
				this.enterOuterAlt(_localctx, 4);
				{
				this.state = 226;
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
		this.enterRule(_localctx, 54, z80asmParser.RULE_number_bin);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 229;
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
		this.enterRule(_localctx, 56, z80asmParser.RULE_number_oct);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 231;
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
		this.enterRule(_localctx, 58, z80asmParser.RULE_number_dec);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 233;
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
		this.enterRule(_localctx, 60, z80asmParser.RULE_number_hex);
		try {
			this.enterOuterAlt(_localctx, 1);
			{
			this.state = 235;
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
		case 24:
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

	public static readonly _serializedATN: string =
		"\x03\uC91D\uCABA\u058D\uAFBA\u4F53\u0607\uEA8B\uC241\x03)\xF0\x04\x02" +
		"\t\x02\x04\x03\t\x03\x04\x04\t\x04\x04\x05\t\x05\x04\x06\t\x06\x04\x07" +
		"\t\x07\x04\b\t\b\x04\t\t\t\x04\n\t\n\x04\v\t\v\x04\f\t\f\x04\r\t\r\x04" +
		"\x0E\t\x0E\x04\x0F\t\x0F\x04\x10\t\x10\x04\x11\t\x11\x04\x12\t\x12\x04" +
		"\x13\t\x13\x04\x14\t\x14\x04\x15\t\x15\x04\x16\t\x16\x04\x17\t\x17\x04" +
		"\x18\t\x18\x04\x19\t\x19\x04\x1A\t\x1A\x04\x1B\t\x1B\x04\x1C\t\x1C\x04" +
		"\x1D\t\x1D\x04\x1E\t\x1E\x04\x1F\t\x1F\x04 \t \x03\x02\x05\x02B\n\x02" +
		"\x03\x02\x03\x02\x03\x03\x05\x03G\n\x03\x03\x03\x06\x03J\n\x03\r\x03\x0E" +
		"\x03K\x03\x04\x03\x04\x05\x04P\n\x04\x03\x04\x03\x04\x03\x04\x05\x04U" +
		"\n\x04\x03\x04\x05\x04X\n\x04\x03\x04\x03\x04\x05\x04\\\n\x04\x05\x04" +
		"^\n\x04\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05\x03\x05" +
		"\x03\x05\x03\x05\x03\x05\x05\x05k\n\x05\x03\x06\x03\x06\x03\x07\x03\x07" +
		"\x03\x07\x03\b\x03\b\x03\b\x03\t\x03\t\x03\t\x03\t\x07\ty\n\t\f\t\x0E" +
		"\t|\v\t\x03\n\x03\n\x03\n\x03\n\x03\v\x03\v\x03\v\x03\v\x07\v\x86\n\v" +
		"\f\v\x0E\v\x89\v\v\x03\f\x03\f\x03\f\x03\f\x05\f\x8F\n\f\x03\r\x03\r\x03" +
		"\r\x03\r\x07\r\x95\n\r\f\r\x0E\r\x98\v\r\x03\x0E\x03\x0E\x03\x0E\x05\x0E" +
		"\x9D\n\x0E\x03\x0F\x03\x0F\x03\x0F\x05\x0F\xA2\n\x0F\x03\x0F\x03\x0F\x03" +
		"\x10\x03\x10\x03\x10\x05\x10\xA9\n\x10\x03\x10\x03\x10\x03\x11\x03\x11" +
		"\x03\x11\x05\x11\xB0\n\x11\x03\x11\x03\x11\x03\x12\x03\x12\x05\x12\xB6" +
		"\n\x12\x03\x12\x03\x12\x03\x12\x03\x13\x03\x13\x03\x13\x03\x14\x03\x14" +
		"\x03\x15\x03\x15\x03\x16\x03\x16\x03\x17\x03\x17\x03\x17\x03\x17\x05\x17" +
		"\xC8\n\x17\x03\x18\x03\x18\x03\x19\x03\x19\x03\x1A\x03\x1A\x03\x1A\x03" +
		"\x1A\x03\x1A\x03\x1A\x03\x1A\x05\x1A\xD5\n\x1A\x03\x1A\x03\x1A\x03\x1A" +
		"\x03\x1A\x07\x1A\xDB\n\x1A\f\x1A\x0E\x1A\xDE\v\x1A\x03\x1B\x03\x1B\x03" +
		"\x1C\x03\x1C\x03\x1C\x03\x1C\x05\x1C\xE6\n\x1C\x03\x1D\x03\x1D\x03\x1E" +
		"\x03\x1E\x03\x1F\x03\x1F\x03 \x03 \x03 \x05z\x87\x96\x02\x032!\x02\x02" +
		"\x04\x02\x06\x02\b\x02\n\x02\f\x02\x0E\x02\x10\x02\x12\x02\x14\x02\x16" +
		"\x02\x18\x02\x1A\x02\x1C\x02\x1E\x02 \x02\"\x02$\x02&\x02(\x02*\x02,\x02" +
		".\x020\x022\x024\x026\x028\x02:\x02<\x02>\x02\x02\x04\x03\x03((\x03\x02" +
		"\x1F!\x02\xF5\x02A\x03\x02\x02\x02\x04I\x03\x02\x02\x02\x06]\x03\x02\x02" +
		"\x02\bj\x03\x02\x02\x02\nl\x03\x02\x02\x02\fn\x03\x02\x02\x02\x0Eq\x03" +
		"\x02\x02\x02\x10t\x03\x02\x02\x02\x12}\x03\x02\x02\x02\x14\x81\x03\x02" +
		"\x02\x02\x16\x8A\x03\x02\x02\x02\x18\x90\x03\x02\x02\x02\x1A\x9C\x03\x02" +
		"\x02\x02\x1C\x9E\x03\x02\x02\x02\x1E\xA5\x03\x02\x02\x02 \xAC\x03\x02" +
		"\x02\x02\"\xB3\x03\x02\x02\x02$\xBA\x03\x02\x02\x02&\xBD\x03\x02\x02\x02" +
		"(\xBF\x03\x02\x02\x02*\xC1\x03\x02\x02\x02,\xC7\x03\x02\x02\x02.\xC9\x03" +
		"\x02\x02\x020\xCB\x03\x02\x02\x022\xD4\x03\x02\x02\x024\xDF\x03\x02\x02" +
		"\x026\xE5\x03\x02\x02\x028\xE7\x03\x02\x02\x02:\xE9\x03\x02\x02\x02<\xEB" +
		"\x03\x02\x02\x02>\xED\x03\x02\x02\x02@B\x05\x04\x03\x02A@\x03\x02\x02" +
		"\x02AB\x03\x02\x02\x02BC\x03\x02\x02\x02CD\x07\x02\x02\x03D\x03\x03\x02" +
		"\x02\x02EG\x05\x06\x04\x02FE\x03\x02\x02\x02FG\x03\x02\x02\x02GH\x03\x02" +
		"\x02\x02HJ\x07(\x02\x02IF\x03\x02\x02\x02JK\x03\x02\x02\x02KI\x03\x02" +
		"\x02\x02KL\x03\x02\x02\x02L\x05\x03\x02\x02\x02MO\x05\b\x05\x02NP\x05" +
		"0\x19\x02ON\x03\x02\x02\x02OP\x03\x02\x02\x02P^\x03\x02\x02\x02Q^\x05" +
		"0\x19\x02RT\x05,\x17\x02SU\x050\x19\x02TS\x03\x02\x02\x02TU\x03\x02\x02" +
		"\x02U^\x03\x02\x02\x02VX\x05,\x17\x02WV\x03\x02\x02\x02WX\x03\x02\x02" +
		"\x02XY\x03\x02\x02\x02Y[\x05*\x16\x02Z\\\x050\x19\x02[Z\x03\x02\x02\x02" +
		"[\\\x03\x02\x02\x02\\^\x03\x02\x02\x02]M\x03\x02\x02\x02]Q\x03\x02\x02" +
		"\x02]R\x03\x02\x02\x02]W\x03\x02\x02\x02^\x07\x03\x02\x02\x02_k\x05\n" +
		"\x06\x02`k\x05\f\x07\x02ak\x05\x14\v\x02bk\x05\x0E\b\x02ck\x05\x10\t\x02" +
		"dk\x05\x12\n\x02ek\x05\x16\f\x02fk\x05\x18\r\x02gk\x05\x1C\x0F\x02hk\x05" +
		"\x1E\x10\x02ik\x05 \x11\x02j_\x03\x02\x02\x02j`\x03\x02\x02\x02ja\x03" +
		"\x02\x02\x02jb\x03\x02\x02\x02jc\x03\x02\x02\x02jd\x03\x02\x02\x02je\x03" +
		"\x02\x02\x02jf\x03\x02\x02\x02jg\x03\x02\x02\x02jh\x03\x02\x02\x02ji\x03" +
		"\x02\x02\x02k\t\x03\x02\x02\x02lm\x07\t\x02\x02m\v\x03\x02\x02\x02no\x07" +
		"\n\x02\x02op\x052\x1A\x02p\r\x03\x02\x02\x02qr\x07\v\x02\x02rs\x05.\x18" +
		"\x02s\x0F\x03\x02\x02\x02tu\x07\f\x02\x02uz\x05.\x18\x02vw\x07\x03\x02" +
		"\x02wy\x05.\x18\x02xv\x03\x02\x02\x02y|\x03\x02\x02\x02z{\x03\x02\x02" +
		"\x02zx\x03\x02\x02\x02{\x11\x03\x02\x02\x02|z\x03\x02\x02\x02}~\x07\r" +
		"\x02\x02~\x7F\x07\x04\x02\x02\x7F\x80\x052\x1A\x02\x80\x13\x03\x02\x02" +
		"\x02\x81\x82\x07\x10\x02\x02\x82\x87\x052\x1A\x02\x83\x84\x07\x03\x02" +
		"\x02\x84\x86\x052\x1A\x02\x85\x83\x03\x02\x02\x02\x86\x89\x03\x02\x02" +
		"\x02\x87\x88\x03\x02\x02\x02\x87\x85\x03\x02\x02\x02\x88\x15\x03\x02\x02" +
		"\x02\x89\x87\x03\x02\x02\x02\x8A\x8B\x07\x0E\x02\x02\x8B\x8E\x052\x1A" +
		"\x02\x8C\x8D\x07\x03\x02\x02\x8D\x8F\x052\x1A\x02\x8E\x8C\x03\x02\x02" +
		"\x02\x8E\x8F\x03\x02\x02\x02\x8F\x17\x03\x02\x02\x02\x90\x91\x07\x0F\x02" +
		"\x02\x91\x96\x05\x1A\x0E\x02\x92\x93\x07\x03\x02\x02\x93\x95\x05\x1A\x0E" +
		"\x02\x94\x92\x03\x02\x02\x02\x95\x98\x03\x02\x02\x02\x96\x97\x03\x02\x02" +
		"\x02\x96\x94\x03\x02\x02\x02\x97\x19\x03\x02\x02\x02\x98\x96\x03\x02\x02" +
		"\x02\x99\x9D\x05&\x14\x02\x9A\x9D\x05(\x15\x02\x9B\x9D\x052\x1A\x02\x9C" +
		"\x99\x03\x02\x02\x02\x9C\x9A\x03\x02\x02\x02\x9C\x9B\x03\x02\x02\x02\x9D" +
		"\x1B\x03\x02\x02\x02\x9E\x9F\x07\x13\x02\x02\x9F\xA1\x052\x1A\x02\xA0" +
		"\xA2\x050\x19\x02\xA1\xA0\x03\x02\x02\x02\xA1\xA2\x03\x02\x02\x02\xA2" +
		"\xA3\x03\x02\x02\x02\xA3\xA4\x05\"\x12\x02\xA4\x1D\x03\x02\x02\x02\xA5" +
		"\xA6\x07\x14\x02\x02\xA6\xA8\x05.\x18\x02\xA7\xA9\x050\x19\x02\xA8\xA7" +
		"\x03\x02\x02\x02\xA8\xA9\x03\x02\x02\x02\xA9\xAA\x03\x02\x02\x02\xAA\xAB" +
		"\x05\"\x12\x02\xAB\x1F\x03\x02\x02\x02\xAC\xAD\x07\x15\x02\x02\xAD\xAF" +
		"\x05.\x18\x02\xAE\xB0\x050\x19\x02\xAF\xAE\x03\x02\x02\x02\xAF\xB0\x03" +
		"\x02\x02\x02\xB0\xB1\x03\x02\x02\x02\xB1\xB2\x05\"\x12\x02\xB2!\x03\x02" +
		"\x02\x02\xB3\xB5\x05\x04\x03\x02\xB4\xB6\x05$\x13\x02\xB5\xB4\x03\x02" +
		"\x02\x02\xB5\xB6\x03\x02\x02\x02\xB6\xB7\x03\x02\x02\x02\xB7\xB8\x07\x17" +
		"\x02\x02\xB8\xB9\t\x02\x02\x02\xB9#\x03\x02\x02\x02\xBA\xBB\x07\x16\x02" +
		"\x02\xBB\xBC\x05\x04\x03\x02\xBC%\x03\x02\x02\x02\xBD\xBE\x07\'\x02\x02" +
		"\xBE\'\x03\x02\x02\x02\xBF\xC0\x07&\x02\x02\xC0)\x03\x02\x02\x02\xC1\xC2" +
		"\x07\x18\x02\x02\xC2+\x03\x02\x02\x02\xC3\xC4\x07\x05\x02\x02\xC4\xC8" +
		"\x07\x1D\x02\x02\xC5\xC6\x07\x1D\x02\x02\xC6\xC8\x07\x06\x02\x02\xC7\xC3" +
		"\x03\x02\x02\x02\xC7\xC5\x03\x02\x02\x02\xC8-\x03\x02\x02\x02\xC9\xCA" +
		"\x07\x1D\x02\x02\xCA/\x03\x02\x02\x02\xCB\xCC\x07\x1E\x02\x02\xCC1\x03" +
		"\x02\x02\x02\xCD\xCE\b\x1A\x01\x02\xCE\xD5\x056\x1C\x02\xCF\xD5\x05.\x18" +
		"\x02\xD0\xD1\x07\x07\x02\x02\xD1\xD2\x052\x1A\x02\xD2\xD3\x07\b\x02\x02" +
		"\xD3\xD5\x03\x02\x02\x02\xD4\xCD\x03\x02\x02\x02\xD4\xCF\x03\x02\x02\x02" +
		"\xD4\xD0\x03\x02\x02\x02\xD5\xDC\x03\x02\x02\x02\xD6\xD7\f\x06\x02\x02" +
		"\xD7\xD8\x054\x1B\x02\xD8\xD9\x052\x1A\x07\xD9\xDB\x03\x02\x02\x02\xDA" +
		"\xD6\x03\x02\x02\x02\xDB\xDE\x03\x02\x02\x02\xDC\xDA\x03\x02\x02\x02\xDC" +
		"\xDD\x03\x02\x02\x02\xDD3\x03\x02\x02\x02\xDE\xDC\x03\x02\x02\x02\xDF" +
		"\xE0\t\x03\x02\x02\xE05\x03\x02\x02\x02\xE1\xE6\x058\x1D\x02\xE2\xE6\x05" +
		":\x1E\x02\xE3\xE6\x05<\x1F\x02\xE4\xE6\x05> \x02\xE5\xE1\x03\x02\x02\x02" +
		"\xE5\xE2\x03\x02\x02\x02\xE5\xE3\x03\x02\x02\x02\xE5\xE4\x03\x02\x02\x02" +
		"\xE67\x03\x02\x02\x02\xE7\xE8\x07\"\x02\x02\xE89\x03\x02\x02\x02\xE9\xEA" +
		"\x07#\x02\x02\xEA;\x03\x02\x02\x02\xEB\xEC\x07$\x02\x02\xEC=\x03\x02\x02" +
		"\x02\xED\xEE\x07%\x02\x02\xEE?\x03\x02\x02\x02\x18AFKOTW[]jz\x87\x8E\x96" +
		"\x9C\xA1\xA8\xAF\xB5\xC7\xD4\xDC\xE5";
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
	public expression(): ExpressionContext | undefined {
		return this.tryGetRuleContext(0, ExpressionContext);
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


export class InstructionContext extends ParserRuleContext {
	public INSTRUCTION(): TerminalNode { return this.getToken(z80asmParser.INSTRUCTION, 0); }
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



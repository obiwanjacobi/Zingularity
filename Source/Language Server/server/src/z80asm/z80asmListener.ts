// Generated from .\server\src\z80asm\z80asm.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeListener } from "antlr4ts/tree/ParseTreeListener";

import { FileContext } from "./z80asmParser";
import { AsmContext } from "./z80asmParser";
import { LineContext } from "./z80asmParser";
import { DirectiveContext } from "./z80asmParser";
import { Directive_voidContext } from "./z80asmParser";
import { Directive_paramContext } from "./z80asmParser";
import { Directive_symbolContext } from "./z80asmParser";
import { Directive_symbollistContext } from "./z80asmParser";
import { Directive_assignContext } from "./z80asmParser";
import { Directive_blockContext } from "./z80asmParser";
import { Directive_defsContext } from "./z80asmParser";
import { Directive_defmContext } from "./z80asmParser";
import { DefmparamContext } from "./z80asmParser";
import { Directive_ifContext } from "./z80asmParser";
import { Directive_ifdefContext } from "./z80asmParser";
import { Directive_ifndefContext } from "./z80asmParser";
import { Directive_ifblockContext } from "./z80asmParser";
import { Directive_elseblockContext } from "./z80asmParser";
import { StringContext } from "./z80asmParser";
import { CharacterContext } from "./z80asmParser";
import { InstructionContext } from "./z80asmParser";
import { LabelContext } from "./z80asmParser";
import { SymbolContext } from "./z80asmParser";
import { CommentContext } from "./z80asmParser";
import { ExpressionContext } from "./z80asmParser";
import { OperatorContext } from "./z80asmParser";
import { NumberContext } from "./z80asmParser";
import { Number_binContext } from "./z80asmParser";
import { Number_octContext } from "./z80asmParser";
import { Number_decContext } from "./z80asmParser";
import { Number_hexContext } from "./z80asmParser";


/**
 * This interface defines a complete listener for a parse tree produced by
 * `z80asmParser`.
 */
export interface z80asmListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by `z80asmParser.file`.
	 * @param ctx the parse tree
	 */
	enterFile?: (ctx: FileContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.file`.
	 * @param ctx the parse tree
	 */
	exitFile?: (ctx: FileContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.asm`.
	 * @param ctx the parse tree
	 */
	enterAsm?: (ctx: AsmContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.asm`.
	 * @param ctx the parse tree
	 */
	exitAsm?: (ctx: AsmContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.line`.
	 * @param ctx the parse tree
	 */
	enterLine?: (ctx: LineContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.line`.
	 * @param ctx the parse tree
	 */
	exitLine?: (ctx: LineContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive`.
	 * @param ctx the parse tree
	 */
	enterDirective?: (ctx: DirectiveContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive`.
	 * @param ctx the parse tree
	 */
	exitDirective?: (ctx: DirectiveContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_void`.
	 * @param ctx the parse tree
	 */
	enterDirective_void?: (ctx: Directive_voidContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_void`.
	 * @param ctx the parse tree
	 */
	exitDirective_void?: (ctx: Directive_voidContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_param`.
	 * @param ctx the parse tree
	 */
	enterDirective_param?: (ctx: Directive_paramContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_param`.
	 * @param ctx the parse tree
	 */
	exitDirective_param?: (ctx: Directive_paramContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_symbol`.
	 * @param ctx the parse tree
	 */
	enterDirective_symbol?: (ctx: Directive_symbolContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_symbol`.
	 * @param ctx the parse tree
	 */
	exitDirective_symbol?: (ctx: Directive_symbolContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_symbollist`.
	 * @param ctx the parse tree
	 */
	enterDirective_symbollist?: (ctx: Directive_symbollistContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_symbollist`.
	 * @param ctx the parse tree
	 */
	exitDirective_symbollist?: (ctx: Directive_symbollistContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_assign`.
	 * @param ctx the parse tree
	 */
	enterDirective_assign?: (ctx: Directive_assignContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_assign`.
	 * @param ctx the parse tree
	 */
	exitDirective_assign?: (ctx: Directive_assignContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_block`.
	 * @param ctx the parse tree
	 */
	enterDirective_block?: (ctx: Directive_blockContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_block`.
	 * @param ctx the parse tree
	 */
	exitDirective_block?: (ctx: Directive_blockContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_defs`.
	 * @param ctx the parse tree
	 */
	enterDirective_defs?: (ctx: Directive_defsContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_defs`.
	 * @param ctx the parse tree
	 */
	exitDirective_defs?: (ctx: Directive_defsContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_defm`.
	 * @param ctx the parse tree
	 */
	enterDirective_defm?: (ctx: Directive_defmContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_defm`.
	 * @param ctx the parse tree
	 */
	exitDirective_defm?: (ctx: Directive_defmContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.defmparam`.
	 * @param ctx the parse tree
	 */
	enterDefmparam?: (ctx: DefmparamContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.defmparam`.
	 * @param ctx the parse tree
	 */
	exitDefmparam?: (ctx: DefmparamContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_if`.
	 * @param ctx the parse tree
	 */
	enterDirective_if?: (ctx: Directive_ifContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_if`.
	 * @param ctx the parse tree
	 */
	exitDirective_if?: (ctx: Directive_ifContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_ifdef`.
	 * @param ctx the parse tree
	 */
	enterDirective_ifdef?: (ctx: Directive_ifdefContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_ifdef`.
	 * @param ctx the parse tree
	 */
	exitDirective_ifdef?: (ctx: Directive_ifdefContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_ifndef`.
	 * @param ctx the parse tree
	 */
	enterDirective_ifndef?: (ctx: Directive_ifndefContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_ifndef`.
	 * @param ctx the parse tree
	 */
	exitDirective_ifndef?: (ctx: Directive_ifndefContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_ifblock`.
	 * @param ctx the parse tree
	 */
	enterDirective_ifblock?: (ctx: Directive_ifblockContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_ifblock`.
	 * @param ctx the parse tree
	 */
	exitDirective_ifblock?: (ctx: Directive_ifblockContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_elseblock`.
	 * @param ctx the parse tree
	 */
	enterDirective_elseblock?: (ctx: Directive_elseblockContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_elseblock`.
	 * @param ctx the parse tree
	 */
	exitDirective_elseblock?: (ctx: Directive_elseblockContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.string`.
	 * @param ctx the parse tree
	 */
	enterString?: (ctx: StringContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.string`.
	 * @param ctx the parse tree
	 */
	exitString?: (ctx: StringContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.character`.
	 * @param ctx the parse tree
	 */
	enterCharacter?: (ctx: CharacterContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.character`.
	 * @param ctx the parse tree
	 */
	exitCharacter?: (ctx: CharacterContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction`.
	 * @param ctx the parse tree
	 */
	enterInstruction?: (ctx: InstructionContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction`.
	 * @param ctx the parse tree
	 */
	exitInstruction?: (ctx: InstructionContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.label`.
	 * @param ctx the parse tree
	 */
	enterLabel?: (ctx: LabelContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.label`.
	 * @param ctx the parse tree
	 */
	exitLabel?: (ctx: LabelContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.symbol`.
	 * @param ctx the parse tree
	 */
	enterSymbol?: (ctx: SymbolContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.symbol`.
	 * @param ctx the parse tree
	 */
	exitSymbol?: (ctx: SymbolContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.comment`.
	 * @param ctx the parse tree
	 */
	enterComment?: (ctx: CommentContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.comment`.
	 * @param ctx the parse tree
	 */
	exitComment?: (ctx: CommentContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.expression`.
	 * @param ctx the parse tree
	 */
	enterExpression?: (ctx: ExpressionContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.expression`.
	 * @param ctx the parse tree
	 */
	exitExpression?: (ctx: ExpressionContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.operator`.
	 * @param ctx the parse tree
	 */
	enterOperator?: (ctx: OperatorContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.operator`.
	 * @param ctx the parse tree
	 */
	exitOperator?: (ctx: OperatorContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.number`.
	 * @param ctx the parse tree
	 */
	enterNumber?: (ctx: NumberContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.number`.
	 * @param ctx the parse tree
	 */
	exitNumber?: (ctx: NumberContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.number_bin`.
	 * @param ctx the parse tree
	 */
	enterNumber_bin?: (ctx: Number_binContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.number_bin`.
	 * @param ctx the parse tree
	 */
	exitNumber_bin?: (ctx: Number_binContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.number_oct`.
	 * @param ctx the parse tree
	 */
	enterNumber_oct?: (ctx: Number_octContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.number_oct`.
	 * @param ctx the parse tree
	 */
	exitNumber_oct?: (ctx: Number_octContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.number_dec`.
	 * @param ctx the parse tree
	 */
	enterNumber_dec?: (ctx: Number_decContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.number_dec`.
	 * @param ctx the parse tree
	 */
	exitNumber_dec?: (ctx: Number_decContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.number_hex`.
	 * @param ctx the parse tree
	 */
	enterNumber_hex?: (ctx: Number_hexContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.number_hex`.
	 * @param ctx the parse tree
	 */
	exitNumber_hex?: (ctx: Number_hexContext) => void;
}


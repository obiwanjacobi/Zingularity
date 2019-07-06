// Generated from .\server\src\z80asm\z80asm.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeVisitor } from "antlr4ts/tree/ParseTreeVisitor";

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
 * This interface defines a complete generic visitor for a parse tree produced
 * by `z80asmParser`.
 *
 * @param <Result> The return type of the visit operation. Use `void` for
 * operations with no return type.
 */
export interface z80asmVisitor<Result> extends ParseTreeVisitor<Result> {
	/**
	 * Visit a parse tree produced by `z80asmParser.file`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitFile?: (ctx: FileContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.asm`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitAsm?: (ctx: AsmContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.line`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitLine?: (ctx: LineContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective?: (ctx: DirectiveContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_void`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_void?: (ctx: Directive_voidContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_param`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_param?: (ctx: Directive_paramContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_symbol`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_symbol?: (ctx: Directive_symbolContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_symbollist`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_symbollist?: (ctx: Directive_symbollistContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_assign`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_assign?: (ctx: Directive_assignContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_block`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_block?: (ctx: Directive_blockContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_defs`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_defs?: (ctx: Directive_defsContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_defm`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_defm?: (ctx: Directive_defmContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.defmparam`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDefmparam?: (ctx: DefmparamContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_if`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_if?: (ctx: Directive_ifContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_ifdef`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_ifdef?: (ctx: Directive_ifdefContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_ifndef`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_ifndef?: (ctx: Directive_ifndefContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_ifblock`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_ifblock?: (ctx: Directive_ifblockContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_elseblock`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_elseblock?: (ctx: Directive_elseblockContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.string`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitString?: (ctx: StringContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.character`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitCharacter?: (ctx: CharacterContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction?: (ctx: InstructionContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.label`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitLabel?: (ctx: LabelContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.symbol`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitSymbol?: (ctx: SymbolContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.comment`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitComment?: (ctx: CommentContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.expression`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpression?: (ctx: ExpressionContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.operator`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitOperator?: (ctx: OperatorContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.number`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitNumber?: (ctx: NumberContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.number_bin`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitNumber_bin?: (ctx: Number_binContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.number_oct`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitNumber_oct?: (ctx: Number_octContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.number_dec`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitNumber_dec?: (ctx: Number_decContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.number_hex`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitNumber_hex?: (ctx: Number_hexContext) => Result;
}


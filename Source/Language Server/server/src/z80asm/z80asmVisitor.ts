// Generated from c:\Users\marc\Documents\MyProjects\Zalt\Zingularity\Source\Language Server\server\src\z80asm\z80asm.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeVisitor } from "antlr4ts/tree/ParseTreeVisitor";

import { FileContext } from "./z80asmParser";
import { AsmContext } from "./z80asmParser";
import { LineContext } from "./z80asmParser";
import { DirectiveContext } from "./z80asmParser";
import { Directive_voidContext } from "./z80asmParser";
import { Directive_fileContext } from "./z80asmParser";
import { Directive_param16Context } from "./z80asmParser";
import { Directive_param32Context } from "./z80asmParser";
import { Directive_symbolContext } from "./z80asmParser";
import { Directive_symbollistContext } from "./z80asmParser";
import { Directive_assignContext } from "./z80asmParser";
import { Directive_blockContext } from "./z80asmParser";
import { Directive_defsContext } from "./z80asmParser";
import { Directive_defmContext } from "./z80asmParser";
import { DefmparamContext } from "./z80asmParser";
import { Directive_dcContext } from "./z80asmParser";
import { Directive_ifContext } from "./z80asmParser";
import { Directive_ifdefContext } from "./z80asmParser";
import { Directive_ifblockContext } from "./z80asmParser";
import { Directive_elseblockContext } from "./z80asmParser";
import { Directive_endifContext } from "./z80asmParser";
import { Directive_phaseContext } from "./z80asmParser";
import { InstructionContext } from "./z80asmParser";
import { Instruction_voidContext } from "./z80asmParser";
import { Instruction_ld8Context } from "./z80asmParser";
import { Instruction_ld16Context } from "./z80asmParser";
import { Instruction_stackContext } from "./z80asmParser";
import { Instruction_exchangeContext } from "./z80asmParser";
import { Instruction_arithmetic8Context } from "./z80asmParser";
import { Instruction_incdec8Context } from "./z80asmParser";
import { Instruction_cplContext } from "./z80asmParser";
import { Instruction_arithemic16Context } from "./z80asmParser";
import { Instruction_incdec16Context } from "./z80asmParser";
import { Instruction_rotateContext } from "./z80asmParser";
import { Instruction_rotatedecContext } from "./z80asmParser";
import { Instruction_bitContext } from "./z80asmParser";
import { BitindexContext } from "./z80asmParser";
import { Instruction_jumpContext } from "./z80asmParser";
import { Instruction_callContext } from "./z80asmParser";
import { Instruction_conditionFlagsAllContext } from "./z80asmParser";
import { Instruction_conditionFlagsContext } from "./z80asmParser";
import { Instruction_rstContext } from "./z80asmParser";
import { Instruction_imContext } from "./z80asmParser";
import { Instruction_ioContext } from "./z80asmParser";
import { Offset_exContext } from "./z80asmParser";
import { Offset_relContext } from "./z80asmParser";
import { RegistersContext } from "./z80asmParser";
import { Registers8Context } from "./z80asmParser";
import { Registers8xContext } from "./z80asmParser";
import { Registers8yContext } from "./z80asmParser";
import { Register16_grpafContext } from "./z80asmParser";
import { Register16_grpspContext } from "./z80asmParser";
import { Register16_grpsphlContext } from "./z80asmParser";
import { Register16_grpspixContext } from "./z80asmParser";
import { Register16_grpspiyContext } from "./z80asmParser";
import { Register16_exContext } from "./z80asmParser";
import { LabelContext } from "./z80asmParser";
import { SymbolContext } from "./z80asmParser";
import { BlockcommentContext } from "./z80asmParser";
import { CommentContext } from "./z80asmParser";
import { Expression8Context } from "./z80asmParser";
import { Expression16Context } from "./z80asmParser";
import { Expression32Context } from "./z80asmParser";
import { ExpressionContext } from "./z80asmParser";
import { OperatorContext } from "./z80asmParser";
import { Operator_numContext } from "./z80asmParser";
import { Operator_bitContext } from "./z80asmParser";
import { Operator_logicContext } from "./z80asmParser";
import { Operator_offsetContext } from "./z80asmParser";
import { NumberContext } from "./z80asmParser";
import { Number_binContext } from "./z80asmParser";
import { Number_octContext } from "./z80asmParser";
import { Number_decContext } from "./z80asmParser";
import { Number_hexContext } from "./z80asmParser";
import { Number_charContext } from "./z80asmParser";


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
	 * Visit a parse tree produced by `z80asmParser.directive_file`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_file?: (ctx: Directive_fileContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_param16`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_param16?: (ctx: Directive_param16Context) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_param32`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_param32?: (ctx: Directive_param32Context) => Result;

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
	 * Visit a parse tree produced by `z80asmParser.directive_dc`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_dc?: (ctx: Directive_dcContext) => Result;

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
	 * Visit a parse tree produced by `z80asmParser.directive_endif`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_endif?: (ctx: Directive_endifContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.directive_phase`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitDirective_phase?: (ctx: Directive_phaseContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction?: (ctx: InstructionContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_void`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_void?: (ctx: Instruction_voidContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_ld8`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_ld8?: (ctx: Instruction_ld8Context) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_ld16`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_ld16?: (ctx: Instruction_ld16Context) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_stack`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_stack?: (ctx: Instruction_stackContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_exchange`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_exchange?: (ctx: Instruction_exchangeContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_arithmetic8`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_arithmetic8?: (ctx: Instruction_arithmetic8Context) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_incdec8`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_incdec8?: (ctx: Instruction_incdec8Context) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_cpl`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_cpl?: (ctx: Instruction_cplContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_arithemic16`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_arithemic16?: (ctx: Instruction_arithemic16Context) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_incdec16`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_incdec16?: (ctx: Instruction_incdec16Context) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_rotate`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_rotate?: (ctx: Instruction_rotateContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_rotatedec`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_rotatedec?: (ctx: Instruction_rotatedecContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_bit`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_bit?: (ctx: Instruction_bitContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.bitindex`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitBitindex?: (ctx: BitindexContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_jump`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_jump?: (ctx: Instruction_jumpContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_call`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_call?: (ctx: Instruction_callContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_conditionFlagsAll`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_conditionFlagsAll?: (ctx: Instruction_conditionFlagsAllContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_conditionFlags`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_conditionFlags?: (ctx: Instruction_conditionFlagsContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_rst`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_rst?: (ctx: Instruction_rstContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_im`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_im?: (ctx: Instruction_imContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.instruction_io`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitInstruction_io?: (ctx: Instruction_ioContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.offset_ex`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitOffset_ex?: (ctx: Offset_exContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.offset_rel`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitOffset_rel?: (ctx: Offset_relContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.registers`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitRegisters?: (ctx: RegistersContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.registers8`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitRegisters8?: (ctx: Registers8Context) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.registers8x`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitRegisters8x?: (ctx: Registers8xContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.registers8y`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitRegisters8y?: (ctx: Registers8yContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.register16_grpaf`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitRegister16_grpaf?: (ctx: Register16_grpafContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.register16_grpsp`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitRegister16_grpsp?: (ctx: Register16_grpspContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.register16_grpsphl`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitRegister16_grpsphl?: (ctx: Register16_grpsphlContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.register16_grpspix`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitRegister16_grpspix?: (ctx: Register16_grpspixContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.register16_grpspiy`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitRegister16_grpspiy?: (ctx: Register16_grpspiyContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.register16_ex`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitRegister16_ex?: (ctx: Register16_exContext) => Result;

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
	 * Visit a parse tree produced by `z80asmParser.blockcomment`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitBlockcomment?: (ctx: BlockcommentContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.comment`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitComment?: (ctx: CommentContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.expression8`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpression8?: (ctx: Expression8Context) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.expression16`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpression16?: (ctx: Expression16Context) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.expression32`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitExpression32?: (ctx: Expression32Context) => Result;

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
	 * Visit a parse tree produced by `z80asmParser.operator_num`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitOperator_num?: (ctx: Operator_numContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.operator_bit`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitOperator_bit?: (ctx: Operator_bitContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.operator_logic`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitOperator_logic?: (ctx: Operator_logicContext) => Result;

	/**
	 * Visit a parse tree produced by `z80asmParser.operator_offset`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitOperator_offset?: (ctx: Operator_offsetContext) => Result;

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

	/**
	 * Visit a parse tree produced by `z80asmParser.number_char`.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	visitNumber_char?: (ctx: Number_charContext) => Result;
}


// Generated from .\server\src\z80asm\z80asm.g4 by ANTLR 4.7.3-SNAPSHOT


import { ParseTreeListener } from "antlr4ts/tree/ParseTreeListener";

import { FileContext } from "./z80asmParser";
import { AsmContext } from "./z80asmParser";
import { LineContext } from "./z80asmParser";
import { DirectiveContext } from "./z80asmParser";
import { Directive_voidContext } from "./z80asmParser";
import { Directive_fileContext } from "./z80asmParser";
import { FilenameContext } from "./z80asmParser";
import { Directive_param16Context } from "./z80asmParser";
import { Directive_param32Context } from "./z80asmParser";
import { Directive_symbolContext } from "./z80asmParser";
import { Directive_symbollistContext } from "./z80asmParser";
import { Directive_assignContext } from "./z80asmParser";
import { Directive_blockContext } from "./z80asmParser";
import { Directive_defsContext } from "./z80asmParser";
import { Directive_defmContext } from "./z80asmParser";
import { DefmparamContext } from "./z80asmParser";
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
import { StringContext } from "./z80asmParser";
import { CharacterContext } from "./z80asmParser";
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
	 * Enter a parse tree produced by `z80asmParser.directive_file`.
	 * @param ctx the parse tree
	 */
	enterDirective_file?: (ctx: Directive_fileContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_file`.
	 * @param ctx the parse tree
	 */
	exitDirective_file?: (ctx: Directive_fileContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.filename`.
	 * @param ctx the parse tree
	 */
	enterFilename?: (ctx: FilenameContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.filename`.
	 * @param ctx the parse tree
	 */
	exitFilename?: (ctx: FilenameContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_param16`.
	 * @param ctx the parse tree
	 */
	enterDirective_param16?: (ctx: Directive_param16Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_param16`.
	 * @param ctx the parse tree
	 */
	exitDirective_param16?: (ctx: Directive_param16Context) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_param32`.
	 * @param ctx the parse tree
	 */
	enterDirective_param32?: (ctx: Directive_param32Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_param32`.
	 * @param ctx the parse tree
	 */
	exitDirective_param32?: (ctx: Directive_param32Context) => void;

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
	 * Enter a parse tree produced by `z80asmParser.directive_endif`.
	 * @param ctx the parse tree
	 */
	enterDirective_endif?: (ctx: Directive_endifContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_endif`.
	 * @param ctx the parse tree
	 */
	exitDirective_endif?: (ctx: Directive_endifContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.directive_phase`.
	 * @param ctx the parse tree
	 */
	enterDirective_phase?: (ctx: Directive_phaseContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.directive_phase`.
	 * @param ctx the parse tree
	 */
	exitDirective_phase?: (ctx: Directive_phaseContext) => void;

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
	 * Enter a parse tree produced by `z80asmParser.instruction_void`.
	 * @param ctx the parse tree
	 */
	enterInstruction_void?: (ctx: Instruction_voidContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_void`.
	 * @param ctx the parse tree
	 */
	exitInstruction_void?: (ctx: Instruction_voidContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_ld8`.
	 * @param ctx the parse tree
	 */
	enterInstruction_ld8?: (ctx: Instruction_ld8Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_ld8`.
	 * @param ctx the parse tree
	 */
	exitInstruction_ld8?: (ctx: Instruction_ld8Context) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_ld16`.
	 * @param ctx the parse tree
	 */
	enterInstruction_ld16?: (ctx: Instruction_ld16Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_ld16`.
	 * @param ctx the parse tree
	 */
	exitInstruction_ld16?: (ctx: Instruction_ld16Context) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_stack`.
	 * @param ctx the parse tree
	 */
	enterInstruction_stack?: (ctx: Instruction_stackContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_stack`.
	 * @param ctx the parse tree
	 */
	exitInstruction_stack?: (ctx: Instruction_stackContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_exchange`.
	 * @param ctx the parse tree
	 */
	enterInstruction_exchange?: (ctx: Instruction_exchangeContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_exchange`.
	 * @param ctx the parse tree
	 */
	exitInstruction_exchange?: (ctx: Instruction_exchangeContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_arithmetic8`.
	 * @param ctx the parse tree
	 */
	enterInstruction_arithmetic8?: (ctx: Instruction_arithmetic8Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_arithmetic8`.
	 * @param ctx the parse tree
	 */
	exitInstruction_arithmetic8?: (ctx: Instruction_arithmetic8Context) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_incdec8`.
	 * @param ctx the parse tree
	 */
	enterInstruction_incdec8?: (ctx: Instruction_incdec8Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_incdec8`.
	 * @param ctx the parse tree
	 */
	exitInstruction_incdec8?: (ctx: Instruction_incdec8Context) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_cpl`.
	 * @param ctx the parse tree
	 */
	enterInstruction_cpl?: (ctx: Instruction_cplContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_cpl`.
	 * @param ctx the parse tree
	 */
	exitInstruction_cpl?: (ctx: Instruction_cplContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_arithemic16`.
	 * @param ctx the parse tree
	 */
	enterInstruction_arithemic16?: (ctx: Instruction_arithemic16Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_arithemic16`.
	 * @param ctx the parse tree
	 */
	exitInstruction_arithemic16?: (ctx: Instruction_arithemic16Context) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_incdec16`.
	 * @param ctx the parse tree
	 */
	enterInstruction_incdec16?: (ctx: Instruction_incdec16Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_incdec16`.
	 * @param ctx the parse tree
	 */
	exitInstruction_incdec16?: (ctx: Instruction_incdec16Context) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_rotate`.
	 * @param ctx the parse tree
	 */
	enterInstruction_rotate?: (ctx: Instruction_rotateContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_rotate`.
	 * @param ctx the parse tree
	 */
	exitInstruction_rotate?: (ctx: Instruction_rotateContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_rotatedec`.
	 * @param ctx the parse tree
	 */
	enterInstruction_rotatedec?: (ctx: Instruction_rotatedecContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_rotatedec`.
	 * @param ctx the parse tree
	 */
	exitInstruction_rotatedec?: (ctx: Instruction_rotatedecContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_bit`.
	 * @param ctx the parse tree
	 */
	enterInstruction_bit?: (ctx: Instruction_bitContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_bit`.
	 * @param ctx the parse tree
	 */
	exitInstruction_bit?: (ctx: Instruction_bitContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.bitindex`.
	 * @param ctx the parse tree
	 */
	enterBitindex?: (ctx: BitindexContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.bitindex`.
	 * @param ctx the parse tree
	 */
	exitBitindex?: (ctx: BitindexContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_jump`.
	 * @param ctx the parse tree
	 */
	enterInstruction_jump?: (ctx: Instruction_jumpContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_jump`.
	 * @param ctx the parse tree
	 */
	exitInstruction_jump?: (ctx: Instruction_jumpContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_call`.
	 * @param ctx the parse tree
	 */
	enterInstruction_call?: (ctx: Instruction_callContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_call`.
	 * @param ctx the parse tree
	 */
	exitInstruction_call?: (ctx: Instruction_callContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_conditionFlagsAll`.
	 * @param ctx the parse tree
	 */
	enterInstruction_conditionFlagsAll?: (ctx: Instruction_conditionFlagsAllContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_conditionFlagsAll`.
	 * @param ctx the parse tree
	 */
	exitInstruction_conditionFlagsAll?: (ctx: Instruction_conditionFlagsAllContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_conditionFlags`.
	 * @param ctx the parse tree
	 */
	enterInstruction_conditionFlags?: (ctx: Instruction_conditionFlagsContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_conditionFlags`.
	 * @param ctx the parse tree
	 */
	exitInstruction_conditionFlags?: (ctx: Instruction_conditionFlagsContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_rst`.
	 * @param ctx the parse tree
	 */
	enterInstruction_rst?: (ctx: Instruction_rstContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_rst`.
	 * @param ctx the parse tree
	 */
	exitInstruction_rst?: (ctx: Instruction_rstContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_im`.
	 * @param ctx the parse tree
	 */
	enterInstruction_im?: (ctx: Instruction_imContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_im`.
	 * @param ctx the parse tree
	 */
	exitInstruction_im?: (ctx: Instruction_imContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.instruction_io`.
	 * @param ctx the parse tree
	 */
	enterInstruction_io?: (ctx: Instruction_ioContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.instruction_io`.
	 * @param ctx the parse tree
	 */
	exitInstruction_io?: (ctx: Instruction_ioContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.offset_ex`.
	 * @param ctx the parse tree
	 */
	enterOffset_ex?: (ctx: Offset_exContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.offset_ex`.
	 * @param ctx the parse tree
	 */
	exitOffset_ex?: (ctx: Offset_exContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.offset_rel`.
	 * @param ctx the parse tree
	 */
	enterOffset_rel?: (ctx: Offset_relContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.offset_rel`.
	 * @param ctx the parse tree
	 */
	exitOffset_rel?: (ctx: Offset_relContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.registers`.
	 * @param ctx the parse tree
	 */
	enterRegisters?: (ctx: RegistersContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.registers`.
	 * @param ctx the parse tree
	 */
	exitRegisters?: (ctx: RegistersContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.registers8`.
	 * @param ctx the parse tree
	 */
	enterRegisters8?: (ctx: Registers8Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.registers8`.
	 * @param ctx the parse tree
	 */
	exitRegisters8?: (ctx: Registers8Context) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.registers8x`.
	 * @param ctx the parse tree
	 */
	enterRegisters8x?: (ctx: Registers8xContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.registers8x`.
	 * @param ctx the parse tree
	 */
	exitRegisters8x?: (ctx: Registers8xContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.registers8y`.
	 * @param ctx the parse tree
	 */
	enterRegisters8y?: (ctx: Registers8yContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.registers8y`.
	 * @param ctx the parse tree
	 */
	exitRegisters8y?: (ctx: Registers8yContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.register16_grpaf`.
	 * @param ctx the parse tree
	 */
	enterRegister16_grpaf?: (ctx: Register16_grpafContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.register16_grpaf`.
	 * @param ctx the parse tree
	 */
	exitRegister16_grpaf?: (ctx: Register16_grpafContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.register16_grpsp`.
	 * @param ctx the parse tree
	 */
	enterRegister16_grpsp?: (ctx: Register16_grpspContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.register16_grpsp`.
	 * @param ctx the parse tree
	 */
	exitRegister16_grpsp?: (ctx: Register16_grpspContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.register16_grpsphl`.
	 * @param ctx the parse tree
	 */
	enterRegister16_grpsphl?: (ctx: Register16_grpsphlContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.register16_grpsphl`.
	 * @param ctx the parse tree
	 */
	exitRegister16_grpsphl?: (ctx: Register16_grpsphlContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.register16_grpspix`.
	 * @param ctx the parse tree
	 */
	enterRegister16_grpspix?: (ctx: Register16_grpspixContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.register16_grpspix`.
	 * @param ctx the parse tree
	 */
	exitRegister16_grpspix?: (ctx: Register16_grpspixContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.register16_grpspiy`.
	 * @param ctx the parse tree
	 */
	enterRegister16_grpspiy?: (ctx: Register16_grpspiyContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.register16_grpspiy`.
	 * @param ctx the parse tree
	 */
	exitRegister16_grpspiy?: (ctx: Register16_grpspiyContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.register16_ex`.
	 * @param ctx the parse tree
	 */
	enterRegister16_ex?: (ctx: Register16_exContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.register16_ex`.
	 * @param ctx the parse tree
	 */
	exitRegister16_ex?: (ctx: Register16_exContext) => void;

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
	 * Enter a parse tree produced by `z80asmParser.blockcomment`.
	 * @param ctx the parse tree
	 */
	enterBlockcomment?: (ctx: BlockcommentContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.blockcomment`.
	 * @param ctx the parse tree
	 */
	exitBlockcomment?: (ctx: BlockcommentContext) => void;

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
	 * Enter a parse tree produced by `z80asmParser.expression8`.
	 * @param ctx the parse tree
	 */
	enterExpression8?: (ctx: Expression8Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.expression8`.
	 * @param ctx the parse tree
	 */
	exitExpression8?: (ctx: Expression8Context) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.expression16`.
	 * @param ctx the parse tree
	 */
	enterExpression16?: (ctx: Expression16Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.expression16`.
	 * @param ctx the parse tree
	 */
	exitExpression16?: (ctx: Expression16Context) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.expression32`.
	 * @param ctx the parse tree
	 */
	enterExpression32?: (ctx: Expression32Context) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.expression32`.
	 * @param ctx the parse tree
	 */
	exitExpression32?: (ctx: Expression32Context) => void;

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
	 * Enter a parse tree produced by `z80asmParser.operator_num`.
	 * @param ctx the parse tree
	 */
	enterOperator_num?: (ctx: Operator_numContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.operator_num`.
	 * @param ctx the parse tree
	 */
	exitOperator_num?: (ctx: Operator_numContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.operator_bit`.
	 * @param ctx the parse tree
	 */
	enterOperator_bit?: (ctx: Operator_bitContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.operator_bit`.
	 * @param ctx the parse tree
	 */
	exitOperator_bit?: (ctx: Operator_bitContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.operator_logic`.
	 * @param ctx the parse tree
	 */
	enterOperator_logic?: (ctx: Operator_logicContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.operator_logic`.
	 * @param ctx the parse tree
	 */
	exitOperator_logic?: (ctx: Operator_logicContext) => void;

	/**
	 * Enter a parse tree produced by `z80asmParser.operator_offset`.
	 * @param ctx the parse tree
	 */
	enterOperator_offset?: (ctx: Operator_offsetContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.operator_offset`.
	 * @param ctx the parse tree
	 */
	exitOperator_offset?: (ctx: Operator_offsetContext) => void;

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

	/**
	 * Enter a parse tree produced by `z80asmParser.number_char`.
	 * @param ctx the parse tree
	 */
	enterNumber_char?: (ctx: Number_charContext) => void;
	/**
	 * Exit a parse tree produced by `z80asmParser.number_char`.
	 * @param ctx the parse tree
	 */
	exitNumber_char?: (ctx: Number_charContext) => void;
}


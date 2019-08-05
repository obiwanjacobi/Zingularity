grammar z80asm;

/**
   z88dk z80asm

   SECTION name
   MODULE name
   ORG <16-bit expression> | -1

   PHASE <16-bit expression>
    ... lines
   UNPHASE

   ALIGN <16-bit expression>

    $ : hexadecimal constant, e.g. $4000 (16384).
    @ : binary constant, e.g. @11000000 (192).
    ' ' : ASCII character, e.g. 'a'.

    + : addition, e.g. 12+13
    - : unary minus, subtraction. e.g. -10, 12-45
    * : multiplication, e.g. 45*2 (90)
    / : division, e.g. 256/8 (32)
    % : modulus, e.g. 256%8 (0)
    ** : power, e.g. 2**7 (128)
    & : binary AND, e.g. 255 & 7 (7)
    | : binary OR, e.g. 128 | 64 (192)
    ^ : binary XOR, e.g. 128 ^ 128 (0)
    ~ : binary NOT, e.g. (~0xAA) & 0xFF (0x55)
   precedence 
    () ** * /% +-&|^~

   # : truncate expression as constant (remove relocatable address flag)
   LD BC, #end_relocator-relocator ; the relocator sees a constant expression

   = : equal to
    <> :not equal to
    < : less than
    > : larger than
    <= : less than or equal to
    >= : larger than or equal to
    ! : not

    LD A, (USING_IBM = 1) | RTMFLAGS

   ASMPC - current assembler address

   symbols:
   .label | label:
   EXTERN name {, name}
   GLOBAL name {, name} 
   PUBLIC name {, name}

   preprocessor:
   IF IFDEF IFNDEF ELSE ENDIF
      IF <logical expression> ... [ELSE] ... ENDIF
      IFDEF <name> ... [ELSE] ... ENDIF
      IFNDEF <name> ... [ELSE] ... ENDIF
   INCLUDE "filename"
   BINARY "filename"
   DEFINE name,{name}

   blocks
   DEFB <8-bit expr>,{<8-bit expr>} (-128; 255)
   DEFW <16-bit expr>,{<16-bit expr>} (-32768; 65535)
   DEFL <32-bit expr>,{<32-bit expr>} (-2147483647; 4294967295)

   assign
   DEFC name=<32-bit expression>{, name=<32-bit expression>}
   
   DEFM <string expression>|<8-bit expr>,...
   DEFM "string_a" , "string_b" , 'X' , CR , LF , 0

   DEFQ name <32-bit expression> (float)

   (struct)
   DEFVARS <16-bit expression> '{' [<name>] [<storage_size> <size_multiplier>]'}'
   DEFVARS Z80asm_vars
    {
     RuntimeFlags1 ds.b 1 ; reserve 1 byte
     RuntimeFlags2 ds.b 1
     RuntimeFlags3 ds.b 1
     ds.w 1 ; space not named
     explicitORIG  ds.w 1 ; reserve 2 bytes
     asmtime ds.b 3 ; reserve 3 bytes
     datestamp_src ds.b 6 ; reserve 6 bytes
     datestamp_obj ds.b 6
     TOTALERRORS ds.l 1 ; reserve 4 bytes
    }


   (enums)
   DEFGROUP '{' name {',' name ['=' <8-bit expression>]} '}'
   DEFGROUP
    {
     sym_null
     sym_ten = 10, sym_eleven, sym_twelve
    }

   DEFS <size>{, <fill-byte>}


   system specific
   FPP <8-bit expression>
   INVOKE <16-bit expression>
 */


file
   : asm? EOF
   ;


asm
   : (line? EOL) +
   ;


line
   : directive comment? | comment | label comment? | label? instruction comment?
   ;


directive
   : directive_void 
   | directive_param16
   | directive_param32
   | directive_block 
   | directive_symbol 
   | directive_symbollist 
   | directive_assign 
   | directive_defs 
   | directive_defm
   | directive_if
   | directive_ifdef
   ;


directive_void
   :  DIRECTIVEvoid
   ;


directive_param16
   : DIRECTIVEparam16 expression16
   ;


directive_param32
   : DIRECTIVEparam32 expression32
   ;


directive_symbol
   : DIRECTIVEsymbol symbol
   ;


directive_symbollist
   : DIRECTIVEsymbollist symbol (COMMA symbol)*?
   ;


directive_assign
   : DIRECTIVEassign symbol '=' expression
   ;


directive_block
   : DIRECTIVEblock expression (COMMA expression)*?
   ;


directive_defs
   : DIRECTIVEdefs expression (COMMA expression)?
   ;


directive_defm
   : DIRECTIVEdefm defmparam (COMMA defmparam)*?
   ;


defmparam
   : string | character | expression8
   ;


directive_if
   : DIRECTIVEif expression comment? directive_ifblock
   ;


directive_ifdef
   : DIRECTIVEifdef symbol comment? directive_ifblock
   ;


directive_ifblock
   : asm directive_elseblock? DIRECTIVEendif (EOL | EOF)
   ;


directive_elseblock
   : DIRECTIVEelse asm
   ;


directive_phase
   : DIRECTIVEphase expression16 comment? asm DIRECTIVEunphase
   ;


// directives without any params
DIRECTIVEvoid
   :  (A S M P C) | (L S T O N) | (L S T O F F)
   ;


// directives with numeric param
DIRECTIVEparam16
   : (O R G) | (A L I G N)
   ;


DIRECTIVEparam32
   : (D E F Q)
   ;


// directives with single symbol param
DIRECTIVEsymbol
   : (M O D U L E) | (S E C T I O N)
   ;


// directives with list symbol params (comma list)
DIRECTIVEsymbollist
   : (E X T E R N) | (P U B L I C) | (G L O B A L) | (D E F I N E) | (X L I B) | (X D E F) | (X R E F)
   ;


// directives that use assignment (+ param)
DIRECTIVEassign
   : (D E F C)
   ;


DIRECTIVEdefs
   : (D E F S)
   ;


DIRECTIVEdefm
   : (D E F M)
   ;


// directives that define a block (comma list)
DIRECTIVEblock
   : (D E F B) | (D E F W) | (D E F L)
   ;


// TODO: directives to sort out
DIRECTIVEtodo
   : (D E F V A R S) | (D E F G R O U P)
   ;


DIRECTIVEfile
   : (I N C L U D E) | (B I N A R Y)
   ;


DIRECTIVEif
   : (I F)
   ;


DIRECTIVEifdef
   : (I F N? D E F)
   ;


DIRECTIVEelse
   : (E L S E)
   ;


DIRECTIVEendif
   : (E N D I F)
   ;


DIRECTIVEphase
   : (P H A S E)
   ;


DIRECTIVEunphase
   : (U N P H A S E)
   ;


instruction
   : instruction_void
   | instruction_ld8
   | instruction_ld16
   | instruction_stack
   | instruction_exchange
   | instruction_arithmetic8
   | instruction_incdec8
   | instruction_cpl
   | instruction_arithemic16
   | instruction_incdec16
   | instruction_rotate
   | instruction_rotatedec
   | instruction_bit
   | instruction_jump
   | instruction_call
   | instruction_rst
   | instruction_im
   | instruction_io
   ;


instruction_void
   : INSTRUCTIONvoid
   ;


instruction_ld8
   : (INSTRUCTIONld ((registers8 COMMA registers8) | (registers8x COMMA registers8x) | (registers8y COMMA registers8y)))
   | (INSTRUCTIONld (registers8 | REG8x | REG8y) COMMA expression8)
   | (INSTRUCTIONld registers8 COMMA PARopen REG16hl PARclose)
   | (INSTRUCTIONld registers8 COMMA PARopen register16_ex PLUS offset_ex PARclose)
   | (INSTRUCTIONld PARopen REG16hl PARclose COMMA registers8)
   | (INSTRUCTIONld PARopen register16_ex PLUS offset_ex PARclose COMMA registers8)
   | (INSTRUCTIONld PARopen REG16hl PARclose COMMA expression8)
   | (INSTRUCTIONld PARopen register16_ex PLUS offset_ex PARclose COMMA expression8)
   | (INSTRUCTIONld REG8a COMMA PARopen (REG16bc | REG16de | expression) PARclose)
   | (INSTRUCTIONld REG8a COMMA REG8sys)
   | (INSTRUCTIONld REG8sys COMMA REG8a)
   | (INSTRUCTIONld PARopen (REG16bc | REG16de | REG8sys | expression16) PARclose COMMA REG8a)
   ;


instruction_ld16
   : INSTRUCTIONld (register16_grpsphl | register16_ex) COMMA expression16
   | INSTRUCTIONld register16_ex COMMA PARopen expression16 PARclose
   | INSTRUCTIONld PARopen expression16 PARclose COMMA (register16_grpsphl | register16_ex)
   | INSTRUCTIONld REG16sp COMMA (REG16hl | register16_ex)
   ;


instruction_stack
   : INSTRUCTIONstack (register16_grpaf | register16_ex)
   ;


instruction_exchange
   : INSTRUCTIONexchange REG16de COMMA REG16hl
   | INSTRUCTIONexchange REG16af COMMA REG16af '\''?
   | INSTRUCTIONexchange PARopen REG16sp PARclose COMMA (REG16hl | register16_ex)
   | INSTRUCTIONexxchange
   ;


instruction_arithmetic8
   : (INSTRUCTIONarithmetic | INSTRUCTIONarithmetic16) (REG8a COMMA)? (registers8 | REG8x | REG8y | expression8 )
   | (INSTRUCTIONarithmetic | INSTRUCTIONarithmetic16) (REG8a COMMA)? PARopen (REG16hl | register16_ex PLUS offset_ex) PARclose
   ;


instruction_incdec8
   : INSTRUCTIONincdec (registers8 | REG8x | REG8y)
   | INSTRUCTIONincdec PARopen (REG16hl | register16_ex PLUS offset_ex) PARclose
   ;


instruction_cpl
   : INSTRUCTIONcpl REG8a?
   ;


instruction_arithemic16
   : INSTRUCTIONarithmetic16 REG16hl COMMA register16_grpsphl
   | INSTRUCTIONarithmetic16 REG16ix COMMA register16_grpspix
   | INSTRUCTIONarithmetic16 REG16iy COMMA register16_grpspiy
   ;


instruction_incdec16
   : INSTRUCTIONincdec (register16_grpsphl | register16_ex)
   ;


instruction_rotate
   : INSTRUCTIONrotate registers8
   | INSTRUCTIONrotate PARopen (REG16hl | register16_ex PLUS offset_ex) PARclose
   | INSTRUCTIONrotate PARopen register16_ex PLUS offset_ex PARclose COMMA registers8
   ;


instruction_rotatedec
   : INSTRUCTIONrotatedec REG8a?
   ;


instruction_bit
   : INSTRUCTIONbit bitindex COMMA registers8
   | INSTRUCTIONbit bitindex COMMA PARopen (REG16hl | register16_ex PLUS offset_ex) PARclose
   | INSTRUCTIONbit bitindex COMMA PARopen register16_ex PLUS offset_ex PARclose COMMA registers8
   ;


bitindex
   : BIT8 | INTERRUPTMODE
   ;


instruction_jump
   : INSTRUCTIONjump (REG16hl | register16_ex | expression16)
   | INSTRUCTIONjump instruction_conditionFlagsAll COMMA expression16
   | INSTRUCTIONjumprel (instruction_conditionFlags COMMA)? offset_rel
   | INSTRUCTIONjumprelnz offset_rel
   ;


instruction_call
   : INSTRUCTIONcall (instruction_conditionFlagsAll COMMA)? expression16
   | INSTRUCTIONret instruction_conditionFlagsAll?
   ;


instruction_conditionFlagsAll
   : CONDITIONflagsex | CONDITIONflags | REG8c
   ;


instruction_conditionFlags
   : CONDITIONflags | REG8c
   ;


instruction_rst
   : INSTRUCTIONrst (INSTRUCTIONrstvectorhex | INSTRUCTIONrstvector)
   ;


instruction_im
   : INSTRUCTIONim INTERRUPTMODE
   ;


instruction_io
   : INSTRUCTIONin REG8a COMMA PARopen expression8 PARclose
   | INSTRUCTIONin (registers8 COMMA)? PARopen REG8c PARclose
   | INSTRUCTIONout PARopen expression8 PARclose COMMA REG8a
   | INSTRUCTIONout PARopen REG8c PARclose COMMA (registers8 | ZERO)
   ;


// TODO: limit to -128 / +127
offset_ex
   : expression
   ;

offset_rel
   : expression
   ;


INSTRUCTIONvoid
   : (N O P) | (H A L T)
   | (L D I) | (L D I R) | (L D D) | (L D D R)
   | (C P I) | (C P I R) | (C P D) | (C P D R)
   | (D A A) | (N E G) | (S C F) | (C C F)
   | (R L C A) | (R L A) | (R R C A) | (R R A)
   | (R E T I) | (R E T N)
   | (D I) | (E I)
   | (I N I) | (I N I R) | (I N D) | (I N D R) 
   | (O U T I) | (O T I R) | (O U T D) | (O T D R)
   ;


INSTRUCTIONld
   : (L D)
   ;


INSTRUCTIONstack
   : (P U S H) | (P O P)
   ;


INSTRUCTIONexchange
   : (E X)
   ;


INSTRUCTIONexxchange
   : (E X X)
   ;


INSTRUCTIONarithmetic16
   : (A D D) | (A D C) | (S B C)
   ;


INSTRUCTIONarithmetic
   : (A D D) | (A D C) | (S U B) | (S B C) | (A N D) | (O R) | (X O R) | (C P)
   ;


INSTRUCTIONincdec
   : (I N C) | (D E C)
   ;


INSTRUCTIONcpl
   : (C P L)
   ;


INSTRUCTIONrotate
   : (R L C) | (R L) | (R R C) | (R R)
   | (S L A) | (S L L) | (S R A) | (S R L)
   ;


INSTRUCTIONrotatedec
   : (R L D) | (R R D)
   ;


INSTRUCTIONbit
   : (B I T) | (S E T) | (R E S)
   ;


INSTRUCTIONjump
   : (J P)
   ;


INSTRUCTIONjumprel
   : (J R)
   ;


INSTRUCTIONjumprelnz
   : (D J N Z)
   ;


INSTRUCTIONcall
   : (C A L L)
   ;


INSTRUCTIONret
   : (R E T)
   ;


INSTRUCTIONrst
   : (R S T)
   ;


INSTRUCTIONim
   : (I M)
   ;


INSTRUCTIONin
   : (I N)
   ;


INSTRUCTIONout
   : (O U T)
   ;


registers8
   : REG8a | REG8b | REG8c | REG8d | REG8e | REG8h | REG8l
   ;


registers8x
   : REG8a | REG8b | REG8c | REG8d | REG8e | REG8x
   ;


registers8y
   : REG8a | REG8b | REG8c | REG8d | REG8e | REG8y
   ;


REG8x
   : (I X H) | (I X L)
   ;


REG8y
   : (I Y H) | (I Y L)
   ;


REG8sys
   : I | R
   ;


REG8a
   : A
   ;


REG8b
   : B
   ;


REG8c
   : C
   ;


REG8d
   : D
   ;


REG8e
   : E
   ;


REG8h
   : H
   ;


REG8l
   : L
   ;


register16_grpaf
   : REG16af | REG16bc | REG16de | REG16hl
   ;


register16_grpsp
   : REG16sp | REG16bc | REG16de
   ;


register16_grpsphl
   : register16_grpsp | REG16hl
   ;


register16_grpspix
   : register16_grpsp | REG16ix
   ;


register16_grpspiy
   : register16_grpsp | REG16iy
   ;


register16_ex
   : REG16ix | REG16iy
   ;


REG16af
   : (A F)
   ;


REG16bc
   : (B C)
   ;


REG16de
   : (D E)
   ;


REG16hl
   : (H L)
   ;


REG16sp
   : (S P)
   ;


REG16ix
   : (I X)
   ;


REG16iy
   : (I Y)
   ;


CONDITIONflagsex
   : (P O) | (P E) | P | M
   ;


CONDITIONflags
   : (N? Z) | (N? C)
   ;


label
   : '.' SYMBOL | SYMBOL ':'
   ;


symbol
   : SYMBOL
   ;


SYMBOL
   : ALPHAEX ALPHANUMEX*
   ;


comment
   : COMMENT
   ;


COMMENT
   : ';' .*? ~[\r\n]+
   ;


string
   : STRING
   ;


character
   : CHARACTER
   ;


expression8
    : expression
    ;


expression16
    : expression
    ;


expression32
    : expression
    ;


expression
    : expression operator expression
    | PARopen expression PARclose
    | number
    | symbol
    ;


operator
    : operator_num | operator_bit | operator_logic
    ;


operator_num
   : OPERATORnum | MINUS | PLUS
   ;


operator_bit
   : OPERATORbit
   ;


operator_logic
   : OPERATORlogic
   ;


PLUS
   : '+'
   ;


MINUS
   : '-'
   ;


OPERATORnum
    : MINUS | PLUS | '*' | '/' | '%' | '**'
    ;


OPERATORbit
    : '&' | '|' | '^' | '~'
    ;


OPERATORlogic
    : '&&' | '||' | '!' | '=' | '<>' | '>' | '<' | '<=' | '>='
    ;


number
   : (PLUS|MINUS)? (number_bin | number_oct | number_dec | number_hex)
   ;


number_bin
   : NUMBERbin
   ;


number_oct
   : NUMBERoct
   ;


number_dec
   : NUMBERdec | INTERRUPTMODE | BIT8 | INSTRUCTIONrstvector
   ;


number_hex
   : NUMBERhex | INSTRUCTIONrstvectorhex
   ;


INTERRUPTMODE
   : [0-2]
   ;


BIT8
   : [0-7]
   ;


INSTRUCTIONrstvectorhex
   : '$' INSTRUCTIONrstvector | INSTRUCTIONrstvector H
   ;


INSTRUCTIONrstvector
   : [0-3][08]
   ;


NUMBERbin
   : DIGIT2 + 'b' | '@' DIGIT2 +
   ;


NUMBERoct
   : DIGIT8 + ('o' | 'q')
   ;


NUMBERdec
   : DIGIT10 + 'd'?
   ;


NUMBERhex
   : DIGIT16 + H | '$' DIGIT16 +
   ;


/**
 *  Case insensitive alphabet
 */

fragment A
   : [aA]
   ;


fragment B
   : [bB]
   ;


fragment C
   : [cC]
   ;


fragment D
   : [dD]
   ;


fragment E
   : [eE]
   ;


fragment F
   : [fF]
   ;


fragment G
   : [gG]
   ;


fragment H
   : [hH]
   ;


fragment I
   : [iI]
   ;


fragment J
   : [jJ]
   ;


fragment K
   : [kK]
   ;


fragment L
   : [lL]
   ;


fragment M
   : [mM]
   ;


fragment N
   : [nN]
   ;


fragment O
   : [oO]
   ;


fragment P
   : [pP]
   ;


fragment Q
   : [qQ]
   ;


fragment R
   : [rR]
   ;


fragment S
   : [sS]
   ;


fragment T
   : [tT]
   ;


fragment U
   : [uU]
   ;


fragment V
   : [vV]
   ;


fragment W
   : [wW]
   ;


fragment X
   : [xX]
   ;


fragment Y
   : [yY]
   ;


fragment Z
   : [zZ]
   ;


fragment ALPHAlower
    : [a-z]
    ;


fragment ALPHAupper
    : [A-Z]
    ;


fragment ALPHA
    : [a-zA-Z]
    ;


fragment ALPHAEX
    : [a-zA-Z_]
    ;


fragment ALPHANUM
    : [a-zA-Z0-9]
    ;


fragment ALPHANUMEX
    : [a-zA-Z0-9_]
    ;


/**
 *  Digit building blocks
 */

fragment DIGIT2
    :   [0-1]
    ;

fragment DIGIT8
    :   [0-7]
    ;

fragment DIGIT10
    :   [0-9]
    ;

fragment DIGIT16
    :   [0-9a-zA-Z]
    ;


ZERO
   : [0]
   ;


/**
 *  Tokens
 */

CHARACTER
   : '\'' . '\''
   ;


STRING
   : '"' .*? '"'
   ;


PARopen
   : '('
   ;


PARclose
   : ')'
   ;


COMMA
   : ','
   ;


EOL
   : '\r'? '\n' | '\r'
   ;


WS
    : [ \t] 
      -> channel(HIDDEN)
    ;

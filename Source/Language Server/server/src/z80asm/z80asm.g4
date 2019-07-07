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
   | directive_param 
   | directive_block 
   | directive_symbol 
   | directive_symbollist 
   | directive_assign 
   | directive_defs 
   | directive_defm
   | directive_if
   | directive_ifdef
   | directive_ifndef
   ;


directive_void
   :  DIRECTIVEvoid
   ;


directive_param
   : DIRECTIVEparam expression
   ;


directive_symbol
   : DIRECTIVEsymbol symbol
   ;


directive_symbollist
   : DIRECTIVEsymbollist symbol (',' symbol)*?
   ;


directive_assign
   : DIRECTIVEassign '=' expression
   ;


directive_block
   : DIRECTIVEblock expression (',' expression)*?
   ;


directive_defs
   : DIRECTIVEdefs expression (',' expression)?
   ;


directive_defm
   : DIRECTIVEdefm defmparam (',' defmparam)*?
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


directive_ifndef
   : DIRECTIVEifndef symbol comment? directive_ifblock
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
DIRECTIVEparam
   : (O R G) | (A L I G N) | (D E F Q)
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
   : (I F D E F)
   ;


DIRECTIVEifndef
   : (I F N D E F)
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
   | instruction_io
   ;


instruction_void
   : INSTRUCTIONvoid
   ;


instruction_ld8
   : INSTRUCTIONld (REGISTER8 ',' REGISTER8 | REGISTER8x ',' REGISTER8x | REGISTER8y ',' REGISTER8y)
   | INSTRUCTIONld (REGISTER8 | REGISTER8x | REGISTER8y) ',' expression8
   | INSTRUCTIONld REGISTER8 ',' '(' REGISTER16hl ')'
   | INSTRUCTIONld REGISTER8 ',' '(' REGISTER16ex '+' offset_ex ')'
   | INSTRUCTIONld '(' REGISTER16hl ')' ',' REGISTER8
   | INSTRUCTIONld '(' REGISTER16ex '+' offset_ex ')' ',' REGISTER8
   | INSTRUCTIONld '(' REGISTER16hl ')' ',' expression8
   | INSTRUCTIONld '(' REGISTER16ex '+' offset_ex ')' ',' expression8
   | INSTRUCTIONld REGISTER8a ',' '(' (REGISTER16bcde | REGISTER8sys | expression) ')'
   | INSTRUCTIONld '(' (REGISTER16bcde | REGISTER8sys | expression16) ')' ',' REGISTER8a
   ;


instruction_ld16
   : INSTRUCTIONld REGISTER16spgroup ',' expression16
   | INSTRUCTIONld REGISTER16ex ',' '(' expression16 ')'
   | INSTRUCTIONld '(' expression16 ')' ',' (REGISTER16hl | REGISTER16spgroup | REGISTER16ex)
   | INSTRUCTIONld REGISTER16sp ',' (REGISTER16hl | REGISTER16ex)
   ;


instruction_stack
   : INSTRUCTIONstack (REGISTER16afgroup | REGISTER16ex)
   ;


instruction_exchange
   : INSTRUCTIONexchange REGISTER16de ',' REGISTER16hl
   | INSTRUCTIONexchange REGISTER16af ',' REGISTER16af '\''?
   | INSTRUCTIONexchange '(' REGISTER16sp ')' ',' (REGISTER16hl | REGISTER16ex)
   | INSTRUCTIONexxchange
   ;


instruction_arithmetic8
   : INSTRUCTIONarithmetic (REGISTER8a ',')? (REGISTER8 | REGISTER8x | REGISTER8y | expression8 )
   | INSTRUCTIONarithmetic (REGISTER8a ',')? '(' (REGISTER16hl | REGISTER16ex '+' offset_ex) ')'
   ;


instruction_incdec8
   : INSTRUCTIONincdec (REGISTER8 | REGISTER8x | REGISTER8y)
   | INSTRUCTIONincdec '(' (REGISTER16hl | REGISTER16ex '+' offset_ex) ')'
   ;


instruction_cpl
   : INSTRUCTIONcpl REGISTER8a?
   ;


instruction_arithemic16
   : INSTRUCTIONarithmetic16 REGISTER16hl ',' REGISTER16spgroup
   | INSTRUCTIONarithmetic16 REGISTER16ix ',' REGISTER16spxgroup
   | INSTRUCTIONarithmetic16 REGISTER16iy ',' REGISTER16spygroup
   ;


instruction_incdec16
   : INSTRUCTIONincdec (REGISTER16spgroup | REGISTER16ex)
   ;


instruction_rotate
   : INSTRUCTIONrotate REGISTER8
   | INSTRUCTIONrotate '(' (REGISTER16hl | REGISTER16ex '+' offset_ex) ')'
   | INSTRUCTIONrotate '(' REGISTER16ex '+' offset_ex ')' ',' REGISTER8
   ;


instruction_rotatedec
   : INSTRUCTIONrotatedec REGISTER8a?
   ;


instruction_bit
   : INSTRUCTIONbit BIT8 ',' REGISTER8
   | INSTRUCTIONbit BIT8 ',' '(' (REGISTER16hl | REGISTER16ex '+' offset_ex) ')'
   | INSTRUCTIONbit BIT8 ',' '(' REGISTER16ex '+' offset_ex ')' ',' REGISTER8
   ;


instruction_jump
   : INSTRUCTIONjump (REGISTER16hl | REGISTER16ex | expression16)
   | INSTRUCTIONjump CONDITIONflagsall expression16
   | INSTRUCTIONjumprel CONDITIONflags? offset_rel
   | INSTRUCTIONjumpreld offset_rel
   ;


instruction_call
   : INSTRUCTIONcall CONDITIONflagsall? expression16
   | INSTRUCTIONret CONDITIONflags?
   ;


instruction_io
   : INSTRUCTIONin REGISTER8a ',' '(' expression8 ')'
   | INSTRUCTIONin (REGISTER8 ',')? '(' REGISTER8c ')'
   | INSTRUCTIONout '(' expression8 ')' ',' REGISTER8a
   | INSTRUCTIONout '(' REGISTER8c ')' ',' (REGISTER8 | '0')
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
   | (I M [012]) | (D I) | (E I)
   | (R S T '$'? [0123][08])
   | (I N I) | (I N I R) | (I N D) | (I N D R) | (O U T I) | (O T I R) | (O U T D) | (O T D R)
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


INSTRUCTIONarithmetic
   : (A D D) | (A D C) | (S U B) | (S B C) | (A N D) | (O R) | (X O R) | (C P)
   ;


INSTRUCTIONincdec
   : (I N C) | (D E C)
   ;


INSTRUCTIONcpl
   : (C P L)
   ;


INSTRUCTIONarithmetic16
   : (A D D) | (A D C) | (S B C)
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


INSTRUCTIONjumpreld
   : (D J N Z)
   ;


INSTRUCTIONcall
   : (C A L L)
   ;


INSTRUCTIONret
   : (R E T)
   ;


 INSTRUCTIONin
   : (I N)
   ;


INSTRUCTIONout
   : (O U T)
   ;


CONDITIONflagsall
   : CONDITIONflags
   | (P O) | (P E) | P | M
   ;


CONDITIONflags
   : (N? Z) | (N? C)
   ;


BIT8
   : [0-7]
   ;


REGISTER8a
   : A
   ;

REGISTER8c
   : C
   ;


REGISTER8
   : A | B | C | D | E | H | L
   ;


REGISTER8x
   : A | B | C | D | E | (I X H) | (I X L)
   ;


REGISTER8y
   : A | B | C | D | E | (I Y H) | (I Y L)
   ;


REGISTER8sys
   : I | R
   ;


REGISTER16af
   : (A F)
   ;


REGISTER16hl
   : (H L)
   ;


REGISTER16de
   : (D E)
   ;


REGISTER16sp
   : (S P)
   ;


REGISTER16ix
   : (I X)
   ;


REGISTER16iy
   : (I Y)
   ;


REGISTER16bcde
   : (B C) | (D E)
   ;


REGISTER16ex
   : (I X) | (I Y)
   ;


REGISTER16afgroup
   : (A F) | (B C) | (D E) | (H L) 
   ;


REGISTER16spgroup
   : (S P) | (B C) | (D E) | (H L) 
   ;


REGISTER16spxgroup
   : (S P) | (B C) | (D E) | (I X) 
   ;


REGISTER16spygroup
   : (S P) | (B C) | (D E) | (I Y) 
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


expression
    : expression operator expression | number | symbol | '(' expression ')'
    ;


operator
    : OPERATORnum | OPERATORbit | OPERATORlogic
    ;


OPERATORnum
    : '-' | '+' | '*' | '/' | '%' | '**'
    ;


OPERATORbit
    : '&' | '|' | '^' | '~'
    ;


OPERATORlogic
    : '&&' | '||' | '!' | '=' | '<>' | '>' | '<' | '<=' | '>='
    ;


number
   : number_bin | number_oct | number_dec | number_hex
   ;


number_bin
   : NUMBERbin
   ;


number_oct
   : NUMBERoct
   ;


number_dec
   : NUMBERdec
   ;


number_hex
   : NUMBERhex
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
   : DIGIT16 + 'h' | '$' DIGIT16 +
   ;


/**
 *  Case insensitive alphabet
 */

fragment A
   : ('a' | 'A')
   ;


fragment B
   : ('b' | 'B')
   ;


fragment C
   : ('c' | 'C')
   ;


fragment D
   : ('d' | 'D')
   ;


fragment E
   : ('e' | 'E')
   ;


fragment F
   : ('f' | 'F')
   ;


fragment G
   : ('g' | 'G')
   ;


fragment H
   : ('h' | 'H')
   ;


fragment I
   : ('i' | 'I')
   ;


fragment J
   : ('j' | 'J')
   ;


fragment K
   : ('k' | 'K')
   ;


fragment L
   : ('l' | 'L')
   ;


fragment M
   : ('m' | 'M')
   ;


fragment N
   : ('n' | 'N')
   ;


fragment O
   : ('o' | 'O')
   ;


fragment P
   : ('p' | 'P')
   ;


fragment Q
   : ('q' | 'Q')
   ;


fragment R
   : ('r' | 'R')
   ;


fragment S
   : ('s' | 'S')
   ;


fragment T
   : ('t' | 'T')
   ;


fragment U
   : ('u' | 'U')
   ;


fragment V
   : ('v' | 'V')
   ;


fragment W
   : ('w' | 'W')
   ;


fragment X
   : ('x' | 'X')
   ;


fragment Y
   : ('y' | 'Y')
   ;


fragment Z
   : ('z' | 'Z')
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

/**
 *  Tokens
 */

CHARACTER
   : '\'' . '\''
   ;


STRING
   : '"' .*? '"'
   ;


EOL
   : '\r'? '\n' | '\r'
   ;


WS
    : [ \t] -> channel(HIDDEN)
    ;

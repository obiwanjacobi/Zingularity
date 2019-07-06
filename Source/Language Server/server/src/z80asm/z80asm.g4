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
   : string | character | expression
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


string
   : STRING
   ;


character
   : CHARACTER
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


instruction
   : INSTRUCTION
   ;


INSTRUCTION
   : (N O P)
   ;


REGISTER8
   : A | B | C | D | E | H | L
   ;


REGISTER8ex
   : (I X H) | (I X L) | (I Y H) | (I Y L)
   ;


REGISTER8sys
   : I | R
   ;


REGISTER16
   : (A F) | (B C) | (D E) | (H L) | (S P) | (I X) | (I Y)
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

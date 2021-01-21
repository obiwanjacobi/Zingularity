grammar z80asm;

// does not work (https://github.com/tunnelvisionlabs/antlr4ts/issues/483)
//options { superClass=GrammarProfileBase; }

file: asm? EOF;
asm: (line? EOL)+;
line
    : label? directive comment?
    | comment
    | label comment?
    | label? instruction comment?
    | blockcomment
    ;

// @code
directive
    : {zmac}? DOT?
    ( directive_void
    | directive_file
    | directive_param16
    | directive_param32
    | directive_block
    | directive_symbol
    | directive_symbollist
    | directive_assign
    | directive_defs
    | (directive_defm {z88dk}?)
    | directive_if
    | directive_ifdef
    | directive_elseblock
    | directive_endif
    );


directive_void:  DIRECTIVEvoid;
directive_file: ({zmac}? ZMAC_DIRECTIVEfile | {z88dk}? Z88DK_DIRECTIVEfile) STRING;
directive_param16: DIRECTIVEparam16 expression16;
directive_param32: DEFQ expression32;
directive_symbol: DIRECTIVEsymbol symbol;
directive_symbollist: ({zmac}? ZMAC_DIRECTIVEsymbollist | {z88dk}? Z88DK_DIRECTIVEsymbollist) symbol (COMMA symbol)*;
directive_assign: (DEFC symbol EQUALS expression) {z88dk}? | (symbol EQU expression) {zmac}?;
directive_block: ({zmac}? ZMAC_DIRECTIVEblock | {z88dk}? Z88DK_DIRECTIVEblock) (expression | STRING) (COMMA (expression | STRING))*;
directive_defs: ({zmac}? ZMAC_DIRECTIVEskip | {z88dk}? Z88DK_DIRECTIVEskip) expression (COMMA expression)?;
directive_defm: DEFM defmparam (COMMA defmparam)*;
defmparam: STRING | CHARACTER | expression8;
directive_dc: DC (STRING | number COMMA number);
directive_if: IF expression;
directive_ifdef: IFDEF symbol;
directive_ifblock: directive_elseblock? directive_endif;
// @code
directive_elseblock: ELSE;
// @code
directive_endif: ENDIF;
directive_phase: PHASE expression16 comment? asm UNPHASE;

DIRECTIVEvoid: LSTON | LSTOFF;
DIRECTIVEparam16: ORG | ALIGN;
DIRECTIVEsymbol: MODULE | SECTION;

// ZMAC
ZMAC_DIRECTIVEsymbollist: EXTERN | PUBLIC | GLOBAL | EXT | EXTRN | ENTRY;
ZMAC_DIRECTIVEblock: DEFB | DEFW | DEFM | DEFD | DB | BYTE | DM;
ZMAC_DIRECTIVEskip: DEFS | BLOCK | DS | RMEM;
ZMAC_DIRECTIVEfile: INCLUDE | INCBIN;

// Z88DK
Z88DK_DIRECTIVEsymbollist: EXTERN | PUBLIC | GLOBAL | DEFINE | XLIB | XDEF | XREF;
Z88DK_DIRECTIVEblock: DEFB | DEFW | DEFM | DEFL;
Z88DK_DIRECTIVEskip: DEFS;
Z88DK_DIRECTIVEfile: INCLUDE | BINARY;
// TODO: z88dk directives to sort out
DEFVARS: (D E F V A R S);
DEFGROUP: (D E F G R O U P);

LSTON: (L S T O N);
LSTOFF: (L S T O F F);
ORG: (O R G);
ALIGN: (A L I G N);
MODULE: (M O D U L E);
SECTION: (S E C T I O N);
EXTERN: (E X T E R N);
PUBLIC: (P U B L I C);
GLOBAL: (G L O B A L);
DEFINE: (D E F I N E);
XLIB: (X L I B);
XDEF: (X D E F);
XREF: (X R E F);
EXT: (E X T);
EXTRN: (E X T R N);
ENTRY: (E N T R Y);
EQU: (E Q U);
DEFB: (D E F B);
DEFC: (D E F C);
DEFD: (D E F D);
DEFL: (D E F L);
DEFM: (D E F M);
DEFS: (D E F S);
DEFQ: (D E F Q);
DEFW: (D E F W);
DB: (D B);
DC: (D C);
DM: (D M);
DS: (D S);
BLOCK: (B L O C K);
RMEM: (R M E M);
BYTE: (B Y T E);
INCLUDE: (I N C L U D E);
BINARY: (B I N A R Y);
INCBIN: (I N C B I N);
IF: (I F);
IFDEF: (I F N? D E F);
ELSE: (E L S E);
ENDIF: (E N D I F);
PHASE: (P H A S E);
UNPHASE: (U N P H A S E);

// @code
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

instruction_void: INSTRUCTIONvoid;
instruction_ld8
    : (INSTRUCTIONld ((registers8 COMMA registers8) | (registers8x COMMA registers8x) | (registers8y COMMA registers8y)))
    | (INSTRUCTIONld (registers8 | REG8x | REG8y) COMMA expression8)
    | (INSTRUCTIONld registers8 COMMA PARopen REG16hl PARclose)
    | (INSTRUCTIONld registers8 COMMA PARopen register16_ex operator_offset offset_ex PARclose)
    | (INSTRUCTIONld PARopen REG16hl PARclose COMMA registers8)
    | (INSTRUCTIONld PARopen register16_ex operator_offset offset_ex PARclose COMMA registers8)
    | (INSTRUCTIONld PARopen REG16hl PARclose COMMA expression8)
    | (INSTRUCTIONld PARopen register16_ex operator_offset offset_ex PARclose COMMA expression8)
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
instruction_stack: INSTRUCTIONstack (register16_grpaf | register16_ex);
instruction_exchange
    : INSTRUCTIONexchange REG16de COMMA REG16hl
    | INSTRUCTIONexchange REG16af COMMA REG16af QUOTE?
    | INSTRUCTIONexchange PARopen REG16sp PARclose COMMA (REG16hl | register16_ex)
    | INSTRUCTIONexxchange
    ;
instruction_arithmetic8
    : (INSTRUCTIONarithmetic | INSTRUCTIONarithmetic16) (REG8a COMMA)? (registers8 | REG8x | REG8y | expression8 )
    | (INSTRUCTIONarithmetic | INSTRUCTIONarithmetic16) (REG8a COMMA)? PARopen (REG16hl | register16_ex operator_offset offset_ex) PARclose
    ;
instruction_incdec8
    : INSTRUCTIONincdec (registers8 | REG8x | REG8y)
    | INSTRUCTIONincdec PARopen (REG16hl | register16_ex operator_offset offset_ex) PARclose
    ;
instruction_cpl: INSTRUCTIONcpl REG8a?;
instruction_arithemic16
    : INSTRUCTIONarithmetic16 REG16hl COMMA register16_grpsphl
    | INSTRUCTIONarithmetic16 REG16ix COMMA register16_grpspix
    | INSTRUCTIONarithmetic16 REG16iy COMMA register16_grpspiy
    ;
instruction_incdec16: INSTRUCTIONincdec (register16_grpsphl | register16_ex);
instruction_rotate
    : INSTRUCTIONrotate registers8
    | INSTRUCTIONrotate PARopen (REG16hl | register16_ex operator_offset offset_ex) PARclose
    | INSTRUCTIONrotate PARopen register16_ex operator_offset offset_ex PARclose COMMA registers8
    ;
instruction_rotatedec: INSTRUCTIONrotatedec REG8a?;
instruction_bit
    : INSTRUCTIONbit bitindex COMMA registers8
    | INSTRUCTIONbit bitindex COMMA PARopen (REG16hl | register16_ex operator_offset offset_ex) PARclose
    | INSTRUCTIONbit bitindex COMMA PARopen register16_ex operator_offset offset_ex PARclose COMMA registers8
    ;
bitindex: BIT8 | INTERRUPTMODE;

instruction_jump
    : INSTRUCTIONjump ((REG16hl | register16_ex) | (PARopen (REG16hl | register16_ex) PARclose) | expression16)
    | INSTRUCTIONjump instruction_conditionFlagsAll COMMA expression16
    | INSTRUCTIONjumprel (instruction_conditionFlags COMMA)? offset_rel
    | INSTRUCTIONjumprelnz offset_rel
    ;
instruction_call
    : INSTRUCTIONcall (instruction_conditionFlagsAll COMMA)? expression16
    | INSTRUCTIONret instruction_conditionFlagsAll?
    ;
instruction_conditionFlagsAll: CONDITIONflagsex | CONDITIONflags | REG8c;
instruction_conditionFlags: CONDITIONflags | REG8c;
instruction_rst: INSTRUCTIONrst (INSTRUCTIONrstvectorhex | INSTRUCTIONrstvector);
instruction_im: INSTRUCTIONim INTERRUPTMODE;
instruction_io
    : INSTRUCTIONin REG8a COMMA PARopen expression8 PARclose
    | INSTRUCTIONin (registers8 COMMA)? PARopen REG8c PARclose
    | INSTRUCTIONout PARopen expression8 PARclose COMMA REG8a
    | INSTRUCTIONout PARopen REG8c PARclose COMMA (registers8 | ZERO)
    ;

// TODO: limit to -128 / +127
offset_ex: expression;
offset_rel: expression;

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
INSTRUCTIONld: (L D);
INSTRUCTIONstack: (P U S H) | (P O P);
INSTRUCTIONexchange: (E X);
INSTRUCTIONexxchange: (E X X);
INSTRUCTIONarithmetic16: (A D D) | (A D C) | (S B C);
INSTRUCTIONarithmetic
    : (A D D) | (A D C) | (S U B) | (S B C) | (A N D) | (O R) | (X O R) | (C P)
    ;
INSTRUCTIONincdec: (I N C) | (D E C);
INSTRUCTIONcpl: (C P L);
INSTRUCTIONrotate
    : (R L C) | (R L) | (R R C) | (R R)
    | (S L A) | (S L L) | (S R A) | (S R L)
    ;
INSTRUCTIONrotatedec: (R L D) | (R R D);
INSTRUCTIONbit: (B I T) | (S E T) | (R E S);
INSTRUCTIONjump: (J P);
INSTRUCTIONjumprel: (J R);
INSTRUCTIONjumprelnz: (D J N Z);
INSTRUCTIONcall: (C A L L);
INSTRUCTIONret: (R E T);
INSTRUCTIONrst: (R S T);
INSTRUCTIONim: (I M);
INSTRUCTIONin: (I N);
INSTRUCTIONout: (O U T);


registers
    : REG8a | REG8b | REG8c | REG8d | REG8e | REG8h | REG8l | REG8x | REG8y | REG8sys
    | REG16af | REG16bc | REG16de | REG16hl | REG16ix | REG16iy | REG16sp
    ;
registers8: REG8a | REG8b | REG8c | REG8d | REG8e | REG8h | REG8l;
registers8x: REG8a | REG8b | REG8c | REG8d | REG8e | REG8x;
registers8y: REG8a | REG8b | REG8c | REG8d | REG8e | REG8y;

REG8x: (I X H) | (I X L);
REG8y: (I Y H) | (I Y L);
REG8sys: I | R;
REG8a: A '\''?;
REG8b: B;
REG8c: C;
REG8d: D;
REG8e: E;
REG8h: H;
REG8l: L;

register16_grpaf: REG16af | REG16bc | REG16de | REG16hl;
register16_grpsp: REG16sp | REG16bc | REG16de;
register16_grpsphl: register16_grpsp | REG16hl;
register16_grpspix: register16_grpsp | REG16ix;
register16_grpspiy: register16_grpsp | REG16iy;
register16_ex: REG16ix | REG16iy;

REG16af: (A F);
REG16bc: (B C);
REG16de: (D E);
REG16hl: (H L);
REG16sp: (S P);
REG16ix: (I X);
REG16iy: (I Y);

CONDITIONflagsex: (P O) | (P E) | P | M;
CONDITIONflags: (N? Z) | (N? C);


label
    : LABEL ':' ({zmac}? ':')
    | '.' LABEL
    | {zmac}? LABEL
    ;

LABEL
    : ALPHAEX ALPHANUMEX*
    | {zmac}? (ALPHANUMEX | [$.?@])+
    ;

// @code
symbol: SYMBOL;
SYMBOL: ALPHAEX ALPHANUMEX*;

// @code
blockcomment: BLOCKCOMMENTtext;
BLOCKCOMMENTtext:
// add the white space to make it distinct from COMMENT
    ';;' [ \t]+ .+? | ';;' [ \t]+ ~[\r\n]+;

// @code
comment: COMMENT;
COMMENT: SEMICOLON .*? | SEMICOLON ~[\r\n]+;

expression8: expression;
expression16: expression;
expression32: expression;

// @code
expression
    : expression operator expression
    | PARopen expression PARclose
    | number
    | symbol
    ;

// @code
operator: operator_num | operator_bit | operator_logic;
operator_num: MINUS | PLUS | EQUALS | MUL | DIV | MOD | POWER;
operator_bit: OPERATORbit;
operator_logic: OPERATORlogic;
operator_offset: PLUS | MINUS;

EQUALS: '=';
PLUS: '+';
MINUS: '-';
MUL: '*';
DIV: '/';
MOD: '%';
POWER: '**';

OPERATORbit
    : '&' | '|' | '^' | '~'
    ;
OPERATORlogic
    : '&&' | '||' | '!' | EQUALS | '!=' | '<>' | '>' | '<' | '<=' | '>='
    ;

// @code
number: (PLUS|MINUS)? (number_bin | number_oct | number_dec | number_hex | number_char);
// @code
number_bin: NUMBERbin;
// @code
number_oct: NUMBERoct;
// @code
number_dec: NUMBERdec | INTERRUPTMODE | BIT8 | INSTRUCTIONrstvector;
// @code
number_hex: NUMBERhex | INSTRUCTIONrstvectorhex;
// @code
number_char: CHARACTER;

INTERRUPTMODE: [0-2];
BIT8: [0-7];

INSTRUCTIONrstvectorhex: DOLAR INSTRUCTIONrstvector | INSTRUCTIONrstvector H;
INSTRUCTIONrstvector: [0-3][08];

NUMBERbin: (DIGIT2+ 'b') | {NumberBinAtSign}? ('@' DIGIT2+);
NUMBERoct: DIGIT8+ ('o' | 'q');
NUMBERdec: DIGIT10+ 'd'?;
NUMBERhex: (DIGIT16+ H) | (DOLAR DIGIT16+) | ('0x' DIGIT16+);


/**
 *  Case insensitive alphabet
 */

fragment A: [aA];
fragment B: [bB];
fragment C: [cC];
fragment D: [dD];
fragment E: [eE];
fragment F: [fF];
fragment G: [gG];
fragment H: [hH];
fragment I: [iI];
fragment J: [jJ];
fragment K: [kK];
fragment L: [lL];
fragment M: [mM];
fragment N: [nN];
fragment O: [oO];
fragment P: [pP];
fragment Q: [qQ];
fragment R: [rR];
fragment S: [sS];
fragment T: [tT];
fragment U: [uU];
fragment V: [vV];
fragment W: [wW];
fragment X: [xX];
fragment Y: [yY];
fragment Z: [zZ];

fragment ALPHAlower: [a-z];
fragment ALPHAupper: [A-Z];
fragment ALPHA: [a-zA-Z];
fragment ALPHAEX: [a-zA-Z_];
fragment ALPHANUM: [a-zA-Z0-9];
fragment ALPHANUMEX: [a-zA-Z0-9_];

/**
 *  Digit building blocks
 */

fragment DIGIT2:   [0-1];
fragment DIGIT8:   [0-7];
fragment DIGIT10:   [0-9];
fragment DIGIT16:   [0-9a-fA-F];
ZERO: [0];

CHARACTER: QUOTE . QUOTE;
STRING: DQUOTE .*? DQUOTE;

PARopen: '(';
PARclose: ')';
DQUOTE: '"';
QUOTE: '\'';
COLON: ':';
SEMICOLON: ';';
COMMA: ',';
DOT: '.';
DOLAR: '$';
EOL: '\r'? '\n' | '\r';
WS: [ \t] -> channel(HIDDEN);

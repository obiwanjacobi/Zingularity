# ZMAC Input Format

https://github.com/sehugg/zmac

zmac uses the standard Zilog mnemonics, and the pseudo-ops are also largely as you'd expect.

An `.` may optionally precede any pseudo-op. For example, `.org` and `org` are treated as equivalent.
Input can be upper or lowercase.
Comments start with `;` and carry on to the end of the line.
Number constants can take a trailing `h` or a leading `$` or `0x` for hex, a trailing `b` for binary, a trailing `o` or `q` for octal, or a trailing `d` for decimal.
`'LH'` (any length 2 string) can be treated as a number whose value is 'H' * 256 + 'L'.

For compatibility and to ease writing code that generates code, any mnemonic can be used as a data value.
For example, `mvi a,xra` will load `A` register with `$A8`. 
And `dw ldir` will output the same data a `ldir` by itself (`ldir` evaluates to $B0ED).
A full table of mnemonics and their values is in Mnemonic Values.
The `--nmnv` command line option turns off this feature.

Labels are declared with `label:` or just `label` - indentation is unimportant.
Labels can be up to 40 chars long.
Labels can start with and contain letters, digits, `$`, `.`, `?`, `@` and `_`.
Ambiguous identifiers like $FCB will be treated as hex constants unless defined as a label.
Labels declared with two colons (`label::`) make the label public.

Single quotes are ignored at the end of identifiers allowing non-binding notation indicating alternate register use during heavy applications of exx and ex.

---

Here is how other things work.
Numbers are used as examples, but a full expression can be used in their place.

## Data

`defb 42`
A byte. ascii, byte, db, defm, dm and text are synonyms.

`defb 'foobar'`
An ASCII character string (not NUL-terminated).
Double quotes can also be used.

`defb 'Who needs anything more than CP/M?',13,10,'$'`
Strings and bytes can mix together.

`defw 2112`
`defw $123,0x456`
A word (16 bits). word and dw are synonyms.

`def3 $123456`
A 3 byte word (24 bits). d3 is a synonym.

`defd $12345678`
A double word (32 bits). dword is a synonym.

`defs 500`
Skip output ahead 500 bytes. This will insert 500 zeros in the ".ams" and ".cim" output files or if inside a ".phase" section. block, ds and rmem are synonyms.

`dc 'string'`
Like ascii but accepts only a single string and the high bit of the last character will be set. bytes is a synonym.

`dc count,value`
Repeat the byte value a total of count times. Similar to defs except that memory is always filled with value.

`incbin file`
Inserts the raw contents of the file into the assembly. Simpler for large amounts of data.

## Symbols

`label equ 100`
Define a symbol to have a fixed value.
The symbol can be used before it is defined.
A symbol defined with equ or as a label can be defined only once, except that a symbol defined with equ may be redefined to the same value.

`varname defl 200`
Define a symbol to have a changeable value. The symbol cannot be used before it is defined, and it can be redefined to a different value later with another defl. aset, set and = are synonyms (despite set also being a Z-80 mnemonic).

`varname OP = expression`
Shorthand for `varname defl varname OP expression`.
Allows for C-like handling of variable such as var += 5.
OP can be +, -, *, /, %, &, |, ^, <<, >>, && or ||.

`varname++`
Shorthand for varname defl varname + 1

`varname--`
Shorthand for varname defl varname - 1

`min`
`max`
Same as defl except that the symbol is defined as the smaller or bigger of two comma-separated expressions.

`name equ register`
Define a symbol to be an alias of a register. count equ bc lets count stand for register bc so push count and dec count will both operate on register bc.

`*mod`
Increment the internal module name string. The first time this results in "a". Then "b", "c", ... "z". Then "aa", "ab", "ac", etc. all the way up to "zzzz". The module name string is used in --mras mode where "?" in label names is replaced with the current module name.

`extern lab1,lab2,...`
The listed labels are defined in an external module for later linking. No effect unless zmac is producing ".rel" output. ext and extrn are synonyms.

`public lab1,lab2,...`
The given labels will be visible to external modules when linking. No effect unless zmac is producing ".rel" output. global and entry are synonyms.

`label ++`
Equivalent to label defl label + 1.

`label --`
Equivalent to label defl label - 1.

`label += 10`
`label -= 10`
Equivalent to label defl label + 10 and label defl label - 10 respectively. Also works for *=, /=, %=, |=, &=, ^=, <<= and >>=.
Location Control

`org 9000h`
Set the address to assemble to 0x9000.

`phase address`
Continue to produce code and data for loading at the current address but assemble instructions and define labels as if they originated at the given address. Useful when producing code that will be copied to a different location before being executed (e.g., an overlay).

`dephase`
End phase mode assembly.

`aseg cseg dseg`
Switch to the absolute, code and data segments respectively. 
No effect unless zmac is producing ".rel" output.

`common /name/`
Set the address to the start of the selected common block. The blank common block will be selected if name is empty or all blanks or omitted entirely. 
No effect unless zmac is producing ".rel" output.

## Input Control

`end`
Ends the input. Any lines after an end are silently ignored. 
If an arg is given, it declares the entry address for the program. 
This has no effect in ".cim" output. In ".hex" output it generates an S-record directing 0 bytes of data to be loaded at the given address. 
It is required for ".500.cas", ".1000.cas" and ".1500.cas" output.

`if ... [ else ... ] endif`
For conditional assembly. 
If you do if foo and foo evaluates to zero, all the lines up until the next corresponding else or endif are completely ignored. 
Conversely, if foo evaluates to non-zero, any lines from a corresponding else to the endif are ignored. 
Ifs can be nested. cond/endc are synonyms for if/endif.

`ifdef symbol`
Like if, but tests if symbol has been defined. 
Declaring a symbol as external counts as it being defined.

`ifndef symbol`
Like if, but tests if symbol has not yet been defined.

`import file`
Like include but will only bring in the file once.
File tracking is done using only the file name so, for example, an import file will stop both import ./file and import dir/file even if they actually refer to different files.

`include file`
Include a file. 
Like C's (well, cpp's) \#include and follows the same include path search rules, but the filename arg lacks the angle brackets or quotes (though single or double quotes may be used). 
`read` is a synonym. *include file also works if started in the first column. In --mras mode ".asm" will be added if file has no suffix.

`maclib file`
Like include but adds .lib to the file name so includes file.lib.

`comment X`
Suspend assembly until the next occurrence of character X on a line.
The rest of the line will be ignored. A multi-line comment.

`assert expr`
Stop assembly if expr is non-zero.

## Cycle Counting

`sett expr`
Set the current T-state count to expr. `tstate` is a synonym.

`setocf expr`
Set the current opcode fetch count to expr.

## Code Generation

`8080`
Make cycle counting operators return 8080 cycle counts and interpret any ambiguous assembly statements as Intel 8080 mnemonics. 
CP will be interpreted as "call on positive" and JP as "jump on positive".

`z80`
Make cycle counting operators return Z-80 cycle counts and interpret any ambiguous assembly statements as Zilog Z-80 mnemonics.
CP will be interpreted as "compare accumulator" and JP as "jump unconditionally".

`jperror enable`
If enable is non-zero, turn on errors when JR instructions could be used instead of JP, off otherwise.
Used to check existing code for situations where shorter code could be generated. Same as -J option. 
No effect if in 8080 mode.

`jrpromote enable`
If enable is non-zero, JR and DJNZ instructions will be promoted to equivalent JP and DEC B, JP NZ instructions if the relative branch offset is out of range. 
If enable is zero, promotion is disabled. Same as the -j option. No effect if in 8080 mode.

## Undocumented Instructions

Most Z-80 chips support a number of undocumented instructions that were part of the original design but not made an offical part of the Zilog specification. 
These instructions may not be supported by all Z-80 chips, especially licensed variants, but are fairly widely available nonetheless.

`sl1 r`
Same as sla r but shifts a 1 into the lower bit of r rather than a 0.

`in (c)`
Inputs a byte from port c but does not store the value. Flags are still set as with the normal in r,(c) instruction.

`out (c),0`
Outputs a zero to port c.

`bit/set/res n,(ix+d),r`
`rlc/rrc/rl/rr/sla/sl1/sra/srl (iy+d),r`
Same as the corresponding operation on just (`ix+d) or (`iy+d) but with the result being stored both into (`ix+d`) and register r.
Except for bit which has no effect on r.
zmac supports the syntax to allow those instruction patterns to be generated.

The upper and lower bytes of the `ix` and `iy` can be used in a number of instructions much in the same way as d and e correspond to the upper and lower bytes of de.
zmac names these `ixh`, `ixl`, `iyh` and `iyl` and are referred to generically as `ixylh` here.

`inc/dec/add/adc/sub/sbc/and/xor/or/cp ixylh`
Arithmetic or logical operation on `ix` or `iy` high or low byte.

`ld a/b/c/d/e,ixylh`
Load register with `ix` or `iy` high or low byte.

`ld ixylh,a/b/c/d/e`
Load `ix` or `iy` high or low byte with register.

`pfix`
`pfiy`
Output $DD and $FD prefix bytes. 
The Z-80 allows multiple prefix bytes for IX and IY instructions.
This allows you to specify them abstractly.
There is little purpose except for delaying an interrupt or confusing dis-assemblers.

## Miscellaneous

`pragma str ...`
Like C's \#pragma, a generic hook for special purpose operations. 
Only two are currently defined.
pragma bds rest-of-line to output rest-of-line to the .bds output file.
pragma mds rest-of-line to output rest-of-line to the .mds output file.

The .bds output format supports setting initial values for Z-80 registers and I/O ports so pragma gives you access to that.

The .mds output format is a MAME debug script thus additional initial debugging commands may be output.
Of particular use on the TRS-80 Model II is pragma mds ib@$ff=1 which maps page 1 of RAM into $8000 .. $FFFF and thus allows programs to load into that area.

`name str`
Set the name of the output module to str.
For compatibility reasons str may be parenthesized (e.g., "name ('foo')").
Not all output formats support an internal name and many have severe length limits.

`rsym and wsym`
Read/write a symbol file.
These simply load/save the currently defined symbols from/to the file specified (in a non-portable format).
rsym takes place at the point it is encountered in the file (on the first pass); wsym is delayed until assembly has finished.

## Listing Pseudo-ops

There are several pseudo-ops for controlling the listing. 
None of these ops appear in the listing themselves:

`eject`
Start a new listing page.

`nolist`
Do nothing. This can be used to have a comment in the source but not the listing, I suppose.

`elist, flist, glist, mlist`
These have the same effect as the similarly-named command-line options, though possibly with the sense reversed depending on the default.
Use an arg >0 (or no arg) to enable, and an arg <0 to disable.

`list arg`
Turns output to listing file (.list) off if arg < 0 or on if arg > 0.
If no arg supplied then listing is enabled. Use this to avoid listing certain parts of the source.
In --mras mode arg must be either on or off and *list can be used if started in the first column.

`title`
Set title (used in listing and symbol file).

`space arg`
Output arg blank lines in the listing, or one line if no arg is given.

## Expressions

Expressions feature a full set of C operators with the same precedence rules and some common assembler extensions and names.
Here is the complete list of operators, highest-precedence first.
Operators separated only by a space are synonyms; for example, ~ is the same as not.

! (logical), ~ not (bitwise), + (unary), - (unary), low, high, t, tilo, tihi, ocf

`*, /, % mod`

`+, -`

`<< shl, >> shr`

`< lt, > gt, <= le, >= ge`

`== = eq, != <> ne`

`& and` (bitwise)

`^ xor` (bitwise)

`| or` (bitwise)

`&&`

`||`

`? :` (ternary choice operator)

### MRAS mode

Expressions change significantly in --mras mode:

Evaluation is strictly left to right. Except for and, or, xor and =.
This doesn't break compatibility as original MRAS source code only allows .and., .or. and .xor. but the precedence difference may surprise if code is added.

! is bitwise OR instead of logical not.

< is left shift (or right shift when shift amount is negative)

MRAS operators (.and. .eq. .ge. .gt. .high. .le. .low. .lt. .mod. .ne. .not. .or. .shl. .shr. .xor.) are recognized even if apparently in identifers. (e.g., a.or.b is seen as a .or. b).
Logical operators return -1 for true and 0 for false. Normally zmac, like C, uses 1 for true.
You can use normal parentheses or square brackets to override the precedence rules.
Square brackets can be used where parentheses would conflict with Z-80 mnemonic syntax, but this is not necessary in any practical case.

The ? may need spaces around it to distinguish it from a label that has ? in it.
The unary operators not familiar to C programmers:

`low expr`
Returns low 8 bits of expr

`high expr`
Returns high 8 bits of expr

`t expr`
Current count of T-states up to memory location expr

`tilo expr`
Low count of T-states used by instruction at memory location expr

`tihi expr`
High count of T-states used by instruction at memory location expr

`ocf expr`
Current count of opcode fetches up to memory location expr

## Macros

The following defines a macro named m with zero or more formal parameters p1, p2, ..., pn, zero or more local symbols ?s1, ?s2, ..., ?sm, and body b1, b2, ...:
```
m macro p1, p2, ..., pn, ?s1, ?s2, ..., ?sm
   b1
   b2
   ...
   endm
```

The macro is called by writing:
`m v1, v2, ..., vn`

A macro call expands to the text of the macro's body, with each occurrence of a formal parameter pk replaced by the
corresponding value vk, and with each local symbol ?sk replaced by a new, unique symbol invented for this call. Invented symbols begin with ?,
so you should avoid using such symbols elsewhere in your program.

zmac currently does not check that you have provided the right number of parameters when calling a macro.
If you provide too few, unmatched formals are replaced with the empty string.
If you provide too many, the additional values begin to replace local symbols as if they were ordinary parameters. (This could be considered a feature.)
After the local symbols are all replaced, additional parameters are silently ignored.

For compatibility with Macro-80, the first line of a macro definition can list other labels that will be treated locally:

   `local lab1,lab2,...`
Each time the macro is expanded the local labels are replaced with unique names thus avoiding multiple definition problems.

For compatibility with MRAS, macro arguments may be preceded by # in their definition and use.

Any ` (back-quote) in a macro is ignored thus allowing a macro to construct identifiers. For example:

```
move macro dir
     ld`dir`r
     endm
```

Invoking move i will construct a ldir block move instruction.

For compatibility, & can also be used as in MAC to concatenate macro parameters.
This conflicts with zmac's bitwise and operator but you can use the and synonym in macros to avoid the conflict.

In --mras mode arguments will be expanded even if they are inside other identifiers. The move could be written:

```
move macro dir
     lddirr
     endm
```

Macro definitions can contain macro definitions which will be defined when the outer macro is first expanded. Macros can be redefined as well.
Macro expansion continues to the endm directive but can be stopped prematurely by the exitm directive. Typically the exitm is inside some conditional part of the macro.
Parameters passed to a macro can be empty and are tested with the nul operator:

```
if nul &par
...
endif
```

Macro parameters can contain commas if grouped inside < and >. Or a comma can be escaped with ^ which can also escape spaces and other special characters.
It is also be put in front of a macro parameter name inside the expansion to suppress the replacement by its value.

Expansion of parameters in a macro body is purely textual. This can lead to surprises in complex situations.
The % character can be used to force a macro parameter to be replaced with the evaluation of it as an expression.

### Inline Macros

zmac supports the commonly available rept, irp and irpc inline macros

rept repeats its block the given number of times. This will output 10 nop instructions:

```
rept 10
     nop
endm
```

irpc runs through a string of letters assigning them to a variable and expanding the macro block each time.
For example, this will load 7 into registers b, d and h:

```
irpc reg,bdh
     ld &reg,7
endm
```

irp runs through a list of parameters assigning each entry to a variable and expanding the macro block.
Here we load bc, de and hl with 0:

```
irp rpair,<bc,de,hl>
     ld &rpair,0
endm
```

Lists can be nested. Here's an example of and irp passing lists on down to another irp:

```
irp listlist,<<one,two,three>,<four,five,six>>
irp list,<listlist>
ascii '&list'
endm
endm
```

## Compatibility

zmac is broadly compatible with many original Z-80 and 8080 assemblers because it accepts many different names for
common operations and has liberal identifier and numeric formats. It also accepts most simple usage of macros.

When assembling old code keep these portability problems in mind.

Expression order of evaluation may be different.
zmac uses C semantics more order of evaluation but assemblers often used simple left to right ordering.
zmac will evaluate 2+2*3 as 8 where other assemblers will yield 12.
However, in --mras mode expressions are evaluated strictly left-to-right for compatibility.

zmac has no support operating on strings in macros.
Assemblers like Macro-80 could perform conditional tests on strings.

Advanced macros are unlikely to work.
zmac hasn't advanced to the state where all the possible ways of substituting parameters are supported.

Consult the original assembler manual.
zmac error messages won't help you figure out what an unknown assembler command is supposed to do.

Compare against original output.
The very safest thing to do when porting assembly code is to compare the binary output of zmac against that produced by the original assembler.
This way you can ensure everything has been interpreted correctly.
Only once that has been achieved should you modify the code.

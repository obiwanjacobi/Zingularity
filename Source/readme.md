# Zingularity Source Code

## Resources Used

Zilog Z80 User Manual
http://z80.info/zip/z80cpu_um.pdf

Interrupt behavior:
http://z80.info/zip/z80-interrupts_rewritten.pdf

Special Reset:
http://www.primrosebank.net/computers/z80/z80_special_reset.htm

Hidden W&S (W&Z) Regsisters:
https://gist.github.com/drhelius/8497817

Undocumented Instructions:
http://z80.info/zip/z80-documented.pdf

---

## Code Projects

### Jacobi.CpuZ80

The `C` code that contains the core of the Z80 emulator.
Some code files are generated by the .tt files in Jacobi.CpuZ80.Meta.

### Jacobi.CpuZ80.Tests

`CPP`
Unit tests for the Z80 emulator code.

### Jacobi.CpuZ80.Meta

`C#`
Contains the InstructionsZ80.json file that defines all possible Z80 instruction.
This is used as a basis to generate `C` source code.

### Jacobi.CpuZ80.Meta.Tests

`C#`
Unit tests for the meta logic.

## Z80 notes

### Flags

After analysis of the Z80 instrcutions I have found these flag operations including the undocumented ones.

| Flag Operation   | Description   |
|-------------|--------------|
| [ommited] | Flag is unaffected
| [_name] | A custom function is generated for the flag.
| 0 | Flag is always reset.
| 1 | Flag is always set.
| r[b] | Flag set to b'th bit of the result of the instruction.
| rz | Flag is set when the result of the instruction is zero (also 16 bits results).
| ro | Flag is set when the signed result of the instruction overflows (see Z80 manual).
| rp | Flag is set when the parity of the result of the instruction is even.
| c | Flag is set to value of the carry flag.
| c[b] | Flag is set when the there was a carry for the b'th bit. b=[7,3]
| b[b] | Flag is set when the there was a borrow for the b'th bit. b=[8,4]
| ah[b] | Flag set to the b'th bit of the high byte of the resulting address after displacement.
| i | Flag is set to the value of IFF2
| [ABCDEHLIR][b] | Flag set to b'th bit of the register before the instruction is executed.
| [ABCDEHLIR]z | Flag is set when the register is zero before the instruction is executed.
| BC | Flag is set when BC is not zero.
| d[b] | Flag is set to the b'th bit of the data being read/written.
| dz | Flag is set when the data being read/written is zero.
| [00] | Flag is set if the result matches the hex value specified.


Note: Rotate and Shift instructions set the Carry flag as part of the instruction implementation.


## ICE Testing

An idea I had about testing the correctness of the ICE simulator code is to have a hardware ICE host 
(like the PSoC) implement the Z80Host methods to compare against a real Z80 chip. The ICE host could 
even drive the Z80 chip -providing it clock signals and memory content- and at the same time compare 
the output the simulator code generates with the actual Z80 chip results - taking into account that 
there might be slight delays between clock level changes (pos/neg edge) and the actual activation of
IO lines (pins like RD, WR, MEMRQ etc).
The other option is to allow the ICE simulator to run shadow to a real Z80 chip in an actual circuit.
Any differences can be logged through a serial connection to the PC.

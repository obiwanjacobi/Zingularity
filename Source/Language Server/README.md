# Z80 Assembler

Language Server Protocol (LSP)

## Functionality

* Syntax coloring
* Z80 assembler Intellisense
* Go to definition of a label
* Hover info: cycles, bytes and affected flags

## Structure

```ascii
.
├── client                      // Language Client
│   ├── src
│   │   ├── test                // End to End tests for Language Client / Server
│   │   └── extension.ts        // Language Client entry point
├── package.json                // The extension manifest.
├── server                      // Language Server
│   └── src
│       ├── test
│       |   └── *.test.ts       // unit test files
│       ├── z80asm
│       |   ├── *.ts            // Z80 assembler parsing code / code model
│       |   └── InstructionMap.json     // Data structure for parsing Z80 mnemonics (generated)
│       └── server.ts           // Language Server entry point
└── syntaxes                    // Z80 assembler syntax coloring rules
```

## Tools

LSP log inspector
https://microsoft.github.io/language-server-protocol/inspector/

Guide
https://code.visualstudio.com/api/language-extensions/language-server-extension-guide

Syntax Coloring Guide
https://code.visualstudio.com/api/language-extensions/syntax-highlight-guide

LSP Specs
https://microsoft.github.io/language-server-protocol/

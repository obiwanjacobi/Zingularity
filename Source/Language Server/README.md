# Z80 Assembler

Language Server Protocol (LSP)

## Functionality

## Structure

```
.
├── client // Language Client
│   ├── src
│   │   ├── test // End to End tests for Language Client / Server
│   │   └── extension.ts // Language Client entry point
├── package.json // The extension manifest.
└── server // Language Server
    └── src
        └── server.ts // Language Server entry point
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

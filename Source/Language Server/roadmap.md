# Road Map

Plans and Ideas.

## Editor integration

* Formating code (in-place)
* Convert from one assembler format to another (save as)
* Support Workspaces (research topic)

## Structured Comment Blocks

* Structured comment blocks to document and detect function entry points
* Follow Doxygen syntax (subset) or JSDoc? (although doxygen will probably not be able to parse it)
* Generate documentation from structured comment blocks (again doxygen?)
* Use structured comment blocks as code completion help

### Comments

`;` is the usual delimiter for a line comment.

Block comments are not supported.

`;;` Indicates a comment that is part of the block.

The function header comment block is placed directly above a line that starts with a label.

* `@param {registers|addresses}` Describe a parameter (in order).
* `@return {registers|flags|addresses}` - Describe the return value. Ommit if no value is returned.
* `@see {name}` - To make a reference to another function.

```asm
    ;; This `func` is used to load a value from hl into a.
    ;; @param hl The address to load from.
    ;; @return a The result is put in register A.
    func:               ; this label is used as the function name.
        ld a, (hl)      ; comments
        ret
```

When typing the `CALL` instruction, the following intellisense will be shown.

`CALL` `func: hl => a`

after it is selected (hilighted) a popup with the documentation is displayed.

```txt
    This 'func' is used to load a value from hl into a.
    @param hl The address to load from.
    @return a The result is put in register A.
```

## Tool Chains

* Configurable syntax details (directive, casing etc)
* Support for project output thru 3rd party tools
* Decide on build system (Make, PowerShell, other?)

## Help / Guidance

* Display instruction docs as you type (extend hover also)
* Tips for optimization / commands to perform them.

## Editor support

* VS-code (supported)
* Atom
* Sublime Text 3 (not free)

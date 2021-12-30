# TODO list

* Update vscode-languageserver to latest version and fix breaking changes.
* Intellisense for '+' ('-') and ',' does not work. Seems to get filtered out by vscode..?
* pre-load documents in a project. This gives us a code model (of the project) without having to open all documents. Multi-root related.
* Display value of constants (defc) in hover (bytes) and process expressions for constants.
* How to check for release build in code: isProduction/isDevelopment?
* formatting bigger documents takes very long (serializer is quick). Looks like vscode is taking very long...
* formatting repeatedly adds more and more cycles and bytes (if options enabled).
* goto definition has to take into account that labels are private to the file unless they are made 'public' (directive).
* Implement SemanticTokensProvider for each supported dialect: https://code.visualstudio.com/api/references/vscode-api#DocumentSemanticTokensProvider

## Wild Ideas

Wouldn't it be nice if...

### Preprocessor

* Comment / documentation syntax.
* public function syntax that documents parameter (register/stack/vars) passing and registers used and return values.

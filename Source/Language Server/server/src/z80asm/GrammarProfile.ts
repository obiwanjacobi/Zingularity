import { Parser, TokenStream } from "antlr4ts";

// directs the Antlr4 parser for language dialects based on flags
export abstract class GrammarProfile extends Parser
{
    constructor(input: TokenStream) { super(input); }
    
    public z88dk: boolean = false;
    public zmac: boolean = false;
}

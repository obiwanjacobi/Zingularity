import { AssemblyNode } from "./CodeModel";
import * as antlr4 from "antlr4ts";
import { ParseTreeWalker } from "antlr4ts/tree/ParseTreeWalker";
import { z80asmLexer } from "./z80asmLexer";
import { z80asmParser } from "./z80asmParser";
import { ParserRuleContext } from "antlr4ts";
import { GrammarListener } from "./GrammarListener";

export class GrammarParser {

    parse(text: string): AssemblyNode[] {
        const parser = GrammarParser.createParser(text);
        const tree = parser.file();
        return GrammarParser.createAssemblyNodes(tree);
    }

    static createParser(text: string): z80asmParser {
        const chars = new antlr4.ANTLRInputStream(text);
        const lexer = new z80asmLexer(chars);
        const tokens  = new antlr4.CommonTokenStream(lexer);
        const parser = new z80asmParser(tokens);
        parser.buildParseTree = true;
        return parser;
    }

    static createAssemblyNodes(tree: ParserRuleContext): AssemblyNode[] {
        const listener = new GrammarListener();
        // @ts-ignore: no props in common
        ParseTreeWalker.DEFAULT.walk(listener, tree);

        return listener.nodes;
    }
}
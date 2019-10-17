import { AssemblyNode } from "./CodeModel";
import * as antlr4 from "antlr4ts";
import { ParseTreeWalker } from "antlr4ts/tree/ParseTreeWalker";
import { z80asmLexer } from "./z80asmLexer";
import { z80asmParser } from "./z80asmParser";
import { ParserRuleContext, DefaultErrorStrategy, Parser, RecognitionException, NoViableAltException, InputMismatchException, FailedPredicateException } from "antlr4ts";
import { GrammarListener } from "./GrammarListener";

class GrammerErrorHandler extends DefaultErrorStrategy {
    private readonly mute: boolean;

    constructor() {
        super();
        // TODO: isProd?
        this.mute = false;
    }
    reportError(recognizer: Parser, e: RecognitionException) {
        if (!this.mute) {
            super.reportError(recognizer, e);
        }
    }
    reportNoViableAlternative(recognizer: Parser, e: NoViableAltException) {
        if (!this.mute) {
            super.reportNoViableAlternative(recognizer, e);
        }
    }
    reportInputMismatch(recognizer: Parser, e: InputMismatchException) {
        if (!this.mute) {
            super.reportInputMismatch(recognizer, e);
        }
    }
    reportFailedPredicate(recognizer: Parser, e: FailedPredicateException) {
        if (!this.mute) {
            super.reportFailedPredicate(recognizer, e);
        }
    }
    reportUnwantedToken(recognizer: Parser) {
        if (!this.mute) {
            super.reportUnwantedToken(recognizer);
        }
    }
    reportMissingToken(recognizer: Parser) {
        if (!this.mute) {
            super.reportMissingToken(recognizer);
        }
    }
}

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
        parser.errorHandler = new GrammerErrorHandler();
        return parser;
    }

    static createAssemblyNodes(tree: ParserRuleContext): AssemblyNode[] {
        const listener = new GrammarListener();
        // @ts-ignore: no props in common
        ParseTreeWalker.DEFAULT.walk(listener, tree);

        return listener.nodes;
    }
}
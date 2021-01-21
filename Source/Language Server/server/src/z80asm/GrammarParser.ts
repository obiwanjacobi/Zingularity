import { AssemblyNode } from "./CodeModel";
import * as antlr4 from "antlr4ts";
import { ParseTreeWalker } from "antlr4ts/tree/ParseTreeWalker";
import { z80asmLexer } from "./z80asmLexer";
import { z80asmParser, AsmContext, FileContext } from "./z80asmParser";
import { ParserRuleContext, DefaultErrorStrategy, Parser, RecognitionException, NoViableAltException, InputMismatchException, FailedPredicateException } from "antlr4ts";
import { GrammarListener } from "./GrammarListener";
import { applyMixins } from "../utils";

class GrammarErrorHandler extends DefaultErrorStrategy {
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

export interface GrammarProfile
{
    z88dk: boolean;
    zmac: boolean;
}

function ExtendWithProfile() {
    return class GrammarParserWithProfile extends z80asmParser
    {
        z88dk: boolean = false;
        zmac: boolean = false;
    }
}

// type: z80Parser + GrammarProfile
const GrammarParserWithProfileClass = ExtendWithProfile();

export class GrammarParser {

    parse(text: string): AssemblyNode[] {
        const parser = GrammarParser.createParser(text);
        const tree = parser.file();
        return GrammarParser.createAssemblyNodes(tree);
    }

    static createParser(text: string): z80asmParser {
        const chars = antlr4.CharStreams.fromString(text);
        const lexer = new z80asmLexer(chars);
        const tokens  = new antlr4.CommonTokenStream(lexer);
        const parser = new GrammarParserWithProfileClass(tokens);
        parser.buildParseTree = true;
        parser.errorHandler = new GrammarErrorHandler();
        return parser;
    }

    static createAssemblyNodes(tree: ParserRuleContext): AssemblyNode[] {
        const listener = new GrammarListener();
        // @ts-ignore: no props in common
        ParseTreeWalker.DEFAULT.walk(listener, tree);

        return listener.nodes;
    }
}
import {
    createConnection,
    TextDocuments,
    TextDocument,
    DiagnosticSeverity,
    ProposedFeatures,
    InitializeParams,
    DidChangeConfigurationNotification,
    CompletionItem,
    TextDocumentPositionParams,
    Hover,
    Location,
    SymbolInformation,
    SymbolKind,
    DocumentFormattingParams,
    Range,
} from "vscode-languageserver";
import { AssemblyDocument, AssemblyNodeKind, Instruction, Label, Directive } from "./z80asm/CodeModel";
import { buildCompletionList } from "./z80asm/InstructionNavigator";
import { CodeModelManager, toRange, rangeFrom } from "./z80asm/CodeModelManager";
import { DocumentSerializer, SerializerProfile } from "./z80asm/DocumentSerializer";
import { GrammarParser } from "./z80asm/GrammarParser";
import { sum } from "./utils";
import { buildFoldingRanges } from "./z80asm/CodeModel.Analysis";
import { SymbolReference } from "./z80asm/SymbolTable";


// Create a connection for the server. The connection uses Node's IPC as a transport.
// Also include all preview / proposed LSP features.
let connection = createConnection(ProposedFeatures.all);

// Create a simple text document manager. The text document manager
// supports full document sync only
const documents: TextDocuments = new TextDocuments();
// manages parsed AssemblyNode documents
const codeModelMgr: CodeModelManager = new CodeModelManager();
const grammarParser = new GrammarParser();

let hasConfigurationCapability: boolean = false;
let hasWorkspaceFolderCapability: boolean = false;
let hasDiagnosticRelatedInformationCapability: boolean = false;

connection.onInitialize((params: InitializeParams) => {

    const capabilities = params.capabilities;

    // Does the client support the `workspace/configuration` request?
    // If not, we will fall back using global settings
    hasConfigurationCapability = !!(
        capabilities.workspace && !!capabilities.workspace.configuration
    );
    hasWorkspaceFolderCapability = !!(
        capabilities.workspace && !!capabilities.workspace.workspaceFolders
    );
    hasDiagnosticRelatedInformationCapability = !!(
        capabilities.textDocument &&
        capabilities.textDocument.publishDiagnostics &&
        capabilities.textDocument.publishDiagnostics.relatedInformation
    );

    return {
        // Tell the client what features the server supports
        capabilities: {
            textDocumentSync: documents.syncKind,
            completionProvider: {
                triggerCharacters: ["\t", " ", ",", "("],
                resolveProvider: true
            },
            hoverProvider: true,
            definitionProvider: true,
            referencesProvider: true,
            documentSymbolProvider: true,
            documentFormattingProvider: true,
            foldingRangeProvider: true,
        }
    };
});

connection.onInitialized(() => {
    if (hasConfigurationCapability) {
        // Register for all configuration changes.
        connection.client.register(DidChangeConfigurationNotification.type, undefined);
    }
    // if (hasWorkspaceFolderCapability) {
    //     connection.workspace.onDidChangeWorkspaceFolders(_event => {
    //         connection.console.log("Workspace folder change event received.");
    //     });
    // }

    connection.console.info("Zingularity Started.");
});

// The server settings
interface ZingularitySettings {
    maxNumberOfProblems: number;
    
    formatter: {
        newline: string;
        columnTabs: number[];
        printBytes: boolean;
        printCycles: boolean;
        emptyLineAfterRet: boolean;
    };
}

// The global settings, used when the `workspace/configuration` request is not supported by the client.
// Please note that this is not the case when using this server with the client provided in this example
// but could happen with other clients.
const defaultSettings: ZingularitySettings = {
    maxNumberOfProblems: 100, 
    formatter: {
        newline: "\r\n", 
        columnTabs: [0, 2, 8],
        printBytes: false,
        printCycles: false,
        emptyLineAfterRet: false
    }
};
let globalSettings: ZingularitySettings = defaultSettings;

// Cache the settings of all open documents
const documentSettings: Map<string, Thenable<ZingularitySettings>> = new Map();

connection.onDidChangeConfiguration(change => {
    if (hasConfigurationCapability) {
        // Reset all cached document settings
        documentSettings.clear();
    } else {
        globalSettings = <ZingularitySettings> (
            (change.settings.languageServerExample || defaultSettings)
        );
    }

    // Revalidate all open text documents
    documents.all().forEach(validateTextDocument);
});

function getDocumentSettings(resource: string): Thenable<ZingularitySettings> {
    if (!hasConfigurationCapability) {
        return Promise.resolve(globalSettings);
    }
    let result = documentSettings.get(resource);
    if (!result) {
        result = connection.workspace.getConfiguration({
            scopeUri: resource,
            section: "zingularity"
        });
        documentSettings.set(resource, result);
    }
    return result;
}

// Only keep settings for open documents
documents.onDidClose(e => {
    documentSettings.delete(e.document.uri);
});

// The content of a text document has changed. This event is emitted
// when the text document first opened or when its content has changed.
documents.onDidChangeContent(change => {
    validateTextDocument(change.document);
});

async function validateTextDocument(textDocument: TextDocument): Promise<void> {
    const doc: AssemblyDocument = { 
        nodes: grammarParser.parse(textDocument.getText()), 
        uri: textDocument.uri, 
        version: textDocument.version 
    };
    codeModelMgr.setDocument(doc);

    const settings = await getDocumentSettings(textDocument.uri);

    const diags = doc.nodes
        .filter(n => n.kind === AssemblyNodeKind.Error)
        .slice(0, settings.maxNumberOfProblems)
        .map(e => {
            return {
                severity: DiagnosticSeverity.Error,
                range: toRange(e),
                message: e.toString(),
                source: "Zingularity"
            };
        });

    connection.sendDiagnostics({ uri: textDocument.uri, diagnostics: diags });
}

connection.onDidChangeWatchedFiles(_change => {
    // Monitored files have change in VSCode
    // validateTextDocument();
}); 

const commitCharacters = [",", "+", "-"];

// This handler provides the initial list of the completion items.
connection.onCompletion(
    (textDocumentPosition: TextDocumentPositionParams): CompletionItem[] => {

        let txt: string = "";
        const doc = documents.get(textDocumentPosition.textDocument.uri);
        if (doc) {
            const rng: Range = { 
                    start: { line: textDocumentPosition.position.line, character: 0 },
                    end: textDocumentPosition.position
                };
            txt = doc.getText(rng).trimLeft();
        }

        if (txt.length) {
            const docNode = codeModelMgr.findNode(textDocumentPosition.textDocument.uri, textDocumentPosition.position);
            // check we're not inside a comment
            if (!docNode ||
                (docNode.node.kind !== AssemblyNodeKind.Comment && 
                docNode.node.kind !== AssemblyNodeKind.BlockComment)) {

                return buildCompletionList(txt, { 
                    symbolTable: codeModelMgr.codeModel.symbols, 
                    docUri: textDocumentPosition.textDocument.uri
                })
                .map(v => <CompletionItem> { 
                    label: v.label, 
                    data: v.symbol, 
                    kind: v.kind, 
                    commitCharacters: commitCharacters 
                });
            }
        }

        return [];
    }   
);

// This handler resolves additional information for the item selected in
// the completion list.
connection.onCompletionResolve(
    (item: CompletionItem): CompletionItem => {
        
        if (item.data) {
            const symbol = <SymbolReference> item.data;
            // item.data has been serialized, all type info is gone.
            // so we fetch the original document from the code model.
            const doc = codeModelMgr.codeModel.documents.find(d => d.uri === symbol.document.uri);
            if (doc && symbol.node.kind === AssemblyNodeKind.Label) {
                const comment = codeModelMgr.commentFor(doc, symbol.node);
                if (comment) {
                    item.detail = comment.toText();
                }
                const blockComment = codeModelMgr.blockCommentFor(doc, symbol.node);
                if (blockComment) {
                    item.detail = blockComment.toText();
                }
            }
        }
        
        return item;
    }
);

connection.onHover(
    (textDocumentPosition): Hover | undefined => {
        const docNode = codeModelMgr.findNode(textDocumentPosition.textDocument.uri, textDocumentPosition.position);

        if (docNode) {
            if (docNode.node.kind === AssemblyNodeKind.Instruction) {
                const instruction = <Instruction> docNode.node;
                
                const flags = instruction.meta.flags.length === 0 ? "" :  ` - flags: ${instruction.meta.flags.join(" ")}`;
                return {
                    contents: `${instruction.toString()} - cycles: ${sum(instruction.meta.cycles)} - bytes: ${instruction.meta.bytes.join(", ")}${flags}`,
                    range: toRange(instruction)
                };
            }
            if (docNode.node.kind === AssemblyNodeKind.Label) {
                const label = <Label> docNode.node;
                
                const refs = codeModelMgr.codeModel.symbols.findReferences(label);
                return {
                    contents: `${label.symbol}: ${refs.length - 1} references`,
                    range: toRange(label)
                };
            }
            if (docNode.node.kind === AssemblyNodeKind.Directive) {
                const directive = <Directive> docNode.node;

                if (directive.symbols) {
                    
                    const refs = codeModelMgr.codeModel.symbols.findReferences(directive);
                    return {
                        contents: `${directive.symbols}: ${refs.length - 1} references`,
                        range: toRange(directive)
                    };
                }
            }
        }

        return undefined;
    }
);

connection.onDefinition((textDocumentPosition): Location | null => {
        const docNode = codeModelMgr.findNode(textDocumentPosition.textDocument.uri, textDocumentPosition.position);

        if (docNode) {
            const decl = codeModelMgr.codeModel.symbols.findDeclaration(docNode.node);
            if (decl) {
                return Location.create(decl.document.uri, toRange(decl.node));
            }
        }

        return null;
    }
);

connection.onReferences(refParams => {
    const docNode = codeModelMgr.findNode(refParams.textDocument.uri, refParams.position);
    
    if (docNode) {
        const refs = codeModelMgr.codeModel.symbols.findReferences(docNode.node);
        return refs.map(r => { 
            return Location.create(r.document.uri, toRange(r.node));
        });
    }

    return [];
});

connection.onDocumentSymbol(docSymbolParams => {
    const symbols = codeModelMgr.codeModel.symbols.findSymbols(docSymbolParams.textDocument.uri);
    return symbols.map(s => <SymbolInformation> { 
        name: s.symbol, 
        kind: SymbolKind.Function, 
        location: Location.create(s.reference.document.uri, toRange(s.reference.node))
    });
});

connection.onDocumentFormatting(async (docFormat: DocumentFormattingParams) => {
    const doc = codeModelMgr.codeModel.documents.find(d => d.uri === docFormat.textDocument.uri);
    if (doc) {
        const settings = await getDocumentSettings(doc.uri);
        const profile: SerializerProfile = {
            ...docFormat.options,
            newLine: settings.formatter.newline,
            columnTabs: settings.formatter.columnTabs,
            printBytes: settings.formatter.printBytes,
            printCycles: settings.formatter.printCycles,
            emptyLineAfterRet: settings.formatter.emptyLineAfterRet
        };
        const serializer = new DocumentSerializer(profile);
        const textEdit = {
            range: rangeFrom(doc.nodes),
            newText: serializer.serialize(doc.nodes)
        };

        // start at beginning of document
        textEdit.range.start.line = 0;
        textEdit.range.start.character = 0;
        return [textEdit];
    }
});

connection.onFoldingRanges(foldingRangeParams => {
    const doc = codeModelMgr.codeModel.documents.find(d => d.uri === foldingRangeParams.textDocument.uri);
    if (doc) {
        return buildFoldingRanges(doc.nodes);
    }

    return null;
});

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();
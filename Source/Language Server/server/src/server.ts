import {
    createConnection,
    TextDocuments,
    TextDocument,
    DiagnosticSeverity,
    ProposedFeatures,
    InitializeParams,
    DidChangeConfigurationNotification,
    CompletionItem,
    CompletionItemKind,
    TextDocumentPositionParams,
    Hover,
    Location,
    SymbolInformation,
    SymbolKind,
} from "vscode-languageserver";
import { AssemblyDocument, AssemblyNodeKind, Instruction } from "./z80asm/CodeModel";
import { ParserProfile } from "./z80asm/Parser";
import { buildCompletionList } from "./z80asm/InstructionNavigator";
import { sum } from "./utils";
import { CodeModelManager, toRange, rangeFrom } from "./z80asm/CodeModelManager";
import { DocumentSerializer } from "./z80asm/DocumentSerializer";
import { GrammarParser } from "./z80asm/GrammarParser";

// Create a connection for the server. The connection uses Node's IPC as a transport.
// Also include all preview / proposed LSP features.
let connection = createConnection(ProposedFeatures.all);

// Create a simple text document manager. The text document manager
// supports full document sync only
const documents: TextDocuments = new TextDocuments();
const codeModelMgr: CodeModelManager = new CodeModelManager();
const parserProfile: ParserProfile = { 
    numericProfile: {
        bin : { prefix: [""], postfix: [""] },
        oct : { prefix: [""], postfix: [""] },
        dec : { prefix: [""], postfix: [""] },
        hex : { prefix: ["$", "#", "0x"], postfix: ["h", "H"] },
    },
    lineComment: ";",
    labelBegin: ".",
    labelEnd: ":",
    directives: ["section", "org", "equ"]
 };

let hasConfigurationCapability: boolean = false;
let hasWorkspaceFolderCapability: boolean = false;
let hasDiagnosticRelatedInformationCapability: boolean = false;

connection.onInitialize((params: InitializeParams) => {
    connection.console.log("Zingularity Initialize");

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
            documentFormattingProvider: true
        }
    };
});

connection.onInitialized(() => {
    if (hasConfigurationCapability) {
        // Register for all configuration changes.
        connection.client.register(DidChangeConfigurationNotification.type, undefined);
    }
    if (hasWorkspaceFolderCapability) {
        connection.workspace.onDidChangeWorkspaceFolders(_event => {
            connection.console.log("Workspace folder change event received.");
        });
    }

    connection.console.log("Zingularity Initialized");
});

// The server settings
interface ZingularitySettings {
    maxNumberOfProblems: number;
}

// The global settings, used when the `workspace/configuration` request is not supported by the client.
// Please note that this is not the case when using this server with the client provided in this example
// but could happen with other clients.
const defaultSettings: ZingularitySettings = { maxNumberOfProblems: 100 };
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
    connection.console.log("Zingularity onDidChangeContent");
    validateTextDocument(change.document);
});

async function validateTextDocument(textDocument: TextDocument): Promise<void> {
    //const parser = new Parser(parserProfile);
    const parser = new GrammarParser();
    const doc: AssemblyDocument = { 
        nodes: parser.parse(textDocument.getText()), 
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

// This handler provides the initial list of the completion items.
connection.onCompletion(
    (textDocumentPosition: TextDocumentPositionParams): CompletionItem[] => {
        connection.console.log("Zingularity onCompletion");

        const docNode = codeModelMgr.findNode(textDocumentPosition.textDocument.uri, textDocumentPosition.position);
        if (docNode) {
            return buildCompletionList(docNode.node.text)
                .map(v => <CompletionItem> { label: v.label, data: v.path, kind: CompletionItemKind.Unit });
        }

        return [];
    }   
);

// This handler resolves additional information for the item selected in
// the completion list.
connection.onCompletionResolve(
    (item: CompletionItem): CompletionItem => {
        connection.console.log("Zingularity onCompletionResolve");
        
        // item.data => path to map
        // item.label => map entry
        
        return item;
    }
);

connection.onHover(
    (textDocumentPosition): Hover | undefined => {
        const docNode = codeModelMgr.findNode(textDocumentPosition.textDocument.uri, textDocumentPosition.position);

        if (docNode && docNode.node.kind === AssemblyNodeKind.Instruction) {
            const instruction = <Instruction> docNode.node;
            
            const flags = instruction.meta.flags.length === 0 ? "" :  ` - flags: ${instruction.meta.flags.join("|")}`;
            return {
                contents: `${instruction.text} - cycles: ${sum(instruction.meta.cycles)} - bytes: ${instruction.meta.bytes.join(", ")}${flags}`,
                range: toRange(instruction)
            };
        }

        return undefined;
    }
);

connection.onDefinition((textDocumentPosition): Location | null => {
        const docNode = codeModelMgr.findNode(textDocumentPosition.textDocument.uri, textDocumentPosition.position);

        if (docNode) {
            const decl = codeModelMgr.codeModel.symbols.findDeclaration(docNode.node);
            if (decl) {
                return { uri: decl.document.uri, range: toRange(decl.node) };
            }
        }

        return null;
    }
);


connection.onReferences(ref => {
    const docNode = codeModelMgr.findNode(ref.textDocument.uri, ref.position);
    
    if (docNode) {
        const refs = codeModelMgr.codeModel.symbols.findReferences(docNode.node);
        return refs.map(r => { 
            return {uri: r.document.uri, range: toRange(r.node) };
        });
    }

    return [];
});

connection.onDocumentSymbol(docSymbolParams => {
    const symbols = codeModelMgr.codeModel.symbols.findSymbols(docSymbolParams.textDocument.uri);
    return symbols.map(s => <SymbolInformation> { 
        name: s.symbol, 
        kind: SymbolKind.Constant, 
        location: { 
            uri: s.reference.document.uri, 
            range: toRange(s.reference.node) 
        } 
    });
});

connection.onDocumentFormatting(docFormat => {
    const doc = codeModelMgr.codeModel.documents.find(d => d.uri === docFormat.textDocument.uri);
    if (doc) {
        const profile = {
            ...docFormat.options,
            newLine: "\r\n",
            columnTabs: [0, 2, 8]
        };
        const serializer = new DocumentSerializer(profile);

        return [{
            range: rangeFrom(doc.nodes),
            newText: serializer.serialize(doc.nodes)
        }];
    }
});

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();

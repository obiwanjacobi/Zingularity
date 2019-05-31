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
    TextDocumentPositionParams
} from "vscode-languageserver";
import { AssemblyModel, AssemblyDocument, AssemblyNodeKind } from "./z80asm/CodeModel";
import { Parser, ParserProfile } from "./z80asm/Parser";
import { buildCompletionList } from "./z80asm/InstructionNavigator";

// Create a connection for the server. The connection uses Node's IPC as a transport.
// Also include all preview / proposed LSP features.
let connection = createConnection(ProposedFeatures.all);

// Create a simple text document manager. The text document manager
// supports full document sync only
const documents: TextDocuments = new TextDocuments();
const codeModel: AssemblyModel = { documents: [] };
const parserProfile: ParserProfile = { 
    comment: ";",
    labelBegin: ".",
    labelEnd: ":",
    directives: ["section", "org"],
    hex: ["$", "#"],
 };

let hasConfigurationCapability: boolean = false;
let hasWorkspaceFolderCapability: boolean = false;
let hasDiagnosticRelatedInformationCapability: boolean = false;

connection.onInitialize((params: InitializeParams) => {
    connection.console.log("Zingularity Initialize");

    let capabilities = params.capabilities;

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
        capabilities: {
            textDocumentSync: documents.syncKind,
            // Tell the client that the server supports code completion
            completionProvider: {
                resolveProvider: true
            }
        }
    };
});

connection.onInitialized(() => {
    connection.console.log("Zingularity onInitialized");
    if (hasConfigurationCapability) {
        // Register for all configuration changes.
        connection.client.register(DidChangeConfigurationNotification.type, undefined);
    }
    if (hasWorkspaceFolderCapability) {
        connection.workspace.onDidChangeWorkspaceFolders(_event => {
            connection.console.log("Workspace folder change event received.");
        });
    }
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
let documentSettings: Map<string, Thenable<ZingularitySettings>> = new Map();

connection.onDidChangeConfiguration(change => {
    if (hasConfigurationCapability) {
        // Reset all cached document settings
        documentSettings.clear();
    } else {
        globalSettings = <ZingularitySettings>(
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
            section: "z80assembler"
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

function validateTextDocument(textDocument: TextDocument): void {
    const parser = new Parser(parserProfile);
    const doc: AssemblyDocument = { 
        nodes: parser.parse(textDocument.getText()), 
        uri: textDocument.uri, 
        version: textDocument.version 
    };
    
    const i = codeModel.documents.findIndex(d => d.uri === textDocument.uri);
    if (i >= 0) {
        codeModel.documents.splice(i, 1, doc);
    } else {
        codeModel.documents.push(doc);
    }

    const errors = doc.nodes.filter(n => n.kind === AssemblyNodeKind.Error);
    if (errors.length > 0) {
        const diags = errors.map(e => {
            return {
                severity: DiagnosticSeverity.Error,
                range: {
                    start: { line: e.line - 1, character: e.column - 1 },
                    end: { line: e.line - 1, character: e.column + e.text.length }
                },
                message: e.toString(),
                source: "Zingularity"
            };
        });
        connection.sendDiagnostics({ uri: textDocument.uri, diagnostics: diags });
    }
}

connection.onDidChangeWatchedFiles(_change => {
    // Monitored files have change in VSCode
    connection.console.log("Zingularity onDidChangeWatchedFiles");
});

// This handler provides the initial list of the completion items.
connection.onCompletion(
    (textDocumentPosition: TextDocumentPositionParams): CompletionItem[] => {
        connection.console.log("Zingularity onCompletion");

        const doc = codeModel.documents.find(d => d.uri === textDocumentPosition.textDocument.uri);
        if (doc)
        {
            const textDoc = documents.get(textDocumentPosition.textDocument.uri);
            if (textDoc) {
                const docText = textDoc.getText({
                    start: { line: textDocumentPosition.position.line, character: 0 },
                    end: { line: textDocumentPosition.position.line, character: textDocumentPosition.position.character }
                });

                return buildCompletionList(docText).map(v => <CompletionItem> { label: v, kind: CompletionItemKind.Unit });
            }
        }

        return [];
    }   
);

// This handler resolves additional information for the item selected in
// the completion list.
connection.onCompletionResolve(
    (item: CompletionItem): CompletionItem => {
        connection.console.log("Zingularity onCompletionResolve");
        
        if (item.data === 1) {
            item.detail = "TypeScript details";
            item.documentation = "TypeScript documentation";
        } else if (item.data === 2) {
            item.detail = "JavaScript details";
            item.documentation = "JavaScript documentation";
        }
        return item;
    }
);

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();

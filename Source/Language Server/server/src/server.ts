import {
    createConnection,
    TextDocuments,
    TextDocument,
    Diagnostic,
    DiagnosticSeverity,
    ProposedFeatures,
    InitializeParams,
    DidChangeConfigurationNotification,
    CompletionItem,
    CompletionItemKind,
    TextDocumentPositionParams
} from "vscode-languageserver";
import { AssemblyModel, AssemblyDocument } from "./z80asm/CodeModel";
import { Parser, ParserProfile } from "./z80asm/Parser";

// Create a connection for the server. The connection uses Node"s IPC as a transport.
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
interface Z80AssemblerSettings {
    maxNumberOfProblems: number;
}

// The global settings, used when the `workspace/configuration` request is not supported by the client.
// Please note that this is not the case when using this server with the client provided in this example
// but could happen with other clients.
const defaultSettings: Z80AssemblerSettings = { maxNumberOfProblems: 100 };
let globalSettings: Z80AssemblerSettings = defaultSettings;

// Cache the settings of all open documents
let documentSettings: Map<string, Thenable<Z80AssemblerSettings>> = new Map();

connection.onDidChangeConfiguration(change => {
    if (hasConfigurationCapability) {
        // Reset all cached document settings
        documentSettings.clear();
    } else {
        globalSettings = <Z80AssemblerSettings>(
            (change.settings.languageServerExample || defaultSettings)
        );
    }

    // Revalidate all open text documents
    documents.all().forEach(validateTextDocument);
});

function getDocumentSettings(resource: string): Thenable<Z80AssemblerSettings> {
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
}

// async function validateTextDocument(textDocument: TextDocument): Promise<void> {
//     // In this simple example we get the settings for every validate run.
//     let settings = await getDocumentSettings(textDocument.uri);

//     // The validator creates diagnostics for all uppercase words length 2 and more
//     let text = textDocument.getText();
//     let pattern = /\b[A-Z]{2,}\b/g;
//     let m: RegExpExecArray | null;

//     let problems = 0;
//     let diagnostics: Diagnostic[] = [];
//     while ((m = pattern.exec(text)) && problems < settings.maxNumberOfProblems) {
//         problems++;
//         let diagnostic: Diagnostic = {
//             severity: DiagnosticSeverity.Warning,
//             range: {
//                 start: textDocument.positionAt(m.index),
//                 end: textDocument.positionAt(m.index + m[0].length)
//             },
//             message: `${m[0]} is all uppercase.`,
//             source: "ex"
//         };
//         if (hasDiagnosticRelatedInformationCapability) {
//             diagnostic.relatedInformation = [
//                 {
//                     location: {
//                         uri: textDocument.uri,
//                         range: Object.assign({}, diagnostic.range)
//                     },
//                     message: "Spelling matters"
//                 },
//                 {
//                     location: {
//                         uri: textDocument.uri,
//                         range: Object.assign({}, diagnostic.range)
//                     },
//                     message: "Particularly for names"
//                 }
//             ];
//         }
//         diagnostics.push(diagnostic);
//     }

//     // Send the computed diagnostics to VSCode.
//     // connection.sendDiagnostics({ uri: textDocument.uri, diagnostics });
// }

connection.onDidChangeWatchedFiles(_change => {
    // Monitored files have change in VSCode
    connection.console.log("Zingularity onDidChangeWatchedFiles");
});

// This handler provides the initial list of the completion items.
connection.onCompletion(
    (_textDocumentPosition: TextDocumentPositionParams): CompletionItem[] => {
        connection.console.log("Zingularity onCompletion");

        // The pass parameter contains the position of the text document in
        // which code complete got requested. For the example we ignore this
        // info and always provide the same completion items.
        return [
            {
                label: "TypeScript",
                kind: CompletionItemKind.Text,
                data: 1
            },
            {
                label: "JavaScript",
                kind: CompletionItemKind.Text,
                data: 2
            }
        ];
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

/*
connection.onDidOpenTextDocument((params) => {
    // A text document got opened in VSCode.
    // params.uri uniquely identifies the document. For documents store on disk this is a file URI.
    // params.text the initial full content of the document.
    connection.console.log(`${params.textDocument.uri} opened.`);
});
connection.onDidChangeTextDocument((params) => {
    // The content of a text document did change in VSCode.
    // params.uri uniquely identifies the document.
    // params.contentChanges describe the content changes to the document.
    connection.console.log(`${params.textDocument.uri} changed: ${JSON.stringify(params.contentChanges)}`);
});
connection.onDidCloseTextDocument((params) => {
    // A text document got closed in VSCode.
    // params.uri uniquely identifies the document.
    connection.console.log(`${params.textDocument.uri} closed.`);
});
*/

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();

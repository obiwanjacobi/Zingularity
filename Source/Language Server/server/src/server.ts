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
    Diagnostic,
    Hover,
    Location
} from "vscode-languageserver";
import { AssemblyModel, AssemblyDocument, AssemblyNodeKind, Instruction, AssemblyNode, Label } from "./z80asm/CodeModel";
import { Parser, ParserProfile } from "./z80asm/Parser";
import { buildCompletionList, findMap } from "./z80asm/InstructionNavigator";
import { sum } from "./utils";
import { CodeModelManager, toRange } from "./z80asm/CodeModelManager";

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
    blockComment: [""],
    labelBegin: ".",
    labelEnd: ":",
    directives: ["section", "org"],
    instructionSeparator: [""]
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
        // Tell the client what features the server supports
        capabilities: {
            textDocumentSync: documents.syncKind,
            completionProvider: {
                resolveProvider: true
            },
            hoverProvider: true,
            definitionProvider: true,
            referencesProvider: true
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
    const parser = (new Parser(parserProfile));
    const doc: AssemblyDocument = { 
        nodes: parser.parse(textDocument.getText()), 
        uri: textDocument.uri, 
        version: textDocument.version 
    };
    codeModelMgr.setDocument(doc);

    const diags = doc.nodes
        .filter(n => n.kind === AssemblyNodeKind.Error)
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
    connection.console.log("Zingularity onDidChangeWatchedFiles");
    //validateTextDocument(_change)
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

connection.onDefinition(
    (textDocumentPosition): Location | null => {
        const docNode = codeModelMgr.findNode(textDocumentPosition.textDocument.uri, textDocumentPosition.position);

        if (docNode && docNode.node.kind === AssemblyNodeKind.Instruction) {
            const instruction = <Instruction> docNode.node;
            
            let label: AssemblyNode | undefined;
            let targetDoc: AssemblyDocument | undefined;

            for (let i = 0; i < codeModelMgr.codeModel.documents.length; i++) {
                const doc = codeModelMgr.codeModel.documents[i];
                label = doc.nodes.find(n => n.kind === AssemblyNodeKind.Label && n.text === instruction.external);
                if (label) {
                    targetDoc = doc;
                    break;
                }
            }

            if (label) {
                return {
                    range: toRange(label),
                    uri: targetDoc ? targetDoc.uri : textDocumentPosition.textDocument.uri
                };
            }
        }

        return null;
    }
);


connection.onReferences(ref => {
    const docNode = codeModelMgr.findNode(ref.textDocument.uri, ref.position);
    
    let locations: Location[] = [];

    if (docNode) {
        let text = "";
        if (docNode.node.kind === AssemblyNodeKind.Instruction) {
            const instruction = <Instruction> docNode.node;
            text = instruction.external;
        }
        if (docNode.node.kind === AssemblyNodeKind.Label) {
            const label = <Label> docNode.node;
            text = label.toString();
        }

        if (text.length > 0) {
            for (let i = 0; i < codeModelMgr.codeModel.documents.length; i++) {
                const doc = codeModelMgr.codeModel.documents[i];
                locations.push(...doc.nodes
                    .filter(n => 
                        (n.kind === AssemblyNodeKind.Label && n.toString() === text && ref.context.includeDeclaration) || 
                        (n.kind === AssemblyNodeKind.Instruction && (<Instruction> n).external === text))
                    .map(n => {
                        return { uri: doc.uri, range: toRange(n) };
                    })
                );
            }
        }
    }

    return locations;
});

// Make the text document manager listen on the connection
// for open, change and close text document events
documents.listen(connection);

// Listen on the connection
connection.listen();

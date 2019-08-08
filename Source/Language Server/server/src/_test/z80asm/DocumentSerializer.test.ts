import { SerializerProfile, DocumentSerializer } from "../../z80asm/DocumentSerializer";
import { Comment, Label } from "../../z80asm/CodeModel";

const profile: SerializerProfile = {
    columnTabs: [0, 2, 4],
    insertSpaces: true,
    newLine: "\r\n",
    tabSize: 4
};

const serializer = new DocumentSerializer(profile);

describe("Document Serializer", () => {
    it("Comment", () => {
        const comment = new Comment("; Hello World", 1, 1);
        const text = serializer.serialize([comment]);
        
        expect(text).toBe("; Hello World" + profile.newLine);
    });

    it("Label", () => {
        const label = new Label("Label", "Label:", 1, 1);
        const text = serializer.serialize([label]);
        
        expect(text).toBe("Label:" + profile.newLine);
    });

    it("Label + Comment", () => {
        const comment = new Comment("; Hello World", 1, 10);
        const label = new Label("Label", "Label:", 1, 1);
        const text = serializer.serialize([label, comment]);
        const lines = text.split(profile.newLine);
        
        expect(lines[0]).toBe("Label:          ; Hello World");
    });

    it("Label crlf Comment", () => {
        const comment = new Comment("; Hello World", 1, 1);
        const label = new Label("Label", ".Label", 2, 1);
        const text = serializer.serialize([comment, label]);
        const lines = text.split(profile.newLine);
        
        expect(lines[0]).toBe("; Hello World");
        expect(lines[1]).toBe(".Label");
    });

    it("Label crlf+crlf Comment", () => {
        const comment = new Comment("; Hello World", 1, 1);
        const label = new Label("Label", ".Label", 3, 1);
        const text = serializer.serialize([comment, label]);
        expect(text).toContain("\r\n\r\n");

        const lines = text.split(profile.newLine);
        
        expect(lines[0]).toBe("; Hello World");
        expect(lines[1]).toBe("");
        expect(lines[2]).toBe(".Label");
    });
});
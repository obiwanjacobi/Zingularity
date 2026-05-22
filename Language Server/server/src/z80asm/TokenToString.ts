import { Interval } from "antlr4ts/misc/Interval";
import { ParserRuleContext } from "antlr4ts";

// grabs text from the original text stream
export function toString(ctx: ParserRuleContext): string {
    if (ctx.start && ctx.stop && ctx.start.inputStream) {
        const interval = new Interval(ctx.start.startIndex, ctx.stop.stopIndex);
        return ctx.start.inputStream.getText(interval);
    }

    return ctx.text;
}


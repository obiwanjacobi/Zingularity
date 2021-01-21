"use strict"

// GrammarProfile interface
var z88dk = true;
var zmac = false;

module.exports.evaluateLexerPredicate =
    function (lexer, ruleIndex, predicateIndex, predicate) {
        return eval(predicate);
    }

module.exports.evaluateParserPredicate =
    function (parser, ruleIndex, predicateIndex, predicate) {
        return eval(predicate);
    }

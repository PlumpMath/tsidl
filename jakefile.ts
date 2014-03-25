/// <reference path="node_modules/jake-typescript/lib/jake-typescript.d.ts"/>

import fs = require("fs");
import path = require("path");
import ts = require("jake-typescript");

// This is where all the output is going to go
var builtDirectory: string = "built/";
var srcBuiltDirectory: string = builtDirectory + "src/";

// Whether we want the output to be debuggable or not
var emitSourceMaps: boolean = false;

// Typescript sources
var typeScriptSources: string[] = [
    "external/typescript/src/compiler/ast.ts",
    "external/typescript/src/compiler/astHelpers.ts",
    "external/typescript/src/compiler/astWalker.ts",
    "external/typescript/src/compiler/base64.ts",
    "external/typescript/src/compiler/bloomFilter.ts",
    "external/typescript/src/compiler/declarationEmitter.ts",
    "external/typescript/src/compiler/diagnostics.ts",
    "external/typescript/src/compiler/document.ts",
    "external/typescript/src/compiler/emitter.ts",
    "external/typescript/src/compiler/enumerator.ts",
    "external/typescript/src/compiler/flags.ts",
    "external/typescript/src/compiler/hashTable.ts",
    "external/typescript/src/compiler/identifierWalker.ts",
    "external/typescript/src/compiler/pathUtils.ts",
    "external/typescript/src/compiler/precompile.ts",
    "external/typescript/src/compiler/process.ts",
    "external/typescript/src/compiler/references.ts",
    "external/typescript/src/compiler/referenceResolution.ts",
    "external/typescript/src/compiler/referenceResolver.ts",
    "external/typescript/src/compiler/settings.ts",
    "external/typescript/src/compiler/sourceMapping.ts",
    "external/typescript/src/compiler/syntaxTreeToAstVisitor.ts",
    "external/typescript/src/compiler/types.ts",
    "external/typescript/src/compiler/core/arrayUtilities.ts",
    "external/typescript/src/compiler/core/bitVector.ts",
    "external/typescript/src/compiler/core/bitMatrix.ts",
    "external/typescript/src/compiler/core/constants.ts",
    "external/typescript/src/compiler/core/debug.ts",
    "external/typescript/src/compiler/core/diagnosticCore.ts",
    "external/typescript/src/compiler/core/diagnosticCategory.ts",
    "external/typescript/src/compiler/core/diagnosticInfo.ts",
    "external/typescript/src/compiler/core/environment.ts",
    "external/typescript/src/compiler/core/errors.ts",
    "external/typescript/src/compiler/core/hash.ts",
    "external/typescript/src/compiler/core/hashTable.ts",
    "external/typescript/src/compiler/core/integerUtilities.ts",
    "external/typescript/src/compiler/core/lineAndCharacter.ts",
    "external/typescript/src/compiler/core/lineMap.ts",
    "external/typescript/src/compiler/core/linePosition.ts",
    "external/typescript/src/compiler/core/mathPrototype.ts",
    "external/typescript/src/compiler/core/references.ts",
    "external/typescript/src/compiler/core/require.ts",
    "external/typescript/src/compiler/core/stringTable.ts",
    "external/typescript/src/compiler/core/stringUtilities.ts",
    "external/typescript/src/compiler/core/timer.ts",
    "external/typescript/src/compiler/resources/diagnosticCode.generated.ts",
    "external/typescript/src/compiler/resources/diagnosticInformationMap.generated.ts",
    "external/typescript/src/compiler/resources/references.ts",
    "external/typescript/src/compiler/syntax/characterInfo.ts",
    "external/typescript/src/compiler/syntax/constants.ts",
    "external/typescript/src/compiler/syntax/depthLimitedWalker.ts",
    "external/typescript/src/compiler/syntax/formattingOptions.ts",
    "external/typescript/src/compiler/syntax/indentation.ts",
    "external/typescript/src/compiler/syntax/languageVersion.ts",
    "external/typescript/src/compiler/syntax/parseOptions.ts",
    "external/typescript/src/compiler/syntax/parser.ts",
    "external/typescript/src/compiler/syntax/positionedElement.ts",
    "external/typescript/src/compiler/syntax/positionTrackingWalker.ts",
    "external/typescript/src/compiler/syntax/references.ts",
    "external/typescript/src/compiler/syntax/scanner.ts",
    "external/typescript/src/compiler/syntax/scannerUtilities.generated.ts",
    "external/typescript/src/compiler/syntax/separatedSyntaxList.ts",
    "external/typescript/src/compiler/syntax/slidingWindow.ts",
    "external/typescript/src/compiler/syntax/strings.ts",
    "external/typescript/src/compiler/syntax/syntax.ts",
    "external/typescript/src/compiler/syntax/syntaxDedenter.ts",
    "external/typescript/src/compiler/syntax/syntaxElement.ts",
    "external/typescript/src/compiler/syntax/syntaxFactory.generated.ts",
    "external/typescript/src/compiler/syntax/syntaxFacts.ts",
    "external/typescript/src/compiler/syntax/syntaxFacts2.ts",
    "external/typescript/src/compiler/syntax/syntaxIndenter.ts",
    "external/typescript/src/compiler/syntax/syntaxInformationMap.ts",
    "external/typescript/src/compiler/syntax/syntaxIndenter.ts",
    "external/typescript/src/compiler/syntax/syntaxKind.ts",
    "external/typescript/src/compiler/syntax/syntaxList.ts",
    "external/typescript/src/compiler/syntax/syntaxNode.ts",
    "external/typescript/src/compiler/syntax/syntaxNodeInvariantsChecker.ts",
    "external/typescript/src/compiler/syntax/syntaxNodeOrToken.ts",
    "external/typescript/src/compiler/syntax/syntaxNodes.generated.ts",
    "external/typescript/src/compiler/syntax/syntaxRewriter.generated.ts",
    "external/typescript/src/compiler/syntax/syntaxToken.generated.ts",
    "external/typescript/src/compiler/syntax/syntaxToken.ts",
    "external/typescript/src/compiler/syntax/syntaxTokenReplacer.ts",
    "external/typescript/src/compiler/syntax/syntaxTree.ts",
    "external/typescript/src/compiler/syntax/syntaxTrivia.ts",
    "external/typescript/src/compiler/syntax/syntaxTriviaList.ts",
    "external/typescript/src/compiler/syntax/syntaxUtilities.ts",
    "external/typescript/src/compiler/syntax/syntaxVisitor.generated.ts",
    "external/typescript/src/compiler/syntax/syntaxWalker.generated.ts",
    "external/typescript/src/compiler/syntax/unicode.ts",
    "external/typescript/src/compiler/text/characterCodes.ts",
    "external/typescript/src/compiler/text/lineMap.ts",
    "external/typescript/src/compiler/text/references.ts",
    "external/typescript/src/compiler/text/scriptSnapshot.ts",
    "external/typescript/src/compiler/text/text.ts",
    "external/typescript/src/compiler/text/textChangeRange.ts",
    "external/typescript/src/compiler/text/textFactory.ts",
    "external/typescript/src/compiler/text/textLine.ts",
    "external/typescript/src/compiler/text/textSpan.ts",
    "external/typescript/src/compiler/text/textUtilities.ts",
    "external/typescript/src/compiler/typecheck/pullDeclCollection.ts",
    "external/typescript/src/compiler/typecheck/pullDecls.ts",
    "external/typescript/src/compiler/typecheck/pullFlags.ts",
    "external/typescript/src/compiler/typecheck/pullHelpers.ts",
    "external/typescript/src/compiler/typecheck/pullSemanticInfo.ts",
    "external/typescript/src/compiler/typecheck/pullSymbolBinder.ts",
    "external/typescript/src/compiler/typecheck/pullSymbols.ts",
    "external/typescript/src/compiler/typecheck/pullTypeResolution.ts",
    "external/typescript/src/compiler/typecheck/pullTypeResolutionContext.ts",
    "external/typescript/src/compiler/typecheck/pullTypeInstantiation.ts",
    "external/typescript/src/compiler/typescript.ts"
];

var libSource: string = "external/typescript/typings/lib.d.ts";

// The actual sources
var tsidlSources: string[] = [
    "src/tsidl.ts"
];

directory(srcBuiltDirectory);

desc("Emit the library with sourcemaps");
task("emitSourceMaps", () =>
{
    emitSourceMaps = true;
});

function compileOptions(): ts.CompileOptions
{
    var options: ts.CompileOptions = { noImplicitAny: true, removeComments: true, moduleKind: ts.ModuleKind.commonjs };
    if (emitSourceMaps)
    {
        options.generateSourceMap = true;
        options.mapRoot = "file:///" + path.resolve(srcBuiltDirectory);
    }

    return options;
}

var tsidlFile: string = path.join(srcBuiltDirectory, "tsidl.js");
ts.singleFile(tsidlFile, [srcBuiltDirectory].concat(tsidlSources).concat(typeScriptSources), compileOptions());

var libFile: string = path.join(srcBuiltDirectory, "lib.d.ts");
file(libFile, [libSource], ()=>
{
    jake.cpR(libSource, libFile, { silent: true });
    console.log("cp " + libSource + " " + libFile + "\n");
});

desc("Builds the release library");
task("release", [tsidlFile, libFile]);

desc("Builds the debug library");
task("debug", ["emitSourceMaps", "release"]);

task("default", ["release"]);

desc("Cleans the built directory");
task("clean", () =>
{
    jake.rmRf(builtDirectory);
});

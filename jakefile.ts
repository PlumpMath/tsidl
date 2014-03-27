/// <reference path="node_modules/jake-typescript/lib/jake-typescript.d.ts"/>

import fs = require("fs");
import path = require("path");
import ts = require("jake-typescript");

var builtDirectory: string = "built/";
var srcBuiltDirectory: string = builtDirectory + "src/";

var emitSourceMaps: boolean = false;

var libSource: string = "lib/lib.d.ts";
var libTarget: string = path.join(srcBuiltDirectory, "lib.d.ts");
var tsSource: string = "lib/ts.js";
var tsDeclSource: string = "lib/ts.d.ts";

var tsidlSource: string = "src/tsidl.ts";
var tsidlTarget: string = srcBuiltDirectory + "tsidl.js";

function compileOptions(): ts.BatchCompileOptions {
    var options: ts.BatchCompileOptions = { noImplicitAny: true, removeComments: true, moduleKind: ts.ModuleKind.commonjs };
    if (emitSourceMaps) {
        options.generateSourceMap = true;
        options.mapRoot = "file:///" + path.resolve(srcBuiltDirectory);
    }
    options.outputDirectory = srcBuiltDirectory;

    return options;
}

directory(srcBuiltDirectory);

desc("Emit the library with sourcemaps");
task("emitSourceMaps", () =>
{
    emitSourceMaps = true;
});

ts.batchFiles("tsidl-batch", [srcBuiltDirectory, tsidlSource, tsDeclSource], compileOptions());

task("tsidl", ["tsidl-batch", tsSource], () => {
    var original: NodeBuffer = fs.readFileSync(tsidlTarget);
    console.log("concatenate " + tsidlTarget + " and " + tsSource + "\n");
    fs.unlinkSync(tsidlTarget);
    fs.appendFileSync(tsidlTarget, fs.readFileSync(tsSource));
    fs.appendFileSync(tsidlTarget, original);
});

file(libTarget, [libSource], ()=>
{
    jake.cpR(libSource, libTarget, { silent: true });
    console.log("cp " + libSource + " " + libTarget + "\n");
});

desc("Builds the release library");
task("release", ["tsidl", libTarget]);

desc("Builds the debug library");
task("debug", ["emitSourceMaps", "release"]);

task("default", ["release"]);

desc("Cleans the built directory");
task("clean", () =>
{
    jake.rmRf(builtDirectory);
});

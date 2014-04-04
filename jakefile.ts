/// <reference path="node_modules/jake-typescript/lib/jake-typescript.d.ts"/>
/// <reference path="./typings/colors/colors.d.ts"/>

import fs = require("fs");
import path = require("path");
import ts = require("jake-typescript");
require("colors");

var srcDirectory: string = "src/";
var libDirectory: string = "lib/";
var testDirectory: string = "test/";
var builtDirectory: string = "built/";
var srcBuiltDirectory: string = builtDirectory + srcDirectory;
var testBuiltDirectory: string = builtDirectory + testDirectory;

var emitSourceMaps: boolean = false;

var libSource: string = libDirectory + "lib.d.ts";
var libTarget: string = path.join(srcBuiltDirectory, "lib.d.ts");
var tsSource: string = libDirectory + "ts.js";
var tsDeclSource: string = libDirectory + "ts.d.ts";

var tsidlSource: string = srcDirectory + "tsidl.ts";
var tsidlTarget: string = srcBuiltDirectory + "tsidl.js";
var tsidlCliTarget: string = srcBuiltDirectory + "tsidl-cli.js";

function compileOptions(): ts.BatchCompileOptions {
    var options: ts.BatchCompileOptions = { noImplicitAny: true, removeComments: true, moduleKind: ts.ModuleKind.commonjs };
    if (emitSourceMaps) {
        options.generateSourceMap = true;
        options.mapRoot = "file:///" + path.resolve(srcBuiltDirectory);
    }
    options.outputDirectory = srcBuiltDirectory;

    return options;
}

function testResult(filename: string, value: boolean): void {
    console.log("test " + filename + ": " + (value ? "PASSED".green : "FAILED".red));
    complete(value);
}

directory(srcBuiltDirectory);
directory(testBuiltDirectory);

desc("Emit the library with sourcemaps");
task("emitSourceMaps", () =>
{
    emitSourceMaps = true;
});

ts.batchFiles("tsidl-batch", [srcBuiltDirectory, tsidlSource, tsDeclSource], compileOptions());

file(tsidlCliTarget, [tsidlTarget, tsSource], () => {
    console.log("concatenate " + tsidlTarget + " and " + tsSource + "\n");
    if (fs.existsSync(tsidlCliTarget)) {
        fs.unlinkSync(tsidlCliTarget);
    }
    fs.appendFileSync(tsidlCliTarget, fs.readFileSync(tsSource));
    fs.appendFileSync(tsidlCliTarget, fs.readFileSync(tsidlTarget));
});

file(libTarget, [libSource], ()=>
{
    jake.cpR(libSource, libTarget, { silent: true });
    console.log("cp " + libSource + " " + libTarget + "\n");
});

desc("Builds the release library");
task("release", [tsidlCliTarget, libTarget]);

desc("Builds the debug library");
task("debug", ["emitSourceMaps", "release"]);

var tests: string[] = [];
fs.readdirSync(testDirectory).forEach((filename: string) => {
    if (!ts.isTsFile(filename)) {
        return;
    }

    var test: string = testDirectory + filename;
    var outputBase: string = filename.substr(0, filename.length - 3);
    var outputProxy: string = outputBase + ".proxy.h";
    var outputOutput: string = outputBase + ".output";

    var outputProxyBaseline: string = testDirectory + outputProxy;
    var outputProxyBuilt: string = testBuiltDirectory + outputProxy;
    var outputOutputBaseline: string = testDirectory + outputOutput;
    var outputOutputBuilt: string = testBuiltDirectory + outputOutput;

    var dependencies: string[] = [testBuiltDirectory, test, outputOutputBaseline, tsidlCliTarget];
    var fails: boolean = !fs.existsSync(outputProxyBaseline);

    if (!fails) {
        dependencies.push(outputProxyBaseline);
    }

    desc("Test " + filename);
    file(outputOutputBuilt, dependencies, () => {
        var command: string = "cmd /c \"cd " + process.cwd() + " && node " + tsidlCliTarget + " " + test + " --out " + outputProxyBuilt + " 1> " + outputOutputBuilt + " 2>&1\"";

        jake.exec([command], () => {
            var outputBaseline: string = <any>fs.readFileSync(outputOutputBaseline, { encoding: "utf8" });
            var outputBuilt: string = <any>fs.readFileSync(outputOutputBuilt, { encoding: "utf8" });

            if (outputBaseline != outputBuilt) {
                testResult(filename, false);
            } else if (!fails) {
                var baseline: string = <any>fs.readFileSync(outputProxyBaseline, { encoding: "utf8" });
                var result: string = <any>fs.readFileSync(outputProxyBuilt, { encoding: "utf8" });
                testResult(filename, baseline == result);
            } else {
                testResult(filename, !fs.existsSync(outputProxyBuilt));
            }
        }, { windowsVerbatimArguments: true, breakOnError: false });
    }, { async: true });

    tests.push(outputOutputBuilt);
});

desc("Tests the output.");
task("test", tests, () => {
    (tests.every(t => {
        var task: jake.Task = jake.Task[t];
        return task.value === undefined || task.value === true;
    })) ? complete() : fail();
});

task("default", ["release", "test"]);

desc("Cleans the built directory");
task("clean", () =>
{
    jake.rmRf(builtDirectory);
});

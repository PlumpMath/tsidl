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
fs.readdirSync(testDirectory).forEach((singleTestDirectoryBase: string) => {
    var singleTestDirectory: string = testDirectory + singleTestDirectoryBase + "/";
    var filename: string = singleTestDirectoryBase + ".d.ts";
    var test: string = singleTestDirectory + filename;
    var stats: fs.Stats = fs.statSync(singleTestDirectory);
    
    if (stats.isDirectory() && fs.existsSync(test)) {
        var singleTestBuiltDirectory = testBuiltDirectory + singleTestDirectoryBase + "/";

        var outputHeader: string = singleTestDirectoryBase + ".proxy.h";
        var outputSource: string = singleTestDirectoryBase + ".proxy.cpp";
        var outputOutput: string = singleTestDirectoryBase + ".output";

        var outputHeaderBaseline: string = singleTestDirectory + outputHeader;
        var outputHeaderBuilt: string = singleTestBuiltDirectory + outputHeader;
        var outputSourceBaseline: string = singleTestDirectory + outputSource;
        var outputSourceBuilt: string = singleTestBuiltDirectory + outputSource;
        var outputOutputBaseline: string = singleTestDirectory + outputOutput;
        var outputOutputBuilt: string = singleTestBuiltDirectory + outputOutput;

        directory(singleTestBuiltDirectory);

        var dependencies: string[] = [testBuiltDirectory, singleTestBuiltDirectory, test, outputOutputBaseline, tsidlCliTarget];
        var fails: boolean = !fs.existsSync(outputHeaderBaseline);

        if (!fails) {
            dependencies.push(outputHeaderBaseline, outputSourceBaseline);
        }

        desc("Test " + filename);
        file(outputOutputBuilt, dependencies, () => {
            var command: string = "cmd /c \"cd " + process.cwd() + " && node " + tsidlCliTarget + " " + test + " --header " + outputHeaderBuilt + " --source " + outputSourceBuilt + " 1> " + outputOutputBuilt + " 2>&1\"";

            jake.exec([command], () => {
                var outputBaseline: string = <any>fs.readFileSync(outputOutputBaseline, { encoding: "utf8" });
                var outputBuilt: string = <any>fs.readFileSync(outputOutputBuilt, { encoding: "utf8" });

                if (outputBaseline != outputBuilt) {
                    testResult(singleTestDirectoryBase, false);
                } else if (!fails) {
                    var baselineHeader: string = <any>fs.readFileSync(outputHeaderBaseline, { encoding: "utf8" });
                    var resultHeader: string = <any>fs.readFileSync(outputHeaderBuilt, { encoding: "utf8" });
                    var baselineSource: string = <any>fs.readFileSync(outputSourceBaseline, { encoding: "utf8" });
                    var resultSource: string = <any>fs.readFileSync(outputSourceBuilt, { encoding: "utf8" });
                    testResult(singleTestDirectoryBase, (baselineHeader === resultHeader) && (baselineSource === resultSource));
                } else {
                    testResult(singleTestDirectoryBase, !fs.existsSync(outputHeaderBuilt));
                }
            }, { windowsVerbatimArguments: true, breakOnError: false });
        }, { async: true });

        tests.push(outputOutputBuilt);
    }
});

desc("Updates the test baselines.");
task("update-baselines", ["test"], () => {
    fs.readdirSync(testDirectory).forEach((singleTestDirectoryBase: string) => {
        var singleTestDirectory: string = testDirectory + singleTestDirectoryBase + "/";
        var filename: string = singleTestDirectoryBase + ".d.ts";
        var test: string = singleTestDirectory + filename;
        var stats: fs.Stats = fs.statSync(singleTestDirectory);

        if (stats.isDirectory() && fs.existsSync(test)) {
            var singleTestBuiltDirectory = testBuiltDirectory + singleTestDirectoryBase + "/";
            var outputBase: string = filename.substr(0, filename.length - 3);

            if ((/\.d$/i).test(outputBase)) {
                outputBase = outputBase.substring(0, outputBase.length - 2);
            }

            var outputHeader: string = outputBase + ".proxy.h";
            var outputSource: string = outputBase + ".proxy.cpp";
            var outputOutput: string = outputBase + ".output";

            var outputHeaderBaseline: string = singleTestDirectory + outputHeader;
            var outputHeaderBuilt: string = singleTestBuiltDirectory + outputHeader;
            var outputSourceBaseline: string = singleTestDirectory + outputSource;
            var outputSourceBuilt: string = singleTestBuiltDirectory + outputSource;
            var outputOutputBaseline: string = singleTestDirectory + outputOutput;
            var outputOutputBuilt: string = singleTestBuiltDirectory + outputOutput;

            var fails: boolean = !fs.existsSync(outputHeaderBaseline);

            jake.cpR(outputOutputBuilt, outputOutputBaseline);

            if (!fails) {
                jake.cpR(outputHeaderBuilt, outputHeaderBaseline);
                jake.cpR(outputSourceBuilt, outputSourceBaseline);
            }
        }
    });
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

/// <reference path="external/definitelyTyped/jake/jake.d.ts" />

import fs = require("fs");
import path = require("path");

// This is where all the output is going to go
var builtDirectory: string = "built/";
var srcBuiltDirectory: string = builtDirectory + "src/";

// Whether we want the output to be debuggable or not
var emitSourceMaps: boolean = false;

// Standard copyright to put at the top of generated files
var copyrightFile: string = "COPYRIGHT";

// The actual sources
var tsidlSources: string[] = [
    "src/tsidl.ts"
];

// Adds a preface to an existing file
function preface(prefaceFile: string, destinationFile: string): void
{
    if (!fs.existsSync(prefaceFile))
    {
        fail(prefaceFile + " does not exist!");
    }

    if (!fs.existsSync(destinationFile))
    {
        fail(destinationFile + " failed to be created!");
    }

    var temp: string = "temptemp";
    jake.cpR(prefaceFile, temp, { silent: true });
    fs.appendFileSync(temp, fs.readFileSync(destinationFile));
    fs.renameSync(temp, destinationFile);
}

// Createa a file task to compile Typescript files
function compileFile(outFile: string, sources: string[], prereqs: string[], prefixes: string[])
{
    file(outFile, prereqs, () =>
    {
        var cmd = "tsc --removeComments --declaration --noImplicitAny --module commonjs " + sources.join(" ") + " --out " + outFile;
        if (emitSourceMaps)
        {
            cmd = cmd + " --sourcemap --mapRoot file:///" + path.resolve(path.dirname(outFile));
        }
        console.log(cmd + "\n");

        var ex: jake.Exec = jake.createExec([cmd]);

        ex.addListener("stdout", output=>
        {
            process.stdout.write(output);
        });

        ex.addListener("stderr", error=>
        {
            process.stderr.write(error);
        });

        ex.addListener("cmdEnd", () =>
        {
            if (!emitSourceMaps && prefixes && fs.existsSync(outFile))
            {
                for (var i in prefixes)
                {
                    preface(prefixes[i], outFile);
                }
            }
            complete();
        });

        ex.addListener("error", () =>
        {
            fs.unlinkSync(outFile);
            console.log("Compilation of " + outFile + " unsuccessful");
        });

        ex.run();
    }, { async: true });
}

// Ensure the directory is created if needed
directory(srcBuiltDirectory);

desc("Emit the library with sourcemaps");
task("emitSourceMaps", () =>
{
    emitSourceMaps = true;
});

var tsidlFile: string = path.join(srcBuiltDirectory, "tsidl.js");
compileFile(tsidlFile, tsidlSources, [srcBuiltDirectory, copyrightFile].concat(tsidlSources), [copyrightFile]);

desc("Builds the release library");
task("release", [tsidlFile]);

desc("Builds the debug library");
task("debug", ["emitSourceMaps", "release"]);

task("default", ["release"]);

desc("Cleans the built directory");
task("clean", () =>
{
    jake.rmRf(builtDirectory);
});

// Type definitions for nomnom
// Project: https://github.com/harthur/nomnom
// Definitions by: Paul Vick <https://github.com/panopticoncentral>
// Definitions: https://github.com/borisyankov/DefinitelyTyped

declare module "nomnom"
{
    module Parser
    {
        export interface Option
        {
            abbr?: string;
            full?: string;
            flag?: boolean;
            metavar?: string;
            string?: string;
            help?: string;
            default?: string;
            callback?: (option: any) => string;
            position?: number;
            list?: boolean;
            required?: boolean;
            choices?: string[];
            type?: string;
            hidden?: boolean;
        }

        export interface Command
        {
            name: string;
            options(specs: { [index: string]: Option }): Command;
            option(name: string, spec: Option): Command;
            callback(func: (options: any) => void): Command;
            help(help: string): Command;
            usage(usage: string): Command;
        }
    }

    interface Parser
    {
        (): Parser;
        command(name: string): Parser.Command;
        nocommand(): Parser.Command;
        options(specs: { [index: string]: Parser.Option }): Parser;
        option(name: string, spec: Parser.Option): Parser;
        usage(usage: string): Parser;
        printer(print: (message: string, code?: number) => void): Parser;
        script(script: string): Parser;
        help(help: string): Parser;
        nocolors(): Parser;
        nom(argv?: string[]): any;
        parse(argv?: string[]): any;
    }

    export = Parser;
}

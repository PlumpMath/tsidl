///<reference path='../external/definitelyTyped/node/node.d.ts'/>

export interface IOptions
{
    name?: string;
    flag?: boolean;
    shortFlag?: string;
    usage?: string;
    set?: (s: string) => void;
    type?: string;
    experimental?: boolean;
}

export class OptionProcessor
{
    private DEFAULT_SHORT_FLAG = "-";
    private DEFAULT_LONG_FLAG = "--";

    private options: IOptions[] = [];

    // Find the option record for the given string. Returns null if not found.
    private findOption(arg: string)
    {
        for (var i = 0; i < this.options.length; i++)
        {
            if (arg === this.options[i].shortFlag || arg === this.options[i].name)
            {
                return this.options[i];
            }
        }

        return null;
    }

    public printUsage()
    {
        console.log("Options:");

        var output = [];
        var maxLength = 0;

        this.options = this.options.sort((a, b) =>
        {
            var aName = a.name.toLowerCase();
            var bName = b.name.toLowerCase();

            if (aName > bName)
            {
                return 1;
            }
            else if (aName < bName)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        });

        // Build up output array
        for (var i = 0; i < this.options.length; i++)
        {
            var option = this.options[i];

            if (option.experimental)
            {
                continue;
            }

            if (!option.usage)
            {
                break;
            }

            var usageString = "  ";
            var type = option.type ? " " + option.type.toUpperCase() : "";

            if (option.shortFlag)
            {
                usageString += this.DEFAULT_SHORT_FLAG + option.shortFlag + type + ", ";
            }

            usageString += this.DEFAULT_LONG_FLAG + option.name + type;

            output.push([usageString, option.usage]);

            if (usageString.length > maxLength)
            {
                maxLength = usageString.length;
            }
        }

        // Print padded output
        for (var i = 0; i < output.length; i++)
        {
            console.log(output[i][0] + (new Array(maxLength - output[i][0].length + 3)).join(" ") + output[i][1]);
        }
    }

    public option(name: string, config: IOptions, shortFlag: string = null)
    {
        if (!config)
        {
            config = <any>shortFlag;
            shortFlag = null;
        }

        config.name = name;
        config.shortFlag = shortFlag;

        this.options.push(config);
    }

    public parse(args: string[]): string[]
    {
        var position = 0;
        var unnamed: string[] = [];

        function consume()
        {
            return args[position++];
        }

        while (position < args.length)
        {
            var current = consume();
            var match = current.match(/^(--?|\/)(.*)/);
            var value = null;

            if (match)
            {
                var arg = match[2];
                var option = this.findOption(arg);

                if (option == null)
                {
                    console.log("Unknown option " + arg);
                    console.log("");
                    this.printUsage();
                }
                else
                {
                    if (!option.flag)
                    {
                        value = consume();
                    }

                    option.set(value);
                }
            }
            else
            {
                unnamed.push(current);
            }
        }

        return unnamed;
    }
}

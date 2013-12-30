module Options
{
    export interface IOptions
    {
        name?: string;
        flag?: boolean;
        shortFlag?: string;
        usage?: string;
        set?: (s: string) => void;
    }

    export class OptionProcessor
    {
        private DEFAULT_SHORT_FLAG: string = "-";
        private DEFAULT_LONG_FLAG: string = "--";

        private options: IOptions[] = [];

        private findOption(arg: string): IOptions
        {
            for (var index: number = 0; index < this.options.length; index++)
            {
                if (arg === this.options[index].shortFlag || arg === this.options[index].name)
                {
                    return this.options[index];
                }
            }

            return null;
        }

        public printUsage()
        {
            console.log("Options:");

            var output: string[][] = [];
            var maxLength = 0;

            this.options = this.options.sort((a: IOptions, b: IOptions): number =>
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

            var index: number;

            for (index = 0; index < this.options.length; index++)
            {
                var option: IOptions = this.options[index];

                if (!option.usage)
                {
                    break;
                }

                var usageString = "  ";

                if (option.shortFlag)
                {
                    usageString += this.DEFAULT_SHORT_FLAG + option.shortFlag + ", ";
                }

                usageString += this.DEFAULT_LONG_FLAG + option.name;

                output.push([usageString, option.usage]);

                if (usageString.length > maxLength)
                {
                    maxLength = usageString.length;
                }
            }

            for (index = 0; index < output.length; index++)
            {
                console.log(output[index][0] + (new Array(maxLength - output[index][0].length + 3)).join(" ") + output[index][1]);
            }
        }

        public option(name: string, config: IOptions, shortFlag: string = null): void
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

            function consume(): string
            {
                return args[position++];
            }

            while (position < args.length)
            {
                var current: string = consume();
                var match: string[] = current.match(/^(--?|\/)(.*)/);
                var value: string = null;

                if (match)
                {
                    var arg: string = match[2];
                    var option: IOptions = this.findOption(arg);

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
}
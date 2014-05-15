# TSIDL

TSIDL is a command-line tool that uses interface definitions described in [TypeScript](http://www.typescriptlang.org/) to generate automatic marshaling code between the [Chakra JavaScript engine API](http://www.panopticoncentral.net/2013/07/02/introducing-jsrt-embedding-javascript-on-windows/) and C++.

## Install

Install globally using [npm](https://npmjs.org/):

````
npm install tsidl -g
````

## Usage

To generate marshaling code from a definition file:

````
$ tsidl 
````

Sometimes it looks like this:

* [`$ tsd --help`](https://raw.github.com/DefinitelyTyped/tsd/master/media/capture/help.png)
* [`$ tsd query async --info --history --action install`](https://raw.github.com/DefinitelyTyped/tsd/master/media/capture/async.png)
* [`$ tsd query angular* --resolve`](https://raw.github.com/DefinitelyTyped/tsd/master/media/capture/angular.png)


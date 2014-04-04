declare module a {
	class g {
	}	
}

declare module b.c.d {
	export var x: number;
	export function y(): number;
	export class z {

	}
	export interface a {

	}
	export enum b {

	}
	export module c {
		export class d {

		}
	}
	export import e = a;
}

declare var z: b.c.d.c.d;
declare var foo: b.c.d.e.g;

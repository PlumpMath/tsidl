declare class a {
	constructor(a: number);
	public x: number;
	public y(a: number): number;
}

interface b {
	x: number;
}

declare class c implements b {
	public x: number;
}

declare class d extends c {
	
}
interface a {
	
}
interface b extends a {
	
}
interface c {
	x: number;
	y?: number;
	"abc": string;
	0: number;
	b(a: number): number;
}
interface d {
	(a: string): string;
}
interface e {
	new (a: string): string;
}

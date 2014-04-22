interface a {
	
}
interface b extends a {
	
}
interface c {
	x: number;
	y?: number;
	"abc": string;
	b(a: number): number;
}
interface d {
	(a: string): string;
}
interface e {
	new (a: string): string;
}
interface f extends d {
	
}
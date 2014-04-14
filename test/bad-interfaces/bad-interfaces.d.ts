interface a {
	(a: number): number;
	new (b: number): number;
}
interface b {
	[a: string]: string;
}
interface c {

}
interface d extends c {
	(): void;
}
interface e extends c {
	new();
}
interface f {

}
interface g extends c, f {

}
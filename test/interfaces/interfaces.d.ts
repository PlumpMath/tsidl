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
    x: number;
    y(a: number): number;
}
interface e {
    new (a: string): {};
    x: number;
    y(a: number): number;
}
interface f extends d {
    
}
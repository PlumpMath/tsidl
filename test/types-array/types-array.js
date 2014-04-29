// Test script

if (x.length != 4 || x[3] != 4) {
    throw new Error("x");
}
if (y.length != 4 || y[3] != false) {
    throw new Error("y");
}
if (z.length != 3 || z[2] != "ghi") {
    throw new Error("z");
}
if (a.length != 1) {
    throw new Error("a");
}
if (b.length != 1) {
    throw new Error("b");
}

x = [5, 6, 7, 8];
y = [true, true, true, false, false, false];
z = ["jkl", "mno", "pqr", "stu"];
a = [{}, {}, {}];
b = [{}, {}, {}];
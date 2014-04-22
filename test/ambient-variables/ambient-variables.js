// Test script

if (a !== true) {
    throw new Error("a");
}
if (b !== 10) {
    throw new Error("b");
}
if (c !== "foo") {
    throw new Error("c");
}
if (d !== 20) {
    throw new Error("d");
}
if (e !== 30) {
    throw new Error("e");
}
if (!f) {
    throw new Error("f");
}
if (g !== 2) {
    throw new Error("g");
}
if (h(10) !== 10) {
    throw new Error("h");
}
if ((new i(10)).x !== 10) {
    throw new Error("i");
}
if (!j) {
    throw new Error("j");
}

a = false;
b = 100;
c = "bar";
d = 110;
e = 120;
f = null;
g = 0;
h = function(x) { return x + 10; };
i = function(x) { return { y: x + 10 }; };
j = {};

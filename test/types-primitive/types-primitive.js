// Test script

if (!x) {
    throw new Error("x");
}
if (y !== 42) {
    throw new Error("y");
}
if (z !== "foo") {
    throw new Error("z");
}
if (a !== 43 || b !== "bar") {
    throw new Error("a, b");
}
x = false;
y = 44;
z = "baz";
a = 45;
b = "hello";

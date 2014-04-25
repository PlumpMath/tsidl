// Test script

if (!a) {
    throw new Error("a");
}
if (!b) {
    throw new Error("b");
}
if (c.x !== 10) {
    throw new Error("c.x");
}
if (c.y !== 20) {
    throw new Error("c.y");
}
if (c.abc != "abc") {
    throw new Error("c.abc");
}
if (c.b(10) !== 10) {
    throw new Error("c.b");
}
if (d("foo") !== "foo") {
    throw new Error("d");
}
if ((new e("abc")).x !== "abc") {
    throw new Error("e");
}
if (f("foo") !== "foo") {
    throw new Error("f");
}

a = { x: "foo" };
b = { y: "bar" };
c = {
    x: 100,
    abc: "def",
    b: function(x) { return x + 10; }
};
d = function (y) { return y + "def"; };
e = function (a) { return { x: a } };
f = function(y) { return y + "ghi"; };
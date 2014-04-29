// Test script

if (!x(10)) {
    throw new Error("x1");
}
if (x(20)) {
    throw new Error("x2");
}
if (!y()) {
    throw new Error("y");
}
z();
var foo = new a(10);
x = function (a) { return a === 20; }
y = function () { return false; }
z = function () { }
a = function (b) { return; }
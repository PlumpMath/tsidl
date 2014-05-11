// Test script

var aValue = new a(10);
if (aValue.x !== 10) {
    throw new Error("a.x");
}
aValue.x = 20;
if (aValue.x !== 20) {
    throw new Error("a.x");
}
if (aValue.y(20) !== 40) {
    throw new Error("a.y");
}
var a2Value = new a(20);
if (aValue.__proto__ !== a2Value.__proto__) {
    throw new Error("prototypes");
}
a = function(a) {
    this.x = a;
}
a.prototype.y = function(a) {
    return this.x + a;
}
c = function() {
    this.x = 0;
}
d = function() {
    this.x = 0;
}
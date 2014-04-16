// Test script

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
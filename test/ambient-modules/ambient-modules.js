// Test script

if (a() !== null) {
    throw new Error("a");
}
if (b(10) !== 20) {
    throw new Error("b");
}
if (c(10) !== 30) {
    throw new Error("c");
}
if (c(10, 10) !== 40) {
    throw new Error("c");
}
if (d(10) !== 40) {
    throw new Error("d");
}
if (d(10, 10, 10) !== 60) {
    throw new Error("d");
}
e();

a = function() {
    return null;
}

b = function(x) {
    return x + 100;
}

c = function(x, y) {
    var r = x + 200;
    if (y !== undefined) {
        r += y;
    }
    return r;
}

d = function(x, y, z) {
    var r = x + 300;
    if (y !== undefined) {
        r += y;
    }
    if (z !== undefined) {
        r += z;
    }
    return r;
}

e = function() {
    
}
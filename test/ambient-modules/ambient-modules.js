// Test script

if (!(new a.g())) {
    throw new Error("a.g");
}

if (b.c.d.x !== 10) {
    throw new Error("b.c.d.x");
}
b.c.d.x = 20;
if (b.c.d.x !== 20) {
    throw new Error("b.c.d.x 2");
}

if (b.c.d.y() !== 42) {
    throw new Error("b.c.d.y");
}

if (!(new b.c.d.z())) {
    throw new Error("b.c.d.z");
}

if (!(new b.c.d.e.f())) {
    throw new Error("b.c.d.e.f");
}

a = {
    g : function() {
        return {};
    }
}

b = {
    c: {
        d: {
            x: 10,
            y: function() { return 20; },
            z: function() { return {}; },
            e: {
                f: function() { return {}; }
            }
        }
    }
}
z = {};

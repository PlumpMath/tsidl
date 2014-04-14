// This file contains automatically generated proxies for JavaScript.

#include "ambient-modules_proxy.h"

namespace ambient-modules
{
    a::a() :
        jsrt::object()
    {
    }
    a::a(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    g::g() :
        jsrt::object()
    {
    }
    g::g(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    a::g g()
    {
        return get_property<a::g>(jsrt::property_id::create(L"g"));
    }
    void set_g(a::g value)
    {
        set_property(jsrt::property_id::create(L"g"), value);
    }
    a a()
    {
        return jsrt::context::global().get_property<a>(jsrt::property_id::create(L"a"));
    }
    void set_a(a value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
    b::b() :
        jsrt::object()
    {
    }
    b::b(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    c::c() :
        jsrt::object()
    {
    }
    c::c(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    d::d() :
        jsrt::object()
    {
    }
    d::d(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    double x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::function<double> y()
    {
        return get_property<jsrt::function<double>>(jsrt::property_id::create(L"y"));
    }
    void set_y(jsrt::function<double> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    z::z() :
        jsrt::object()
    {
    }
    z::z(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    b::c::d::z z()
    {
        return get_property<b::c::d::z>(jsrt::property_id::create(L"z"));
    }
    void set_z(b::c::d::z value)
    {
        set_property(jsrt::property_id::create(L"z"), value);
    }
    a::a() :
        jsrt::object()
    {
    }
    a::a(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    c::c() :
        jsrt::object()
    {
    }
    c::c(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    d::d() :
        jsrt::object()
    {
    }
    d::d(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    b::c::d::c::d d()
    {
        return get_property<b::c::d::c::d>(jsrt::property_id::create(L"d"));
    }
    void set_d(b::c::d::c::d value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    b::c::d::c c()
    {
        return get_property<b::c::d::c>(jsrt::property_id::create(L"c"));
    }
    void set_c(b::c::d::c value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
    b::c::d d()
    {
        return get_property<b::c::d>(jsrt::property_id::create(L"d"));
    }
    void set_d(b::c::d value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    b::c c()
    {
        return get_property<b::c>(jsrt::property_id::create(L"c"));
    }
    void set_c(b::c value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
    b b()
    {
        return jsrt::context::global().get_property<b>(jsrt::property_id::create(L"b"));
    }
    void set_b(b value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
    d z()
    {
        return jsrt::context::global().get_property<d>(jsrt::property_id::create(L"z"));
    }
    void set_z(d value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"z"), value);
    }
} // namespace ambient-modules

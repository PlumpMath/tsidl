// This file contains automatically generated proxies for JavaScript.

#include "ambient-classes_proxy.h"

namespace ambient-classes
{
    a::a() :
        jsrt::object()
    {
    }
    a::a(jsrt::object object) :
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
    jsrt::function<double, double> y()
    {
        return get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"y"));
    }
    void set_y(jsrt::function<double, double> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
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
    double x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    c::c() :
        jsrt::object()
    {
    }
    c::c(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    c::c(b value) :
        jsrt::object(value.handle()) {
    {
    }
    operator b()
    {
        return b(*this);
    }
    double x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    c c()
    {
        return jsrt::context::global().get_property<c>(jsrt::property_id::create(L"c"));
    }
    void set_c(c value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"c"), value);
    }
    d::d() :
        c()
    {
    }
    d::d(c object) :
        c(object.handle())
    {
    }
    d d()
    {
        return jsrt::context::global().get_property<d>(jsrt::property_id::create(L"d"));
    }
    void set_d(d value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"d"), value);
    }
} // namespace ambient-classes

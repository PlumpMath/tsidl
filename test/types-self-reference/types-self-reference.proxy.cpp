// This file contains automatically generated proxies for JavaScript.

#include "types_self_reference_proxy.h"

namespace types_self_reference
{
    a::a() :
        jsrt::object()
    {
    }
    a::a(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    a a()
    {
        return jsrt::context::global().get_property<a>(jsrt::property_id::create(L"a"));
    }
    void set_a(a value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
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
    e::e() :
        jsrt::object()
    {
    }
    e::e(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    c::d::e e()
    {
        return get_property<c::d::e>(jsrt::property_id::create(L"e"));
    }
    void set_e(c::d::e value)
    {
        set_property(jsrt::property_id::create(L"e"), value);
    }
    c::d d()
    {
        return get_property<c::d>(jsrt::property_id::create(L"d"));
    }
    void set_d(c::d value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    c c()
    {
        return jsrt::context::global().get_property<c>(jsrt::property_id::create(L"c"));
    }
    void set_c(c value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"c"), value);
    }
    a b()
    {
        return jsrt::context::global().get_property<a>(jsrt::property_id::create(L"b"));
    }
    void set_b(a value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
    e f()
    {
        return jsrt::context::global().get_property<e>(jsrt::property_id::create(L"f"));
    }
    void set_f(e value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"f"), value);
    }
} // namespace types_self_reference

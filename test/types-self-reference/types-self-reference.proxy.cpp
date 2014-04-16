// This file contains automatically generated proxies for JavaScript.

#include "types_self_reference_proxy.h"

namespace types_self_reference
{
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    jsrt::function<a_proxy> a()
    {
        return jsrt::context::global().get_property<jsrt::function<a_proxy>>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::function<a_proxy> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    d_proxy::d_proxy() :
        jsrt::object()
    {
    }
    d_proxy::d_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    e_proxy::e_proxy() :
        jsrt::object()
    {
    }
    e_proxy::e_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    jsrt::function<c_proxy::d_proxy::e_proxy> e()
    {
        return get_property<jsrt::function<c_proxy::d_proxy::e_proxy>>(jsrt::property_id::create(L"e"));
    }
    void set_e(jsrt::function<c_proxy::d_proxy::e_proxy> value)
    {
        set_property(jsrt::property_id::create(L"e"), value);
    }
    c_proxy::d_proxy d()
    {
        return get_property<c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    void set_d(c_proxy::d_proxy value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    c_proxy c()
    {
        return jsrt::context::global().get_property<c_proxy>(jsrt::property_id::create(L"c"));
    }
    void set_c(c_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"c"), value);
    }
    a_proxy b()
    {
        return jsrt::context::global().get_property<a_proxy>(jsrt::property_id::create(L"b"));
    }
    void set_b(a_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
    e_proxy f()
    {
        return jsrt::context::global().get_property<e_proxy>(jsrt::property_id::create(L"f"));
    }
    void set_f(e_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"f"), value);
    }
} // namespace types_self_reference

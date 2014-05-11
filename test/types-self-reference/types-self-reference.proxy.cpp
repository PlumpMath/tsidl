// This file contains automatically generated proxies for JavaScript.

#include "types-self-reference.proxy.h"

namespace types_self_reference
{
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::bound_function<jsrt::object, a_proxy> a()
    {
        return jsrt::bound_function<jsrt::object, a_proxy>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<a_proxy>>(jsrt::property_id::create(L"a")));
    }
    void set_a(jsrt::function<a_proxy> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    c_proxy::d_proxy::d_proxy() :
        jsrt::object()
    {
    }
    c_proxy::d_proxy::d_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    c_proxy::d_proxy::e_proxy::e_proxy() :
        jsrt::object()
    {
    }
    c_proxy::d_proxy::e_proxy::e_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::bound_function<c_proxy::d_proxy, c_proxy::d_proxy::e_proxy> c_proxy::d_proxy::e()
    {
        return jsrt::bound_function<c_proxy::d_proxy, c_proxy::d_proxy::e_proxy>(*this, get_property<jsrt::function<c_proxy::d_proxy::e_proxy>>(jsrt::property_id::create(L"e")));
    }
    void c_proxy::d_proxy::set_e(jsrt::function<c_proxy::d_proxy::e_proxy> value)
    {
        set_property(jsrt::property_id::create(L"e"), value);
    }
    c_proxy::d_proxy c_proxy::d()
    {
        return get_property<c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    void c_proxy::set_d(c_proxy::d_proxy value)
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
    c_proxy::d_proxy::e_proxy f()
    {
        return jsrt::context::global().get_property<c_proxy::d_proxy::e_proxy>(jsrt::property_id::create(L"f"));
    }
    void set_f(c_proxy::d_proxy::e_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"f"), value);
    }
} // namespace types_self_reference

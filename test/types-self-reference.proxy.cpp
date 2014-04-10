// This file contains automatically generated proxies for JavaScript.

#include "types-self-reference_proxy.h"

namespace types-self-reference
{
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    a_proxy a()
    {
        return get_property<a_proxy>(jsrt::property_id::create(L"a"));
    }
    void set_a(a_proxy value)
    {
        set_property(jsrt::property_id::create(L"a"), value);
    }
    jsrt::property_descriptor<a_proxy> a_descriptor()
    {
        return get_own_property_descriptor<a_proxy>(jsrt::property_id::create(L"a"));
    }
    bool set_a_descriptor(jsrt::property_descriptor<a_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"a"), descriptor);
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
    c_proxy::d_proxy::e_proxy e()
    {
        return get_property<c_proxy::d_proxy::e_proxy>(jsrt::property_id::create(L"e"));
    }
    void set_e(c_proxy::d_proxy::e_proxy value)
    {
        set_property(jsrt::property_id::create(L"e"), value);
    }
    jsrt::property_descriptor<c_proxy::d_proxy::e_proxy> e_descriptor()
    {
        return get_own_property_descriptor<c_proxy::d_proxy::e_proxy>(jsrt::property_id::create(L"e"));
    }
    bool set_e_descriptor(jsrt::property_descriptor<c_proxy::d_proxy::e_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"e"), descriptor);
    }
    c_proxy::d_proxy d()
    {
        return get_property<c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    void set_d(c_proxy::d_proxy value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::property_descriptor<c_proxy::d_proxy> d_descriptor()
    {
        return get_own_property_descriptor<c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    bool set_d_descriptor(jsrt::property_descriptor<c_proxy::d_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"d"), descriptor);
    }
    c_proxy c()
    {
        return get_property<c_proxy>(jsrt::property_id::create(L"c"));
    }
    void set_c(c_proxy value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
    jsrt::property_descriptor<c_proxy> c_descriptor()
    {
        return get_own_property_descriptor<c_proxy>(jsrt::property_id::create(L"c"));
    }
    bool set_c_descriptor(jsrt::property_descriptor<c_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"c"), descriptor);
    }
    a_proxy b()
    {
        return get_property<a_proxy>(jsrt::property_id::create(L"b"));
    }
    void set_b(a_proxy value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
    jsrt::property_descriptor<a_proxy> b_descriptor()
    {
        return get_own_property_descriptor<a_proxy>(jsrt::property_id::create(L"b"));
    }
    bool set_b_descriptor(jsrt::property_descriptor<a_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"b"), descriptor);
    }
    e_proxy f()
    {
        return get_property<e_proxy>(jsrt::property_id::create(L"f"));
    }
    void set_f(e_proxy value)
    {
        set_property(jsrt::property_id::create(L"f"), value);
    }
    jsrt::property_descriptor<e_proxy> f_descriptor()
    {
        return get_own_property_descriptor<e_proxy>(jsrt::property_id::create(L"f"));
    }
    bool set_f_descriptor(jsrt::property_descriptor<e_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"f"), descriptor);
    }
} // namespace types-self-reference

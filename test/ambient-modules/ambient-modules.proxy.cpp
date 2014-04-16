// This file contains automatically generated proxies for JavaScript.

#include "ambient_modules_proxy.h"

namespace ambient_modules
{
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    g_proxy::g_proxy() :
        jsrt::object()
    {
    }
    g_proxy::g_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    jsrt::function<a_proxy::g_proxy> g()
    {
        return get_property<jsrt::function<a_proxy::g_proxy>>(jsrt::property_id::create(L"g"));
    }
    void set_g(jsrt::function<a_proxy::g_proxy> value)
    {
        set_property(jsrt::property_id::create(L"g"), value);
    }
    a_proxy a()
    {
        return jsrt::context::global().get_property<a_proxy>(jsrt::property_id::create(L"a"));
    }
    void set_a(a_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
    b_proxy::b_proxy() :
        jsrt::object()
    {
    }
    b_proxy::b_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
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
    z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    z_proxy::z_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy> z()
    {
        return get_property<jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy>>(jsrt::property_id::create(L"z"));
    }
    void set_z(jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy> value)
    {
        set_property(jsrt::property_id::create(L"z"), value);
    }
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
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
    jsrt::function<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy> d()
    {
        return get_property<jsrt::function<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy>>(jsrt::property_id::create(L"d"));
    }
    void set_d(jsrt::function<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy> value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    b_proxy::c_proxy::d_proxy::c_proxy c()
    {
        return get_property<b_proxy::c_proxy::d_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    void set_c(b_proxy::c_proxy::d_proxy::c_proxy value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
    b_proxy::c_proxy::d_proxy d()
    {
        return get_property<b_proxy::c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    void set_d(b_proxy::c_proxy::d_proxy value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    b_proxy::c_proxy c()
    {
        return get_property<b_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    void set_c(b_proxy::c_proxy value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
    b_proxy b()
    {
        return jsrt::context::global().get_property<b_proxy>(jsrt::property_id::create(L"b"));
    }
    void set_b(b_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
    d_proxy z()
    {
        return jsrt::context::global().get_property<d_proxy>(jsrt::property_id::create(L"z"));
    }
    void set_z(d_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"z"), value);
    }
} // namespace ambient_modules

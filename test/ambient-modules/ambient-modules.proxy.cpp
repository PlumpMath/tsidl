// This file contains automatically generated proxies for JavaScript.

#include "ambient-modules.proxy.h"

namespace ambient_modules
{
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    g_proxy::g_proxy() :
        jsrt::object()
    {
    }
    g_proxy::g_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    jsrt::function<a_proxy::g_proxy> a_proxy::g()
    {
        return get_property<jsrt::function<a_proxy::g_proxy>>(jsrt::property_id::create(L"g"));
    }
    a_proxy a()
    {
        return jsrt::context::global().get_property<a_proxy>(jsrt::property_id::create(L"a"));
    }
    b_proxy::b_proxy() :
        jsrt::object()
    {
    }
    b_proxy::b_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    d_proxy::d_proxy() :
        jsrt::object()
    {
    }
    d_proxy::d_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    double d_proxy::x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void d_proxy::set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::function<double> d_proxy::y()
    {
        return get_property<jsrt::function<double>>(jsrt::property_id::create(L"y"));
    }
    void d_proxy::set_y(jsrt::function<double> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    z_proxy::z_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy> d_proxy::z()
    {
        return get_property<jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy>>(jsrt::property_id::create(L"z"));
    }
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    d_proxy::d_proxy() :
        jsrt::object()
    {
    }
    d_proxy::d_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    jsrt::function<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy> c_proxy::d()
    {
        return get_property<jsrt::function<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy>>(jsrt::property_id::create(L"d"));
    }
    b_proxy::c_proxy::d_proxy::c_proxy d_proxy::c()
    {
        return get_property<b_proxy::c_proxy::d_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    b_proxy::c_proxy::d_proxy c_proxy::d()
    {
        return get_property<b_proxy::c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    b_proxy::c_proxy b_proxy::c()
    {
        return get_property<b_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    b_proxy b()
    {
        return jsrt::context::global().get_property<b_proxy>(jsrt::property_id::create(L"b"));
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

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
    a_proxy::g_proxy::g_proxy() :
        jsrt::object()
    {
    }
    a_proxy::g_proxy::g_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    jsrt::bound_function<a_proxy, a_proxy::g_proxy> a_proxy::g()
    {
        return jsrt::bound_function<a_proxy, a_proxy::g_proxy>(*this, get_property<jsrt::function<a_proxy::g_proxy>>(jsrt::property_id::create(L"g")));
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
    b_proxy::c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::c_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    b_proxy::c_proxy::d_proxy::d_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::d_proxy::d_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    double b_proxy::c_proxy::d_proxy::x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void b_proxy::c_proxy::d_proxy::set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::bound_function<b_proxy::c_proxy::d_proxy, double> b_proxy::c_proxy::d_proxy::y()
    {
        return jsrt::bound_function<b_proxy::c_proxy::d_proxy, double>(*this, get_property<jsrt::function<double>>(jsrt::property_id::create(L"y")));
    }
    void b_proxy::c_proxy::d_proxy::set_y(jsrt::function<double> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    b_proxy::c_proxy::d_proxy::z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::d_proxy::z_proxy::z_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    jsrt::bound_function<b_proxy::c_proxy::d_proxy, b_proxy::c_proxy::d_proxy::z_proxy> b_proxy::c_proxy::d_proxy::z()
    {
        return jsrt::bound_function<b_proxy::c_proxy::d_proxy, b_proxy::c_proxy::d_proxy::z_proxy>(*this, get_property<jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy>>(jsrt::property_id::create(L"z")));
    }
    b_proxy::c_proxy::d_proxy::a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::d_proxy::a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    b_proxy::c_proxy::d_proxy::c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::d_proxy::c_proxy::c_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    b_proxy::c_proxy::d_proxy::c_proxy::d_proxy::d_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::d_proxy::c_proxy::d_proxy::d_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    jsrt::bound_function<b_proxy::c_proxy::d_proxy::c_proxy, b_proxy::c_proxy::d_proxy::c_proxy::d_proxy> b_proxy::c_proxy::d_proxy::c_proxy::d()
    {
        return jsrt::bound_function<b_proxy::c_proxy::d_proxy::c_proxy, b_proxy::c_proxy::d_proxy::c_proxy::d_proxy>(*this, get_property<jsrt::function<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy>>(jsrt::property_id::create(L"d")));
    }
    b_proxy::c_proxy::d_proxy::c_proxy b_proxy::c_proxy::d_proxy::c()
    {
        return get_property<b_proxy::c_proxy::d_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    b_proxy::c_proxy::d_proxy b_proxy::c_proxy::d()
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
    b_proxy::c_proxy::d_proxy::c_proxy::d_proxy z()
    {
        return jsrt::context::global().get_property<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy>(jsrt::property_id::create(L"z"));
    }
    void set_z(b_proxy::c_proxy::d_proxy::c_proxy::d_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"z"), value);
    }
} // namespace ambient_modules

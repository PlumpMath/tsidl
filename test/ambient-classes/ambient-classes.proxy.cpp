// This file contains automatically generated proxies for JavaScript.

#include "ambient-classes.proxy.h"

namespace ambient_classes
{
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    double a_proxy::x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void a_proxy::set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::bound_function<a_proxy, double, double> a_proxy::y()
    {
        return jsrt::bound_function<a_proxy, double, double>(*this, get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"y")));
    }
    void a_proxy::set_y(jsrt::function<double, double> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    jsrt::function<a_proxy, double> a()
    {
        return jsrt::context::global().get_property<jsrt::function<a_proxy, double>>(jsrt::property_id::create(L"a"));
    }
    b_proxy::b_proxy() :
        jsrt::object()
    {
    }
    b_proxy::b_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    double b_proxy::x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void b_proxy::set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    c_proxy::c_proxy(b_proxy value) :
        jsrt::object(value)
    {
    }
    c_proxy::operator b_proxy()
    {
        return b_proxy(*this);
    }
    double c_proxy::x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void c_proxy::set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::function<c_proxy> c()
    {
        return jsrt::context::global().get_property<jsrt::function<c_proxy>>(jsrt::property_id::create(L"c"));
    }
    d_proxy::d_proxy() :
        c_proxy()
    {
    }
    d_proxy::d_proxy(jsrt::object object) :
        c_proxy(object)
    {
    }
    d_proxy::d_proxy(c_proxy object) :
        c_proxy(object)
    {
    }
    jsrt::function<d_proxy> d()
    {
        return jsrt::context::global().get_property<jsrt::function<d_proxy>>(jsrt::property_id::create(L"d"));
    }
} // namespace ambient_classes

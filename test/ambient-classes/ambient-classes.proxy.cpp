// This file contains automatically generated proxies for JavaScript.

#include "ambient_classes_proxy.h"

namespace ambient_classes
{
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
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
    double x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    c_proxy::c_proxy(b_proxy value) :
        jsrt::object(value.handle()) {
    {
    }
    operator b_proxy()
    {
        return b_proxy(*this);
    }
    double x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    c_proxy c()
    {
        return jsrt::context::global().get_property<c_proxy>(jsrt::property_id::create(L"c"));
    }
    void set_c(c_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"c"), value);
    }
    d_proxy::d_proxy() :
        c_proxy()
    {
    }
    d_proxy::d_proxy(c_proxy object) :
        c_proxy(object.handle())
    {
    }
    d_proxy d()
    {
        return jsrt::context::global().get_property<d_proxy>(jsrt::property_id::create(L"d"));
    }
    void set_d(d_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"d"), value);
    }
} // namespace ambient_classes

// This file contains automatically generated proxies for JavaScript.

#include "ambient-classes_proxy.h"

namespace ambient-classes
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
    jsrt::property_descriptor<double> x_descriptor()
    {
        return get_own_property_descriptor<double>(jsrt::property_id::create(L"x"));
    }
    bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
        return define_property(jsrt::property_id::create(L"x"), descriptor);
    }
    jsrt::function<double, double> y()
    {
        return get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"y"));
    }
    void set_y(jsrt::function<double, double> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    jsrt::property_descriptor<jsrt::function<double, double>> y_descriptor()
    {
        return get_own_property_descriptor<jsrt::function<double, double>>(jsrt::property_id::create(L"y"));
    }
    bool set_y_descriptor(jsrt::property_descriptor<jsrt::function<double, double>> descriptor);
        return define_property(jsrt::property_id::create(L"y"), descriptor);
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
    jsrt::property_descriptor<double> x_descriptor()
    {
        return get_own_property_descriptor<double>(jsrt::property_id::create(L"x"));
    }
    bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
        return define_property(jsrt::property_id::create(L"x"), descriptor);
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
    jsrt::property_descriptor<double> x_descriptor()
    {
        return get_own_property_descriptor<double>(jsrt::property_id::create(L"x"));
    }
    bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
        return define_property(jsrt::property_id::create(L"x"), descriptor);
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
        return get_property<d_proxy>(jsrt::property_id::create(L"d"));
    }
    void set_d(d_proxy value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::property_descriptor<d_proxy> d_descriptor()
    {
        return get_own_property_descriptor<d_proxy>(jsrt::property_id::create(L"d"));
    }
    bool set_d_descriptor(jsrt::property_descriptor<d_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"d"), descriptor);
    }
} // namespace ambient-classes

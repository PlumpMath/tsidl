// This file contains automatically generated proxies for JavaScript.

#include "ambient-modules_proxy.h"

namespace ambient-modules
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
    a_proxy::g_proxy g()
    {
        return get_property<a_proxy::g_proxy>(jsrt::property_id::create(L"g"));
    }
    void set_g(a_proxy::g_proxy value)
    {
        set_property(jsrt::property_id::create(L"g"), value);
    }
    jsrt::property_descriptor<a_proxy::g_proxy> g_descriptor()
    {
        return get_own_property_descriptor<a_proxy::g_proxy>(jsrt::property_id::create(L"g"));
    }
    bool set_g_descriptor(jsrt::property_descriptor<a_proxy::g_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"g"), descriptor);
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
    jsrt::property_descriptor<double> x_descriptor()
    {
        return get_own_property_descriptor<double>(jsrt::property_id::create(L"x"));
    }
    bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
        return define_property(jsrt::property_id::create(L"x"), descriptor);
    }
    jsrt::function<double> y()
    {
        return get_property<jsrt::function<double>>(jsrt::property_id::create(L"y"));
    }
    void set_y(jsrt::function<double> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    jsrt::property_descriptor<jsrt::function<double>> y_descriptor()
    {
        return get_own_property_descriptor<jsrt::function<double>>(jsrt::property_id::create(L"y"));
    }
    bool set_y_descriptor(jsrt::property_descriptor<jsrt::function<double>> descriptor);
        return define_property(jsrt::property_id::create(L"y"), descriptor);
    }
    z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    z_proxy::z_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    b_proxy::c_proxy::d_proxy::z_proxy z()
    {
        return get_property<b_proxy::c_proxy::d_proxy::z_proxy>(jsrt::property_id::create(L"z"));
    }
    void set_z(b_proxy::c_proxy::d_proxy::z_proxy value)
    {
        set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::z_proxy> z_descriptor()
    {
        return get_own_property_descriptor<b_proxy::c_proxy::d_proxy::z_proxy>(jsrt::property_id::create(L"z"));
    }
    bool set_z_descriptor(jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::z_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"z"), descriptor);
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
    b_proxy::c_proxy::d_proxy::c_proxy::d_proxy d()
    {
        return get_property<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    void set_d(b_proxy::c_proxy::d_proxy::c_proxy::d_proxy value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy> d_descriptor()
    {
        return get_own_property_descriptor<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    bool set_d_descriptor(jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"d"), descriptor);
    }
    b_proxy::c_proxy::d_proxy::c_proxy c()
    {
        return get_property<b_proxy::c_proxy::d_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    void set_c(b_proxy::c_proxy::d_proxy::c_proxy value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
    jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::c_proxy> c_descriptor()
    {
        return get_own_property_descriptor<b_proxy::c_proxy::d_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    bool set_c_descriptor(jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::c_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"c"), descriptor);
    }
    b_proxy::c_proxy::d_proxy d()
    {
        return get_property<b_proxy::c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    void set_d(b_proxy::c_proxy::d_proxy value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::property_descriptor<b_proxy::c_proxy::d_proxy> d_descriptor()
    {
        return get_own_property_descriptor<b_proxy::c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    bool set_d_descriptor(jsrt::property_descriptor<b_proxy::c_proxy::d_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"d"), descriptor);
    }
    b_proxy::c_proxy c()
    {
        return get_property<b_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    void set_c(b_proxy::c_proxy value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
    jsrt::property_descriptor<b_proxy::c_proxy> c_descriptor()
    {
        return get_own_property_descriptor<b_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    bool set_c_descriptor(jsrt::property_descriptor<b_proxy::c_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"c"), descriptor);
    }
    b_proxy b()
    {
        return get_property<b_proxy>(jsrt::property_id::create(L"b"));
    }
    void set_b(b_proxy value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
    jsrt::property_descriptor<b_proxy> b_descriptor()
    {
        return get_own_property_descriptor<b_proxy>(jsrt::property_id::create(L"b"));
    }
    bool set_b_descriptor(jsrt::property_descriptor<b_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"b"), descriptor);
    }
    d_proxy z()
    {
        return get_property<d_proxy>(jsrt::property_id::create(L"z"));
    }
    void set_z(d_proxy value)
    {
        set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::property_descriptor<d_proxy> z_descriptor()
    {
        return get_own_property_descriptor<d_proxy>(jsrt::property_id::create(L"z"));
    }
    bool set_z_descriptor(jsrt::property_descriptor<d_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"z"), descriptor);
    }
} // namespace ambient-modules

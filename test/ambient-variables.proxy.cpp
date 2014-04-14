// This file contains automatically generated proxies for JavaScript.

#include "ambient-variables_proxy.h"

namespace ambient-variables
{
    bool a()
    {
        return get_property<bool>(jsrt::property_id::create(L"a"));
    }
    void set_a(bool value)
    {
        set_property(jsrt::property_id::create(L"a"), value);
    }
    double b()
    {
        return get_property<double>(jsrt::property_id::create(L"b"));
    }
    void set_b(double value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
    std::wstring c()
    {
        return get_property<std::wstring>(jsrt::property_id::create(L"c"));
    }
    void set_c(std::wstring value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
    jsrt::object d()
    {
        return get_property<jsrt::object>(jsrt::property_id::create(L"d"));
    }
    void set_d(jsrt::object value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::object e()
    {
        return get_property<jsrt::object>(jsrt::property_id::create(L"e"));
    }
    void set_e(jsrt::object value)
    {
        set_property(jsrt::property_id::create(L"e"), value);
    }
    x_proxy f()
    {
        return get_property<x_proxy>(jsrt::property_id::create(L"f"));
    }
    void set_f(x_proxy value)
    {
        set_property(jsrt::property_id::create(L"f"), value);
    }
    y_proxy g()
    {
        return get_property<y_proxy>(jsrt::property_id::create(L"g"));
    }
    void set_g(y_proxy value)
    {
        set_property(jsrt::property_id::create(L"g"), value);
    }
    jsrt::function<double, double> h()
    {
        return get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"h"));
    }
    void set_h(jsrt::function<double, double> value)
    {
        set_property(jsrt::property_id::create(L"h"), value);
    }
    jsrt::function<double, double> i()
    {
        return get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"i"));
    }
    void set_i(jsrt::function<double, double> value)
    {
        set_property(jsrt::property_id::create(L"i"), value);
    }
    z_proxy j()
    {
        return get_property<z_proxy>(jsrt::property_id::create(L"j"));
    }
    void set_j(z_proxy value)
    {
        set_property(jsrt::property_id::create(L"j"), value);
    }
    x_proxy::x_proxy() :
        jsrt::object()
    {
    }
    x_proxy::x_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    x_proxy x()
    {
        return get_property<x_proxy>(jsrt::property_id::create(L"x"));
    }
    void set_x(x_proxy value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    z_proxy::z_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
} // namespace ambient-variables

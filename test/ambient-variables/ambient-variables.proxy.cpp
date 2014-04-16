// This file contains automatically generated proxies for JavaScript.

#include "ambient_variables_proxy.h"

namespace ambient_variables
{
    bool a()
    {
        return jsrt::context::global().get_property<bool>(jsrt::property_id::create(L"a"));
    }
    void set_a(bool value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
    double b()
    {
        return jsrt::context::global().get_property<double>(jsrt::property_id::create(L"b"));
    }
    void set_b(double value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
    std::wstring c()
    {
        return jsrt::context::global().get_property<std::wstring>(jsrt::property_id::create(L"c"));
    }
    void set_c(std::wstring value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"c"), value);
    }
    jsrt::object d()
    {
        return jsrt::context::global().get_property<jsrt::object>(jsrt::property_id::create(L"d"));
    }
    void set_d(jsrt::object value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::object e()
    {
        return jsrt::context::global().get_property<jsrt::object>(jsrt::property_id::create(L"e"));
    }
    void set_e(jsrt::object value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"e"), value);
    }
    x_proxy f()
    {
        return jsrt::context::global().get_property<x_proxy>(jsrt::property_id::create(L"f"));
    }
    void set_f(x_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"f"), value);
    }
    y_proxy g()
    {
        return jsrt::context::global().get_property<y_proxy>(jsrt::property_id::create(L"g"));
    }
    void set_g(y_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"g"), value);
    }
    jsrt::function<double, double> h()
    {
        return jsrt::context::global().get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"h"));
    }
    void set_h(jsrt::function<double, double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"h"), value);
    }
    jsrt::function<double, double> i()
    {
        return jsrt::context::global().get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"i"));
    }
    void set_i(jsrt::function<double, double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"i"), value);
    }
    z_proxy j()
    {
        return jsrt::context::global().get_property<z_proxy>(jsrt::property_id::create(L"j"));
    }
    void set_j(z_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"j"), value);
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
        return jsrt::context::global().get_property<x_proxy>(jsrt::property_id::create(L"x"));
    }
    void set_x(x_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"x"), value);
    }
    z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    z_proxy::z_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
} // namespace ambient_variables

// This file contains automatically generated proxies for JavaScript.

#include "ambient-variables_proxy.h"

namespace ambient-variables
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
    x f()
    {
        return jsrt::context::global().get_property<x>(jsrt::property_id::create(L"f"));
    }
    void set_f(x value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"f"), value);
    }
    y g()
    {
        return jsrt::context::global().get_property<y>(jsrt::property_id::create(L"g"));
    }
    void set_g(y value)
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
    z j()
    {
        return jsrt::context::global().get_property<z>(jsrt::property_id::create(L"j"));
    }
    void set_j(z value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"j"), value);
    }
    x::x() :
        jsrt::object()
    {
    }
    x::x(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    x x()
    {
        return jsrt::context::global().get_property<x>(jsrt::property_id::create(L"x"));
    }
    void set_x(x value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"x"), value);
    }
    z::z() :
        jsrt::object()
    {
    }
    z::z(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
} // namespace ambient-variables

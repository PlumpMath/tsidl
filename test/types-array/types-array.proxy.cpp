// This file contains automatically generated proxies for JavaScript.

#include "types-array.proxy.h"

namespace types_array
{
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::bound_function<jsrt::object, c_proxy> c()
    {
        return jsrt::bound_function<jsrt::object, c_proxy>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<c_proxy>>(jsrt::property_id::create(L"c")));
    }
    void set_c(jsrt::function<c_proxy> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"c"), value);
    }
    jsrt::array<double> x()
    {
        return jsrt::context::global().get_property<jsrt::array<double>>(jsrt::property_id::create(L"x"));
    }
    void set_x(jsrt::array<double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::array<bool> y()
    {
        return jsrt::context::global().get_property<jsrt::array<bool>>(jsrt::property_id::create(L"y"));
    }
    void set_y(jsrt::array<bool> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"y"), value);
    }
    jsrt::array<std::wstring> z()
    {
        return jsrt::context::global().get_property<jsrt::array<std::wstring>>(jsrt::property_id::create(L"z"));
    }
    void set_z(jsrt::array<std::wstring> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::array<jsrt::value> a()
    {
        return jsrt::context::global().get_property<jsrt::array<jsrt::value>>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::array<jsrt::value> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
    jsrt::array<c_proxy> b()
    {
        return jsrt::context::global().get_property<jsrt::array<c_proxy>>(jsrt::property_id::create(L"b"));
    }
    void set_b(jsrt::array<c_proxy> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
    d_proxy::d_proxy() :
        jsrt::object()
    {
    }
    d_proxy::d_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::array<double> d_proxy::x()
    {
        return get_property<jsrt::array<double>>(jsrt::property_id::create(L"x"));
    }
    void d_proxy::set_x(jsrt::array<double> value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::bound_function<jsrt::object, d_proxy> d()
    {
        return jsrt::bound_function<jsrt::object, d_proxy>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<d_proxy>>(jsrt::property_id::create(L"d")));
    }
    void set_d(jsrt::function<d_proxy> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"d"), value);
    }
    e_proxy::e_proxy() :
        jsrt::object()
    {
    }
    e_proxy::e_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::array<double> e_proxy::x()
    {
        return get_property<jsrt::array<double>>(jsrt::property_id::create(L"x"));
    }
    void e_proxy::set_x(jsrt::array<double> value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    f_proxy::f_proxy() :
        jsrt::object()
    {
    }
    f_proxy::f_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::array<double> f_proxy::g()
    {
        return get_property<jsrt::array<double>>(jsrt::property_id::create(L"g"));
    }
    void f_proxy::set_g(jsrt::array<double> value)
    {
        set_property(jsrt::property_id::create(L"g"), value);
    }
    f_proxy f()
    {
        return jsrt::context::global().get_property<f_proxy>(jsrt::property_id::create(L"f"));
    }
    void set_f(f_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"f"), value);
    }
} // namespace types_array

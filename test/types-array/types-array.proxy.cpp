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
} // namespace types_array

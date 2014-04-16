// This file contains automatically generated proxies for JavaScript.

#include "types_array_proxy.h"

namespace types_array
{
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
    jsrt::array<jsrt::object> a()
    {
        return jsrt::context::global().get_property<jsrt::array<jsrt::object>>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::array<jsrt::object> value)
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
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    jsrt::function<c_proxy> c()
    {
        return jsrt::context::global().get_property<jsrt::function<c_proxy>>(jsrt::property_id::create(L"c"));
    }
    void set_c(jsrt::function<c_proxy> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"c"), value);
    }
} // namespace types_array

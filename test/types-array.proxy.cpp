// This file contains automatically generated proxies for JavaScript.

#include "types-array_proxy.h"

namespace types-array
{
    jsrt::array<double> x()
    {
        return get_property<jsrt::array<double>>(jsrt::property_id::create(L"x"));
    }
    void set_x(jsrt::array<double> value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::array<bool> y()
    {
        return get_property<jsrt::array<bool>>(jsrt::property_id::create(L"y"));
    }
    void set_y(jsrt::array<bool> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    jsrt::array<std::wstring> z()
    {
        return get_property<jsrt::array<std::wstring>>(jsrt::property_id::create(L"z"));
    }
    void set_z(jsrt::array<std::wstring> value)
    {
        set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::array<jsrt::object> a()
    {
        return get_property<jsrt::array<jsrt::object>>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::array<jsrt::object> value)
    {
        set_property(jsrt::property_id::create(L"a"), value);
    }
    jsrt::array<c> b()
    {
        return get_property<jsrt::array<c>>(jsrt::property_id::create(L"b"));
    }
    void set_b(jsrt::array<c> value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
    c::c() :
        jsrt::object()
    {
    }
    c::c(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    c c()
    {
        return get_property<c>(jsrt::property_id::create(L"c"));
    }
    void set_c(c value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
} // namespace types-array

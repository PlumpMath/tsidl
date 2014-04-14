// This file contains automatically generated proxies for JavaScript.

#include "top-level_proxy.h"

namespace top-level
{
    double x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    std::wstring d()
    {
        return get_property<std::wstring>(jsrt::property_id::create(L"d"));
    }
    void set_d(std::wstring value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::function<void, std::wstring> y()
    {
        return get_property<jsrt::function<void, std::wstring>>(jsrt::property_id::create(L"y"));
    }
    void set_y(jsrt::function<void, std::wstring> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    z::z() :
        jsrt::object()
    {
    }
    z::z(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    a::a() :
        jsrt::object()
    {
    }
    a::a(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    a a()
    {
        return get_property<a>(jsrt::property_id::create(L"a"));
    }
    void set_a(a value)
    {
        set_property(jsrt::property_id::create(L"a"), value);
    }
    b::b() :
        jsrt::object()
    {
    }
    b::b(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    b b()
    {
        return get_property<b>(jsrt::property_id::create(L"b"));
    }
    void set_b(b value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
} // namespace top-level

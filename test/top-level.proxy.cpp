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
    z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    z_proxy::z_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    a_proxy a()
    {
        return get_property<a_proxy>(jsrt::property_id::create(L"a"));
    }
    void set_a(a_proxy value)
    {
        set_property(jsrt::property_id::create(L"a"), value);
    }
    b_proxy::b_proxy() :
        jsrt::object()
    {
    }
    b_proxy::b_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    b_proxy b()
    {
        return get_property<b_proxy>(jsrt::property_id::create(L"b"));
    }
    void set_b(b_proxy value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
} // namespace top-level

// This file contains automatically generated proxies for JavaScript.

#include "top_level_proxy.h"

namespace top_level
{
    double x()
    {
        return jsrt::context::global().get_property<double>(jsrt::property_id::create(L"x"));
    }
    void set_x(double value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"x"), value);
    }
    std::wstring d()
    {
        return jsrt::context::global().get_property<std::wstring>(jsrt::property_id::create(L"d"));
    }
    void set_d(std::wstring value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::function<void, std::wstring> y()
    {
        return jsrt::context::global().get_property<jsrt::function<void, std::wstring>>(jsrt::property_id::create(L"y"));
    }
    void set_y(jsrt::function<void, std::wstring> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"y"), value);
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
        return jsrt::context::global().get_property<a_proxy>(jsrt::property_id::create(L"a"));
    }
    void set_a(a_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
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
        return jsrt::context::global().get_property<b_proxy>(jsrt::property_id::create(L"b"));
    }
    void set_b(b_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
} // namespace top_level

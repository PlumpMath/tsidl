// This file contains automatically generated proxies for JavaScript.

#include "top-level.proxy.h"

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
    jsrt::bound_function<jsrt::object, void, std::wstring> y()
    {
        return jsrt::bound_function<jsrt::object, void, std::wstring>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<void, std::wstring>>(jsrt::property_id::create(L"y")));
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
        jsrt::object(object)
    {
    }
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    jsrt::bound_function<jsrt::object, a_proxy> a()
    {
        return jsrt::bound_function<jsrt::object, a_proxy>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<a_proxy>>(jsrt::property_id::create(L"a")));
    }
    b_proxy::b_proxy() :
        jsrt::object()
    {
    }
    b_proxy::b_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    b_proxy b()
    {
        return jsrt::context::global().get_property<b_proxy>(jsrt::property_id::create(L"b"));
    }
} // namespace top_level

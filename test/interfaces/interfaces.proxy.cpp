// This file contains automatically generated proxies for JavaScript.

#include "interfaces.proxy.h"

namespace interfaces
{
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    b_proxy::b_proxy() :
        a_proxy()
    {
    }
    b_proxy::b_proxy(jsrt::value value) :
        a_proxy(value)
    {
    }
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    double c_proxy::x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void c_proxy::set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::optional<double> c_proxy::y()
    {
        return get_property<jsrt::optional<double>>(jsrt::property_id::create(L"y"));
    }
    void c_proxy::set_y(jsrt::optional<double> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    std::wstring c_proxy::abc()
    {
        return get_property<std::wstring>(jsrt::property_id::create(L"abc"));
    }
    void c_proxy::set_abc(std::wstring value)
    {
        set_property(jsrt::property_id::create(L"abc"), value);
    }
    jsrt::bound_function<c_proxy, double, double> c_proxy::b()
    {
        return jsrt::bound_function<c_proxy, double, double>(*this, get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"b")));
    }
    void c_proxy::set_b(jsrt::function<double, double> value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
    d_proxy::d_proxy() :
        jsrt::function<std::wstring, std::wstring>()
    {
    }
    d_proxy::d_proxy(jsrt::value value) :
        jsrt::function<std::wstring, std::wstring>(value)
    {
    }
    d_proxy d_proxy::create(Signature signature)
    {
        return (d_proxy)jsrt::function<std::wstring, std::wstring>::create(signature);
    }
    e_proxy::e_proxy() :
        jsrt::function<jsrt::object, std::wstring>()
    {
    }
    e_proxy::e_proxy(jsrt::value value) :
        jsrt::function<jsrt::object, std::wstring>(value)
    {
    }
    e_proxy e_proxy::create(Signature signature)
    {
        return (e_proxy)jsrt::function<jsrt::object, std::wstring>::create(signature);
    }
    f_proxy::f_proxy() :
        d_proxy()
    {
    }
    f_proxy::f_proxy(jsrt::value value) :
        d_proxy(value)
    {
    }
    f_proxy f_proxy::create(Signature signature)
    {
        return (f_proxy)d_proxy::create(signature);
    }
} // namespace interfaces

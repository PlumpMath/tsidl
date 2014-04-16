// This file contains automatically generated proxies for JavaScript.

#include "interfaces.proxy.h"

namespace interfaces
{
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    b_proxy::b_proxy() :
        a_proxy()
    {
    }
    b_proxy::b_proxy(a_proxy object) :
        a_proxy(object.handle())
    {
    }
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    double x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    double y()
    {
        return get_property<double>(jsrt::property_id::create(L"y"));
    }
    void set_y(double value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    std::wstring abc()
    {
        return get_property<std::wstring>(jsrt::property_id::create(L"abc"));
    }
    void set_abc(std::wstring value)
    {
        set_property(jsrt::property_id::create(L"abc"), value);
    }
    double 0()
    {
        return get_property<double>(jsrt::property_id::create(L"0"));
    }
    void set_0(double value)
    {
        set_property(jsrt::property_id::create(L"0"), value);
    }
    jsrt::function<double, double> b()
    {
        return get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"b"));
    }
    void set_b(jsrt::function<double, double> value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
    d_proxy::d_proxy() :
        jsrt::function<std::wstring, std::wstring>()
    {
    }
    d_proxy::d_proxy(jsrt::function<std::wstring, std::wstring> object) :
        jsrt::function<std::wstring, std::wstring>(object.handle())
    {
    }
    d_proxy::d_proxy(Signature signature) :
        jsrt::function<std::wstring, std::wstring>(signature)
    {
    }
    e_proxy::e_proxy() :
        jsrt::function<std::wstring, std::wstring>()
    {
    }
    e_proxy::e_proxy(jsrt::function<std::wstring, std::wstring> object) :
        jsrt::function<std::wstring, std::wstring>(object.handle())
    {
    }
    e_proxy::e_proxy(Signature signature) :
        jsrt::function<std::wstring, std::wstring>(signature)
    {
    }
    f_proxy::f_proxy() :
        d_proxy()
    {
    }
    f_proxy::f_proxy(d_proxy object) :
        d_proxy(object.handle())
    {
    }
} // namespace interfaces

// This file contains automatically generated proxies for JavaScript.

#include "interfaces_proxy.h"

namespace interfaces
{
    a::a() :
        jsrt::object()
    {
    }
    a::a(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    b::b() :
        a()
    {
    }
    b::b(a object) :
        a(object.handle())
    {
    }
    c::c() :
        jsrt::object()
    {
    }
    c::c(jsrt::object object) :
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
    d::d() :
        jsrt::function<std::wstring, std::wstring>()
    {
    }
    d::d(jsrt::function<std::wstring, std::wstring> object) :
        jsrt::function<std::wstring, std::wstring>(object.handle())
    {
    }
    d::d(Signature signature) :
        jsrt::function<std::wstring, std::wstring>(signature)
    {
    }
    e::e() :
        jsrt::function<std::wstring, std::wstring>()
    {
    }
    e::e(jsrt::function<std::wstring, std::wstring> object) :
        jsrt::function<std::wstring, std::wstring>(object.handle())
    {
    }
    e::e(Signature signature) :
        jsrt::function<std::wstring, std::wstring>(signature)
    {
    }
    f::f() :
        d()
    {
    }
    f::f(d object) :
        d(object.handle())
    {
    }
} // namespace interfaces

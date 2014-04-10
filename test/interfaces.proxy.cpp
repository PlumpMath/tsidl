// This file contains automatically generated proxies for JavaScript.

#include "interfaces_proxy.h"

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
    jsrt::property_descriptor<double> x_descriptor()
    {
        return get_own_property_descriptor<double>(jsrt::property_id::create(L"x"));
    }
    bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
        return define_property(jsrt::property_id::create(L"x"), descriptor);
    }
    double y()
    {
        return get_property<double>(jsrt::property_id::create(L"y"));
    }
    void set_y(double value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    jsrt::property_descriptor<double> y_descriptor()
    {
        return get_own_property_descriptor<double>(jsrt::property_id::create(L"y"));
    }
    bool set_y_descriptor(jsrt::property_descriptor<double> descriptor);
        return define_property(jsrt::property_id::create(L"y"), descriptor);
    }
    std::wstring abc()
    {
        return get_property<std::wstring>(jsrt::property_id::create(L"abc"));
    }
    void set_abc(std::wstring value)
    {
        set_property(jsrt::property_id::create(L"abc"), value);
    }
    jsrt::property_descriptor<std::wstring> abc_descriptor()
    {
        return get_own_property_descriptor<std::wstring>(jsrt::property_id::create(L"abc"));
    }
    bool set_abc_descriptor(jsrt::property_descriptor<std::wstring> descriptor);
        return define_property(jsrt::property_id::create(L"abc"), descriptor);
    }
    double 0()
    {
        return get_property<double>(jsrt::property_id::create(L"0"));
    }
    void set_0(double value)
    {
        set_property(jsrt::property_id::create(L"0"), value);
    }
    jsrt::property_descriptor<double> 0_descriptor()
    {
        return get_own_property_descriptor<double>(jsrt::property_id::create(L"0"));
    }
    bool set_0_descriptor(jsrt::property_descriptor<double> descriptor);
        return define_property(jsrt::property_id::create(L"0"), descriptor);
    }
    jsrt::function<double, double> b()
    {
        return get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"b"));
    }
    void set_b(jsrt::function<double, double> value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
    jsrt::property_descriptor<jsrt::function<double, double>> b_descriptor()
    {
        return get_own_property_descriptor<jsrt::function<double, double>>(jsrt::property_id::create(L"b"));
    }
    bool set_b_descriptor(jsrt::property_descriptor<jsrt::function<double, double>> descriptor);
        return define_property(jsrt::property_id::create(L"b"), descriptor);
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

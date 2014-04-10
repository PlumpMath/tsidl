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
    jsrt::property_descriptor<double> x_descriptor()
    {
        return get_own_property_descriptor<double>(jsrt::property_id::create(L"x"));
    }
    bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
        return define_property(jsrt::property_id::create(L"x"), descriptor);
    }
    std::wstring d()
    {
        return get_property<std::wstring>(jsrt::property_id::create(L"d"));
    }
    void set_d(std::wstring value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::property_descriptor<std::wstring> d_descriptor()
    {
        return get_own_property_descriptor<std::wstring>(jsrt::property_id::create(L"d"));
    }
    bool set_d_descriptor(jsrt::property_descriptor<std::wstring> descriptor);
        return define_property(jsrt::property_id::create(L"d"), descriptor);
    }
    jsrt::function<void, std::wstring> y()
    {
        return get_property<jsrt::function<void, std::wstring>>(jsrt::property_id::create(L"y"));
    }
    void set_y(jsrt::function<void, std::wstring> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    jsrt::property_descriptor<jsrt::function<void, std::wstring>> y_descriptor()
    {
        return get_own_property_descriptor<jsrt::function<void, std::wstring>>(jsrt::property_id::create(L"y"));
    }
    bool set_y_descriptor(jsrt::property_descriptor<jsrt::function<void, std::wstring>> descriptor);
        return define_property(jsrt::property_id::create(L"y"), descriptor);
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
    jsrt::property_descriptor<a_proxy> a_descriptor()
    {
        return get_own_property_descriptor<a_proxy>(jsrt::property_id::create(L"a"));
    }
    bool set_a_descriptor(jsrt::property_descriptor<a_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"a"), descriptor);
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
    jsrt::property_descriptor<b_proxy> b_descriptor()
    {
        return get_own_property_descriptor<b_proxy>(jsrt::property_id::create(L"b"));
    }
    bool set_b_descriptor(jsrt::property_descriptor<b_proxy> descriptor);
        return define_property(jsrt::property_id::create(L"b"), descriptor);
    }
} // namespace top-level

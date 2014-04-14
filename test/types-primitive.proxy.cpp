// This file contains automatically generated proxies for JavaScript.

#include "types-primitive_proxy.h"

namespace types-primitive
{
    bool x()
    {
        return get_property<bool>(jsrt::property_id::create(L"x"));
    }
    void set_x(bool value)
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
    std::wstring z()
    {
        return get_property<std::wstring>(jsrt::property_id::create(L"z"));
    }
    void set_z(std::wstring value)
    {
        set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::object a()
    {
        return get_property<jsrt::object>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::object value)
    {
        set_property(jsrt::property_id::create(L"a"), value);
    }
    jsrt::object b()
    {
        return get_property<jsrt::object>(jsrt::property_id::create(L"b"));
    }
    void set_b(jsrt::object value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
} // namespace types-primitive

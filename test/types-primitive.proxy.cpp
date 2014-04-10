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
    jsrt::property_descriptor<bool> x_descriptor()
    {
        return get_own_property_descriptor<bool>(jsrt::property_id::create(L"x"));
    }
    bool set_x_descriptor(jsrt::property_descriptor<bool> descriptor);
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
    std::wstring z()
    {
        return get_property<std::wstring>(jsrt::property_id::create(L"z"));
    }
    void set_z(std::wstring value)
    {
        set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::property_descriptor<std::wstring> z_descriptor()
    {
        return get_own_property_descriptor<std::wstring>(jsrt::property_id::create(L"z"));
    }
    bool set_z_descriptor(jsrt::property_descriptor<std::wstring> descriptor);
        return define_property(jsrt::property_id::create(L"z"), descriptor);
    }
    jsrt::object a()
    {
        return get_property<jsrt::object>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::object value)
    {
        set_property(jsrt::property_id::create(L"a"), value);
    }
    jsrt::property_descriptor<jsrt::object> a_descriptor()
    {
        return get_own_property_descriptor<jsrt::object>(jsrt::property_id::create(L"a"));
    }
    bool set_a_descriptor(jsrt::property_descriptor<jsrt::object> descriptor);
        return define_property(jsrt::property_id::create(L"a"), descriptor);
    }
    jsrt::object b()
    {
        return get_property<jsrt::object>(jsrt::property_id::create(L"b"));
    }
    void set_b(jsrt::object value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
    jsrt::property_descriptor<jsrt::object> b_descriptor()
    {
        return get_own_property_descriptor<jsrt::object>(jsrt::property_id::create(L"b"));
    }
    bool set_b_descriptor(jsrt::property_descriptor<jsrt::object> descriptor);
        return define_property(jsrt::property_id::create(L"b"), descriptor);
    }
} // namespace types-primitive

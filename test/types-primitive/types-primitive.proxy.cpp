// This file contains automatically generated proxies for JavaScript.

#include "types-primitive.proxy.h"

namespace types_primitive
{
    bool x()
    {
        return jsrt::context::global().get_property<bool>(jsrt::property_id::create(L"x"));
    }
    void set_x(bool value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"x"), value);
    }
    double y()
    {
        return jsrt::context::global().get_property<double>(jsrt::property_id::create(L"y"));
    }
    void set_y(double value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"y"), value);
    }
    std::wstring z()
    {
        return jsrt::context::global().get_property<std::wstring>(jsrt::property_id::create(L"z"));
    }
    void set_z(std::wstring value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::value a()
    {
        return jsrt::context::global().get_property<jsrt::value>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::value value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
    jsrt::value b()
    {
        return jsrt::context::global().get_property<jsrt::value>(jsrt::property_id::create(L"b"));
    }
    void set_b(jsrt::value value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
} // namespace types_primitive

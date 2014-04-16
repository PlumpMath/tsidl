// This file contains automatically generated proxies for JavaScript.

#include "types_anonymous_type.proxy.h"

namespace types_anonymous_type
{
    jsrt::object x()
    {
        return jsrt::context::global().get_property<jsrt::object>(jsrt::property_id::create(L"x"));
    }
    void set_x(jsrt::object value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::function<void> z()
    {
        return jsrt::context::global().get_property<jsrt::function<void>>(jsrt::property_id::create(L"z"));
    }
    void set_z(jsrt::function<void> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::function<double> a()
    {
        return jsrt::context::global().get_property<jsrt::function<double>>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::function<double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
} // namespace types_anonymous_type

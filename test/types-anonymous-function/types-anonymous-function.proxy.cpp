// This file contains automatically generated proxies for JavaScript.

#include "types_anonymous_function_proxy.h"

namespace types_anonymous_function
{
    jsrt::function<bool, double> x()
    {
        return jsrt::context::global().get_property<jsrt::function<bool, double>>(jsrt::property_id::create(L"x"));
    }
    void set_x(jsrt::function<bool, double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::function<bool> y()
    {
        return jsrt::context::global().get_property<jsrt::function<bool>>(jsrt::property_id::create(L"y"));
    }
    void set_y(jsrt::function<bool> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"y"), value);
    }
    jsrt::function<void> z()
    {
        return jsrt::context::global().get_property<jsrt::function<void>>(jsrt::property_id::create(L"z"));
    }
    void set_z(jsrt::function<void> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::function<double, double> a()
    {
        return jsrt::context::global().get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::function<double, double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
} // namespace types_anonymous_function

// This file contains automatically generated proxies for JavaScript.

#include "types-anonymous-function.proxy.h"

namespace types_anonymous_function
{
    jsrt::bound_function<jsrt::object, bool, double> x()
    {
        return jsrt::bound_function<jsrt::object, bool, double>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<bool, double>>(jsrt::property_id::create(L"x")));
    }
    void set_x(jsrt::function<bool, double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::bound_function<jsrt::object, bool> y()
    {
        return jsrt::bound_function<jsrt::object, bool>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<bool>>(jsrt::property_id::create(L"y")));
    }
    void set_y(jsrt::function<bool> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"y"), value);
    }
    jsrt::bound_function<jsrt::object, void> z()
    {
        return jsrt::bound_function<jsrt::object, void>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<void>>(jsrt::property_id::create(L"z")));
    }
    void set_z(jsrt::function<void> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::bound_function<jsrt::object, jsrt::object, double> a()
    {
        return jsrt::bound_function<jsrt::object, jsrt::object, double>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<jsrt::object, double>>(jsrt::property_id::create(L"a")));
    }
    void set_a(jsrt::function<jsrt::object, double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
} // namespace types_anonymous_function

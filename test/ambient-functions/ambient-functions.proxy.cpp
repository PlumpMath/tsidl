// This file contains automatically generated proxies for JavaScript.

#include "ambient-functions.proxy.h"

namespace ambient_functions
{
    jsrt::bound_function<jsrt::object, jsrt::object> a()
    {
        return jsrt::bound_function<jsrt::object, jsrt::object>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<jsrt::object>>(jsrt::property_id::create(L"a")));
    }
    void set_a(jsrt::function<jsrt::object> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
    jsrt::bound_function<jsrt::object, double, double> b()
    {
        return jsrt::bound_function<jsrt::object, double, double>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"b")));
    }
    void set_b(jsrt::function<double, double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
    jsrt::bound_function<jsrt::object, double, double, jsrt::optional<double>> c()
    {
        return jsrt::bound_function<jsrt::object, double, double, jsrt::optional<double>>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<double, double, jsrt::optional<double>>>(jsrt::property_id::create(L"c")));
    }
    void set_c(jsrt::function<double, double, jsrt::optional<double>> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"c"), value);
    }
    jsrt::bound_function<jsrt::object, double, double, std::vector<double>> d()
    {
        return jsrt::bound_function<jsrt::object, double, double, std::vector<double>>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<double, double, std::vector<double>>>(jsrt::property_id::create(L"d")));
    }
    void set_d(jsrt::function<double, double, std::vector<double>> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::bound_function<jsrt::object, void> e()
    {
        return jsrt::bound_function<jsrt::object, void>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<void>>(jsrt::property_id::create(L"e")));
    }
    void set_e(jsrt::function<void> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"e"), value);
    }
} // namespace ambient_functions

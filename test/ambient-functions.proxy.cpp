// This file contains automatically generated proxies for JavaScript.

#include "ambient-functions_proxy.h"

namespace ambient-functions
{
    jsrt::function<jsrt::object> a()
    {
        return get_property<jsrt::function<jsrt::object>>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::function<jsrt::object> value)
    {
        set_property(jsrt::property_id::create(L"a"), value);
    }
    jsrt::function<double, double> b()
    {
        return get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"b"));
    }
    void set_b(jsrt::function<double, double> value)
    {
        set_property(jsrt::property_id::create(L"b"), value);
    }
    jsrt::function<double, double, jsrt::optional<double>> c()
    {
        return get_property<jsrt::function<double, double, jsrt::optional<double>>>(jsrt::property_id::create(L"c"));
    }
    void set_c(jsrt::function<double, double, jsrt::optional<double>> value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
    jsrt::function<double, double, jsrt::optional<jsrt::array<double>>> d()
    {
        return get_property<jsrt::function<double, double, jsrt::optional<jsrt::array<double>>>>(jsrt::property_id::create(L"d"));
    }
    void set_d(jsrt::function<double, double, jsrt::optional<jsrt::array<double>>> value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::function<void> e()
    {
        return get_property<jsrt::function<void>>(jsrt::property_id::create(L"e"));
    }
    void set_e(jsrt::function<void> value)
    {
        set_property(jsrt::property_id::create(L"e"), value);
    }
} // namespace ambient-functions

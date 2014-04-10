// This file contains automatically generated proxies for JavaScript.

#include "types-anonymous-type_proxy.h"

namespace types-anonymous-type
{
    jsrt::object x()
    {
        return get_property<jsrt::object>(jsrt::property_id::create(L"x"));
    }
    void set_x(jsrt::object value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::property_descriptor<jsrt::object> x_descriptor()
    {
        return get_own_property_descriptor<jsrt::object>(jsrt::property_id::create(L"x"));
    }
    bool set_x_descriptor(jsrt::property_descriptor<jsrt::object> descriptor);
        return define_property(jsrt::property_id::create(L"x"), descriptor);
    }
    jsrt::function<void> z()
    {
        return get_property<jsrt::function<void>>(jsrt::property_id::create(L"z"));
    }
    void set_z(jsrt::function<void> value)
    {
        set_property(jsrt::property_id::create(L"z"), value);
    }
    jsrt::property_descriptor<jsrt::function<void>> z_descriptor()
    {
        return get_own_property_descriptor<jsrt::function<void>>(jsrt::property_id::create(L"z"));
    }
    bool set_z_descriptor(jsrt::property_descriptor<jsrt::function<void>> descriptor);
        return define_property(jsrt::property_id::create(L"z"), descriptor);
    }
    jsrt::function<double> a()
    {
        return get_property<jsrt::function<double>>(jsrt::property_id::create(L"a"));
    }
    void set_a(jsrt::function<double> value)
    {
        set_property(jsrt::property_id::create(L"a"), value);
    }
    jsrt::property_descriptor<jsrt::function<double>> a_descriptor()
    {
        return get_own_property_descriptor<jsrt::function<double>>(jsrt::property_id::create(L"a"));
    }
    bool set_a_descriptor(jsrt::property_descriptor<jsrt::function<double>> descriptor);
        return define_property(jsrt::property_id::create(L"a"), descriptor);
    }
} // namespace types-anonymous-type

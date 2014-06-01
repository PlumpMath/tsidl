// This file contains automatically generated proxies for JavaScript.

#include "ambient-external-modules.proxy.h"

namespace ambient_external_modules
{
    foo_proxy::foo_proxy() :
        jsrt::object()
    {
    }
    foo_proxy::foo_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    double foo_proxy::x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void foo_proxy::set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::bound_function<foo_proxy, double> foo_proxy::y()
    {
        return jsrt::bound_function<foo_proxy, double>(*this, get_property<jsrt::function<double>>(jsrt::property_id::create(L"y")));
    }
    void foo_proxy::set_y(jsrt::function<double> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    foo_proxy::z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    foo_proxy::z_proxy::z_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::bound_function<foo_proxy, foo_proxy::z_proxy> foo_proxy::z()
    {
        return jsrt::bound_function<foo_proxy, foo_proxy::z_proxy>(*this, get_property<jsrt::function<foo_proxy::z_proxy>>(jsrt::property_id::create(L"z")));
    }
    void foo_proxy::set_z(jsrt::function<foo_proxy::z_proxy> value)
    {
        set_property(jsrt::property_id::create(L"z"), value);
    }
    foo_proxy::a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    foo_proxy::a_proxy::a_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
}
template<>
JsErrorCode jsrt::value::to_native<ambient_external_modules::foo_proxy::b>(JsValueRef value, ambient_external_modules::foo_proxy::b *result)
{
    double doubleResult = 0;
    JsErrorCode code = JsNumberToDouble(value, &doubleResult);
    *result = (ambient_external_modules::foo_proxy::b)(int) doubleResult;
    return code;
}
template<>
JsErrorCode jsrt::value::from_native(ambient_external_modules::foo_proxy::b value, JsValueRef *result)
{
    return JsIntToNumber(value, result);
}
namespace ambient_external_modules
{
    foo_proxy::c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    foo_proxy::c_proxy::c_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    foo_proxy::c_proxy::d_proxy::d_proxy() :
        jsrt::object()
    {
    }
    foo_proxy::c_proxy::d_proxy::d_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::bound_function<foo_proxy::c_proxy, foo_proxy::c_proxy::d_proxy> foo_proxy::c_proxy::d()
    {
        return jsrt::bound_function<foo_proxy::c_proxy, foo_proxy::c_proxy::d_proxy>(*this, get_property<jsrt::function<foo_proxy::c_proxy::d_proxy>>(jsrt::property_id::create(L"d")));
    }
    void foo_proxy::c_proxy::set_d(jsrt::function<foo_proxy::c_proxy::d_proxy> value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    foo_proxy::c_proxy foo_proxy::c()
    {
        return get_property<foo_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    void foo_proxy::set_c(foo_proxy::c_proxy value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
} // namespace ambient_external_modules

// This file contains automatically generated proxies for JavaScript.

#include "ambient-variables.proxy.h"

namespace ambient_variables
{
    x_proxy::x_proxy() :
        jsrt::object()
    {
    }
    x_proxy::x_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    jsrt::bound_function<jsrt::object, x_proxy> x()
    {
        return jsrt::bound_function<jsrt::object, x_proxy>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<x_proxy>>(jsrt::property_id::create(L"x")));
    }
}
template<>
JsErrorCode jsrt::value::to_native<ambient_variables::y>(JsValueRef value, ambient_variables::y *result)
{
    double doubleResult = 0;
    JsErrorCode code = JsNumberToDouble(value, &doubleResult);
    *result = (ambient_variables::y)(int) doubleResult;
    return code;
}
template<>
JsErrorCode jsrt::value::from_native(ambient_variables::y value, JsValueRef *result)
{
    return JsIntToNumber(value, result);
}
namespace ambient_variables
{
    z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    z_proxy::z_proxy(jsrt::object object) :
        jsrt::object(object)
    {
    }
    bool a()
    {
        return jsrt::context::global().get_property<bool>(jsrt::property_id::create(L"a"));
    }
    void set_a(bool value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
    double b()
    {
        return jsrt::context::global().get_property<double>(jsrt::property_id::create(L"b"));
    }
    void set_b(double value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
    std::wstring c()
    {
        return jsrt::context::global().get_property<std::wstring>(jsrt::property_id::create(L"c"));
    }
    void set_c(std::wstring value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"c"), value);
    }
    jsrt::value d()
    {
        return jsrt::context::global().get_property<jsrt::value>(jsrt::property_id::create(L"d"));
    }
    void set_d(jsrt::value value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::value e()
    {
        return jsrt::context::global().get_property<jsrt::value>(jsrt::property_id::create(L"e"));
    }
    void set_e(jsrt::value value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"e"), value);
    }
    x_proxy f()
    {
        return jsrt::context::global().get_property<x_proxy>(jsrt::property_id::create(L"f"));
    }
    void set_f(x_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"f"), value);
    }
    y g()
    {
        return jsrt::context::global().get_property<y>(jsrt::property_id::create(L"g"));
    }
    void set_g(y value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"g"), value);
    }
    jsrt::bound_function<jsrt::object, double, double> h()
    {
        return jsrt::bound_function<jsrt::object, double, double>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<double, double>>(jsrt::property_id::create(L"h")));
    }
    void set_h(jsrt::function<double, double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"h"), value);
    }
    jsrt::bound_function<jsrt::object, jsrt::object, double> i()
    {
        return jsrt::bound_function<jsrt::object, jsrt::object, double>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<jsrt::object, double>>(jsrt::property_id::create(L"i")));
    }
    void set_i(jsrt::function<jsrt::object, double> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"i"), value);
    }
    z_proxy j()
    {
        return jsrt::context::global().get_property<z_proxy>(jsrt::property_id::create(L"j"));
    }
    void set_j(z_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"j"), value);
    }
} // namespace ambient_variables

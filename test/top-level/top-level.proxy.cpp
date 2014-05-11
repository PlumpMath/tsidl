// This file contains automatically generated proxies for JavaScript.

#include "top-level.proxy.h"

namespace top_level
{
    double x()
    {
        return jsrt::context::global().get_property<double>(jsrt::property_id::create(L"x"));
    }
    void set_x(double value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"x"), value);
    }
    std::wstring d()
    {
        return jsrt::context::global().get_property<std::wstring>(jsrt::property_id::create(L"d"));
    }
    void set_d(std::wstring value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"d"), value);
    }
    jsrt::bound_function<jsrt::object, void, std::wstring> y()
    {
        return jsrt::bound_function<jsrt::object, void, std::wstring>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<void, std::wstring>>(jsrt::property_id::create(L"y")));
    }
    void set_y(jsrt::function<void, std::wstring> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"y"), value);
    }
    z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    z_proxy::z_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::bound_function<jsrt::object, a_proxy> a()
    {
        return jsrt::bound_function<jsrt::object, a_proxy>(jsrt::context::global(), jsrt::context::global().get_property<jsrt::function<a_proxy>>(jsrt::property_id::create(L"a")));
    }
    void set_a(jsrt::function<a_proxy> value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"a"), value);
    }
    b_proxy::b_proxy() :
        jsrt::object()
    {
    }
    b_proxy::b_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    b_proxy b()
    {
        return jsrt::context::global().get_property<b_proxy>(jsrt::property_id::create(L"b"));
    }
    void set_b(b_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
}
template<>
JsErrorCode jsrt::value::to_native<top_level::c>(JsValueRef value, top_level::c *result)
{
    double doubleResult = 0;
    JsErrorCode code = JsNumberToDouble(value, &doubleResult);
    *result = (top_level::c)(int) doubleResult;
    return code;
}
template<>
JsErrorCode jsrt::value::from_native(top_level::c value, JsValueRef *result)
{
    return JsIntToNumber(value, result);
}
namespace top_level
{
} // namespace top_level

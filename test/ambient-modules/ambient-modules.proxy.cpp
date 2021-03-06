// This file contains automatically generated proxies for JavaScript.

#include "ambient-modules.proxy.h"

namespace ambient_modules
{
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    a_proxy::g_proxy::g_proxy() :
        jsrt::object()
    {
    }
    a_proxy::g_proxy::g_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::bound_function<a_proxy, a_proxy::g_proxy> a_proxy::g()
    {
        return jsrt::bound_function<a_proxy, a_proxy::g_proxy>(*this, get_property<jsrt::function<a_proxy::g_proxy>>(jsrt::property_id::create(L"g")));
    }
    void a_proxy::set_g(jsrt::function<a_proxy::g_proxy> value)
    {
        set_property(jsrt::property_id::create(L"g"), value);
    }
    a_proxy a()
    {
        return jsrt::context::global().get_property<a_proxy>(jsrt::property_id::create(L"a"));
    }
    void set_a(a_proxy value)
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
    b_proxy::c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::c_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    b_proxy::c_proxy::d_proxy::d_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::d_proxy::d_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    double b_proxy::c_proxy::d_proxy::x()
    {
        return get_property<double>(jsrt::property_id::create(L"x"));
    }
    void b_proxy::c_proxy::d_proxy::set_x(double value)
    {
        set_property(jsrt::property_id::create(L"x"), value);
    }
    jsrt::bound_function<b_proxy::c_proxy::d_proxy, double> b_proxy::c_proxy::d_proxy::y()
    {
        return jsrt::bound_function<b_proxy::c_proxy::d_proxy, double>(*this, get_property<jsrt::function<double>>(jsrt::property_id::create(L"y")));
    }
    void b_proxy::c_proxy::d_proxy::set_y(jsrt::function<double> value)
    {
        set_property(jsrt::property_id::create(L"y"), value);
    }
    b_proxy::c_proxy::d_proxy::z_proxy::z_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::d_proxy::z_proxy::z_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::bound_function<b_proxy::c_proxy::d_proxy, b_proxy::c_proxy::d_proxy::z_proxy> b_proxy::c_proxy::d_proxy::z()
    {
        return jsrt::bound_function<b_proxy::c_proxy::d_proxy, b_proxy::c_proxy::d_proxy::z_proxy>(*this, get_property<jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy>>(jsrt::property_id::create(L"z")));
    }
    void b_proxy::c_proxy::d_proxy::set_z(jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy> value)
    {
        set_property(jsrt::property_id::create(L"z"), value);
    }
    b_proxy::c_proxy::d_proxy::a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::d_proxy::a_proxy::a_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
}
template<>
JsErrorCode jsrt::value::to_native<ambient_modules::b_proxy::c_proxy::d_proxy::b>(JsValueRef value, ambient_modules::b_proxy::c_proxy::d_proxy::b *result)
{
    double doubleResult = 0;
    JsErrorCode code = JsNumberToDouble(value, &doubleResult);
    *result = (ambient_modules::b_proxy::c_proxy::d_proxy::b)(int) doubleResult;
    return code;
}
template<>
JsErrorCode jsrt::value::from_native(ambient_modules::b_proxy::c_proxy::d_proxy::b value, JsValueRef *result)
{
    return JsIntToNumber(value, result);
}
namespace ambient_modules
{
    b_proxy::c_proxy::d_proxy::e_proxy::e_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::d_proxy::e_proxy::e_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    b_proxy::c_proxy::d_proxy::e_proxy::f_proxy::f_proxy() :
        jsrt::object()
    {
    }
    b_proxy::c_proxy::d_proxy::e_proxy::f_proxy::f_proxy(jsrt::value value) :
        jsrt::object(value)
    {
    }
    jsrt::bound_function<b_proxy::c_proxy::d_proxy::e_proxy, b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> b_proxy::c_proxy::d_proxy::e_proxy::f()
    {
        return jsrt::bound_function<b_proxy::c_proxy::d_proxy::e_proxy, b_proxy::c_proxy::d_proxy::e_proxy::f_proxy>(*this, get_property<jsrt::function<b_proxy::c_proxy::d_proxy::e_proxy::f_proxy>>(jsrt::property_id::create(L"f")));
    }
    void b_proxy::c_proxy::d_proxy::e_proxy::set_f(jsrt::function<b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> value)
    {
        set_property(jsrt::property_id::create(L"f"), value);
    }
    b_proxy::c_proxy::d_proxy::e_proxy b_proxy::c_proxy::d_proxy::e()
    {
        return get_property<b_proxy::c_proxy::d_proxy::e_proxy>(jsrt::property_id::create(L"e"));
    }
    void b_proxy::c_proxy::d_proxy::set_e(b_proxy::c_proxy::d_proxy::e_proxy value)
    {
        set_property(jsrt::property_id::create(L"e"), value);
    }
    b_proxy::c_proxy::d_proxy b_proxy::c_proxy::d()
    {
        return get_property<b_proxy::c_proxy::d_proxy>(jsrt::property_id::create(L"d"));
    }
    void b_proxy::c_proxy::set_d(b_proxy::c_proxy::d_proxy value)
    {
        set_property(jsrt::property_id::create(L"d"), value);
    }
    b_proxy::c_proxy b_proxy::c()
    {
        return get_property<b_proxy::c_proxy>(jsrt::property_id::create(L"c"));
    }
    void b_proxy::set_c(b_proxy::c_proxy value)
    {
        set_property(jsrt::property_id::create(L"c"), value);
    }
    b_proxy b()
    {
        return jsrt::context::global().get_property<b_proxy>(jsrt::property_id::create(L"b"));
    }
    void set_b(b_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"b"), value);
    }
    b_proxy::c_proxy::d_proxy::e_proxy::f_proxy z()
    {
        return jsrt::context::global().get_property<b_proxy::c_proxy::d_proxy::e_proxy::f_proxy>(jsrt::property_id::create(L"z"));
    }
    void set_z(b_proxy::c_proxy::d_proxy::e_proxy::f_proxy value)
    {
        jsrt::context::global().set_property(jsrt::property_id::create(L"z"), value);
    }
} // namespace ambient_modules

#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-variables.proxy.h"

double foo(const jsrt::call_info &info, double x)
{
    return x;
}

jsrt::object bar(const jsrt::call_info &info, double x)
{
    jsrt::object o = jsrt::object::create();
    o.set_property(jsrt::property_id::create(L"x"), x);
    return o;
}

JsErrorCode DefineGlobals()
{
    ambient_variables::set_a(true);
    ambient_variables::set_b(10.0);
    ambient_variables::set_c(L"foo");
    ambient_variables::set_d(jsrt::number::create(20));
    ambient_variables::set_e(jsrt::number::create(30));
    ambient_variables::set_f((ambient_variables::x_proxy)jsrt::object::create());
    ambient_variables::set_g(ambient_variables::y::m);
    ambient_variables::set_h(jsrt::function_base::create(foo));
    ambient_variables::set_i(jsrt::function_base::create(bar));
    ambient_variables::set_j((ambient_variables::z_proxy)jsrt::object::create());

    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    if (ambient_variables::a() != false)
    {
        return false;
    }
    if (ambient_variables::b() != 100.0)
    {
        return false;
    }
    if (ambient_variables::c() != L"bar")
    {
        return false;
    }
    if (((jsrt::number)ambient_variables::d()).data() != 110.0)
    {
        return false;
    }
    if (((jsrt::number)ambient_variables::e()).data() != 120.0)
    {
        return false;
    }
    if (ambient_variables::f() != jsrt::context::null())
    {
        return false;
    }
    if (ambient_variables::g() != ambient_variables::y::k)
    {
        return false;
    }
    if (ambient_variables::h()(10) != 20.0)
    {
        return false;
    }
    if (ambient_variables::i().construct(10).get_property<double>(jsrt::property_id::create(L"y")) != 20.0)
    {
        return false;
    }
    if (ambient_variables::j().type() != JsObject)
    {
        return false;
    }
    return true;
}
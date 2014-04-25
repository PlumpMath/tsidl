#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "interfaces.proxy.h"

double foo(const jsrt::call_info &info, double x)
{
    return x;
}

std::wstring bar(const jsrt::call_info &info, std::wstring x)
{
    return x;
}

jsrt::object baz(const jsrt::call_info &info, std::wstring x)
{
    jsrt::object o = jsrt::object::create();
    o.set_property(jsrt::property_id::create(L"x"), x);
    return o;
}

JsErrorCode DefineGlobals()
{
    interfaces::a_proxy a = interfaces::a_proxy(jsrt::object::create());
    jsrt::context::global().set_property(jsrt::property_id::create(L"a"), a);
    interfaces::b_proxy b = interfaces::b_proxy(jsrt::object::create());
    jsrt::context::global().set_property(jsrt::property_id::create(L"b"), b);
    interfaces::c_proxy c = interfaces::c_proxy(jsrt::object::create());
    c.set_x(10);
    c.set_y(20);
    c.set_abc(L"abc");
    c.set_b(jsrt::function_base::create(foo));
    jsrt::context::global().set_property(jsrt::property_id::create(L"c"), c);
    interfaces::d_proxy d = interfaces::d_proxy::create(bar);
    jsrt::context::global().set_property(jsrt::property_id::create(L"d"), d);
    interfaces::e_proxy e = interfaces::e_proxy::create(baz);
    jsrt::context::global().set_property(jsrt::property_id::create(L"e"), e);
    interfaces::f_proxy f = interfaces::f_proxy::create(bar);
    jsrt::context::global().set_property(jsrt::property_id::create(L"f"), f);
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    jsrt::value x = jsrt::context::global().get_property(jsrt::property_id::create(L"a"));
    interfaces::a_proxy a;
    jsrt::object o;
    jsrt::value v;
    o = a;

    return true;
}
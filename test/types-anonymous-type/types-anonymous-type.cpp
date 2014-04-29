#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "types-anonymous-type.proxy.h"

void z(const jsrt::call_info &info)
{
}

jsrt::object a(const jsrt::call_info &info)
{
    return (jsrt::object)info.this_value();
}

JsErrorCode DefineGlobals()
{
    types_anonymous_type::set_x(jsrt::object::create());
    types_anonymous_type::set_z(jsrt::function_base::create(z));
    types_anonymous_type::set_a(jsrt::function_base::create(a));
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    types_anonymous_type::x();
    types_anonymous_type::z()();
    types_anonymous_type::a().construct();
    return true;
}
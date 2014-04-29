#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "types-anonymous-function.proxy.h"

bool x(const jsrt::call_info &info, double a) 
{
    return (a == 10.0);
}

bool y(const jsrt::call_info &info)
{
    return true;
}

void z(const jsrt::call_info &info)
{
}

jsrt::object a(const jsrt::call_info &info, double a)
{
    return jsrt::object::create();
}

JsErrorCode DefineGlobals()
{
    types_anonymous_function::set_x(jsrt::function_base::create(x));
    types_anonymous_function::set_y(jsrt::function_base::create(y));
    types_anonymous_function::set_z(jsrt::function_base::create(z));
    types_anonymous_function::set_a(jsrt::function_base::create(a));
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    if (!types_anonymous_function::x()(20.0))
    {
        return false;
    }
    if (types_anonymous_function::x()(10.0))
    {
        return false;
    }
    if (types_anonymous_function::y()())
    {
        return false;
    }
    types_anonymous_function::a().construct(10);
    return true;
}
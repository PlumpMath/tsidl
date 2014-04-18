#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-functions.proxy.h"

jsrt::object a(const jsrt::call_info &info)
{
    return jsrt::object();
}

double b(const jsrt::call_info &info, double x)
{
    return 0;
}

double c(const jsrt::call_info &info, double x, jsrt::optional<double> y)
{
    return 0;
}

double d(const jsrt::call_info &info, double x, jsrt::optional<jsrt::array<double>> y)
{
    return 0;
}

void e(const jsrt::call_info &info)
{
}

JsErrorCode DefineGlobals()
{
    ambient_functions::set_a(jsrt::function_base::create(a));
    ambient_functions::set_b(jsrt::function_base::create(b));
    ambient_functions::set_c(jsrt::function_base::create(c));
    ambient_functions::set_d(jsrt::function_base::create(d));
    ambient_functions::set_e(jsrt::function_base::create(e));

    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    return true;
}
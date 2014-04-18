#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-functions.proxy.h"

//jsrt::object a(const jsrt::call_info &info)
//{
//
//}
//
//double b(const jsrt::call_info &info, double x)
//{
//
//}
//
//double c(const jsrt::call_info &info, double x, double y, jsrt::optional<double> z)
//{
//
//}
//
//double d(const jsrt::call_info &info, double x, double y, jsrt::optional<jsrt::array<double>> z)
//{
//
//}
//
//void e(const jsrt::call_info &info)
//{
//
//}

JsErrorCode DefineGlobals()
{
    //ambient_functions::set_a(jsrt::function<jsrt::object>::create(a));

    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    return true;
}
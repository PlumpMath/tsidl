#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "types-array.proxy.h"

JsErrorCode DefineGlobals()
{
    types_array::set_x(jsrt::array<double>::create({ 1, 2, 3, 4 }));
    types_array::set_y(jsrt::array<bool>::create({ true, false, true, false }));
    types_array::set_z(jsrt::array<std::wstring>::create({ L"abc", L"def", L"ghi" }));
    types_array::set_a(jsrt::array<jsrt::value>::create({ jsrt::object::create() }));
    types_array::set_b(jsrt::array<types_array::c_proxy>::create({ (types_array::c_proxy)jsrt::object::create() }));
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    if (types_array::x().length() != 4 || types_array::x()[3] != 8.0)
    {
        return false;
    }
    if (types_array::y().length() != 6 || !types_array::y()[2])
    {
        return false;
    }
    if (types_array::z().length() != 4 || (std::wstring)types_array::z()[3] != L"stu")
    {
        return false;
    }
    if (types_array::a().length() != 3 || types_array::b().length() != 3)
    {
        return false;
    }
    return true;
}
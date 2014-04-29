#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "types-primitive.proxy.h"

JsErrorCode DefineGlobals()
{
    types_primitive::set_x(true);
    types_primitive::set_y(42);
    types_primitive::set_z(L"foo");
    types_primitive::set_a(jsrt::number::create(43));
    types_primitive::set_b(jsrt::string::create(L"bar"));
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    if (types_primitive::x())
    {
        return false;
    }
    if (types_primitive::y() != 44.0)
    {
        return false;
    }
    if (types_primitive::z() != L"baz")
    {
        return false;
    }
    if (((jsrt::number)types_primitive::a()).data() != 45.0)
    {
        return false;
    }
    if (((jsrt::string)types_primitive::b()).data() != L"hello")
    {
        return false;
    }
    return true;
}
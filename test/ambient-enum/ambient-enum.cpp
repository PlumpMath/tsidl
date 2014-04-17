#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-enum.proxy.h"

JsErrorCode DefineGlobals()
{
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    ambient_enum::aValues x;
    ambient_enum::bValues y = ambient_enum::bValues::a;

    return true;
}
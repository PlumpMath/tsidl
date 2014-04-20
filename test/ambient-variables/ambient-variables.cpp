#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-variables.proxy.h"

JsErrorCode DefineGlobals()
{
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    return true;
}
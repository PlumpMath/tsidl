#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-classes.proxy.h"

JsErrorCode DefineGlobals()
{
    return JsNoError;
}

void ProcessResult(JsValueRef result)
{
    ambient_classes::a_proxy a = ambient_classes::a().construct(10);
    if (a.x() != 10.0)
    {
        wprintf(L"FAILED\n");
        return;
    }

    wprintf(L"SUCCEEDED\n");
}
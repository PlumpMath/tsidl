#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-classes.proxy.h"

JsErrorCode DefineGlobals()
{
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    ambient_classes::a_proxy a = ambient_classes::a().construct(10);
    if (a.x() != 10.0)
    {
        return false;
    }
    if (a.y()(10) != 20.0)
    {
        return false;
    }

    ambient_classes::c_proxy c = ambient_classes::c().construct();
    c.set_x(10);

    ambient_classes::b_proxy b = c;
    if (b.x() != 10.0)
    {
        return false;
    }

    ambient_classes::d_proxy d = ambient_classes::d().construct();
    d.set_x(20);

    c = d;
    if (c.x() != 20.0)
    {
        return false;
    }

    d = (ambient_classes::d_proxy)c;
    if (d.x() != 20.0)
    {
        return false;
    }

    return true;
}
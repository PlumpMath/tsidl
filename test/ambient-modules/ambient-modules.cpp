#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-modules.proxy.h"

JsErrorCode DefineGlobals()
{
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    ambient_modules::a_proxy::g_proxy g = ambient_modules::a().g().construct();
    if (ambient_modules::b().c().d().x() != 10.0)
    {
        return false;
    }
    if (ambient_modules::b().c().d().y()() != 20.0)
    {
        return false;
    }
    ambient_modules::b_proxy::c_proxy::d_proxy::z_proxy e = ambient_modules::b().c().d().z().construct();
    ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy::f_proxy f = ambient_modules::b().c().d().e().f().construct();
    ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy::f_proxy f2 = ambient_modules::z();
    return true;
}
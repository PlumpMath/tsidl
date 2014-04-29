#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "types-self-reference.proxy.h"

JsErrorCode DefineGlobals()
{
    types_self_reference::set_b((types_self_reference::a_proxy)jsrt::object::create());
    types_self_reference::set_f((types_self_reference::c_proxy::d_proxy::e_proxy)jsrt::object::create());
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    types_self_reference::b();
    types_self_reference::f();
    return true;
}
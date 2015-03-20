// This file contains automatically generated proxies for JavaScript.

#pragma once

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace ambient_enum
{
    enum aValues
    {
    };
}
template<>
JsErrorCode jsrt::value::to_native<ambient_enum::aValues>(JsValueRef value, ambient_enum::aValues *result);
template<>
JsErrorCode jsrt::value::from_native(ambient_enum::aValues value, JsValueRef *result);
namespace ambient_enum
{
    enum bValues
    {
        a,
        b = 5,
        c,
    };
}
template<>
JsErrorCode jsrt::value::to_native<ambient_enum::bValues>(JsValueRef value, ambient_enum::bValues *result);
template<>
JsErrorCode jsrt::value::from_native(ambient_enum::bValues value, JsValueRef *result);
namespace ambient_enum
{
} // namespace ambient_enum

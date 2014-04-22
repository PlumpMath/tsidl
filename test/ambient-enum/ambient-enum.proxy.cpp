// This file contains automatically generated proxies for JavaScript.

#include "ambient-enum.proxy.h"

namespace ambient_enum
{
}
template<>
JsErrorCode jsrt::value::to_native<ambient_enum::aValues>(JsValueRef value, ambient_enum::aValues *result)
{
    double doubleResult = 0;
    JsErrorCode code = JsNumberToDouble(value, &doubleResult);
    *result = (ambient_enum::aValues)(int) doubleResult;
    return code;
}
template<>
JsErrorCode jsrt::value::from_native(ambient_enum::aValues value, JsValueRef *result)
{
    return JsIntToNumber(value, result);
}
namespace ambient_enum
{
}
template<>
JsErrorCode jsrt::value::to_native<ambient_enum::bValues>(JsValueRef value, ambient_enum::bValues *result)
{
    double doubleResult = 0;
    JsErrorCode code = JsNumberToDouble(value, &doubleResult);
    *result = (ambient_enum::bValues)(int) doubleResult;
    return code;
}
template<>
JsErrorCode jsrt::value::from_native(ambient_enum::bValues value, JsValueRef *result)
{
    return JsIntToNumber(value, result);
}
namespace ambient_enum
{
} // namespace ambient_enum

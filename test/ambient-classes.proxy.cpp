// This file contains automatically generated proxies for JavaScript.

#include "ambient-classes_proxy.h"

namespace ambient-classes {
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    b_proxy::b_proxy() :
        jsrt::object()
    {
    }
    b_proxy::b_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    c_proxy::c_proxy() :
        jsrt::object()
    {
    }
    c_proxy::c_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    c_proxy::c_proxy(b_proxy value) :
        jsrt::object(value.handle())
    {
    }
    operator b_proxy() {
        return b_proxy(*this);
    }
    d_proxy::d_proxy() :
        jsrt::object()
    {
    }
    d_proxy::d_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
} // namespace ambient-classes

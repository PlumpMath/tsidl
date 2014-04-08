// This file contains automatically generated proxies for JavaScript.

#include "interfaces_proxy.h"

namespace interfaces {
    a_proxy::a_proxy() :
        jsrt::object()
    {
    }
    a_proxy::a_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
    b_proxy::b_proxy() :
        a_proxy()
    {
    }
    b_proxy::b_proxy(a_proxy object) :
        a_proxy(object.handle())
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
    d_proxy::d_proxy() :
        jsrt::function<std::wstring, std::wstring>()
    {
    }
    d_proxy::d_proxy(jsrt::function<std::wstring, std::wstring> object) :
        jsrt::function<std::wstring, std::wstring>(object.handle())
    {
    }
    d_proxy::d_proxy(Signature signature) :
        jsrt::function<std::wstring, std::wstring>(signature)
    {
    }
    e_proxy::e_proxy() :
        jsrt::function<std::wstring, std::wstring>()
    {
    }
    e_proxy::e_proxy(jsrt::function<std::wstring, std::wstring> object) :
        jsrt::function<std::wstring, std::wstring>(object.handle())
    {
    }
    e_proxy::e_proxy(Signature signature) :
        jsrt::function<std::wstring, std::wstring>(signature)
    {
    }
    f_proxy::f_proxy() :
        d_proxy()
    {
    }
    f_proxy::f_proxy(d_proxy object) :
        d_proxy(object.handle())
    {
    }
} // namespace interfaces

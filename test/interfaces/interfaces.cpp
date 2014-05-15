#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "interfaces.proxy.h"

class c
{
private:
    double _x;
    jsrt::optional<double> _y;
    std::wstring _abc;

public:
    c() :
        _x(10.0),
        _y(20.0),
        _abc(L"abc")
    {
    }

    double get_x()
    {
        return _x;
    }
    void set_x(double value)
    {
        _x = value;
    }
    jsrt::optional<double> get_y()
    {
        return _y;
    }
    void set_y(jsrt::optional<double> value)
    {
        _y = value;
    }
    std::wstring get_abc()
    {
        return _abc;
    }
    void set_abc(std::wstring value)
    {
        _abc = value;
    }
    double b(double x)
    {
        return x;
    }
    void finalize()
    {
        delete this;
    }
};

double foo(const jsrt::call_info &info, double x)
{
    return x;
}

std::wstring bar(const jsrt::call_info &info, std::wstring x)
{
    return x;
}

jsrt::object baz(const jsrt::call_info &info, std::wstring x)
{
    jsrt::object o = jsrt::object::create();
    o.set_property(jsrt::property_id::create(L"x"), x);
    return o;
}

JsErrorCode DefineGlobals()
{
    interfaces::a_proxy a = interfaces::a_proxy(jsrt::object::create());
    jsrt::context::global().set_property(jsrt::property_id::create(L"a"), a);
    interfaces::b_proxy b = interfaces::b_proxy(jsrt::object::create());
    jsrt::context::global().set_property(jsrt::property_id::create(L"b"), b);
    c *cValue = new c();
    jsrt::context::global().set_property(jsrt::property_id::create(L"c"), interfaces::c_proxy::create(cValue));
    interfaces::d_proxy d = interfaces::d_proxy::create(bar);
    jsrt::context::global().set_property(jsrt::property_id::create(L"d"), d);
    interfaces::e_proxy e = interfaces::e_proxy::create(baz);
    jsrt::context::global().set_property(jsrt::property_id::create(L"e"), e);
    interfaces::f_proxy f = interfaces::f_proxy::create(bar);
    jsrt::context::global().set_property(jsrt::property_id::create(L"f"), f);
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    interfaces::a_proxy a = (interfaces::a_proxy)jsrt::context::global().get_property(jsrt::property_id::create(L"a"));
    interfaces::b_proxy b = (interfaces::b_proxy)a;
    interfaces::c_proxy c = (interfaces::c_proxy)jsrt::context::global().get_property(jsrt::property_id::create(L"c"));
    if (c.x() != 100.0)
    {
        return false;
    }
    if (c.abc() != L"def")
    {
        return false;
    }
    if (c.b()(10) != 20.0)
    {
        return false;
    }
    interfaces::d_proxy d = (interfaces::d_proxy)jsrt::context::global().get_property(jsrt::property_id::create(L"d"));
    if (d(jsrt::context::undefined(), L"abc") != L"abcdef")
    {
        return false;
    }
    interfaces::e_proxy e = (interfaces::e_proxy)jsrt::context::global().get_property(jsrt::property_id::create(L"e"));
    e.construct(L"abc");
    interfaces::f_proxy f = (interfaces::f_proxy)d;
    if (f(jsrt::context::undefined(), L"abc") != L"abcdef")
    {
        return false;
    }

    return true;
}
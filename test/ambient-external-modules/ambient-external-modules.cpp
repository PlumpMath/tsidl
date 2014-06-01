#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-external-modules.proxy.h"

class foo
{
private:
    class C
    {
    private:
        class D
        {
        public:
            void finalize()
            {
                delete this;
            }
            static D *construct()
            {
                return new D();
            }
        };
        jsrt::pinned<jsrt::function<ambient_external_modules::foo_proxy::c_proxy::d_proxy>> d_constructor;
    public:
        C()
        {
            d_constructor = ambient_external_modules::foo_proxy::c_proxy::d_proxy::create<D>();
        }
        void finalize()
        {
            delete this;
        }
        jsrt::function<ambient_external_modules::foo_proxy::c_proxy::d_proxy> get_d()
        {
            return *d_constructor;
        }
        void set_d(jsrt::function<ambient_external_modules::foo_proxy::c_proxy::d_proxy> value)
        {
            d_constructor = value;
        }
    };
    class Z
    {
    public:
        void finalize()
        {
            delete this;
        }
        static Z *construct()
        {
            return new Z();
        }
    };
    jsrt::pinned<jsrt::function<ambient_external_modules::foo_proxy::z_proxy>> z_constructor;
    jsrt::pinned<ambient_external_modules::foo_proxy::c_proxy> c_proxy;
    double _x;
public:
    foo()
    {
        C *c = new C();
        c_proxy = ambient_external_modules::foo_proxy::c_proxy::create(c);
        z_constructor = ambient_external_modules::foo_proxy::z_proxy::create<Z>();
        _x = 10.0;
    }
    void finalize()
    {
        delete this;
    }
    double get_x()
    {
        return _x;
    }
    void set_x(double value)
    {
        _x = value;
    }
    double y()
    {
        return 42.0;
    }
    jsrt::function<ambient_external_modules::foo_proxy::z_proxy> get_z()
    {
        return *z_constructor;
    }
    void set_z(jsrt::function<ambient_external_modules::foo_proxy::z_proxy> value)
    {
        z_constructor = value;
    }
    ambient_external_modules::foo_proxy::c_proxy get_c()
    {
        return *c_proxy;
    }
    void set_c(ambient_external_modules::foo_proxy::c_proxy value)
    {
        c_proxy = value;
    }
};

JsErrorCode DefineGlobals()
{
    foo *foo_instance = new foo();
    ambient_external_modules::foo_proxy foo_proxy = ambient_external_modules::foo_proxy::create(foo_instance);
    return JsNoError;
}

bool ProcessResult(JsValueRef result)
{
    return true;
}
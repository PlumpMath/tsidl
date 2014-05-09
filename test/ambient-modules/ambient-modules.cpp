#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-modules.proxy.h"

class A
{
public:
    void finalize()
    {
        delete this;
    }
    static ambient_modules::a_proxy::g_proxy new_g(jsrt::object this_value)
    {
        return (ambient_modules::a_proxy::g_proxy)this_value;
    }
};

class B
{
private:
    class C 
    {
    private:
        class D
        {
        private:
            class E
            {
            public:
                void finalize()
                {
                    delete this;
                }
                static ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy::f_proxy new_f(ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy::f_proxy this_value)
                {
                    return this_value;
                }
            };

            jsrt::pinned<ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy> e_proxy;
            double _x;
        public:
            D()
            {
                E *e = new E();
                e_proxy = ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy::wrap(e);
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
            static ambient_modules::b_proxy::c_proxy::d_proxy::z_proxy new_z(ambient_modules::b_proxy::c_proxy::d_proxy::z_proxy this_value)
            {
                return this_value;
            }
            ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy get_e()
            {
                return *e_proxy;
            }
            void set_e(ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy value)
            {
                e_proxy = value;
            }
        };

        jsrt::pinned<ambient_modules::b_proxy::c_proxy::d_proxy> d_proxy;
    public:
        C()
        {
            D *d = new D();
            d_proxy = ambient_modules::b_proxy::c_proxy::d_proxy::wrap(d);
        }
        void finalize()
        {
            delete this;
        }
        ambient_modules::b_proxy::c_proxy::d_proxy get_d()
        {
            return *d_proxy;
        }
        void set_d(ambient_modules::b_proxy::c_proxy::d_proxy value)
        {
            d_proxy = value;
        }
    };

    jsrt::pinned<ambient_modules::b_proxy::c_proxy> c_proxy;
public:
    B()
    {
        C *c = new C();
        c_proxy = ambient_modules::b_proxy::c_proxy::wrap(c);
    }
    void finalize()
    {
        delete this;
    }
    ambient_modules::b_proxy::c_proxy get_c()
    {
        return *c_proxy;
    }
    void set_c(ambient_modules::b_proxy::c_proxy value)
    {
        c_proxy = value;
    }
};

JsErrorCode DefineGlobals()
{
    A *a = new A();
    ambient_modules::set_a(ambient_modules::a_proxy::wrap(a));
    B *b = new B();
    ambient_modules::set_b(ambient_modules::b_proxy::wrap(b));
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
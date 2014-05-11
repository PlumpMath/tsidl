#include <sdkddkver.h>
#include <windows.h>
#include <jsrt.h>
#include "ambient-modules.proxy.h"

class A
{
private:
    class G
    {
    public:
        void finalize()
        {
            delete this;
        }
        static G *construct()
        {
            return new G();
        }
    };
    jsrt::pinned<jsrt::function<ambient_modules::a_proxy::g_proxy>> g_constructor;
public:
    A()
    {
        g_constructor = ambient_modules::a_proxy::g_proxy::wrap<G>();
    }
    void finalize()
    {
        delete this;
    }
    jsrt::function<ambient_modules::a_proxy::g_proxy> get_g()
    {
        return *g_constructor;
    }
    void set_g(jsrt::function<ambient_modules::a_proxy::g_proxy> value)
    {
        g_constructor = value;
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
            private:
                class F
                {
                public:
                    void finalize()
                    {
                        delete this;
                    }
                    static F *construct()
                    {
                        return new F();
                    }
                };
                jsrt::pinned<jsrt::function<ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy::f_proxy>> f_constructor;
            public:
                E()
                {
                    f_constructor = ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy::f_proxy::wrap<F>();
                }
                void finalize()
                {
                    delete this;
                }
                jsrt::function<ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> get_f()
                {
                    return *f_constructor;
                }
                void set_f(jsrt::function<ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> value)
                {
                    f_constructor = value;
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
            jsrt::pinned<jsrt::function<ambient_modules::b_proxy::c_proxy::d_proxy::z_proxy>> z_constructor;
            jsrt::pinned<ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy> e_proxy;
            double _x;
        public:
            D()
            {
                E *e = new E();
                e_proxy = ambient_modules::b_proxy::c_proxy::d_proxy::e_proxy::wrap(e);
                z_constructor = ambient_modules::b_proxy::c_proxy::d_proxy::z_proxy::wrap<Z>();
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
            jsrt::function<ambient_modules::b_proxy::c_proxy::d_proxy::z_proxy> get_z()
            {
                return *z_constructor;
            }
            void set_z(jsrt::function<ambient_modules::b_proxy::c_proxy::d_proxy::z_proxy> value)
            {
                z_constructor = value;
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
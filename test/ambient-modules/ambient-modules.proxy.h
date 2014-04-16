// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace ambient_modules
{
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::object object);
        class g_proxy: public jsrt::object
        {
        public:
            g_proxy();
            explicit g_proxy(jsrt::object object);
        };
        a_proxy::g_proxy g();
        void set_g(a_proxy::g_proxy value);
    }
    a_proxy a();
    void set_a(a_proxy value);
    class b_proxy: public jsrt::object
    {
    public:
        b_proxy();
        explicit b_proxy(jsrt::object object);
        class c_proxy: public jsrt::object
        {
        public:
            c_proxy();
            explicit c_proxy(jsrt::object object);
            class d_proxy: public jsrt::object
            {
            public:
                d_proxy();
                explicit d_proxy(jsrt::object object);
                double x();
                void set_x(double value);
                jsrt::function<double> y();
                void set_y(jsrt::function<double> value);
                class z_proxy: public jsrt::object
                {
                public:
                    z_proxy();
                    explicit z_proxy(jsrt::object object);
                };
                b_proxy::c_proxy::d_proxy::z_proxy z();
                void set_z(b_proxy::c_proxy::d_proxy::z_proxy value);
                class a_proxy: public jsrt::object
                {
                public:
                    a_proxy();
                    explicit a_proxy(jsrt::object object);
                };
                enum b
                {
                }
                class c_proxy: public jsrt::object
                {
                public:
                    c_proxy();
                    explicit c_proxy(jsrt::object object);
                    class d_proxy: public jsrt::object
                    {
                    public:
                        d_proxy();
                        explicit d_proxy(jsrt::object object);
                    };
                    b_proxy::c_proxy::d_proxy::c_proxy::d_proxy d();
                    void set_d(b_proxy::c_proxy::d_proxy::c_proxy::d_proxy value);
                }
                b_proxy::c_proxy::d_proxy::c_proxy c();
                void set_c(b_proxy::c_proxy::d_proxy::c_proxy value);
            }
            b_proxy::c_proxy::d_proxy d();
            void set_d(b_proxy::c_proxy::d_proxy value);
        }
        b_proxy::c_proxy c();
        void set_c(b_proxy::c_proxy value);
    }
    b_proxy b();
    void set_b(b_proxy value);
    d_proxy z();
    void set_z(d_proxy value);
} // namespace ambient_modules

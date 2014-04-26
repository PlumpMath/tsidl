// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt-wrappers.h"

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
        jsrt::bound_function<a_proxy, a_proxy::g_proxy> g();
    };
    a_proxy a();
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
                jsrt::bound_function<b_proxy::c_proxy::d_proxy, double> y();
                void set_y(jsrt::function<double> value);
                class z_proxy: public jsrt::object
                {
                public:
                    z_proxy();
                    explicit z_proxy(jsrt::object object);
                };
                jsrt::bound_function<b_proxy::c_proxy::d_proxy, b_proxy::c_proxy::d_proxy::z_proxy> z();
                class a_proxy: public jsrt::object
                {
                public:
                    a_proxy();
                    explicit a_proxy(jsrt::object object);
                };
                enum b
                {
                };
                class e_proxy: public jsrt::object
                {
                public:
                    e_proxy();
                    explicit e_proxy(jsrt::object object);
                    class f_proxy: public jsrt::object
                    {
                    public:
                        f_proxy();
                        explicit f_proxy(jsrt::object object);
                    };
                    jsrt::bound_function<b_proxy::c_proxy::d_proxy::e_proxy, b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> f();
                };
                b_proxy::c_proxy::d_proxy::e_proxy e();
            };
            b_proxy::c_proxy::d_proxy d();
        };
        b_proxy::c_proxy c();
    };
    b_proxy b();
    b_proxy::c_proxy::d_proxy::e_proxy::f_proxy z();
    void set_z(b_proxy::c_proxy::d_proxy::e_proxy::f_proxy value);
} // namespace ambient_modules

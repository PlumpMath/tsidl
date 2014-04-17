// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
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
        jsrt::function<a_proxy::g_proxy> g();
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
                jsrt::function<double> y();
                void set_y(jsrt::function<double> value);
                class z_proxy: public jsrt::object
                {
                public:
                    z_proxy();
                    explicit z_proxy(jsrt::object object);
                };
                jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy> z();
                class a_proxy: public jsrt::object
                {
                public:
                    a_proxy();
                    explicit a_proxy(jsrt::object object);
                };
                enum b
                {
                };
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
                    jsrt::function<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy> d();
                };
                b_proxy::c_proxy::d_proxy::c_proxy c();
            };
            b_proxy::c_proxy::d_proxy d();
        };
        b_proxy::c_proxy c();
    };
    b_proxy b();
    d_proxy z();
    void set_z(d_proxy value);
} // namespace ambient_modules

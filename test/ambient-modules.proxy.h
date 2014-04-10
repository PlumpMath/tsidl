// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace ambient-modules
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
        jsrt::property_descriptor<a_proxy::g_proxy> g_descriptor();
        bool set_g_descriptor(jsrt::property_descriptor<a_proxy::g_proxy> descriptor);
    }
    a_proxy a();
    void set_a(a_proxy value);
    jsrt::property_descriptor<a_proxy> a_descriptor();
    bool set_a_descriptor(jsrt::property_descriptor<a_proxy> descriptor);
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
                jsrt::property_descriptor<double> x_descriptor();
                bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
                jsrt::function<double> y();
                void set_y(jsrt::function<double> value);
                jsrt::property_descriptor<jsrt::function<double>> y_descriptor();
                bool set_y_descriptor(jsrt::property_descriptor<jsrt::function<double>> descriptor);
                class z_proxy: public jsrt::object
                {
                public:
                    z_proxy();
                    explicit z_proxy(jsrt::object object);
                };
                b_proxy::c_proxy::d_proxy::z_proxy z();
                void set_z(b_proxy::c_proxy::d_proxy::z_proxy value);
                jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::z_proxy> z_descriptor();
                bool set_z_descriptor(jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::z_proxy> descriptor);
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
                    jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy> d_descriptor();
                    bool set_d_descriptor(jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::c_proxy::d_proxy> descriptor);
                }
                b_proxy::c_proxy::d_proxy::c_proxy c();
                void set_c(b_proxy::c_proxy::d_proxy::c_proxy value);
                jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::c_proxy> c_descriptor();
                bool set_c_descriptor(jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::c_proxy> descriptor);
            }
            b_proxy::c_proxy::d_proxy d();
            void set_d(b_proxy::c_proxy::d_proxy value);
            jsrt::property_descriptor<b_proxy::c_proxy::d_proxy> d_descriptor();
            bool set_d_descriptor(jsrt::property_descriptor<b_proxy::c_proxy::d_proxy> descriptor);
        }
        b_proxy::c_proxy c();
        void set_c(b_proxy::c_proxy value);
        jsrt::property_descriptor<b_proxy::c_proxy> c_descriptor();
        bool set_c_descriptor(jsrt::property_descriptor<b_proxy::c_proxy> descriptor);
    }
    b_proxy b();
    void set_b(b_proxy value);
    jsrt::property_descriptor<b_proxy> b_descriptor();
    bool set_b_descriptor(jsrt::property_descriptor<b_proxy> descriptor);
    d_proxy z();
    void set_z(d_proxy value);
    jsrt::property_descriptor<d_proxy> z_descriptor();
    bool set_z_descriptor(jsrt::property_descriptor<d_proxy> descriptor);
} // namespace ambient-modules

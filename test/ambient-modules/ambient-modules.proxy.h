// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace ambient_modules
{
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::value value);
        class g_proxy: public jsrt::object
        {
        public:
            g_proxy();
            explicit g_proxy(jsrt::value value);
        };
        jsrt::bound_function<a_proxy, a_proxy::g_proxy> g();
    };
    a_proxy a();
    class b_proxy: public jsrt::object
    {
    public:
        b_proxy();
        explicit b_proxy(jsrt::value value);
        class c_proxy: public jsrt::object
        {
        public:
            c_proxy();
            explicit c_proxy(jsrt::value value);
            class d_proxy: public jsrt::object
            {
            public:
                d_proxy();
                explicit d_proxy(jsrt::value value);
                double x();
                void set_x(double value);
                jsrt::bound_function<b_proxy::c_proxy::d_proxy, double> y();
                void set_y(jsrt::function<double> value);
                class z_proxy: public jsrt::object
                {
                public:
                    z_proxy();
                    explicit z_proxy(jsrt::value value);
                };
                jsrt::bound_function<b_proxy::c_proxy::d_proxy, b_proxy::c_proxy::d_proxy::z_proxy> z();
                class a_proxy: public jsrt::object
                {
                public:
                    a_proxy();
                    explicit a_proxy(jsrt::value value);
                private:
                    template<typename T>
                    class a_proxy_wrapper
                    {
                    public:
                        static void CALLBACK wrap_finalize(void *data)
                        {
                            T * this_value = (T *) data;
                            this_value->finalize();
                        }
                    };
                public:
                    template<typename T>
                    static a_proxy wrap(T *value)
                    {
                        jsrt::object wrapper = jsrt::external_object::create(value, a_proxy_wrapper<T>::wrap_finalize);
                        return (a_proxy) wrapper;
                    }
                };
                enum b
                {
                };
                class e_proxy: public jsrt::object
                {
                public:
                    e_proxy();
                    explicit e_proxy(jsrt::value value);
                    class f_proxy: public jsrt::object
                    {
                    public:
                        f_proxy();
                        explicit f_proxy(jsrt::value value);
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

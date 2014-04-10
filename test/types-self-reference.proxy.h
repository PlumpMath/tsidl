// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace types-self-reference
{
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::object object);
    };
    a_proxy a();
    void set_a(a_proxy value);
    jsrt::property_descriptor<a_proxy> a_descriptor();
    bool set_a_descriptor(jsrt::property_descriptor<a_proxy> descriptor);
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
            class e_proxy: public jsrt::object
            {
            public:
                e_proxy();
                explicit e_proxy(jsrt::object object);
            };
            c_proxy::d_proxy::e_proxy e();
            void set_e(c_proxy::d_proxy::e_proxy value);
            jsrt::property_descriptor<c_proxy::d_proxy::e_proxy> e_descriptor();
            bool set_e_descriptor(jsrt::property_descriptor<c_proxy::d_proxy::e_proxy> descriptor);
        }
        c_proxy::d_proxy d();
        void set_d(c_proxy::d_proxy value);
        jsrt::property_descriptor<c_proxy::d_proxy> d_descriptor();
        bool set_d_descriptor(jsrt::property_descriptor<c_proxy::d_proxy> descriptor);
    }
    c_proxy c();
    void set_c(c_proxy value);
    jsrt::property_descriptor<c_proxy> c_descriptor();
    bool set_c_descriptor(jsrt::property_descriptor<c_proxy> descriptor);
    a_proxy b();
    void set_b(a_proxy value);
    jsrt::property_descriptor<a_proxy> b_descriptor();
    bool set_b_descriptor(jsrt::property_descriptor<a_proxy> descriptor);
    e_proxy f();
    void set_f(e_proxy value);
    jsrt::property_descriptor<e_proxy> f_descriptor();
    bool set_f_descriptor(jsrt::property_descriptor<e_proxy> descriptor);
} // namespace types-self-reference

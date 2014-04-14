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
        }
        c_proxy::d_proxy d();
        void set_d(c_proxy::d_proxy value);
    }
    c_proxy c();
    void set_c(c_proxy value);
    a_proxy b();
    void set_b(a_proxy value);
    e_proxy f();
    void set_f(e_proxy value);
} // namespace types-self-reference

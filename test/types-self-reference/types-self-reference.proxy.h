// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace types_self_reference
{
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::value value);
    };
    jsrt::bound_function<jsrt::object, a_proxy> a();
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
            class e_proxy: public jsrt::object
            {
            public:
                e_proxy();
                explicit e_proxy(jsrt::value value);
            };
            jsrt::bound_function<c_proxy::d_proxy, c_proxy::d_proxy::e_proxy> e();
        };
        c_proxy::d_proxy d();
    };
    c_proxy c();
    a_proxy b();
    void set_b(a_proxy value);
    c_proxy::d_proxy::e_proxy f();
    void set_f(c_proxy::d_proxy::e_proxy value);
} // namespace types_self_reference

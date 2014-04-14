// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace types-self-reference
{
    class a: public jsrt::object
    {
    public:
        a();
        explicit a(jsrt::object object);
    };
    a a();
    void set_a(a value);
    class c: public jsrt::object
    {
    public:
        c();
        explicit c(jsrt::object object);
        class d: public jsrt::object
        {
        public:
            d();
            explicit d(jsrt::object object);
            class e: public jsrt::object
            {
            public:
                e();
                explicit e(jsrt::object object);
            };
            c::d::e e();
            void set_e(c::d::e value);
        }
        c::d d();
        void set_d(c::d value);
    }
    c c();
    void set_c(c value);
    a b();
    void set_b(a value);
    e f();
    void set_f(e value);
} // namespace types-self-reference

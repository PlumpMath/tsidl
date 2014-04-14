// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace ambient-modules
{
    class a: public jsrt::object
    {
    public:
        a();
        explicit a(jsrt::object object);
        class g: public jsrt::object
        {
        public:
            g();
            explicit g(jsrt::object object);
        };
        a::g g();
        void set_g(a::g value);
    }
    a a();
    void set_a(a value);
    class b: public jsrt::object
    {
    public:
        b();
        explicit b(jsrt::object object);
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
                double x();
                void set_x(double value);
                jsrt::function<double> y();
                void set_y(jsrt::function<double> value);
                class z: public jsrt::object
                {
                public:
                    z();
                    explicit z(jsrt::object object);
                };
                b::c::d::z z();
                void set_z(b::c::d::z value);
                class a: public jsrt::object
                {
                public:
                    a();
                    explicit a(jsrt::object object);
                };
                enum b
                {
                }
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
                    };
                    b::c::d::c::d d();
                    void set_d(b::c::d::c::d value);
                }
                b::c::d::c c();
                void set_c(b::c::d::c value);
            }
            b::c::d d();
            void set_d(b::c::d value);
        }
        b::c c();
        void set_c(b::c value);
    }
    b b();
    void set_b(b value);
    d z();
    void set_z(d value);
} // namespace ambient-modules

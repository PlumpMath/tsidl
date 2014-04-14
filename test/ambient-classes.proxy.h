// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace ambient-classes
{
    class a: public jsrt::object
    {
    public:
        a();
        explicit a(jsrt::object object);
        double x();
        void set_x(double value);
        jsrt::function<double, double> y();
        void set_y(jsrt::function<double, double> value);
    };
    a a();
    void set_a(a value);
    class b: public jsrt::object
    {
    public:
        b();
        explicit b(jsrt::object object);
        double x();
        void set_x(double value);
    };
    class c: public jsrt::object
    {
    public:
        c();
        explicit c(jsrt::object object);
        explicit c(b value);
        operator b();
        double x();
        void set_x(double value);
    };
    c c();
    void set_c(c value);
    class d: public c
    {
    public:
        d();
        explicit d(c object);
    };
    d d();
    void set_d(d value);
} // namespace ambient-classes

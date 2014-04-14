// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace ambient-classes
{
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::object object);
        double x();
        void set_x(double value);
        jsrt::function<double, double> y();
        void set_y(jsrt::function<double, double> value);
    };
    a_proxy a();
    void set_a(a_proxy value);
    class b_proxy: public jsrt::object
    {
    public:
        b_proxy();
        explicit b_proxy(jsrt::object object);
        double x();
        void set_x(double value);
    };
    class c_proxy: public jsrt::object
    {
    public:
        c_proxy();
        explicit c_proxy(jsrt::object object);
        explicit c_proxy(b_proxy value);
        operator b_proxy();
        double x();
        void set_x(double value);
    };
    c_proxy c();
    void set_c(c_proxy value);
    class d_proxy: public c_proxy
    {
    public:
        d_proxy();
        explicit d_proxy(c_proxy object);
    };
    d_proxy d();
    void set_d(d_proxy value);
} // namespace ambient-classes

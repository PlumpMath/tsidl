// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt.wrappers.h"

namespace ambient_classes
{
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::object object);
        double x();
        void set_x(double value);
        jsrt::bound_function<a_proxy, double, double> y();
        void set_y(jsrt::function<double, double> value);
    };
    jsrt::function<a_proxy, double> a();
    void set_a(jsrt::function<a_proxy, double> value);
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
    jsrt::function<c_proxy> c();
    void set_c(jsrt::function<c_proxy> value);
    class d_proxy: public c_proxy
    {
    public:
        d_proxy();
        explicit d_proxy(c_proxy object);
    };
    jsrt::function<d_proxy> d();
    void set_d(jsrt::function<d_proxy> value);
} // namespace ambient_classes

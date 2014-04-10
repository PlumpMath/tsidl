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
        jsrt::property_descriptor<double> x_descriptor();
        bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
        jsrt::function<double, double> y();
        void set_y(jsrt::function<double, double> value);
        jsrt::property_descriptor<jsrt::function<double, double>> y_descriptor();
        bool set_y_descriptor(jsrt::property_descriptor<jsrt::function<double, double>> descriptor);
    };
    a_proxy a();
    void set_a(a_proxy value);
    jsrt::property_descriptor<a_proxy> a_descriptor();
    bool set_a_descriptor(jsrt::property_descriptor<a_proxy> descriptor);
    class b_proxy: public jsrt::object
    {
    public:
        b_proxy();
        explicit b_proxy(jsrt::object object);
        double x();
        void set_x(double value);
        jsrt::property_descriptor<double> x_descriptor();
        bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
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
        jsrt::property_descriptor<double> x_descriptor();
        bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
    };
    c_proxy c();
    void set_c(c_proxy value);
    jsrt::property_descriptor<c_proxy> c_descriptor();
    bool set_c_descriptor(jsrt::property_descriptor<c_proxy> descriptor);
    class d_proxy: public c_proxy
    {
    public:
        d_proxy();
        explicit d_proxy(c_proxy object);
    };
    d_proxy d();
    void set_d(d_proxy value);
    jsrt::property_descriptor<d_proxy> d_descriptor();
    bool set_d_descriptor(jsrt::property_descriptor<d_proxy> descriptor);
} // namespace ambient-classes

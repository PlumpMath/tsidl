// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace interfaces
{
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::object object);
    };
    class b_proxy: public a_proxy
    {
    public:
        b_proxy();
        explicit b_proxy(a_proxy object);
    };
    class c_proxy: public jsrt::object
    {
    public:
        c_proxy();
        explicit c_proxy(jsrt::object object);
        double x();
        void set_x(double value);
        jsrt::property_descriptor<double> x_descriptor();
        bool set_x_descriptor(jsrt::property_descriptor<double> descriptor);
        double y();
        void set_y(double value);
        jsrt::property_descriptor<double> y_descriptor();
        bool set_y_descriptor(jsrt::property_descriptor<double> descriptor);
        std::wstring abc();
        void set_abc(std::wstring value);
        jsrt::property_descriptor<std::wstring> abc_descriptor();
        bool set_abc_descriptor(jsrt::property_descriptor<std::wstring> descriptor);
        double 0();
        void set_0(double value);
        jsrt::property_descriptor<double> 0_descriptor();
        bool set_0_descriptor(jsrt::property_descriptor<double> descriptor);
        jsrt::function<double, double> b();
        void set_b(jsrt::function<double, double> value);
        jsrt::property_descriptor<jsrt::function<double, double>> b_descriptor();
        bool set_b_descriptor(jsrt::property_descriptor<jsrt::function<double, double>> descriptor);
    };
    class d_proxy: public jsrt::function<std::wstring, std::wstring>
    {
    public:
        d_proxy();
        explicit d_proxy(jsrt::function<std::wstring, std::wstring> object);
        d_proxy(Signature signature);
    };
    class e_proxy: public jsrt::function<std::wstring, std::wstring>
    {
    public:
        e_proxy();
        explicit e_proxy(jsrt::function<std::wstring, std::wstring> object);
        e_proxy(Signature signature);
    };
    class f_proxy: public d_proxy
    {
    public:
        f_proxy();
        explicit f_proxy(d_proxy object);
    };
} // namespace interfaces

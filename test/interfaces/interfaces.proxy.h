// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
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
        double y();
        void set_y(double value);
        std::wstring abc();
        void set_abc(std::wstring value);
        double 0();
        void set_0(double value);
        jsrt::function<double, double> b();
        void set_b(jsrt::function<double, double> value);
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

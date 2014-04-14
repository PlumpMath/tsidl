// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace interfaces
{
    class a: public jsrt::object
    {
    public:
        a();
        explicit a(jsrt::object object);
    };
    class b: public a
    {
    public:
        b();
        explicit b(a object);
    };
    class c: public jsrt::object
    {
    public:
        c();
        explicit c(jsrt::object object);
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
    class d: public jsrt::function<std::wstring, std::wstring>
    {
    public:
        d();
        explicit d(jsrt::function<std::wstring, std::wstring> object);
        d(Signature signature);
    };
    class e: public jsrt::function<std::wstring, std::wstring>
    {
    public:
        e();
        explicit e(jsrt::function<std::wstring, std::wstring> object);
        e(Signature signature);
    };
    class f: public d
    {
    public:
        f();
        explicit f(d object);
    };
} // namespace interfaces

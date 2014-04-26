// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace types_array
{
    jsrt::array<double> x();
    void set_x(jsrt::array<double> value);
    jsrt::array<bool> y();
    void set_y(jsrt::array<bool> value);
    jsrt::array<std::wstring> z();
    void set_z(jsrt::array<std::wstring> value);
    jsrt::array<jsrt::value> a();
    void set_a(jsrt::array<jsrt::value> value);
    jsrt::array<c_proxy> b();
    void set_b(jsrt::array<c_proxy> value);
    class c_proxy: public jsrt::object
    {
    public:
        c_proxy();
        explicit c_proxy(jsrt::object object);
    };
    jsrt::bound_function<jsrt::object, c_proxy> c();
} // namespace types_array

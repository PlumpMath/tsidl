// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace top_level
{
    double x();
    void set_x(double value);
    std::wstring d();
    void set_d(std::wstring value);
    jsrt::function<void, std::wstring> y();
    void set_y(jsrt::function<void, std::wstring> value);
    class z_proxy: public jsrt::object
    {
    public:
        z_proxy();
        explicit z_proxy(jsrt::object object);
    };
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::object object);
    };
    jsrt::function<a_proxy> a();
    void set_a(jsrt::function<a_proxy> value);
    class b_proxy: public jsrt::object
    {
    public:
        b_proxy();
        explicit b_proxy(jsrt::object object);
    }
    b_proxy b();
    void set_b(b_proxy value);
    enum c
    {
    }
} // namespace top_level

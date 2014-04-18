// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt.wrappers.h"

namespace top_level
{
    double x();
    void set_x(double value);
    std::wstring d();
    void set_d(std::wstring value);
    jsrt::bound_function<jsrt::object, void, std::wstring> y();
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
    jsrt::bound_function<jsrt::object, a_proxy> a();
    class b_proxy: public jsrt::object
    {
    public:
        b_proxy();
        explicit b_proxy(jsrt::object object);
    };
    b_proxy b();
    enum c
    {
    };
} // namespace top_level

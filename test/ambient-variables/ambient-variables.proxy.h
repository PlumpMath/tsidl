// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt.wrappers.h"

namespace ambient_variables
{
    class x_proxy: public jsrt::object
    {
    public:
        x_proxy();
        explicit x_proxy(jsrt::object object);
    };
    jsrt::bound_function<jsrt::object, x_proxy> x();
    enum y
    {
    };
    class z_proxy: public jsrt::object
    {
    public:
        z_proxy();
        explicit z_proxy(jsrt::object object);
    };
    bool a();
    void set_a(bool value);
    double b();
    void set_b(double value);
    std::wstring c();
    void set_c(std::wstring value);
    jsrt::object d();
    void set_d(jsrt::object value);
    jsrt::object e();
    void set_e(jsrt::object value);
    x_proxy f();
    void set_f(x_proxy value);
    y g();
    void set_g(y value);
    jsrt::bound_function<jsrt::object, double, double> h();
    void set_h(jsrt::function<double, double> value);
    jsrt::bound_function<jsrt::object, double, double> i();
    void set_i(jsrt::function<double, double> value);
    z_proxy j();
    void set_j(z_proxy value);
} // namespace ambient_variables

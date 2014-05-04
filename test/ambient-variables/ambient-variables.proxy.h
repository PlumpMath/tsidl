// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace ambient_variables
{
    class x_proxy: public jsrt::object
    {
    public:
        x_proxy();
        explicit x_proxy(jsrt::value value);
    };
    jsrt::bound_function<jsrt::object, x_proxy> x();
    enum y
    {
        k,
        l,
        m,
    };
    class z_proxy: public jsrt::object
    {
    public:
        z_proxy();
        explicit z_proxy(jsrt::value value);
    private:
        template<typename T>
        class z_proxy_wrapper
        {
        public:
            static void CALLBACK wrap_finalize(void *data)
            {
                T * this_value = (T *) data;
                this_value->finalize();
            }
        };
    public:
        template<typename T>
        static z_proxy wrap(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, z_proxy_wrapper<T>::wrap_finalize);
            return (z_proxy) wrapper;
        }
    };
    bool a();
    void set_a(bool value);
    double b();
    void set_b(double value);
    std::wstring c();
    void set_c(std::wstring value);
    jsrt::value d();
    void set_d(jsrt::value value);
    jsrt::value e();
    void set_e(jsrt::value value);
    x_proxy f();
    void set_f(x_proxy value);
    y g();
    void set_g(y value);
    jsrt::bound_function<jsrt::object, double, double> h();
    void set_h(jsrt::function<double, double> value);
    jsrt::bound_function<jsrt::object, jsrt::object, double> i();
    void set_i(jsrt::function<jsrt::object, double> value);
    z_proxy j();
    void set_j(z_proxy value);
} // namespace ambient_variables

// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

namespace types-array
{
    jsrt::array<double> x();
    void set_x(jsrt::array<double> value);
    jsrt::property_descriptor<jsrt::array<double>> x_descriptor();
    bool set_x_descriptor(jsrt::property_descriptor<jsrt::array<double>> descriptor);
    jsrt::array<bool> y();
    void set_y(jsrt::array<bool> value);
    jsrt::property_descriptor<jsrt::array<bool>> y_descriptor();
    bool set_y_descriptor(jsrt::property_descriptor<jsrt::array<bool>> descriptor);
    jsrt::array<std::wstring> z();
    void set_z(jsrt::array<std::wstring> value);
    jsrt::property_descriptor<jsrt::array<std::wstring>> z_descriptor();
    bool set_z_descriptor(jsrt::property_descriptor<jsrt::array<std::wstring>> descriptor);
    jsrt::array<jsrt::object> a();
    void set_a(jsrt::array<jsrt::object> value);
    jsrt::property_descriptor<jsrt::array<jsrt::object>> a_descriptor();
    bool set_a_descriptor(jsrt::property_descriptor<jsrt::array<jsrt::object>> descriptor);
    jsrt::array<c_proxy> b();
    void set_b(jsrt::array<c_proxy> value);
    jsrt::property_descriptor<jsrt::array<c_proxy>> b_descriptor();
    bool set_b_descriptor(jsrt::property_descriptor<jsrt::array<c_proxy>> descriptor);
    class c_proxy: public jsrt::object
    {
    public:
        c_proxy();
        explicit c_proxy(jsrt::object object);
    };
    c_proxy c();
    void set_c(c_proxy value);
    jsrt::property_descriptor<c_proxy> c_descriptor();
    bool set_c_descriptor(jsrt::property_descriptor<c_proxy> descriptor);
} // namespace types-array

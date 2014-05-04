// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace ambient_classes
{
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::value value);
        double x();
        void set_x(double value);
        jsrt::bound_function<a_proxy, double, double> y();
        void set_y(jsrt::function<double, double> value);
    };
    jsrt::bound_function<jsrt::object, a_proxy, double> a();
    class b_proxy: public jsrt::object
    {
    public:
        b_proxy();
        explicit b_proxy(jsrt::value value);
    private:
        template<typename T>
        class b_proxy_wrapper
        {
        public:
            static void CALLBACK wrap_finalize(void *data)
            {
                T * this_value = (T *) data;
                this_value->finalize();
            }
            static double wrap_get_x(const jsrt::call_info &info)
            {
                T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                return this_value->get_x();
            }
            static void wrap_set_x(const jsrt::call_info &info, double value)
            {
                T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                this_value->set_x(value);
            }
        };
    public:
        template<typename T>
        static b_proxy wrap(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, b_proxy_wrapper<T>::wrap_finalize);
            wrapper.define_property(
                jsrt::property_id::create(L"x"),
                jsrt::property_descriptor<double>::create(
                    jsrt::function_base::create(b_proxy_wrapper<T>::wrap_get_x),
                    jsrt::function_base::create(b_proxy_wrapper<T>::wrap_set_x)));
            return (b_proxy) wrapper;
        }
        double x();
        void set_x(double value);
    };
    class c_proxy: public jsrt::object
    {
    public:
        c_proxy();
        explicit c_proxy(jsrt::value value);
        explicit c_proxy(b_proxy value);
        operator b_proxy();
        double x();
        void set_x(double value);
    };
    jsrt::bound_function<jsrt::object, c_proxy> c();
    class d_proxy: public c_proxy
    {
    public:
        d_proxy();
        explicit d_proxy(jsrt::value value);
    };
    jsrt::bound_function<jsrt::object, d_proxy> d();
} // namespace ambient_classes

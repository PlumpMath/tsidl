// This file contains automatically generated proxies for JavaScript.

#pragma once

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace ambient_variables
{
    class x_proxy: public jsrt::object
    {
    public:
        x_proxy();
        explicit x_proxy(jsrt::value value);
    private:
        template<typename T>
        class x_proxy_wrapper
        {
        public:
            static void CALLBACK wrap_finalize(void *data)
            {
                try
                {
                    T * this_value = (T *) data;
                    this_value->finalize();
                }
                catch (...)
                {
                    // If finalize fails, since we're in the GC there's nothing that can be done...
                }
            }
            static x_proxy wrap_construct(const jsrt::call_info &info)
            {
                if (!info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as a regular function"));
                    return x_proxy();
                }
                try
                {
                    T *instance = T::construct();
                    jsrt::object wrapper = jsrt::external_object::create(instance, x_proxy_wrapper<T>::wrap_finalize);
                    wrapper.set_prototype(((jsrt::object)info.this_value()).prototype());
                    return (x_proxy) wrapper;
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return x_proxy();
                }
            }
        };
    public:
        template<typename T>
        static jsrt::function<x_proxy> create()
        {
            jsrt::object wrapper = jsrt::object::create();
            jsrt::function<x_proxy> constructor = jsrt::function_base::create(x_proxy_wrapper<T>::wrap_construct);
            constructor.set_constructor_prototype(wrapper);
            return constructor;
        }
    };
    jsrt::bound_function<jsrt::object, x_proxy> x();
    void set_x(jsrt::function<x_proxy> value);
    enum y
    {
        k,
        l,
        m,
    };
}
template<>
JsErrorCode jsrt::value::to_native<ambient_variables::y>(JsValueRef value, ambient_variables::y *result);
template<>
JsErrorCode jsrt::value::from_native(ambient_variables::y value, JsValueRef *result);
namespace ambient_variables
{
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
                try
                {
                    T * this_value = (T *) data;
                    this_value->finalize();
                }
                catch (...)
                {
                    // If finalize fails, since we're in the GC there's nothing that can be done...
                }
            }
        };
    public:
        template<typename T>
        static z_proxy create(T *value)
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

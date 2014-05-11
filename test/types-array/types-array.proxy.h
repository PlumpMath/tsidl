// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace types_array
{
    class c_proxy: public jsrt::object
    {
    public:
        c_proxy();
        explicit c_proxy(jsrt::value value);
    private:
        template<typename T>
        class c_proxy_wrapper
        {
        public:
            static void CALLBACK wrap_finalize(void *data)
            {
                T * this_value = (T *) data;
                this_value->finalize();
            }
            static c_proxy wrap_construct_self(const jsrt::call_info &info)
            {
                if (!info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as a regular function"));
                    return c_proxy();
                }
                try
                {
                    T *instance = T::construct();
                    jsrt::object wrapper = jsrt::external_object::create(instance, c_proxy_wrapper<T>::wrap_finalize);
                    wrapper.set_prototype(((jsrt::object)info.this_value()).prototype());
                    return (c_proxy) wrapper;
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return c_proxy();
                }
            }
        };
    public:
        template<typename T>
        static jsrt::function<c_proxy> wrap()
        {
            jsrt::object wrapper = jsrt::object::create();
            jsrt::function<c_proxy> constructor = jsrt::function_base::create(c_proxy_wrapper<T>::wrap_construct_self);
            constructor.set_property(
                jsrt::property_id::create(L"prototype"),
                wrapper);
            return constructor;
        }
    };
    jsrt::bound_function<jsrt::object, c_proxy> c();
    void set_c(jsrt::function<c_proxy> value);
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
} // namespace types_array

// This file contains automatically generated proxies for JavaScript.

#pragma once

#include <jsrt.h>
#include "jsrt-wrappers.h"

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
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::value value);
    private:
        template<typename T>
        class a_proxy_wrapper
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
            static a_proxy wrap_construct(const jsrt::call_info &info)
            {
                if (!info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as a regular function"));
                    return a_proxy();
                }
                try
                {
                    T *instance = T::construct();
                    jsrt::object wrapper = jsrt::external_object::create(instance, a_proxy_wrapper<T>::wrap_finalize);
                    wrapper.set_prototype(((jsrt::object)info.this_value()).prototype());
                    return (a_proxy) wrapper;
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return a_proxy();
                }
            }
        };
    public:
        template<typename T>
        static jsrt::function<a_proxy> create()
        {
            jsrt::object wrapper = jsrt::object::create();
            jsrt::function<a_proxy> constructor = jsrt::function_base::create(a_proxy_wrapper<T>::wrap_construct);
            constructor.set_constructor_prototype(wrapper);
            return constructor;
        }
    };
    jsrt::bound_function<jsrt::object, a_proxy> a();
    void set_a(jsrt::function<a_proxy> value);
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
        static b_proxy create(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, b_proxy_wrapper<T>::wrap_finalize);
            return (b_proxy) wrapper;
        }
    };
    b_proxy b();
    void set_b(b_proxy value);
    enum c
    {
    };
}
template<>
JsErrorCode jsrt::value::to_native<top_level::c>(JsValueRef value, top_level::c *result);
template<>
JsErrorCode jsrt::value::from_native(top_level::c value, JsValueRef *result);
namespace top_level
{
} // namespace top_level

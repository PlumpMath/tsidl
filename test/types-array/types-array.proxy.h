// This file contains automatically generated proxies for JavaScript.

#pragma once

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
            static c_proxy wrap_construct(const jsrt::call_info &info)
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
        static jsrt::function<c_proxy> create()
        {
            jsrt::object wrapper = jsrt::object::create();
            jsrt::function<c_proxy> constructor = jsrt::function_base::create(c_proxy_wrapper<T>::wrap_construct);
            constructor.set_constructor_prototype(wrapper);
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
    class d_proxy: public jsrt::object
    {
    public:
        d_proxy();
        explicit d_proxy(jsrt::value value);
        jsrt::array<double> x();
        void set_x(jsrt::array<double> value);
    private:
        template<typename T>
        class d_proxy_wrapper
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
            static jsrt::array<double> wrap_get_x(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_x();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return jsrt::array<double>();
                }
            }
            static void wrap_set_x(const jsrt::call_info &info, jsrt::array<double> value)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    this_value->set_x(value);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                }
            }
            static d_proxy wrap_construct(const jsrt::call_info &info)
            {
                if (!info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as a regular function"));
                    return d_proxy();
                }
                try
                {
                    T *instance = T::construct();
                    jsrt::object wrapper = jsrt::external_object::create(instance, d_proxy_wrapper<T>::wrap_finalize);
                    wrapper.define_property(
                        jsrt::property_id::create(L"x"),
                        jsrt::property_descriptor<jsrt::array<double>>::create(
                            jsrt::function_base::create(d_proxy_wrapper<T>::wrap_get_x),
                            jsrt::function_base::create(d_proxy_wrapper<T>::wrap_set_x)));
                    wrapper.set_prototype(((jsrt::object)info.this_value()).prototype());
                    return (d_proxy) wrapper;
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return d_proxy();
                }
            }
        };
    public:
        template<typename T>
        static jsrt::function<d_proxy> create()
        {
            jsrt::object wrapper = jsrt::object::create();
            jsrt::function<d_proxy> constructor = jsrt::function_base::create(d_proxy_wrapper<T>::wrap_construct);
            constructor.set_constructor_prototype(wrapper);
            return constructor;
        }
    };
    jsrt::bound_function<jsrt::object, d_proxy> d();
    void set_d(jsrt::function<d_proxy> value);
    class e_proxy: public jsrt::object
    {
    public:
        e_proxy();
        explicit e_proxy(jsrt::value value);
        jsrt::array<double> x();
        void set_x(jsrt::array<double> value);
    private:
        template<typename T>
        class e_proxy_wrapper
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
            static jsrt::array<double> wrap_get_x(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_x();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return jsrt::array<double>();
                }
            }
            static void wrap_set_x(const jsrt::call_info &info, jsrt::array<double> value)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    this_value->set_x(value);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                }
            }
        };
    public:
        template<typename T>
        static e_proxy create(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, e_proxy_wrapper<T>::wrap_finalize);
            wrapper.define_property(
                jsrt::property_id::create(L"x"),
                jsrt::property_descriptor<jsrt::array<double>>::create(
                    jsrt::function_base::create(e_proxy_wrapper<T>::wrap_get_x),
                    jsrt::function_base::create(e_proxy_wrapper<T>::wrap_set_x)));
            return (e_proxy) wrapper;
        }
    };
    class f_proxy: public jsrt::object
    {
    public:
        f_proxy();
        explicit f_proxy(jsrt::value value);
        jsrt::array<double> g();
        void set_g(jsrt::array<double> value);
    private:
        template<typename T>
        class f_proxy_wrapper
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
            static jsrt::array<double> wrap_get_g(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_g();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return jsrt::array<double>();
                }
            }
            static void wrap_set_g(const jsrt::call_info &info, jsrt::array<double> value)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    this_value->set_g(value);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                }
            }
        };
    public:
        template<typename T>
        static f_proxy create(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, f_proxy_wrapper<T>::wrap_finalize);
            wrapper.define_property(
                jsrt::property_id::create(L"g"),
                jsrt::property_descriptor<jsrt::array<double>>::create(
                    jsrt::function_base::create(f_proxy_wrapper<T>::wrap_get_g),
                    jsrt::function_base::create(f_proxy_wrapper<T>::wrap_set_g)));
            return (f_proxy) wrapper;
        }
    };
    f_proxy f();
    void set_f(f_proxy value);
} // namespace types_array

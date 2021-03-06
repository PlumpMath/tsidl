// This file contains automatically generated proxies for JavaScript.

#pragma once

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace interfaces
{
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
        };
    public:
        template<typename T>
        static a_proxy create(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, a_proxy_wrapper<T>::wrap_finalize);
            return (a_proxy) wrapper;
        }
    };
    class b_proxy: public a_proxy
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
    class c_proxy: public jsrt::object
    {
    public:
        c_proxy();
        explicit c_proxy(jsrt::value value);
        double x();
        void set_x(double value);
        jsrt::optional<double> y();
        void set_y(jsrt::optional<double> value);
        std::wstring abc();
        void set_abc(std::wstring value);
        jsrt::bound_function<c_proxy, double, double> b();
        void set_b(jsrt::function<double, double> value);
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
            static double wrap_get_x(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_x();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return double();
                }
            }
            static void wrap_set_x(const jsrt::call_info &info, double value)
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
            static jsrt::optional<double> wrap_get_y(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_y();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return jsrt::optional<double>();
                }
            }
            static void wrap_set_y(const jsrt::call_info &info, jsrt::optional<double> value)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    this_value->set_y(value);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                }
            }
            static std::wstring wrap_get_abc(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_abc();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return std::wstring();
                }
            }
            static void wrap_set_abc(const jsrt::call_info &info, std::wstring value)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    this_value->set_abc(value);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                }
            }
            static double wrap_call_b(const jsrt::call_info &info, double p0)
            {
                if (info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as constructor"));
                    return double();
                }
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->b(p0);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return double();
                }
            }
        };
    public:
        template<typename T>
        static c_proxy create(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, c_proxy_wrapper<T>::wrap_finalize);
            wrapper.define_property(
                jsrt::property_id::create(L"x"),
                jsrt::property_descriptor<double>::create(
                    jsrt::function_base::create(c_proxy_wrapper<T>::wrap_get_x),
                    jsrt::function_base::create(c_proxy_wrapper<T>::wrap_set_x)));
            wrapper.define_property(
                jsrt::property_id::create(L"y"),
                jsrt::property_descriptor<jsrt::optional<double>>::create(
                    jsrt::function_base::create(c_proxy_wrapper<T>::wrap_get_y),
                    jsrt::function_base::create(c_proxy_wrapper<T>::wrap_set_y)));
            wrapper.define_property(
                jsrt::property_id::create(L"abc"),
                jsrt::property_descriptor<std::wstring>::create(
                    jsrt::function_base::create(c_proxy_wrapper<T>::wrap_get_abc),
                    jsrt::function_base::create(c_proxy_wrapper<T>::wrap_set_abc)));
            wrapper.set_property(
                jsrt::property_id::create(L"b"),
                jsrt::function_base::create(c_proxy_wrapper<T>::wrap_call_b));
            return (c_proxy) wrapper;
        }
    };
    class d_proxy: public jsrt::function<std::wstring, std::wstring>
    {
    public:
        d_proxy();
        explicit d_proxy(jsrt::value value);
        static d_proxy create(Signature signature);
        double x();
        void set_x(double value);
        jsrt::bound_function<d_proxy, double, double> y();
        void set_y(jsrt::function<double, double> value);
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
            static std::wstring wrap_self(const jsrt::call_info &info, std::wstring p0)
            {
                if (info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as constructor"));
                    return std::wstring();
                }
                try
                {
                    jsrt::external_object this_property = ((jsrt::object)info.callee()).get_property<jsrt::external_object>(
                        jsrt::property_id::create(L"__this__"));
                    T *this_value = (T *) this_property.data();
                    return this_value->self(info.this_value(), p0);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return std::wstring();
                }
            }
            static double wrap_get_x(const jsrt::call_info &info)
            {
                try
                {
                    jsrt::external_object this_property = ((jsrt::object)info.this_value()).get_property<jsrt::external_object>(
                        jsrt::property_id::create(L"__this__"));
                    T *this_value = (T *) this_property.data();
                    return this_value->get_x();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return double();
                }
            }
            static void wrap_set_x(const jsrt::call_info &info, double value)
            {
                try
                {
                    jsrt::external_object this_property = ((jsrt::object)info.this_value()).get_property<jsrt::external_object>(
                        jsrt::property_id::create(L"__this__"));
                    T *this_value = (T *) this_property.data();
                    this_value->set_x(value);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                }
            }
            static double wrap_call_y(const jsrt::call_info &info, double p0)
            {
                if (info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as constructor"));
                    return double();
                }
                try
                {
                    jsrt::external_object this_property = ((jsrt::object)info.this_value()).get_property<jsrt::external_object>(
                        jsrt::property_id::create(L"__this__"));
                    T *this_value = (T *) this_property.data();
                    return this_value->y(p0);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return double();
                }
            }
        };
    public:
        template<typename T>
        static d_proxy create(T *value)
        {
            jsrt::object this_wrapper = jsrt::external_object::create(value, d_proxy_wrapper<T>::wrap_finalize);
            jsrt::function<std::wstring, std::wstring> wrapper = jsrt::function_base::create(d_proxy_wrapper<T>::wrap_self);
            wrapper.set_property(
                jsrt::property_id::create(L"__this__"),
                this_wrapper);
            wrapper.define_property(
                jsrt::property_id::create(L"x"),
                jsrt::property_descriptor<double>::create(
                    jsrt::function_base::create(d_proxy_wrapper<T>::wrap_get_x),
                    jsrt::function_base::create(d_proxy_wrapper<T>::wrap_set_x)));
            wrapper.set_property(
                jsrt::property_id::create(L"y"),
                jsrt::function_base::create(d_proxy_wrapper<T>::wrap_call_y));
            return (d_proxy) wrapper;
        }
    };
    class e_proxy: public jsrt::function<jsrt::object, std::wstring>
    {
    public:
        e_proxy();
        explicit e_proxy(jsrt::value value);
        static e_proxy create(Signature signature);
        double x();
        void set_x(double value);
        jsrt::bound_function<e_proxy, double, double> y();
        void set_y(jsrt::function<double, double> value);
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
            static jsrt::object wrap_self(const jsrt::call_info &info, std::wstring p0)
            {
                if (!info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as a regular function"));
                    return jsrt::object();
                }
                try
                {
                    jsrt::external_object this_property = ((jsrt::object)info.callee()).get_property<jsrt::external_object>(
                        jsrt::property_id::create(L"__this__"));
                    T *this_value = (T *) this_property.data();
                    return this_value->self((jsrt::object)info.this_value(), p0);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return jsrt::object();
                }
            }
            static double wrap_get_x(const jsrt::call_info &info)
            {
                try
                {
                    jsrt::external_object this_property = ((jsrt::object)info.this_value()).get_property<jsrt::external_object>(
                        jsrt::property_id::create(L"__this__"));
                    T *this_value = (T *) this_property.data();
                    return this_value->get_x();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return double();
                }
            }
            static void wrap_set_x(const jsrt::call_info &info, double value)
            {
                try
                {
                    jsrt::external_object this_property = ((jsrt::object)info.this_value()).get_property<jsrt::external_object>(
                        jsrt::property_id::create(L"__this__"));
                    T *this_value = (T *) this_property.data();
                    this_value->set_x(value);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                }
            }
            static double wrap_call_y(const jsrt::call_info &info, double p0)
            {
                if (info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as constructor"));
                    return double();
                }
                try
                {
                    jsrt::external_object this_property = ((jsrt::object)info.this_value()).get_property<jsrt::external_object>(
                        jsrt::property_id::create(L"__this__"));
                    T *this_value = (T *) this_property.data();
                    return this_value->y(p0);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return double();
                }
            }
        };
    public:
        template<typename T>
        static e_proxy create(T *value)
        {
            jsrt::object this_wrapper = jsrt::external_object::create(value, e_proxy_wrapper<T>::wrap_finalize);
            jsrt::function<jsrt::object, std::wstring> wrapper = jsrt::function_base::create(e_proxy_wrapper<T>::wrap_self);
            wrapper.set_property(
                jsrt::property_id::create(L"__this__"),
                this_wrapper);
            wrapper.define_property(
                jsrt::property_id::create(L"x"),
                jsrt::property_descriptor<double>::create(
                    jsrt::function_base::create(e_proxy_wrapper<T>::wrap_get_x),
                    jsrt::function_base::create(e_proxy_wrapper<T>::wrap_set_x)));
            wrapper.set_property(
                jsrt::property_id::create(L"y"),
                jsrt::function_base::create(e_proxy_wrapper<T>::wrap_call_y));
            return (e_proxy) wrapper;
        }
    };
    class f_proxy: public d_proxy
    {
    public:
        f_proxy();
        explicit f_proxy(jsrt::value value);
        static f_proxy create(Signature signature);
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
            static std::wstring wrap_self(const jsrt::call_info &info, std::wstring p0)
            {
                if (info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as constructor"));
                    return std::wstring();
                }
                try
                {
                    jsrt::external_object this_property = ((jsrt::object)info.callee()).get_property<jsrt::external_object>(
                        jsrt::property_id::create(L"__this__"));
                    T *this_value = (T *) this_property.data();
                    return this_value->self(info.this_value(), p0);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return std::wstring();
                }
            }
        };
    public:
        template<typename T>
        static f_proxy create(T *value)
        {
            jsrt::object this_wrapper = jsrt::external_object::create(value, f_proxy_wrapper<T>::wrap_finalize);
            jsrt::function<std::wstring, std::wstring> wrapper = jsrt::function_base::create(f_proxy_wrapper<T>::wrap_self);
            wrapper.set_property(
                jsrt::property_id::create(L"__this__"),
                this_wrapper);
            return (f_proxy) wrapper;
        }
    };
} // namespace interfaces

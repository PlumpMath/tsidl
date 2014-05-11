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
    private:
        template<typename T>
        class a_proxy_wrapper
        {
        public:
            static void CALLBACK wrap_finalize(void *data)
            {
                T * this_value = (T *) data;
                this_value->finalize();
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
            static double wrap_call_y(const jsrt::call_info &info, double p0)
            {
                if (info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as constructor"));
                    return double();
                }
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->y(p0);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return double();
                }
            }
            static a_proxy wrap_construct_self(const jsrt::call_info &info, double p0)
            {
                if (!info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as a regular function"));
                    return a_proxy();
                }
                try
                {
                    T *instance = T::construct(p0);
                    jsrt::object wrapper = jsrt::external_object::create(instance, a_proxy_wrapper<T>::wrap_finalize);
                    wrapper.define_property(
                        jsrt::property_id::create(L"x"),
                        jsrt::property_descriptor<double>::create(
                            jsrt::function_base::create(a_proxy_wrapper<T>::wrap_get_x),
                            jsrt::function_base::create(a_proxy_wrapper<T>::wrap_set_x)));
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
        static jsrt::function<a_proxy, double> wrap()
        {
            jsrt::object wrapper = jsrt::object::create();
            wrapper.set_property(
                jsrt::property_id::create(L"y"),
                jsrt::function_base::create(a_proxy_wrapper<T>::wrap_call_y));
            jsrt::function<a_proxy, double> constructor = jsrt::function_base::create(a_proxy_wrapper<T>::wrap_construct_self);
            constructor.set_property(
                jsrt::property_id::create(L"prototype"),
                wrapper);
            return constructor;
        }
    };
    jsrt::bound_function<jsrt::object, a_proxy, double> a();
    void set_a(jsrt::function<a_proxy, double> value);
    class b_proxy: public jsrt::object
    {
    public:
        b_proxy();
        explicit b_proxy(jsrt::value value);
        double x();
        void set_x(double value);
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
                    wrapper.define_property(
                        jsrt::property_id::create(L"x"),
                        jsrt::property_descriptor<double>::create(
                            jsrt::function_base::create(c_proxy_wrapper<T>::wrap_get_x),
                            jsrt::function_base::create(c_proxy_wrapper<T>::wrap_set_x)));
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
    class d_proxy: public c_proxy
    {
    public:
        d_proxy();
        explicit d_proxy(jsrt::value value);
    private:
        template<typename T>
        class d_proxy_wrapper
        {
        public:
            static void CALLBACK wrap_finalize(void *data)
            {
                T * this_value = (T *) data;
                this_value->finalize();
            }
            static d_proxy wrap_construct_self(const jsrt::call_info &info)
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
        static jsrt::function<d_proxy> wrap()
        {
            jsrt::object wrapper = jsrt::object::create();
            jsrt::function<d_proxy> constructor = jsrt::function_base::create(d_proxy_wrapper<T>::wrap_construct_self);
            constructor.set_property(
                jsrt::property_id::create(L"prototype"),
                wrapper);
            return constructor;
        }
    };
    jsrt::bound_function<jsrt::object, d_proxy> d();
    void set_d(jsrt::function<d_proxy> value);
} // namespace ambient_classes

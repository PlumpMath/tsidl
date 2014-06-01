// This file contains automatically generated proxies for JavaScript.

#pragma once

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace ambient_external_modules
{
    class foo_proxy: public jsrt::object
    {
    public:
        foo_proxy();
        explicit foo_proxy(jsrt::value value);
        double x();
        void set_x(double value);
        jsrt::bound_function<foo_proxy, double> y();
        void set_y(jsrt::function<double> value);
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
                static z_proxy wrap_construct(const jsrt::call_info &info)
                {
                    if (!info.is_construct_call())
                    {
                        jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as a regular function"));
                        return z_proxy();
                    }
                    try
                    {
                        T *instance = T::construct();
                        jsrt::object wrapper = jsrt::external_object::create(instance, z_proxy_wrapper<T>::wrap_finalize);
                        wrapper.set_prototype(((jsrt::object)info.this_value()).prototype());
                        return (z_proxy) wrapper;
                    }
                    catch (...)
                    {
                        jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                        return z_proxy();
                    }
                }
            };
        public:
            template<typename T>
            static jsrt::function<foo_proxy::z_proxy> create()
            {
                jsrt::object wrapper = jsrt::object::create();
                jsrt::function<foo_proxy::z_proxy> constructor = jsrt::function_base::create(z_proxy_wrapper<T>::wrap_construct);
                constructor.set_constructor_prototype(wrapper);
                return constructor;
            }
        };
        jsrt::bound_function<foo_proxy, foo_proxy::z_proxy> z();
        void set_z(jsrt::function<foo_proxy::z_proxy> value);
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
        enum b
        {
        };
        class c_proxy: public jsrt::object
        {
        public:
            c_proxy();
            explicit c_proxy(jsrt::value value);
            class d_proxy: public jsrt::object
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
                static jsrt::function<foo_proxy::c_proxy::d_proxy> create()
                {
                    jsrt::object wrapper = jsrt::object::create();
                    jsrt::function<foo_proxy::c_proxy::d_proxy> constructor = jsrt::function_base::create(d_proxy_wrapper<T>::wrap_construct);
                    constructor.set_constructor_prototype(wrapper);
                    return constructor;
                }
            };
            jsrt::bound_function<foo_proxy::c_proxy, foo_proxy::c_proxy::d_proxy> d();
            void set_d(jsrt::function<foo_proxy::c_proxy::d_proxy> value);
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
                static jsrt::function<foo_proxy::c_proxy::d_proxy> wrap_get_d(const jsrt::call_info &info)
                {
                    try
                    {
                        T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                        return this_value->get_d();
                    }
                    catch (...)
                    {
                        jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                        return jsrt::function<foo_proxy::c_proxy::d_proxy>();
                    }
                }
                static void wrap_set_d(const jsrt::call_info &info, jsrt::function<foo_proxy::c_proxy::d_proxy> value)
                {
                    try
                    {
                        T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                        this_value->set_d(value);
                    }
                    catch (...)
                    {
                        jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    }
                }
            };
        public:
            template<typename T>
            static c_proxy create(T *value)
            {
                jsrt::object wrapper = jsrt::external_object::create(value, c_proxy_wrapper<T>::wrap_finalize);
                wrapper.define_property(
                    jsrt::property_id::create(L"d"),
                    jsrt::property_descriptor<jsrt::function<foo_proxy::c_proxy::d_proxy>>::create(
                        jsrt::function_base::create(c_proxy_wrapper<T>::wrap_get_d),
                        jsrt::function_base::create(c_proxy_wrapper<T>::wrap_set_d)));
                return (c_proxy) wrapper;
            }
        };
        foo_proxy::c_proxy c();
        void set_c(foo_proxy::c_proxy value);
    private:
        template<typename T>
        class foo_proxy_wrapper
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
            static double wrap_call_y(const jsrt::call_info &info)
            {
                if (info.is_construct_call())
                {
                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as constructor"));
                    return double();
                }
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->y();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return double();
                }
            }
            static jsrt::function<foo_proxy::z_proxy> wrap_get_z(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_z();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return jsrt::function<foo_proxy::z_proxy>();
                }
            }
            static void wrap_set_z(const jsrt::call_info &info, jsrt::function<foo_proxy::z_proxy> value)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    this_value->set_z(value);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                }
            }
            static foo_proxy::c_proxy wrap_get_c(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_c();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return foo_proxy::c_proxy();
                }
            }
            static void wrap_set_c(const jsrt::call_info &info, foo_proxy::c_proxy value)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    this_value->set_c(value);
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                }
            }
        };
    public:
        template<typename T>
        static foo_proxy create(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, foo_proxy_wrapper<T>::wrap_finalize);
            wrapper.define_property(
                jsrt::property_id::create(L"x"),
                jsrt::property_descriptor<double>::create(
                    jsrt::function_base::create(foo_proxy_wrapper<T>::wrap_get_x),
                    jsrt::function_base::create(foo_proxy_wrapper<T>::wrap_set_x)));
            wrapper.set_property(
                jsrt::property_id::create(L"y"),
                jsrt::function_base::create(foo_proxy_wrapper<T>::wrap_call_y));
            wrapper.define_property(
                jsrt::property_id::create(L"z"),
                jsrt::property_descriptor<jsrt::function<foo_proxy::z_proxy>>::create(
                    jsrt::function_base::create(foo_proxy_wrapper<T>::wrap_get_z),
                    jsrt::function_base::create(foo_proxy_wrapper<T>::wrap_set_z)));
            wrapper.define_property(
                jsrt::property_id::create(L"c"),
                jsrt::property_descriptor<foo_proxy::c_proxy>::create(
                    jsrt::function_base::create(foo_proxy_wrapper<T>::wrap_get_c),
                    jsrt::function_base::create(foo_proxy_wrapper<T>::wrap_set_c)));
            return (foo_proxy) wrapper;
        }
    };
} // namespace ambient_external_modules

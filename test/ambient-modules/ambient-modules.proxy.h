// This file contains automatically generated proxies for JavaScript.

#pragma once

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace ambient_modules
{
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::value value);
        class g_proxy: public jsrt::object
        {
        public:
            g_proxy();
            explicit g_proxy(jsrt::value value);
        private:
            template<typename T>
            class g_proxy_wrapper
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
                static g_proxy wrap_construct(const jsrt::call_info &info)
                {
                    if (!info.is_construct_call())
                    {
                        jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as a regular function"));
                        return g_proxy();
                    }
                    try
                    {
                        T *instance = T::construct();
                        jsrt::object wrapper = jsrt::external_object::create(instance, g_proxy_wrapper<T>::wrap_finalize);
                        wrapper.set_prototype(((jsrt::object)info.this_value()).prototype());
                        return (g_proxy) wrapper;
                    }
                    catch (...)
                    {
                        jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                        return g_proxy();
                    }
                }
            };
        public:
            template<typename T>
            static jsrt::function<a_proxy::g_proxy> create()
            {
                jsrt::object wrapper = jsrt::object::create();
                jsrt::function<a_proxy::g_proxy> constructor = jsrt::function_base::create(g_proxy_wrapper<T>::wrap_construct);
                constructor.set_constructor_prototype(wrapper);
                return constructor;
            }
        };
        jsrt::bound_function<a_proxy, a_proxy::g_proxy> g();
        void set_g(jsrt::function<a_proxy::g_proxy> value);
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
            static jsrt::function<a_proxy::g_proxy> wrap_get_g(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_g();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return jsrt::function<a_proxy::g_proxy>();
                }
            }
            static void wrap_set_g(const jsrt::call_info &info, jsrt::function<a_proxy::g_proxy> value)
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
        static a_proxy create(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, a_proxy_wrapper<T>::wrap_finalize);
            wrapper.define_property(
                jsrt::property_id::create(L"g"),
                jsrt::property_descriptor<jsrt::function<a_proxy::g_proxy>>::create(
                    jsrt::function_base::create(a_proxy_wrapper<T>::wrap_get_g),
                    jsrt::function_base::create(a_proxy_wrapper<T>::wrap_set_g)));
            return (a_proxy) wrapper;
        }
    };
    a_proxy a();
    void set_a(a_proxy value);
    class b_proxy: public jsrt::object
    {
    public:
        b_proxy();
        explicit b_proxy(jsrt::value value);
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
                double x();
                void set_x(double value);
                jsrt::bound_function<b_proxy::c_proxy::d_proxy, double> y();
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
                    static jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy> create()
                    {
                        jsrt::object wrapper = jsrt::object::create();
                        jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy> constructor = jsrt::function_base::create(z_proxy_wrapper<T>::wrap_construct);
                        constructor.set_constructor_prototype(wrapper);
                        return constructor;
                    }
                };
                jsrt::bound_function<b_proxy::c_proxy::d_proxy, b_proxy::c_proxy::d_proxy::z_proxy> z();
                void set_z(jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy> value);
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
                class e_proxy: public jsrt::object
                {
                public:
                    e_proxy();
                    explicit e_proxy(jsrt::value value);
                    class f_proxy: public jsrt::object
                    {
                    public:
                        f_proxy();
                        explicit f_proxy(jsrt::value value);
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
                            static f_proxy wrap_construct(const jsrt::call_info &info)
                            {
                                if (!info.is_construct_call())
                                {
                                    jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as a regular function"));
                                    return f_proxy();
                                }
                                try
                                {
                                    T *instance = T::construct();
                                    jsrt::object wrapper = jsrt::external_object::create(instance, f_proxy_wrapper<T>::wrap_finalize);
                                    wrapper.set_prototype(((jsrt::object)info.this_value()).prototype());
                                    return (f_proxy) wrapper;
                                }
                                catch (...)
                                {
                                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                                    return f_proxy();
                                }
                            }
                        };
                    public:
                        template<typename T>
                        static jsrt::function<b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> create()
                        {
                            jsrt::object wrapper = jsrt::object::create();
                            jsrt::function<b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> constructor = jsrt::function_base::create(f_proxy_wrapper<T>::wrap_construct);
                            constructor.set_constructor_prototype(wrapper);
                            return constructor;
                        }
                    };
                    jsrt::bound_function<b_proxy::c_proxy::d_proxy::e_proxy, b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> f();
                    void set_f(jsrt::function<b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> value);
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
                        static jsrt::function<b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> wrap_get_f(const jsrt::call_info &info)
                        {
                            try
                            {
                                T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                                return this_value->get_f();
                            }
                            catch (...)
                            {
                                jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                                return jsrt::function<b_proxy::c_proxy::d_proxy::e_proxy::f_proxy>();
                            }
                        }
                        static void wrap_set_f(const jsrt::call_info &info, jsrt::function<b_proxy::c_proxy::d_proxy::e_proxy::f_proxy> value)
                        {
                            try
                            {
                                T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                                this_value->set_f(value);
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
                            jsrt::property_id::create(L"f"),
                            jsrt::property_descriptor<jsrt::function<b_proxy::c_proxy::d_proxy::e_proxy::f_proxy>>::create(
                                jsrt::function_base::create(e_proxy_wrapper<T>::wrap_get_f),
                                jsrt::function_base::create(e_proxy_wrapper<T>::wrap_set_f)));
                        return (e_proxy) wrapper;
                    }
                };
                b_proxy::c_proxy::d_proxy::e_proxy e();
                void set_e(b_proxy::c_proxy::d_proxy::e_proxy value);
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
                    static jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy> wrap_get_z(const jsrt::call_info &info)
                    {
                        try
                        {
                            T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                            return this_value->get_z();
                        }
                        catch (...)
                        {
                            jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                            return jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy>();
                        }
                    }
                    static void wrap_set_z(const jsrt::call_info &info, jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy> value)
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
                    static b_proxy::c_proxy::d_proxy::e_proxy wrap_get_e(const jsrt::call_info &info)
                    {
                        try
                        {
                            T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                            return this_value->get_e();
                        }
                        catch (...)
                        {
                            jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                            return b_proxy::c_proxy::d_proxy::e_proxy();
                        }
                    }
                    static void wrap_set_e(const jsrt::call_info &info, b_proxy::c_proxy::d_proxy::e_proxy value)
                    {
                        try
                        {
                            T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                            this_value->set_e(value);
                        }
                        catch (...)
                        {
                            jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                        }
                    }
                };
            public:
                template<typename T>
                static d_proxy create(T *value)
                {
                    jsrt::object wrapper = jsrt::external_object::create(value, d_proxy_wrapper<T>::wrap_finalize);
                    wrapper.define_property(
                        jsrt::property_id::create(L"x"),
                        jsrt::property_descriptor<double>::create(
                            jsrt::function_base::create(d_proxy_wrapper<T>::wrap_get_x),
                            jsrt::function_base::create(d_proxy_wrapper<T>::wrap_set_x)));
                    wrapper.set_property(
                        jsrt::property_id::create(L"y"),
                        jsrt::function_base::create(d_proxy_wrapper<T>::wrap_call_y));
                    wrapper.define_property(
                        jsrt::property_id::create(L"z"),
                        jsrt::property_descriptor<jsrt::function<b_proxy::c_proxy::d_proxy::z_proxy>>::create(
                            jsrt::function_base::create(d_proxy_wrapper<T>::wrap_get_z),
                            jsrt::function_base::create(d_proxy_wrapper<T>::wrap_set_z)));
                    wrapper.define_property(
                        jsrt::property_id::create(L"e"),
                        jsrt::property_descriptor<b_proxy::c_proxy::d_proxy::e_proxy>::create(
                            jsrt::function_base::create(d_proxy_wrapper<T>::wrap_get_e),
                            jsrt::function_base::create(d_proxy_wrapper<T>::wrap_set_e)));
                    return (d_proxy) wrapper;
                }
            };
            b_proxy::c_proxy::d_proxy d();
            void set_d(b_proxy::c_proxy::d_proxy value);
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
                static b_proxy::c_proxy::d_proxy wrap_get_d(const jsrt::call_info &info)
                {
                    try
                    {
                        T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                        return this_value->get_d();
                    }
                    catch (...)
                    {
                        jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                        return b_proxy::c_proxy::d_proxy();
                    }
                }
                static void wrap_set_d(const jsrt::call_info &info, b_proxy::c_proxy::d_proxy value)
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
                    jsrt::property_descriptor<b_proxy::c_proxy::d_proxy>::create(
                        jsrt::function_base::create(c_proxy_wrapper<T>::wrap_get_d),
                        jsrt::function_base::create(c_proxy_wrapper<T>::wrap_set_d)));
                return (c_proxy) wrapper;
            }
        };
        b_proxy::c_proxy c();
        void set_c(b_proxy::c_proxy value);
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
            static b_proxy::c_proxy wrap_get_c(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_c();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return b_proxy::c_proxy();
                }
            }
            static void wrap_set_c(const jsrt::call_info &info, b_proxy::c_proxy value)
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
        static b_proxy create(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, b_proxy_wrapper<T>::wrap_finalize);
            wrapper.define_property(
                jsrt::property_id::create(L"c"),
                jsrt::property_descriptor<b_proxy::c_proxy>::create(
                    jsrt::function_base::create(b_proxy_wrapper<T>::wrap_get_c),
                    jsrt::function_base::create(b_proxy_wrapper<T>::wrap_set_c)));
            return (b_proxy) wrapper;
        }
    };
    b_proxy b();
    void set_b(b_proxy value);
    b_proxy::c_proxy::d_proxy::e_proxy::f_proxy z();
    void set_z(b_proxy::c_proxy::d_proxy::e_proxy::f_proxy value);
} // namespace ambient_modules

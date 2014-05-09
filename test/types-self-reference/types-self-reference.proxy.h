// This file contains automatically generated proxies for JavaScript.

#include <jsrt.h>
#include "jsrt-wrappers.h"

namespace types_self_reference
{
    class a_proxy: public jsrt::object
    {
    public:
        a_proxy();
        explicit a_proxy(jsrt::value value);
    };
    jsrt::bound_function<jsrt::object, a_proxy> a();
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
            class e_proxy: public jsrt::object
            {
            public:
                e_proxy();
                explicit e_proxy(jsrt::value value);
            };
            jsrt::bound_function<c_proxy::d_proxy, c_proxy::d_proxy::e_proxy> e();
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
                static c_proxy::d_proxy::e_proxy wrap_construct_e(const jsrt::call_info &info)
                {
                    if (!info.is_construct_call())
                    {
                        jsrt::context::set_exception(jsrt::error::create(L"function cannot be called as a regular function"));
                        return c_proxy::d_proxy::e_proxy();
                    }
                    try
                    {
                        return T::new_e((c_proxy::d_proxy::e_proxy)info.this_value());
                    }
                    catch (...)
                    {
                        jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                        return c_proxy::d_proxy::e_proxy();
                    }
                }
            };
        public:
            template<typename T>
            static d_proxy wrap(T *value)
            {
                jsrt::object wrapper = jsrt::external_object::create(value, d_proxy_wrapper<T>::wrap_finalize);
                wrapper.set_property(
                    jsrt::property_id::create(L"e"),
                    jsrt::function_base::create(d_proxy_wrapper<T>::wrap_construct_e));
                return (d_proxy) wrapper;
            }
        };
        c_proxy::d_proxy d();
        void set_d(c_proxy::d_proxy value);
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
            static c_proxy::d_proxy wrap_get_d(const jsrt::call_info &info)
            {
                try
                {
                    T *this_value = (T *) ((jsrt::external_object)info.this_value()).data();
                    return this_value->get_d();
                }
                catch (...)
                {
                    jsrt::context::set_exception(jsrt::error::create(L"internal exception"));
                    return c_proxy::d_proxy();
                }
            }
            static void wrap_set_d(const jsrt::call_info &info, c_proxy::d_proxy value)
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
        static c_proxy wrap(T *value)
        {
            jsrt::object wrapper = jsrt::external_object::create(value, c_proxy_wrapper<T>::wrap_finalize);
            wrapper.define_property(
                jsrt::property_id::create(L"d"),
                jsrt::property_descriptor<c_proxy::d_proxy>::create(
                    jsrt::function_base::create(c_proxy_wrapper<T>::wrap_get_d),
                    jsrt::function_base::create(c_proxy_wrapper<T>::wrap_set_d)));
            return (c_proxy) wrapper;
        }
    };
    c_proxy c();
    void set_c(c_proxy value);
    a_proxy b();
    void set_b(a_proxy value);
    c_proxy::d_proxy::e_proxy f();
    void set_f(c_proxy::d_proxy::e_proxy value);
} // namespace types_self_reference

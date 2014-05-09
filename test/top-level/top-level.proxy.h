// This file contains automatically generated proxies for JavaScript.

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
                T * this_value = (T *) data;
                this_value->finalize();
            }
        };
    public:
        template<typename T>
        static z_proxy wrap(T *value)
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
    };
    jsrt::bound_function<jsrt::object, a_proxy> a();
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
        };
    public:
        template<typename T>
        static b_proxy wrap(T *value)
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
} // namespace top_level

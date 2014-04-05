// This file contains automatically generated proxies for JavaScript.

#include "jsrt.wrappers.h"

class empty_global_proxy: public jsrt::object
{
public:
    empty_global_proxy() :
        jsrt::object()
    {
    }

    explicit empty_global_proxy(jsrt::object object) :
        jsrt::object(object.handle())
    {
    }
};
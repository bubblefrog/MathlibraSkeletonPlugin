#include "includes/PluginFunctions.h"

type* __identity(double d){
    base_type<double>* b = new base_type<double>(1,1);
    auto it = b->begin();
    *it=d;
    return b;
}

type* identity(node_base* b) {
    return function_helper::forward<double>(__identity,b);
}

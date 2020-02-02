#ifndef SORT_METHOD_H
#define SORT_METHOD_H

#include "List.h"

template<class T>
class SortMethod {
    virtual void sort(List<T> &list) = 0;
};

#endif //SORT_METHOD_H
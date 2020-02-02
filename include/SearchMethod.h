#ifndef SEARCH_METHOD_H
#define SEARCH_METHOD_H

#include "List.h"

template <class T>
class SearchMethod {
    virtual void search(List<T> &list) = 0;
};

#endif
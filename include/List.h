#ifndef LIST_H
#define LIST_H

#include "SearchMethod.h"
#include "SortMethod.h"

template<class T>
class List {
    public:
        virtual T pop() = 0;
        virtual void push(T obj) = 0;
        virtual void push(int index, T obj) = 0;
        virtual void replace(int index, T obj) = 0;
        virtual int size() = 0;
        virtual void print() = 0;
        virtual T get(int index) = 0;
        virtual T remove(int index) = 0;
        virtual bool contains(SearchMethod searchMethod, T obj) = 0;
        virtual void sort(SortMethod sortMethod) = 0;
};

#endif //LIST_H
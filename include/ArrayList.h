#include "List"

template<class T>
class ArrayList : public List<T> {
    T pop() = 0;
    void push(T obj) = 0;
    void push(int index, T obj) = 0;
    void replace(int index, T obj) = 0;
    int size() = 0;
    void print() = 0;
    T get(int index) = 0;
    T remove(int index) = 0;
    bool contains(SearchMethod searchMethod, T obj) = 0;
    void sort(SortMethod sortMethod) = 0;
};
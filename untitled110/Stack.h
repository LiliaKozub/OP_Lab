#pragma once

#include "List.h"

template <typename T>
class Stack : public List<T> {
private:
    typename List<T>::Node* top;

public:
    class Iterator {
    private:
        typename List<T>::Iterator iterator;

    public:
        Iterator(const typename List<T>::Iterator& iter);

        bool operator==(const Iterator& other) const;
        bool operator!=(const Iterator& other) const;
        const T& operator*();
        Iterator& operator++();
    };

    Iterator begin() const;
    Iterator end() const;
    size_t Size() const;
    bool IsEmpty() const;
    T& Top();
    void Pop();
    void Push(const T& value);
    void Clear();
    void SetTop(const T& value);
};

#include "Stack.hpp"

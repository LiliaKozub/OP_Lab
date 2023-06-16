#pragma once
#include <iostream>
#include <utility>

using namespace std;

template <typename T>
class List{
protected:
    struct Node{
        T data;
        Node* previous;
        Node* next;
    };
    Node* head;
    Node* tail;
    size_t size;

    void Copy(const List& other);
    void Move(List&& other) noexcept;

public:
    List();
    List(const List& other);
    List(List&& other) noexcept;
    ~List();
    List& operator=(const List& other);
    List& operator=(List&& other) noexcept;

    void PushBack(const T& value);
    void PushFront(const T& value);

    void PopBack();
    void PopFront();
    void PopHead();
    void PopTail();

    T& Front();
    const T& Front() const;

    T& Back();
    const T& Back() const;

    void Remove(const T& value);
    bool Find(const T& value);
    void Clear();

    bool IsEmpty() const;
    size_t Size() const;

    void Show() const;

    class Iterator{
    public:
        Iterator(Node* ptr): ptr(ptr){}
        const T& operator*(){return ptr->data;}
        Iterator& operator++(){ptr = ptr->next; return *this;}
        Iterator operator++(int){Iterator temp(*this); ptr = ptr->next; return temp;}
        Iterator& operator--(){ptr = ptr->previous; return *this;}
        Iterator operator--(int){Iterator temp(*this); ptr = ptr->previous; return temp;}
        bool operator==(const Iterator& other) const{return ptr == other.ptr;}
        bool operator!=(const Iterator& other) const{return ptr != other.ptr;}
    private:
        Node* ptr;
    };
    Iterator Tail() const {return Iterator(tail);}
    Iterator Begin() const {return Iterator(head);}
    Iterator End() const {return Iterator(nullptr);}
    Node* getTail() const {return tail;}
};

#include "List.hpp"


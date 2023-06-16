//#include "List.h"
template <typename T>
List<T>::List() : head(nullptr), tail(nullptr), size(0) {}

template <typename T>
List<T>::List(const List<T>& other) : head(nullptr), tail(nullptr), size(0) {
    if (other.size != 0) {
        Copy(other);
    }
}

template <typename T>
List<T>::List(List<T>&& other) noexcept {
    Move(move(other));
}

template <typename T>
List<T>::~List() {
    Clear();
}

template <typename T>
void List<T>::Clear() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
    size = 0;
}

template <typename T>
void List<T>::PushBack(const T& value) {
    if (size == 0) {
        head = new Node{ value, nullptr, nullptr };
        tail = head;
    }
    else {
        tail->next = new Node{ value, tail, nullptr };
        tail = tail->next;
    }
    size++;
}

template <typename T>
void List<T>::Show() const {
    if (size == 0) {
        std::cout << "List is empty\n";
        return;
    }
    Node* current = head;

    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <typename T>
size_t List<T>::Size() const {
    return size;
}

template <typename T>
bool List<T>::IsEmpty() const {
    return size == 0;
}

template <typename T>
bool List<T>::Find(const T& value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}

template <typename T>
T& List<T>::Front() {
    return head->data;
}

template <typename T>
const T& List<T>::Front() const {
    return head->data;
}

template <typename T>
T& List<T>::Back() {
    return tail->data;
}

template <typename T>
const T& List<T>::Back() const {
    return tail->data;
}

template <typename T>
List<T>& List<T>::operator=(const List<T>& other) {
    if (this != &other) {
        Clear();
        Copy(other);
    }
    return *this;
}

template <typename T>
List<T>& List<T>::operator=(List<T>&& other) noexcept {
    if (this != &other) {
        Clear();
        Move(move(other));
    }
    return *this;
}

template <typename T>
void List<T>::Copy(const List<T>& other) {
    if (other.size == 0) {
        return;
    }
    head = new Node{ other.head->data, nullptr, nullptr };
    Node* current = head;
    Node* otherCurrent = other.head->next;

    while (otherCurrent != nullptr) {
        current->next = new Node{ otherCurrent->data, current, nullptr };
        current = current->next;
        otherCurrent = otherCurrent->next;
    }
    size = other.size;
}

template <typename T>
void List<T>::Move(List<T>&& other) noexcept {
    head = other.head;
    tail = other.tail;
    size = other.size;

    other.head = nullptr;
    other.tail = nullptr;
    other.size = 0;
}

template <typename T>
void List<T>::PushFront(const T& value) {
    if (size == 0) {
        head = new Node{ value, nullptr, nullptr };
        tail = head;
    }
    else {
        head = new Node{ value, nullptr, head };
        head->next->previous = head;
    }
    size++;
}

template <typename T>
void List<T>::PopBack() {
    if (size == 0) {
        return;
    }

    if (size == 1) {
        delete tail;
        head = nullptr;
        tail = nullptr;
    }
    else {
        PopTail();
    }
    size--;
}

template <typename T>
void List<T>::PopFront() {
    if (size == 0) {
        return;
    }
    PopHead();
    size--;
}

template <typename T>
void List<T>::Remove(const T& value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            if (head == current) {
                PopHead();
            }
            else if (tail == current) {
                PopTail();
            }
            else {
                current->previous->next = current->next;
                current->next->previous = current->previous;
                delete current;
            }
            size--;
            return;
        }
        current = current->next;
    }
}

template <typename T>
void List<T>::PopHead() {
    if (head == nullptr) {
        return;
    }
    Node* temp = head;
    head = head->next;
    head->previous = nullptr;
    delete temp;
}

template <typename T>
void List<T>::PopTail() {
    if (tail == nullptr) {
        return;
    }
    Node* temp = tail;
    tail = tail->previous;
    tail->next = nullptr;
    delete temp;
}

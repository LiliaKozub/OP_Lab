template <typename T>
Stack<T>::Iterator::Iterator(const typename List<T>::Iterator& iter) : iterator(iter) {}

template <typename T>
bool Stack<T>::Iterator::operator==(const Iterator& other) const {
    return iterator == other.iterator;
}

template <typename T>
bool Stack<T>::Iterator::operator!=(const Iterator& other) const {
    return iterator != other.iterator;
}

template <typename T>
const T& Stack<T>::Iterator::operator*(){
    return *iterator;
}

template <typename T>
typename Stack<T>::Iterator& Stack<T>::Iterator::operator++() {
    ++iterator;
    return *this;
}

template <typename T>
typename Stack<T>::Iterator Stack<T>::begin() const {
    return Iterator(this->List<T>::Begin());
}

template <typename T>
typename Stack<T>::Iterator Stack<T>::end() const {
    return Iterator(nullptr);
}

template <typename T>
size_t Stack<T>::Size() const {
    return this->List<T>::Size();
}

template <typename T>
bool Stack<T>::IsEmpty() const {
    return this->List<T>::IsEmpty();
}

template <typename T>
T& Stack<T>::Top() {
    return this->List<T>::Back();
}

template <typename T>
void Stack<T>::Pop() {
    this->List<T>::PopBack();
}

template <typename T>
void Stack<T>::Push(const T& value) {
    this->List<T>::PushBack(value);
}

template <typename T>
void Stack<T>::Clear() {
    this->List<T>::Clear();
}

template<typename T>
void Stack<T>::SetTop(const T& value) {
    if (!this->IsEmpty()) {
        this->List<T>::Back() = value;
    }
}








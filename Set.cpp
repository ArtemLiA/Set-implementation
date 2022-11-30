//Liakhov Artem

#ifndef SET_PROJECT_SET_CPP
#define SET_PROJECT_SET_CPP
#include <iostream>
#include "Set.h"

template<class T>
Set<T>::Set(){
    root = nullptr;
}

template<class T>
Set<T>::Set(T def){
    BTree_insert(root, def);
}

template<class T>
Set<T>::Set(std::initializer_list<T> list){
    for (auto val: list){
        BTree_insert(root, val);
    }
}

template<class T>
Set<T>::Set(const Set<T>& other){
    this->root = BTree_copy(other.root);
}

template<class T>
void Set<T>::insert(T value) {
    BTree_insert(root, value);
}

template<class T>
void Set<T>::insert(std::initializer_list<T> list){
    for (auto val:list){
        this->insert(val);
    }
}

template<class T>
void Set<T>::output() {
    BTree_print(root);
    std::cout << std::endl;
}

template<class T>
void Set<T>::remove(T value) {
    BTree_remove(root, value);
}

template<class T>
uint Set<T>::size() {
    return BTree_size(root);
}

template<class T>
bool Set<T>::is_in_set(T value) {
    return BTree_is_in_tree(this->root, value);
}

template<class T>
bool Set<T>::is_empty() {
    return (root == nullptr);
}

template<class T>
Set<T>::~Set() {
    BTree_clear(root);
}

template<class T>
Set<T>& Set<T>::operator=(const Set<T> &right) {
    if (this == right){
        return *this;
    }
    this->root = BTree_copy(right.root);
    return *this;
}





#endif //SET_PROJECT_SET_CPP

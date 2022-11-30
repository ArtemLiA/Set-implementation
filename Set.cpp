//
// Created by lyaho on 29.11.2022.
//

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
void Set<T>::insert(T value) {
    BTree_insert(root, value);
}

template<class T>
void Set<T>::remove(T value) {
    BTree_remove(root, value);
}

template<class T>
uint Set<T>::size() {
    BTree_size(root);
}

template<class T>
bool Set<T>::is_in_set(T value) {
    BTree_is_in_tree(root, value);
}

template<class T>
bool Set<T>::is_empty() {
    return (root == nullptr);
}

template<class T>
Set<T>::~Set() {
    BTree_clear(root);
}





#endif //SET_PROJECT_SET_CPP

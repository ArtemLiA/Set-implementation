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

template <class T>
Set<T>::Set(T def){
    root = new BinaryTreeElem<T>;
    root->value = def;
    root->right = nullptr;
    root->left = nullptr;
}

template<class T>
Set<T>::Set(std::initializer_list<T> list){
    for (auto val: list){
        this->insert_elem(val);
    }
}

template<class T>
void Set<T>::insert_elem(T val) {
    insert_to_binary_tree(root, val);
}





#endif //SET_PROJECT_SET_CPP

//
// Created by lyaho on 27.11.2022.
//

//Реализуем множество на основе бинарного дерева.
#ifndef SET_PROJECT_SET_H
#define SET_PROJECT_SET_H
#include <iostream>
#include "BTree.cpp"

//Implementing a set based on binary tree
template<class T>
class Set{
private:
    BTree<T>* root;
public:
    Set();
    explicit Set(T def);
    Set(std::initializer_list<T> list);
    Set(const Set& other);
    void insert(T value);
    void insert(std::initializer_list<T> list);
    void remove(T value);
    uint size();
    bool is_in_set(T value);
    bool is_empty();
    ~Set();
};


#include "Set.cpp"
#endif //SET_PROJECT_SET_H

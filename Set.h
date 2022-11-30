//
// Created by lyaho on 27.11.2022.
//

//Реализуем множество на основе бинарного дерева.
#ifndef SET_PROJECT_SET_H
#define SET_PROJECT_SET_H
#include <iostream>

typedef unsigned int uint;

template<class T>
struct BinaryTreeElem{
    T value;
    BinaryTreeElem* right;
    BinaryTreeElem* left;
};

template<class T>
void insert_to_binary_tree(BinaryTreeElem<T>*& root, T val){
    if (root == nullptr){
        root = new BinaryTreeElem<T>;
        root->right = nullptr;
        root->left = nullptr;
        root->value = val;
        return;
    }
    if (root->value == val){
        return;
    }
    if (root->value < val){
        insert_to_binary_tree(root->right, val);
        return;
    }
    if (root->value > val){
        insert_to_binary_tree(root->left, val);
        return;
    }
}




template<class T>
class Set{
protected:
    BinaryTreeElem<T>* root;
public:
    Set();
    Set(T def);
    Set(std::initializer_list<T>);
    void insert_elem(T val);
    void delete_elem(T val);
    size_t size();
    bool is_in_set(T val);
    bool empty(T val);
    void print();
};

#include "Set.cpp"
#endif //SET_PROJECT_SET_H

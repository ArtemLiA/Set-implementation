//
// Created by lyaho on 30.11.2022.
//

#ifndef SET_PROJECT_BTREE_CPP
#define SET_PROJECT_BTREE_CPP
#include <iostream>


template<class T>
struct BTree{
    T value;
    BTree* right;
    BTree* left;
};

//Inserting an element to BTree
template<class T>
void BTree_insert(BTree<T>*& root, T elem){
    if (root == nullptr){
        root = new BTree<T>;
        root->value = elem;
        root->right = nullptr;
        root->left = nullptr;
        return;
    }
    if (root->value == elem){
        return;
    }
    if (root->value < elem){
        BTree_insert(root->right, elem);
        return;
    }
    if (root->value > elem){
        BTree_insert(root->left, elem);
        return;
    }
}


//Removing an element from Btree
template<class T>
void BTree_remove(BTree<T>*& root, T elem){
    std::cout << "HELLO!" << std::endl;
    return; //I will write code later
}

//Finding an element in BTree
template<class T>
bool BTree_is_in_tree(BTree<T>* root, T elem){
    if (root == nullptr){
        return false;
    }
    if (root->value == elem){
        return true;
    }
    return BTree(root->left, elem) || BTree(root->right, elem);
}

//Output all elements using symmetrical traversal
template<class T>
void BTree_print(BTree<T>* root){
    if (root == nullptr){
        return;
    }
    BTree_print(root->left);
    std::cout << root->value << " ";
    BTree_print(root->right);
}

//Clear binary tree
template<class T>
void BTree_clear(BTree<T>*& root){
    if (root == nullptr){
        return;
    }
    BTree_clear(root->left);
    BTree_clear(root->right);
    delete root;
    root = nullptr;
}





#endif //SET_PROJECT_BTREE_CPP
//
// Created by lyaho on 30.11.2022.
//

#ifndef SET_PROJECT_BTREE_CPP
#define SET_PROJECT_BTREE_CPP
#include <iostream>

typedef unsigned int uint;

template<class T>
struct BTree{
    T value;
    BTree* right;
    BTree* left;
};

//Copy of tree
template<class T>
BTree<T>* BTree_copy(BTree<T>* other){
    if (other == nullptr){
        return nullptr;
    }
    BTree<T>* new_root = new BTree<T>;
    new_root->value = other->value;
    new_root->right = BTree_copy(other->right);
    new_root->left = BTree_copy(other->left);
    return new_root;
}

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
    if (root == nullptr){
        return;
    }
    if (root->value < elem){
        BTree_remove(root->right, elem);
        return;
    }
    if (root->value > elem){
        BTree_remove(root->left, elem);
        return;
    }
    //When root->value == elem
    if (root->right == nullptr && root->left == nullptr){
        delete root;
        root = nullptr;
        return;
    }
    if (root->right == nullptr){
        BTree<T>* temp = root;
        root = root->left;
        delete temp;
        return;
    }
    if (root->left == nullptr){
        BTree<T>* temp = root;
        root = root->right;
        delete temp;
        std::cout << "\nDELETED!" << std::endl;
        return;
    }
    //Case when root has right and left child
    BTree<T>* temp = root->right;
    while(temp->left != nullptr){
        temp = temp->left;
    }
    root->value = temp->value;
    BTree<T>* clear_left = root->right;
    while(clear_left->left != temp){
        clear_left = clear_left->left;
    }
    delete temp;
    clear_left->left = nullptr;
}

//Check is an element in BTree
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

//Size of binary tree
template<class T>
uint BTree_size(BTree<T>* root){
    if (root == nullptr){
        return 0;
    }
    return BTree_size(root->left) + BTree_size(root->right) + 1;
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
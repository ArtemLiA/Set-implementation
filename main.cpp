#include <iostream>
#include "BTree.cpp"
#include <vector>

int main() {
    std::vector<int> arr = {5, 2, 3, 4, -8, -4, 5, 6};
    BTree<int>* begin = nullptr;
    for (int val: arr){
        BTree_insert(begin, val);
    }
    BTree_print(begin);
    std::cout << std::endl;
    BTree_insert(begin, 0);
    BTree_print(begin);
    std::cout << std::endl;
    BTree_clear(begin);
    return 0;
}

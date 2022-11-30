#include <iostream>
#include "BTree.cpp"
#include <vector>

int main() {
    std::vector<int> arr = {-12, 2, 0, 4, 8,-11, 10, -8, 5, 6};
    BTree<int>* begin = nullptr;
    for (int val: arr){
        BTree_insert(begin, val);
    }
    BTree_remove(begin, 0);
    BTree_insert(begin, 0);
    BTree<int>* begin2 = nullptr;
    begin2 = BTree_copy(begin);
    BTree_clear(begin);
    std::cout << "Second tree" << std::endl;
    BTree_print(begin2);
    BTree_clear(begin2);
    return 0;
}

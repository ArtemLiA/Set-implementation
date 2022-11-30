#include <iostream>
#include "Set.h"
#include <vector>

int main() {
    Set<int> my_set = {-2, 3, 4, 0, 8};
    my_set.insert({2, 5, 7, 9, 0, 0});
    my_set.output();
    return 0;
}

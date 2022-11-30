#include <iostream>
#include "Set.h"
#include "Pair.h"
#include <vector>

int main() {
    Set<int> my_set = {-2, 3, 4, 0, 8, -5, 3, 45};
    my_set.insert({2, 5, 7, 9, 0, 0, -12,});

    my_set.output();

    my_set.remove(0);
    my_set.remove(8);

    my_set.output();

    std::cout << "size:" << my_set.size() << std::endl;
    std::cout <<"5 is in set: "<< my_set.is_in_set(5) << std::endl;
    Set<int> my_set_2; //empty set
    std::cout << "my_set is empty:"<< my_set.is_empty() << std::endl;
    std::cout << "my_set_2 is empty: " << my_set_2.is_empty() << std::endl;

    std::cout << "\nTests for Pair class (user class)\n" << std::endl;

    Pair p1 = Pair(1, 2.8);
    Pair p2 = Pair(2, -1.7);
    Pair p3 = Pair(2, 0.0);
    Pair p4 = Pair(-2, 12.3);
    Pair p5 = Pair(-4, 23.5);
    Pair p6 = Pair(3, 3.1415);
    Pair p7 = Pair(2, -1.7);

    Set<Pair> some_set = Set<Pair>({Pair(1, -2.5), Pair(-8, 2.718)});

    some_set.insert(p1);
    some_set.insert(p2);
    some_set.insert(p3);
    some_set.insert(p4);
    some_set.insert(p5);
    some_set.insert(p6);
    some_set.insert(p7);

    some_set.output();

    some_set.remove(p2);
    some_set.remove(p3); //p2.first == 2 and p2.second == 2

    some_set.output();

    std::cout << "size:" << some_set.size() << std::endl;
    std::cout << "p4 is in set:" << some_set.is_in_set(p4) << std::endl;
    std::cout << "some_set is empty:" << some_set.is_empty() << std::endl;

    return 0;
}

//Liakhov Artem

#ifndef SET_PROJECT_PAIR_H
#define SET_PROJECT_PAIR_H
#include <iostream>


class Pair {
    friend std::ostream& operator<<(std::ostream& os, const Pair& p);
    friend bool operator==(const Pair& left, const Pair& right);
    friend bool operator != (const Pair& left, const Pair& right);
    friend bool operator > (const Pair& left, const Pair& right);
    friend bool operator < (const Pair& left, const Pair& right);
private:
    int first;
    double second;
public:
    explicit Pair(int _first = 0, double _second = 0.0)
    Pair& operator=(const Pair& other);
};




#endif //SET_PROJECT_PAIR_H

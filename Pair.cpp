//
// Created by Liakhov Artem
//
#ifndef SET_PROJECT_PAIR_CPP
#define SET_PROJECT_PAIR_CPP
#include "Pair.h"

Pair::Pair(int _first, double _second):first(_first), second(_second){
};

std::ostream& operator<<(std::ostream& os, const Pair& p){
    os << p.first << ';' << p.second;
    return os;
}

bool operator == (const Pair& left, const Pair& right){
    return left.first == right.first && left.second == right.second;
}

bool operator != (const Pair& left, const Pair& right){
    return left.first != right.first || left.second != right.second;
}

bool operator > (const Pair& left, const Pair& right){
    if (left.first > right.first){
        return true;
    }
    if (left.first < right.first){
        return false;
    }
    //Case left.first == right.first
    return left.second > right.second;
}

bool operator < (const Pair& left, const Pair& right){
    if (left.first < right.first){
        return true;
    }
    if (left.first > right.first){
        return false;
    }
    return left.second < right.second;
}

bool operator <= (const Pair& left, const Pair& right){
    return left < right || left == right;
}

bool operator >= (const Pair& left, const Pair& right){
    return left > right || left == right;
}




#endif //SET_PROJECT_PAIR_CPP
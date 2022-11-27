//
// Created by lyaho on 27.11.2022.
//

//Реализуем множество на основе двусвязного списка.
#ifndef SET_PROJECT_SET_H
#define SET_PROJECT_SET_H
#include "List.h"

template<class T>
class Set{
private:
    list<T>* begin;
    unsigned int size;
public:
    bool is_empty(){
        if (begin == nullptr){return true;}
    }
};


#endif //SET_PROJECT_SET_H

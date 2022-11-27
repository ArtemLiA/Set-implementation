//
// Created by lyaho on 27.11.2022.
//

#ifndef SET_PROJECT_LIST_H
#define SET_PROJECT_LIST_H

template<class T>
struct list{
private:
    T value;
    list* prev;
    list* next;
public:
    explicit list(T def = T(), list* _prev = nullptr, list* _next = nullptr):
            T(def), prev(_prev), next(_next){};
    void set_next(list* _next){next = _next;}
    void set_prev(list* _prev){prev = _prev;}
    void set_value(T def = T()){value = def;}
    T get_value() {return value;}
    list* get_next(){return next;}
    list* get_prev(){return prev;}
};

template<class T>
bool is_in_list(list<T>* begin, T val = T()){
    if (begin == nullptr){return false;}
    if (begin->get_value() == val){return true;}
    return is_in_list(begin->get_next(), val);
}

#endif //SET_PROJECT_LIST_H

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>
#include <cassert>
#include <iostream>

using namespace std;

class Stack{

    int *a;

    int n; //Capacidad
    int s; //Tamaño

public:
    
    Stack(int);
    ~Stack();

    void push(int);
    void pop();
    int pick();

    int capacity () const { return n;}
    int size() const {return s;}

    bool full() {return n == s;}
    bool empty() {return s == 0;}

    //Solo es para testear, ver que hay en la pila

    void print();

};



#endif
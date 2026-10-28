#ifndef dstack_hpp
#define dstack_hpp

#include <cassert>
#include <iostream>

using namespace std;

class Dstack{

    class node {

        char dat ;
        node *nxt;

    public:
        
        node(char);

        node *next() const { return nxt;} //Getter que devuelve la direccion de un nodo     
        void next (node *p) { nxt = p;} // Setter que guarda la direccion en el nodo        
        char data() const {return dat;} //Getter que devuevle la info del nodo               
        
    };

    
    node *start;

    int n; //Capacidad
    int s; //Tamaño

public:
    
    Dstack(int);
    ~Dstack();

    void push(char);
    void pop();
    char pick();

    int capacity () const { return n;}
    int size() const {return s;}

    bool full() {return n == s;}
    bool empty() {return s == 0;}

    void print();

};

#endif
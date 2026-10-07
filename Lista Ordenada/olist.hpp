#include <iostream>
#include <cassert>


#ifndef olist_hpp
#define olist_hpp

using namespace std;

class olist{

    class node {

        int dat ;
        node *nxt;

    public:
        
        node(int);

        node *next() const { return nxt;} //Getter que devuelve la direccion de un nodo     //  Getter para el apuntador
        void next (node *p) { nxt = p;} // Setter que guarda la direccion en el nodo        //  Setter para el apuntador
        int data() const {return dat;} //Getter que devuevle la info del nodo               //  Getter para el dato
        
    };


    node *start;

    int n; //Capacidad
    int s; //Tamaño

public:

    olist(int);
    ~olist();
    
    int capacity () const { return n;}
    int size() const {return s;}

    bool full() {return n == s;}
    bool empty() {return s == 0;}

    void ins(int);
    void print();
};

#endif
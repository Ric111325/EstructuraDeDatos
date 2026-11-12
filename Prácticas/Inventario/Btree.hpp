#ifndef Btree_hpp
#define Btree_hpp

#include <iostream>
#include <cassert>

using namespace std;

class btree{

    //Definicion de los nodos
    class node{

        int _data;
        node *lft;
        node *rgt;
    
    public:

        node (int);

        // Getters
        int getData() const {return _data;}
        node *getLeft() const {return lft;}
        node *getRight() const {return rgt;}

        // Setters
        void setLeft(node *p) {lft = p;}
        void setRight(node *p) {rgt = p;}
    };

    void traversal(node *);
    node *start; // Apuntador del inicio

    int n; // Capacidad
    int s; // Tamaño
public:

    btree(int);
    ~btree();

    void ins(int);
    void print(){ traversal(start); }

    bool full() const {return n == s;}
    bool empty() const {return s == 0;} 

    int capacity() const {return n;}
    int size() const {return s;}

};

#endif 
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
    void traversalRev(node *);
    node *start; // Apuntador del inicio

    int n; // Capacidad
    int s; // Tamaño

    void preorder(node *);
    void inorder(node *);
    void postorder(node *);

    void del(node *);
public:

    btree(int);
    ~btree();

    void ins(int);
    void print(){ traversal(start); }
    void printRev(){ traversalRev(start); } // Imprime en reversa

    void print3(){ //imprime un traversal de cada tipo
        
        cout << "Preorder:   ";
        preorder(start);

        cout << "\nInorder:   ";
        inorder(start);

        cout << "\nPostorder:   ";
        postorder(start);
    }
    bool full() const {return n == s;}
    bool empty() const {return s == 0;} 

    int capacity() const {return n;}
    int size() const {return s;}

};

#endif 
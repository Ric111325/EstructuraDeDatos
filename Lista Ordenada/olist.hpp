#include <iostream>
#include <cassert>


#ifndef olist_hpp
#define olist_hpp

using namespace std;

class olist{

public:
    class node {

        int dat ;
        node *nxt;

    public:
        
        node(int);

        node *next() const { return nxt;} //Getter que devuelve la direccion de un nodo     //  Getter para el apuntador
        void next (node *p) { nxt = p;} // Setter que guarda la direccion en el nodo        //  Setter para el apuntador
        int data() const {return dat;} //Getter que devuevle la info del nodo               //  Getter para el dato
        
    };

private:

    node *start;

    int n; //Capacidad
    int s; //Tamaño

public:

    olist(int);
    ~olist();
    
    void ins(int);

    bool membresia(int); // Consulta por membresia, devuelve true o false si el dato esta o no en la lista
    node *referencia(int); // Consulta por referencia, devuelve la direccion del nodo
    int copia(int); // Consulta por copia, devuelve el dato del nodo
    bool convento(int, int &); // Consulta por membresia mas copia, devuelve true o false si el dato esta o no en la lista y si esta devuelve el dato del nodo    


    int capacity () const { return n;}
    int size() const {return s;}

    bool full() {return n == s;}
    bool empty() {return s == 0;}
    
    void print();
};

#endif
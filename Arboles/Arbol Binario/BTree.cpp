#include "Btree.hpp"

btree::node::node(int x){

    _data = x;
    lft = nullptr;
    rgt = nullptr;

}

btree::btree(int c){

    n = c;
    s = 0;

    start = nullptr;

}

btree::~btree(){
    
    del(start);
}

void btree::ins(int x){ // Inserta de manera ordenada cada dato nuevo, sin embargo esto no asegura que el arbol este balanceado 

    assert(!full());
    
    if (empty()){
        
        start = new node(x);
        
    }
    else{
    
        node *p = start , *q = nullptr;
   
        while (p != nullptr){
            q = p;
            p = (x < p-> getData()) ? p -> getLeft() : p -> getRight();
        }
    
        if (x < q -> getData()) q -> setLeft(new node(x));
        else q -> setRight(new node(x));
    }

    s++;
} //queda pendiente hacer que los datos no puedan repetirse, es decir, que no se pueda insertar un dato que ya exista en el arbol


void btree::traversal (node *p){ // Imprime todo los datos del arbol, recorre cada uno de los nodos de izquierda a derecha, primero imprime el nodo izquierdo, luego el nodo padre y finalmente el nodo derecho
    if ( p==nullptr) return;

    traversal(p -> getLeft());
    cout << p -> getData() << " ";
    traversal(p -> getRight());
}

void btree::traversalRev (node *p){ // Imprime todo los datos del arbol en reversa, recorre cada uno de los nodos de derecha a izquierda, primero imprime el nodo izquierdo, luego el nodo padre y finalmente el nodo derecho
    if ( p==nullptr) return;

    traversalRev(p -> getRight());
    cout << p -> getData() << " ";
    traversalRev(p -> getLeft());
}

void btree::preorder(node *p){

    if ( p==nullptr) return;

    
    cout << p -> getData() << " ";
    preorder(p -> getLeft());
    preorder(p -> getRight());

}

void btree::inorder(node *p){
    
    
    if ( p==nullptr) return;

    inorder(p -> getLeft());
    cout << p -> getData() << " ";
    inorder(p -> getRight());

}

void btree::postorder(node *p){
    
    if ( p==nullptr) return;

    postorder(p -> getLeft());
    postorder(p -> getRight());
    cout << p -> getData() << " ";
}

void btree::del(node *p){
    
    if ( p==nullptr) return;

    del(p -> getLeft());
    del(p -> getRight());
    cout << p -> getData() << " ";   

    delete p;
}
#include "olist.hpp"
#include <cassert>

olist::node::node(int x) {
    dat = x;
    nxt = nullptr;
}

olist::olist(int c) {
    n = c;
    s = 0;
    start = nullptr;
}

olist::~olist() {
    // Falta hacer el destructor, de este programa y de dstack
}

void olist::ins(int x) {
   
    assert(!full());

    node *p = start;
    node *q = nullptr;

    while (p != nullptr and p -> data() < x) {
       
        q = p;
        p = p -> next();
    }

    node *aux = new node(x);

    // Insercion por el frente
    if (p == start) {
        aux -> next(start);
        start = aux;
    }
    // Insercion por el final
    else if (p == nullptr) {
        q -> next(aux);
    }
    // Insercion por el medio
    else {
        q -> next(aux);
        aux -> next(p);
    }

    s++;
}

bool olist::membresia(int x) {
    node *p = start;

    while (p != nullptr and p -> data() < x) p = p -> next();

    return (p != nullptr and p -> data() == x);
}

olist::node *olist::referencia(int x) {
    node *p = start;

    while (p != nullptr and p -> data() < x) p = p -> next();

    return (p != nullptr and p -> data() == x) ? p : nullptr;
}

int olist::copia(int x) {
    node *p = start;

    while (p != nullptr and p -> data() < x) p = p -> next();

    return (p != nullptr and p -> data() == x) ? p -> data() : -1;
}

bool olist::convento(int x, int &c) {
    node *p = start;

    while (p != nullptr and p -> data() < x) p = p -> next();

    if (p != nullptr and p -> data() == x) {
       c = p -> data();
        return true;
    } 
    
    return false;
}

void olist::print() {
    node *p = start;

    cout << "[ ";

    while (p != nullptr) {
        cout << p -> data() << " ";
        p = p -> next();
    }
    cout << "]" << endl;
}


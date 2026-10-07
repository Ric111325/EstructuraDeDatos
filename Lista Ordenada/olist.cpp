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

    while (p != nullptr && p -> data() < x) {
       
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

void olist::print() {
    node *p = start;

    while (p != nullptr) {
        cout << p -> data() << " ";
        p = p -> next();
    }
}

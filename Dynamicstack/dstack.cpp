#include "dstack.hpp"

Dstack::node::node(int x){

    dat = x;
    nxt = nullptr;

}

Dstack::Dstack(int cap){

    n = cap;
    s = 0;

    start = nullptr;
}

Dstack::~Dstack(){

}

void Dstack::push(int x){

    assert (!full());

    node *p = new node (x);
    p -> next(start);
    start = p;
    
    s++;
}

void Dstack::pop(){

    assert (!empty());

    node *p = start;
    start = p -> next();
    delete p;
    
    s--;
}

int Dstack::pick(){
    
    assert(!empty());

    return start -> data();

}

void Dstack::print(){

    node *p = start;

    cout << "[ ";
    
    while (p){
        cout << p ->data() << " ";
        p = p -> next ();
    }
    
    cout << "]" << endl;   
}
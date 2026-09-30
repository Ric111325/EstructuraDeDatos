#include "stack.hpp"

Stack::Stack (int c){

    n = c;
    s = 0;

    a = new int[n];

}

Stack::~Stack(){

    delete [] a;
}

void Stack::push(int x){

    assert (!full());

    a[s] = x;
    s = s + 1;

    // Tambien puede ser:  a[s++] = x;

}

void Stack::pop(){
    
    assert(!empty());

    s--;
}

int Stack::pick(){

    assert(!empty());

    return a[s-1];

}

void Stack::print(){

    cout << "[ ";
    for (int i = 0; i < s; i++){
        cout << a[i] << " ";
    }
    cout << "]" << endl;
}

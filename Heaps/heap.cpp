#include "heap.hpp"

heap::heap(int c){

    n = c;
    s = 0;
    a = new int[n];
}

heap::~heap(){

    delete [] a;
}

void heap::ins(int x){

    assert(!full());

    a[s] = x;    
    int i = s++;

    while(i > 0 and a[i] > a[parent(i)]){

        swap(a[i], a[parent(i)]);
        i = parent(i);        
    }

}

void print(){

    cout << "[ ";

    for(int i = 0; i < s; i++) cout << a[i] << " ";
    cout <<"]" << endl;
}
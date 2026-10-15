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

void heap::ext(){

    assert(!empty());

    a[0] = a[--s];

    int i = 0;

    while(i < s){

        int l = left(i);
        int r = right(i);

        if(l < s and a[l] > a[i] and (r >= s or a[l] > a[r])){

            swap(a[i], a[l]);
            i = l;
        }
        else if(r < s and a[r] > a[i]){

            swap(a[i], a[r]);
            i = r;
        }
        else break;
    }
}
void print(){
    
    cout << "[ ";
    


    for(int i = 0; i <s; i++) cout << a[i] << " ";
    cout <<"]" << endl;
}
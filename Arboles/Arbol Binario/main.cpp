#include <iostream>

#include "Btree.hpp"

using namespace std;

int main(int argc, char const *argv[]){

    srand((unsigned) time(nullptr));
    
    int n = 10;

    btree b(n);
    while (!b.full()){
        int x =rand() % (10 * n) + 1;
        cout << x << endl;
        
        b.ins(x);
    }

    cout << endl;
    b.print3();
    cout << endl;

    return 0;
}




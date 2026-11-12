#include <iostream>
#include "Btree.hpp"

using namespace std;

int main(int argc, char const *argv[]){

    int n = 12;

    btree b(n);
    while (!b.full()){
        int x = rand() % (10 * n) + 1;
        
        b.ins(x);

        cout << x <<": ";
        b.print();
        cout << endl;
    }
    

    return 0;
}




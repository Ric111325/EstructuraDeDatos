#include <iostream>
#include "heap.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    
    srand((unsigned) time(nullptr));

    heap h(20);

    while(!h.full()){

        int x = rand() % 100;

        
    }
    

    return 0;
}

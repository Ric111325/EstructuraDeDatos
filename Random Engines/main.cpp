#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;


int main(int argc, const char * argv[]){
 
    mt19937 numero((int) time (nullptr));

    for (int i = 1; i <= 100; i++){
        
       int x = numero()%1000;

    cout << x << endl;
    
    }
    
    return 0;
}

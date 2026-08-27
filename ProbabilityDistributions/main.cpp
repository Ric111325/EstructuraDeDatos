#include <iostream>
#include <random>

using namespace std;


int main(int argc, const char * argv[]){
    
    
    mt19937 numero((int) time (nullptr));
    normal_distribution <float> dato(0,1);


    for (int i = 1; i <= 100; i++){
        
        float x = dato(numero);

        cout << x << endl;
    
    }
    
    return 0;
}

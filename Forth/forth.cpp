#include <iostream>

using namespace std;

int forth ( int i, int n){

    return (i + 1) % n;
}

int main(int argc, char const *argv[]){
    
    int n = 10; //Tamaño del arreglo
    int i = 0; //Posicion del arreglo ( Indice)
    
    for (int k = 0; k <= 100; k++)
    {
        cout << "i: "<< i << endl;
        i =forth(i,n);
    }
    

    return 0;
}

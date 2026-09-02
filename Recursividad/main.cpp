#include <iostream>

using namespace std;

long power (long x, int n){

    if (n == 0) return 1;
    else return x * power(x, n-1);
}



int main(int argc, char const *argv[]) {
    
    long x;

    int n; //Exponente


    cout << "Valor de X: ";
    cin >> x;

    cout << "Valor de N: ";   
    cin >> n;

    long resultado = power (x,n);
    cout<< "Resultado: " << resultado << endl;

    return 0;
 }
 
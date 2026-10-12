#include <iostream>
#include <iomanip>

using namespace std;

double Pi(int i, int n) {
    if (i == n) return 1.0;
    else return (2.0 * i - 1.0) + ((i * i) / Pi(i + 1, n));
}

int main(int argc, char const *argv[])
{
    int pasos;
    
    
    cout << "Ingresa la cantidad de pasos: ";
    cin >> pasos;

   
    for (int i = 1; i <= pasos; i++){
     
        double f1 = Pi(1, i);
        double pi = 4.0 / f1;
           
        cout << fixed;
        cout <<"Paso " <<  i << ": " << setprecision(20) << pi << endl;
    }

    return 0;
}
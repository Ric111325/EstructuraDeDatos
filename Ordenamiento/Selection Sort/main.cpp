#include <iostream>

using namespace std;

void init(int *a, int n){

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % (10 * n) + 1;

    }
}

void print(int *a, int n){
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

int contador;

void swap (int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int max(int *a, int n){ //Busqueda del maximo o del minimo
    
    int k = 0;

    for (int  i = 1; i < n; i++){
        contador++;

        if (a[i] > a[k]) k = i; // Si se quiere buscar el minimo, se cambia de simbolo a menor que "<"
    }

    return k;
}

void selection (int *a, int n){ //Algoritmo de seleccion

    while (n > 1){

        int k = max(a, n);
        
        swap(a[k], a[n-1]);
    
        n--;
    }
}


int main(int argc, char const *argv[]){

    srand ((unsigned) time(nullptr));

    int n = 10;
    int a[n];

    init(a,n);
    print(a,n);

    contador = 0;

   /*int k = max(a,n);
    cout << "El mayor dato esta en la posicion: " << k << endl;
    cout << "El dato es: " << a[k] << endl;
    cout << "El esfuerzo fue: " << contador << endl;
    */

    selection (a,n);
    print(a,n);
    
    cout << "El esfuerzo fue: " << contador << endl;
    

    return 0;
}

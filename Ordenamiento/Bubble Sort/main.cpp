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

void bubble(int *a, int n){
    
    int m = n;
    bool flag;

    while (n > 0){

        flag = false;

        for (int i = 0; i < n - 1; i++){
            
            if(a[i]>a[i + 1]) {

                swap(a[i], a[i + 1]);
                flag = true;
            }  
        }
        print(a,m);
        
        if (!flag) break;
        
        n--;  
    }
}

int main(int argc, char const *argv[]){

    srand ((unsigned) time(nullptr));

    int n = 20;
    int *a = new int [n];

    init(a,n);
    cout << "Arreglo inicial:\n";
    print(a,n);
    cout << endl;

    cout << "Ordenamiento:\n";
    bubble(a,n);
    cout << endl;
    
    cout << "Resultado Final:\n";
    print(a,n);


    delete []a; 

    return 0;
}

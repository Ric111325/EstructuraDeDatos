// Este algoritmo no es como tal un algoritmo de ordenamiento 
// lo que hace es mezclar o unir dos listas que ya estan ordenadas, uniendolas en una lista nueva tambien ordenada

#include <iostream>

using namespace std;

void init(int *a, int n){ //Inicializa un arreglo con numeros aleatorios

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % (10 * n) + 1;

    }
}

void print(int *a, int n){ //Imprime un arreglo
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

void swap (int &a, int &b){ //Funcion para intercambiar dos valores (Se usa en burbuja)
    int c = a;
    a = b;
    b = c;
}

void bubble(int *a, int n){ //Algoritmo de ordenamiento burbuja
    
    while (n > 0){

        for (int i = 0; i < n - 1; i++)
            if(a[i]>a[i + 1]) swap(a[i], a[i + 1]);       
    
        n--;
    }
}

int *merge (int *a, int n, int *b, int m){ //Mezcla dos arreglos ordenados en uno nuevo tambien ordenado

    int *c = new int[n +m];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n and j < m){

        if (a[i] < b[j])
             c[k++] = a[i++]; 
        else
            c[k++] = b[j++];
            
        // Version hipermegacorta : while (i < n and j < m) c[k++] = (a[i] < b[j]) ? a[i++] : b[j++];
    }

    while (i < n)
        c[k++] = a[i++];

    while (j < m)
        c[k++] = b[j++];

    return c;
}

int main(int argc, char const *argv[]){

    srand ((unsigned) time(nullptr));

    int min = 4;
    int max = 10;

    int n = rand() % (max -( min - 1)) + min;
    int m = rand() % (max -( min - 1)) + min;

    int *a = new int[n];
    int *b = new int[m];

    init(a, n);
    init(b, m);

    cout << "Arreglo a: "; print(a, n);
    cout << "Arreglo b: "; print(b, m);

    bubble(a, n);
    bubble(b, m);

    cout << "\nArreglos ordenados\n\n";
    cout << "Arreglo a : "; print(a, n);
    cout << "Arreglo b : "; print(b, m);

    int *c = merge(a, n, b, m);

    cout << "\nResultado de la mezcla:\n\n";
    print(c, n + m);

    delete[] a;
    delete[] b;
    delete[] c;
    return 0;
}

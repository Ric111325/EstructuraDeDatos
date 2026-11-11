// Algoritmo de ordenamiento que divide el arreglo en dos partes de manera recursiva hasta generar arreglos de tamaño 1
// ordena cada una de ellas y luego las mezcla en un arreglo ordenado

#include <iostream>
#include <ctime>

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

void MergeSort(int *a, int n){
    
    if (n > 1){ // 1 If n > 1 then

        int k = n / 2; // 2 k <- [n/2]

        // 3 Lambda1 <- a1, a2 ... ak
        int *b = new int[k];
        for (int i = 0; i < k; i++){
            b[i] = a[i];
        }
        
        // 4 Lambda2 <- ak+1, ak+2 ... an
        int *c = new int[n - k]; 
        for (int i = 0; i < n - k; i++){
            c[i] = a[k + i];
        }

        MergeSort(b, k); // 5 mergesort(Lambda1)
        MergeSort(c, n - k); // 6 mergesort(Lambda2)

        // 7 Lambda <- merge(Lambda1, Lambda2)
        int *d = merge(b, k, c, n - k);
        for (int i = 0; i < n; i++) {
            a[i] = d[i];
        }

        delete[] b;
        delete[] c;
        delete[] d;
    }// end if
}

int main(int argc, char const *argv[]){

    int n; 
    cout << "Ingresa el tamaño del arreglo: " << endl;
    cin >> n;

    int *a = new int[n];
    init(a, n);
    
    cout << "Arreglo: ";
    print(a, n);
    
    MergeSort(a,n);
    cout << "Arreglo ordenado:" << endl ;
    print(a,n);

    delete[] a;
    return 0;
}

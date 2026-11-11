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

void bubble(int *a, int n){
    
    int m = n;
    bool flag;

    while (n > 0){

        for (int i = 0; i < n - 1; i++){
            
            if(a[i]>a[i + 1]) {

                swap(a[i], a[i + 1]);
            }  
        }
        
        n--;  
    }
}

void shuffle(int *a, int n){ 

    for (int k = n -1; k > 0 ; k--){
    
        swap(a[k], a[rand() % k]);        
    }
}

int main(int argc, char const *argv[]){

    srand ((unsigned) time(nullptr));

    int n = 10;

    int *a = new int[n];

    init(a,n);

    cout << "Arreglo inicial" << endl;
    print (a,n);

    bubble(a,n);

    cout <<"\nArreglo Ordenado" << endl;
    print (a,n);

    for (int i = 0; i < 10; i++){
        shuffle (a,n);

        cout <<"\nArreglo Desordenado" << endl;
        print (a,n);
    
    }
    
    return 0;
}

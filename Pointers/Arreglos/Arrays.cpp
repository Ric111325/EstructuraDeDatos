#include <iostream>

using namespace std;

void print (int a[],int n){

    //Manera dinamica

    int *p = &a[0];

    for (int i = 0; i < n; i++){
        cout << *(p+i)<< " ";
        // cout << p[i] << " "; ALTERNATIVA
    }
    
    /*Forma chafa
    for (int i = 0; i < n; i++){
    cout << a[i] << " ";
    }
    */
    cout << endl;
    

}

int main(int argc, char const *argv[])
{
    int a[10] = { 3, 4, 2, 8, 7, 6, 10, -2, 5, -4};

    print (a,10);

    return 0;
}

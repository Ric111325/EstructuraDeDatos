#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 21; //Declara una variable entera que se llama a
    int *p; // Declara un apuntador que se llama p

    p = &a; //Se guarda la direccion de a en p

    cout << p << endl; //Direccion de memoria de A
    cout << &a << endl; // Memoria de A

    cout << a << endl;  //Valor de a
    cout <<*p << endl; //Indireccion muestra a

    (*p)++;

    cout << a << endl;

    p = nullptr;

    cout << p << endl;

    return 0;
}

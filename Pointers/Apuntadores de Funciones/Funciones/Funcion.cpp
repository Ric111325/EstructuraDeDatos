#include <iostream>

using namespace std;

int suma(int a, int b){ return a+b; }


int main(int argc, char const *argv[])
{
    int (*funcionsuma)(int, int);

    funcionsuma = suma; 
    
    int x = 23;
    int y = 6;

    cout << funcionsuma(x,y) << endl;



    return 0;
}

#include <iostream>

using namespace std;

float operacion(float (*op)(float,float), float x ,float y){
    
    return op (x, y);
}

float suma(float a, float b){ return a+b; }
float resta(float a, float b){ return a-b; }
float mult(float a, float b){ return a*b; }
float div(float a, float b){ return a/b; }


int main(int argc, char const *argv[])
{
    
    float x = 2.0;
    float y = 3.0;

    cout << operacion(suma,x,y) << endl;
    cout << operacion(resta,x,y) << endl;
    cout << operacion(mult,x,y) << endl;
    cout << operacion(div,x,y) << endl;


    return 0;
}

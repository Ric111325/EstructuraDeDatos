#include <iostream>
#include <cstdlib>

using namespace std;


long int contador = 0;

int mcd(int a, int b){

    contador++;

    if (b ==0) return a;
    else return mcd(b, a %b);

}



int main(int argc, char const *argv[])
{
    
    srand((unsigned) time(nullptr));

    int  x = rand() %1000 + 1; 
    int y = rand() %1000 + 1;

    

    /*cout << "X: "; 
    cin >> x; 
    
    cout << "\nY: ";
    cin >> y;*/

    int m = x >= y ? mcd (x,y) : mcd (y, x);
    
    cout << m << endl;

    return 0;
}

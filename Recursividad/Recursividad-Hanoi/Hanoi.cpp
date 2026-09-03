#include <iostream>

using namespace std;

long int c;

void hanoi(int n, char origen, char destino, char auxiliar){

    c++;

    if ( n == 1) cout <<"";// origen << " -> " << destino << endl;
    else {

        hanoi(n-1, origen, auxiliar, destino);
        //cout << origen << "-> " << destino << endl;
        hanoi(n-1, auxiliar, destino, origen);
    }

}

int main(int argc, char const *argv[])
{

    for (int i = 3; i < 11; i++)
    {
        c = 0;

        hanoi( i, 'A', 'B', 'C');

        cout << c << endl;
    }
    


   
    return 0;
}

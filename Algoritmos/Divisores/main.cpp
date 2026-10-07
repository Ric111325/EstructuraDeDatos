#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Ingresa n: ";
    cin >> n;

    int rc = sqrt(n);

    for (int i = 0; i <=rc ; i++){

        if (n % i == 0){
    
            cout << i;

        }
        
    }
    
    return 0;
}

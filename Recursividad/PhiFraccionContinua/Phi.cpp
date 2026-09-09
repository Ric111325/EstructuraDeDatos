#include <iostream>

using namespace std;

double phi (int n)  {

    if (n==0) return 1;
    return 1 + 1.0 /phi(n-1);
}


int main(int argc, const char *argv[]){
    
    for (int n = 0; n <=20; n++)
    {
        cout << n << ": " << phi(n) << endl;
    }
    

    
    return 0;
}

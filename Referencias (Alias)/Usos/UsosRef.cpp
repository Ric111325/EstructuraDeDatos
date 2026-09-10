#include <iostream>

using namespace std;

void swap (int &a, int &b){

    int c = a;
    a = b;
    b = c;

    a *=2;
    b ++;
}

int main(int argc, char const *argv[]){

    int m, n;

    cin >> m >> n;
    
    cout <<"m: "<< m << endl <<"n: "<< n << endl;
    
    swap(m,n);
    
    cout <<"m: "<< m << endl <<"n: "<< n << endl;
   

    return 0;
}

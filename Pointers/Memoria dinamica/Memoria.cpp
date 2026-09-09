#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *p = nullptr;

    p = new int;

    *p = 21;

    cout << *p << endl ;

    delete p;
    p = nullptr;
    
    return 0;
}

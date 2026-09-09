#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    int *p = &a;

    cout << sizeof(int) << endl;

    cout << &a << endl;
    
    cout << p++ << endl;
    cout << p++ << endl;
    cout << p++ << endl;
    cout << p++ << endl;
    
    cout << p << endl;
    cout << (&a) + 4 << endl;

    return 0;
}

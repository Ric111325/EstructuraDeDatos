#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a =10;
    int &b = a;

    cout << a << endl;
    cout << b << endl;

    b *= 2;

    cout << a << endl;
    cout << b << endl;

    a -= 7;

    cout << a << endl;
    cout << b << endl;

    return 0;
}

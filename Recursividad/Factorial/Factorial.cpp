#include <iostream>

using namespace std;


long factorial (long x){

    if (x == 0) return 1;
    else return x * factorial (x -1);

}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

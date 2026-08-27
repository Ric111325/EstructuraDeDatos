#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, const char * argv[])
{
   //Intervalo
   /*int min = 70;
   int max = 160;*/

   int n = 100;

    srand((int) time (nullptr));

    cout << "Rand max: " << RAND_MAX << endl;

    for (int i = 1; i <= 100; i++){
        
        float x =  (float) (rand() % n) /n;

        cout << x << endl;
    
    }
    
    return 0;
}

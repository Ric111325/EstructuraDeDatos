#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[]) {
    
    default_random_engine number((unsigned)time(nullptr));
    uniform_int_distribution<int> interval(1,6);

    int dado1, dado2, suma;
    int maxsum = 0;
    int mayordado1 = 0, mayordado2 = 0;

    for (int lanzamiento = 1; lanzamiento <= 3; lanzamiento++) {
        
        dado1 = interval(number);
        dado2 = interval(number);
        suma = dado1 + dado2;

        cout << "Lanzamiento " << lanzamiento << ": " << dado1 << ", " << dado2 << endl;

        if (suma > maxsum) {
            maxsum = suma;
            mayordado1 = dado1;
            mayordado2 = dado2;
        }
    }

    cout << "Mejor lanzamiento: " << mayordado1 << ", " << mayordado2 << endl;

    return 0;
}
